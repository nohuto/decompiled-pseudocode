/*
 * XREFs of NdisCmOpenAddressFamilyComplete @ 0x1C0111F70
 * Callers:
 *     NdisClOpenAddressFamilyEx @ 0x1C0051C90 (NdisClOpenAddressFamilyEx.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C280 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C0051C10 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCoRequestComplete @ 0x1C0113720 (NdisCoRequestComplete.c)
 */

void __stdcall NdisCmOpenAddressFamilyComplete(
        NDIS_STATUS Status,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE CallMgrAfContext)
{
  __int64 v3; // r14
  __int64 v5; // rbp
  KIRQL v8; // al
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // r9
  KIRQL v11; // r12
  __int64 v12; // rcx
  NDIS_HANDLE v13; // r8
  NDIS_HANDLE v14; // rdx
  KIRQL v15; // al
  KSPIN_LOCK *v16; // rcx
  void *v17; // rbp
  unsigned int v18; // eax
  __int64 v19; // rcx
  NDIS_STATUS v20; // eax

  v3 = *((_QWORD *)NdisAfHandle + 2);
  v5 = *((_QWORD *)NdisAfHandle + 46);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(v3 + 520) = CurrentThread;
  v11 = v8;
  *(_DWORD *)(v3 + 1856) = 1573410;
  *((_QWORD *)NdisAfHandle + 6) = CallMgrAfContext;
  if ( Status )
  {
    v12 = *((_QWORD *)NdisAfHandle + 5);
    if ( v12 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v12 + 376));
      ndisMDereferenceOpenLocked(*((_QWORD *)NdisAfHandle + 5), 0x10u);
    }
    else
    {
      ndisDereferenceMiniport(v3, 0x51u, v9, (__int64)CurrentThread);
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
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v11);
  if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
  {
    v14 = NdisAfHandle;
    if ( Status )
      v14 = 0LL;
    (*((void (__fastcall **)(_QWORD, NDIS_HANDLE, _QWORD))NdisAfHandle + 31))(
      *((_QWORD *)NdisAfHandle + 47),
      v14,
      (unsigned int)Status);
  }
  else
  {
    v13 = NdisAfHandle;
    if ( Status )
      v13 = 0LL;
    (*((void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE))NdisAfHandle + 12))(
      (unsigned int)Status,
      *((_QWORD *)NdisAfHandle + 47),
      v13);
  }
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisAfHandle + 48);
  *((_DWORD *)NdisAfHandle + 2) &= ~0x40000000u;
  v16 = (KSPIN_LOCK *)((char *)NdisAfHandle + 384);
  if ( *((_BYTE *)NdisAfHandle + 592) )
  {
    v17 = (void *)*((_QWORD *)NdisAfHandle + 73);
    *((_BYTE *)NdisAfHandle + 592) = 0;
    KeReleaseSpinLock(v16, v15);
    v18 = *((_DWORD *)NdisAfHandle + 99);
    if ( !Status )
    {
      v19 = *((_QWORD *)NdisAfHandle + 47);
      if ( v18 >= 6 )
        v20 = (*((__int64 (__fastcall **)(__int64))NdisAfHandle + 45))(v19);
      else
        v20 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *))NdisAfHandle + 10))(v19, 0LL, 0LL, v17);
      if ( v20 != 259 )
      {
        if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
          NdisClNotifyCloseAddressFamilyComplete(NdisAfHandle, v20);
        else
          NdisCoRequestComplete(v20, NdisAfHandle, 0LL, 0LL, *((PVOID *)NdisAfHandle + 73));
      }
      return;
    }
    if ( v18 >= 6 )
      NdisClNotifyCloseAddressFamilyComplete(NdisAfHandle, Status);
    else
      NdisCoRequestComplete(Status, NdisAfHandle, 0LL, 0LL, v17);
  }
  else
  {
    KeReleaseSpinLock(v16, v15);
  }
  if ( Status )
    ExFreePoolWithTag(NdisAfHandle, 0);
}
