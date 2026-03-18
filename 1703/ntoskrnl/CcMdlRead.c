/*
 * XREFs of CcMdlRead @ 0x140549510
 * Callers:
 *     FsRtlMdlReadDev @ 0x140684D30 (FsRtlMdlReadDev.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14002933C (CcUpdateSharedCacheMapFlag.c)
 *     CcScheduleReadAheadEx @ 0x14004D5C0 (CcScheduleReadAheadEx.c)
 *     CcFreeVirtualAddress @ 0x14009D970 (CcFreeVirtualAddress.c)
 *     CcFetchDataForRead @ 0x14009D9B0 (CcFetchDataForRead.c)
 *     CcGetVirtualAddress @ 0x14009DE10 (CcGetVirtualAddress.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1400B3C30 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     CcUpdateReadHistory @ 0x140117884 (CcUpdateReadHistory.c)
 */

void __stdcall CcMdlRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus)
{
  _DWORD *SharedCacheMap; // r13
  _DWORD *PrivateCacheMap; // r12
  LONGLONG QuadPart; // rbx
  ULONG v11; // esi
  ULONG v12; // r12d
  struct _MDL *Mdl; // rax
  PMDL v14; // rax
  struct _MDL *Next; // rcx
  unsigned int v16; // [rsp+44h] [rbp-94h]
  int v17; // [rsp+48h] [rbp-90h] BYREF
  _DWORD v18[3]; // [rsp+4Ch] [rbp-8Ch] BYREF
  _QWORD *v19; // [rsp+58h] [rbp-80h] BYREF
  struct _MDL *v20; // [rsp+60h] [rbp-78h]
  _QWORD v21[2]; // [rsp+68h] [rbp-70h] BYREF
  PVOID VirtualAddress; // [rsp+78h] [rbp-60h]
  PMDL i; // [rsp+80h] [rbp-58h]
  _DWORD *v24; // [rsp+88h] [rbp-50h]
  _DWORD *v25; // [rsp+90h] [rbp-48h]

  v20 = 0LL;
  v18[1] = Length;
  v16 = 0;
  v19 = 0LL;
  v17 = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v21[1] = SharedCacheMap;
  PrivateCacheMap = FileObject->PrivateCacheMap;
  v24 = PrivateCacheMap;
  v25 = PrivateCacheMap;
  if ( (*PrivateCacheMap & 0x20000) != 0 )
    CcScheduleReadAheadEx(FileObject, FileOffset, Length, 0LL);
  __incgsdword(0x5EA4u);
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  QuadPart = FileOffset->QuadPart;
  v21[0] = FileOffset->QuadPart;
  v11 = Length;
  while ( v11 )
  {
    VirtualAddress = (PVOID)CcGetVirtualAddress((__int64)SharedCacheMap, QuadPart, (__int64 *)&v19, v18, 0, 0);
    if ( (SharedCacheMap[38] & 8) == 0 )
      CcFetchDataForRead((__int64)FileObject, v21, v11, 1, &v17, v19, (*PrivateCacheMap >> 18) & 7);
    v12 = v18[0];
    if ( v18[0] > v11 )
      v12 = v11;
    v18[0] = v12;
    QuadPart += v12;
    Mdl = IoAllocateMdl(VirtualAddress, v12, 0, 0, 0LL);
    v20 = Mdl;
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    MmProbeAndLockPages(Mdl, 0, IoReadAccess);
    CcFreeVirtualAddress((__int64)v19);
    v19 = 0LL;
    v14 = *MdlChain;
    if ( *MdlChain )
    {
      for ( i = *MdlChain; ; i = Next )
      {
        Next = v14->Next;
        if ( !v14->Next )
          break;
        v14 = v14->Next;
      }
      v14->Next = v20;
    }
    else
    {
      *MdlChain = v20;
    }
    v20 = 0LL;
    v21[0] = QuadPart;
    v16 += v12;
    v11 -= v12;
    PrivateCacheMap = v24;
  }
  __addgsdword(0x5EE0u, HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  if ( (*PrivateCacheMap & 0x20000) == 0 && v17 )
    CcScheduleReadAheadEx(FileObject, FileOffset, Length, 0LL);
  CcUpdateReadHistory((__int64)FileObject, (__int64 *)FileOffset, Length);
  if ( (SharedCacheMap[38] & 8) != 0 )
    CcUpdateSharedCacheMapFlag((__int64)SharedCacheMap, 8, 0);
  IoStatus->Status = 0;
  IoStatus->Information = v16;
}
