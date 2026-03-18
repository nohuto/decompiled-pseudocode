/*
 * XREFs of CcZeroData @ 0x14011E9B0
 * Callers:
 *     FsRtlCopyWrite @ 0x1406AF960 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1406B0380 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     CcFlushCachePriv @ 0x140062D40 (CcFlushCachePriv.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcDereferencePartition @ 0x1400670D4 (CcDereferencePartition.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     CcGetPartitionFromFileObject @ 0x14011ED14 (CcGetPartitionFromFileObject.c)
 *     CcZeroDataInCache @ 0x14011ED48 (CcZeroDataInCache.c)
 *     CcZeroDataOnDisk @ 0x14011EF10 (CcZeroDataOnDisk.c)
 */

BOOLEAN __stdcall CcZeroData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER StartOffset,
        PLARGE_INTEGER EndOffset,
        BOOLEAN Wait)
{
  LONGLONG QuadPart; // rax
  bool v8; // r15
  __int64 v9; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v11; // r9
  unsigned int SectorSize; // r13d
  unsigned int v13; // edi
  LONGLONG v14; // rax
  unsigned int v15; // r14d
  _DWORD v17[2]; // [rsp+38h] [rbp-80h] BYREF
  int v18; // [rsp+40h] [rbp-78h]
  int v19; // [rsp+44h] [rbp-74h]
  NTSTATUS Status[4]; // [rsp+48h] [rbp-70h] BYREF
  __int64 PartitionFromFileObject; // [rsp+58h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF
  BOOLEAN v23; // [rsp+C0h] [rbp+8h]
  LONGLONG v24; // [rsp+C8h] [rbp+10h] BYREF
  PLARGE_INTEGER v25; // [rsp+D0h] [rbp+18h]
  BOOLEAN v26; // [rsp+D8h] [rbp+20h]

  v26 = Wait;
  v25 = EndOffset;
  QuadPart = StartOffset->QuadPart;
  v24 = StartOffset->QuadPart;
  v23 = 0;
  v8 = (FileObject->Flags & 0x10) != 0 || !FileObject->PrivateCacheMap;
  v9 = EndOffset->QuadPart - QuadPart;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  PartitionFromFileObject = CcGetPartitionFromFileObject(FileObject);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(PartitionFromFileObject + 904)) <= 1 )
    __fastfail(0xEu);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( !v8
    && v9 <= 0x200000
    && (*(_QWORD *)(**(_QWORD **)(PartitionFromFileObject + 8) + 5952LL) >= 0x800uLL || v9 <= 0x2000)
    || Wait )
  {
    RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
    SectorSize = RelatedDeviceObject->SectorSize;
    if ( RelatedDeviceObject->SectorSize )
      v13 = IoGetRelatedDeviceObject(FileObject)->SectorSize - 1;
    else
      v13 = 0;
    if ( v8 )
    {
      if ( (v13 & (unsigned int)v24) != 0 )
      {
        v24 += v13;
        LODWORD(v24) = ~v13 & v24;
        v15 = v24 - StartOffset->LowPart;
        LOBYTE(v11) = v26;
        if ( !(unsigned __int8)CcZeroDataInCache(FileObject, StartOffset, v15, v11) )
          goto LABEL_36;
        CcFlushCachePriv((__int64)FileObject->SectionObjectPointer, (__int64 *)StartOffset, v15, 0LL, 0, Status);
        if ( Status[0] < 0 )
          RtlRaiseStatus(Status[0]);
      }
LABEL_17:
      if ( v24 < v25->QuadPart )
      {
        v14 = v13 + v25->QuadPart;
        v17[1] = HIDWORD(v14);
        v17[0] = ~v13 & v14;
        CcZeroDataOnDisk(FileObject, &v24, v17, SectorSize);
      }
      v23 = 1;
      goto LABEL_36;
    }
    if ( *(_QWORD *)(**(_QWORD **)(PartitionFromFileObject + 8) + 5952LL) >= 0x800uLL )
      goto LABEL_12;
    if ( v9 > 0x2000 && ((unsigned int)v24 & v13) != 0 )
    {
      v19 = (v24 + (unsigned __int64)v13) >> 32;
      v18 = ~v13 & (v24 + v13);
      LODWORD(v9) = v18 - v24;
    }
    else
    {
      if ( v9 <= 0x2000 )
      {
LABEL_12:
        if ( v9 > 0x200000 )
        {
          *(_QWORD *)Status = v13 + v24 + 0x200000;
          Status[0] = ~v13 & (v13 + v24 + 0x200000);
          LODWORD(v9) = Status[0] - v24;
        }
        goto LABEL_14;
      }
      LODWORD(v9) = 0;
    }
LABEL_14:
    if ( (_DWORD)v9 )
    {
      LOBYTE(v11) = v26;
      if ( !(unsigned __int8)CcZeroDataInCache(FileObject, &v24, (unsigned int)v9, v11) )
        goto LABEL_36;
    }
    v24 += (unsigned int)v9;
    goto LABEL_17;
  }
LABEL_36:
  CcDereferencePartition(PartitionFromFileObject);
  return v23;
}
