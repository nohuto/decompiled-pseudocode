/*
 * XREFs of NdisCmOpenAddressFamilyComplete @ 0x1C0106F50
 * Callers:
 *     NdisClOpenAddressFamilyEx @ 0x1C0052500 (NdisClOpenAddressFamilyEx.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0021274 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C0052480 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCoRequestComplete @ 0x1C0108710 (NdisCoRequestComplete.c)
 */

void __stdcall NdisCmOpenAddressFamilyComplete(
        NDIS_STATUS Status,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE CallMgrAfContext)
{
  __int64 v3; // r14
  __int64 v5; // rbp
  KIRQL v8; // al
  KIRQL v9; // r12
  __int64 v10; // rcx
  NDIS_HANDLE v11; // r8
  NDIS_HANDLE v12; // rdx
  KIRQL v13; // al
  KSPIN_LOCK *v14; // rcx
  void *v15; // rbp
  __int64 v16; // rcx
  NDIS_STATUS v17; // eax

  v3 = *((_QWORD *)NdisAfHandle + 2);
  v5 = *((_QWORD *)NdisAfHandle + 46);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  v9 = v8;
  *(_DWORD *)(v3 + 1856) = 1573410;
  *((_QWORD *)NdisAfHandle + 6) = CallMgrAfContext;
  if ( Status )
  {
    v10 = *((_QWORD *)NdisAfHandle + 5);
    if ( v10 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 376));
      ndisMDereferenceOpenLocked(*((_QWORD *)NdisAfHandle + 5), 0x10u);
    }
    else
    {
      ndisDereferenceMiniport(v3, 0x51u);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 376));
    ndisMDereferenceOpenLocked(v5, 0xFu);
  }
  else
  {
    *(_QWORD *)NdisAfHandle = *(_QWORD *)(v5 + 1016);
    *(_QWORD *)(v5 + 1016) = NdisAfHandle;
  }
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v9);
  if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
  {
    v12 = NdisAfHandle;
    if ( Status )
      v12 = 0LL;
    (*((void (__fastcall **)(_QWORD, NDIS_HANDLE, _QWORD))NdisAfHandle + 31))(
      *((_QWORD *)NdisAfHandle + 47),
      v12,
      (unsigned int)Status);
  }
  else
  {
    v11 = NdisAfHandle;
    if ( Status )
      v11 = 0LL;
    (*((void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE))NdisAfHandle + 12))(
      (unsigned int)Status,
      *((_QWORD *)NdisAfHandle + 47),
      v11);
  }
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisAfHandle + 48);
  *((_DWORD *)NdisAfHandle + 2) &= ~0x40000000u;
  v14 = (KSPIN_LOCK *)((char *)NdisAfHandle + 384);
  if ( *((_BYTE *)NdisAfHandle + 592) )
  {
    v15 = (void *)*((_QWORD *)NdisAfHandle + 73);
    *((_BYTE *)NdisAfHandle + 592) = 0;
    KeReleaseSpinLock(v14, v13);
    if ( !Status )
    {
      v16 = *((_QWORD *)NdisAfHandle + 47);
      if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
        v17 = (*((__int64 (__fastcall **)(__int64))NdisAfHandle + 45))(v16);
      else
        v17 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *))NdisAfHandle + 10))(v16, 0LL, 0LL, v15);
      if ( v17 != 259 )
      {
        if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
          NdisClNotifyCloseAddressFamilyComplete(NdisAfHandle, v17);
        else
          NdisCoRequestComplete(v17, NdisAfHandle, 0LL, 0LL, *((PVOID *)NdisAfHandle + 73));
      }
      return;
    }
    if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
      NdisClNotifyCloseAddressFamilyComplete(NdisAfHandle, Status);
    else
      NdisCoRequestComplete(Status, NdisAfHandle, 0LL, 0LL, v15);
  }
  else
  {
    KeReleaseSpinLock(v14, v13);
  }
  if ( Status )
    ExFreePoolWithTag(NdisAfHandle, 0);
}
