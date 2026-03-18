/*
 * XREFs of CcMdlRead @ 0x1405392E0
 * Callers:
 *     FsRtlMdlReadDev @ 0x1407148C0 (FsRtlMdlReadDev.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140022650 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     CcUpdateReadHistory @ 0x140098E60 (CcUpdateReadHistory.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14009AF9C (CcUpdateSharedCacheMapFlag.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     CcFreeVirtualAddress @ 0x14011D860 (CcFreeVirtualAddress.c)
 *     CcFetchDataForRead @ 0x14011D8A0 (CcFetchDataForRead.c)
 *     CcGetVirtualAddress @ 0x14011DD70 (CcGetVirtualAddress.c)
 *     CcScheduleReadAheadEx @ 0x1401357B0 (CcScheduleReadAheadEx.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
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
  __int64 v10; // rbx
  ULONG v11; // esi
  void *VirtualAddress; // rax
  ULONG v13; // r12d
  struct _MDL *Mdl; // rax
  PMDL v15; // rax
  struct _MDL *Next; // rcx
  unsigned int v17; // [rsp+44h] [rbp-A4h]
  int v18; // [rsp+48h] [rbp-A0h] BYREF
  _DWORD v19[3]; // [rsp+4Ch] [rbp-9Ch] BYREF
  PVOID P; // [rsp+58h] [rbp-90h] BYREF
  struct _MDL *v21; // [rsp+60h] [rbp-88h]
  __int64 v22; // [rsp+68h] [rbp-80h]
  int v23[2]; // [rsp+70h] [rbp-78h] BYREF
  _DWORD *v24; // [rsp+78h] [rbp-70h]
  void *v25; // [rsp+80h] [rbp-68h]
  PMDL i; // [rsp+88h] [rbp-60h]
  _DWORD *v27; // [rsp+90h] [rbp-58h]
  _DWORD *v28; // [rsp+98h] [rbp-50h]

  v21 = 0LL;
  v19[1] = Length;
  v17 = 0;
  P = 0LL;
  v18 = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v24 = SharedCacheMap;
  PrivateCacheMap = FileObject->PrivateCacheMap;
  v27 = PrivateCacheMap;
  v28 = PrivateCacheMap;
  if ( (*PrivateCacheMap & 0x20000) != 0 )
    CcScheduleReadAheadEx((_SLIST_ENTRY *)FileObject, FileOffset, Length, 0LL);
  __incgsdword(0x5E24u);
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  *(LARGE_INTEGER *)v23 = *FileOffset;
  v10 = *(_QWORD *)v23;
  v22 = *(_QWORD *)v23;
  v11 = Length;
  while ( v11 )
  {
    VirtualAddress = (void *)CcGetVirtualAddress(
                               (__int64)SharedCacheMap,
                               v10,
                               (volatile signed __int32 **)&P,
                               v19,
                               0,
                               0);
    v25 = VirtualAddress;
    if ( (SharedCacheMap[38] & 8) == 0 )
    {
      CcFetchDataForRead((__int64)FileObject, v23, v11, 1, &v18, P, (*PrivateCacheMap >> 18) & 7);
      VirtualAddress = v25;
    }
    v13 = v19[0];
    if ( v19[0] > v11 )
      v13 = v11;
    v19[0] = v13;
    v10 = v22 + v13;
    v22 = v10;
    Mdl = IoAllocateMdl(VirtualAddress, v13, 0, 0, 0LL);
    v21 = Mdl;
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    MmProbeAndLockPages(Mdl, 0, IoReadAccess);
    CcFreeVirtualAddress((__int64)P);
    P = 0LL;
    v15 = *MdlChain;
    if ( *MdlChain )
    {
      for ( i = *MdlChain; ; i = Next )
      {
        Next = v15->Next;
        if ( !v15->Next )
          break;
        v15 = v15->Next;
      }
      v15->Next = v21;
    }
    else
    {
      *MdlChain = v21;
    }
    v21 = 0LL;
    *(_QWORD *)v23 = v10;
    v17 += v13;
    v11 -= v13;
    PrivateCacheMap = v27;
  }
  __addgsdword(0x5E60u, HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  if ( (*PrivateCacheMap & 0x20000) == 0 && v18 )
    CcScheduleReadAheadEx((_SLIST_ENTRY *)FileObject, FileOffset, Length, 0LL);
  CcUpdateReadHistory((__int64)FileObject, (__int64 *)FileOffset, Length);
  if ( (SharedCacheMap[38] & 8) != 0 )
    CcUpdateSharedCacheMapFlag((__int64)SharedCacheMap, 8, 0);
  IoStatus->Status = 0;
  IoStatus->Information = v17;
}
