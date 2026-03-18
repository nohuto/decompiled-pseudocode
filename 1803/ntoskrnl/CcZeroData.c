/*
 * XREFs of CcZeroData @ 0x140098570
 * Callers:
 *     FsRtlCopyWrite @ 0x140714110 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140714B20 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcGetPartitionFromFileObject @ 0x1400988C0 (CcGetPartitionFromFileObject.c)
 *     CcZeroDataInCache @ 0x1400988F4 (CcZeroDataInCache.c)
 *     CcZeroDataOnDisk @ 0x140098FE0 (CcZeroDataOnDisk.c)
 *     CcFlushCachePriv @ 0x1400DEE80 (CcFlushCachePriv.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDereferencePartition @ 0x1400E07B8 (CcDereferencePartition.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 */

BOOLEAN __stdcall CcZeroData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER StartOffset,
        PLARGE_INTEGER EndOffset,
        BOOLEAN Wait)
{
  LONGLONG QuadPart; // rcx
  unsigned int v8; // edi
  char v9; // r14
  __int64 v10; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v12; // r9
  unsigned int SectorSize; // r13d
  NTSTATUS v14; // ebx
  unsigned int v15; // r15d
  unsigned __int64 v17; // [rsp+38h] [rbp-80h] BYREF
  __int64 PartitionFromFileObject; // [rsp+40h] [rbp-78h]
  NTSTATUS v19; // [rsp+48h] [rbp-70h]
  int v20; // [rsp+4Ch] [rbp-6Ch]
  NTSTATUS Status[4]; // [rsp+50h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF
  BOOLEAN v23; // [rsp+C0h] [rbp+8h]
  LONGLONG v24; // [rsp+C8h] [rbp+10h] BYREF
  PLARGE_INTEGER v25; // [rsp+D0h] [rbp+18h]
  BOOLEAN v26; // [rsp+D8h] [rbp+20h]

  v26 = Wait;
  v25 = EndOffset;
  QuadPart = StartOffset->QuadPart;
  v24 = StartOffset->QuadPart;
  v8 = 0;
  v23 = 0;
  if ( (FileObject->Flags & 0x10) != 0 || (v9 = 0, !FileObject->PrivateCacheMap) )
    v9 = 1;
  v10 = EndOffset->QuadPart - QuadPart;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  PartitionFromFileObject = CcGetPartitionFromFileObject(FileObject);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(PartitionFromFileObject + 904)) <= 1 )
    __fastfail(0xEu);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( !v9
    && v10 <= 0x200000
    && (*(_QWORD *)(**(_QWORD **)(PartitionFromFileObject + 8) + 7040LL) >= 0x800uLL || v10 <= 0x2000)
    || Wait )
  {
    RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
    SectorSize = RelatedDeviceObject->SectorSize;
    if ( RelatedDeviceObject->SectorSize )
      v8 = IoGetRelatedDeviceObject(FileObject)->SectorSize - 1;
    if ( v9 )
    {
      if ( (v8 & (unsigned int)v24) != 0 )
      {
        HIDWORD(v24) = ((unsigned __int64)v8 + v24) >> 32;
        LODWORD(v24) = (v8 + v24) & ~v8;
        v15 = v24 - StartOffset->LowPart;
        LOBYTE(v12) = v26;
        if ( !(unsigned __int8)CcZeroDataInCache(FileObject, StartOffset, v15, v12) )
          goto LABEL_36;
        CcFlushCachePriv(FileObject->SectionObjectPointer, (_DWORD)StartOffset, v15, 0, 0, (__int64)Status);
        if ( Status[0] < 0 )
          RtlRaiseStatus(Status[0]);
      }
LABEL_15:
      if ( v24 < v25->QuadPart )
      {
        v17 = (v8 + v25->QuadPart) & (~v8 | 0xFFFFFFFF00000000uLL);
        CcZeroDataOnDisk(FileObject, &v24, &v17, SectorSize);
      }
      v23 = 1;
      goto LABEL_36;
    }
    if ( *(_QWORD *)(**(_QWORD **)(PartitionFromFileObject + 8) + 7040LL) < 0x800uLL )
    {
      if ( v10 > 0x2000 && (v8 & (unsigned int)v24) != 0 )
      {
        v20 = (v24 + (unsigned __int64)v8) >> 32;
        v14 = (v24 + v8) & ~v8;
        v19 = v14;
LABEL_23:
        LODWORD(v10) = v14 - v24;
        goto LABEL_12;
      }
      if ( v10 > 0x2000 )
      {
        LODWORD(v10) = 0;
LABEL_12:
        if ( (_DWORD)v10 )
        {
          LOBYTE(v12) = Wait;
          if ( !(unsigned __int8)CcZeroDataInCache(FileObject, &v24, (unsigned int)v10, v12) )
            goto LABEL_36;
        }
        v24 += (unsigned int)v10;
        goto LABEL_15;
      }
    }
    if ( v10 <= 0x200000 )
      goto LABEL_12;
    Status[1] = (v24 + 0x200000 + (unsigned __int64)v8) >> 32;
    v14 = (v24 + 0x200000 + v8) & ~v8;
    Status[0] = v14;
    goto LABEL_23;
  }
LABEL_36:
  CcDereferencePartition(PartitionFromFileObject);
  return v23;
}
