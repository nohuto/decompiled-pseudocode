/*
 * XREFs of PoFxPrepareDevice @ 0x1400FCDC8
 * Callers:
 *     PnpStartDevice @ 0x1400FCED4 (PnpStartDevice.c)
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x1405DAED8 (PiProcessAddBootDevices.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     IoAcquireRemoveLockEx @ 0x1400FD8A0 (IoAcquireRemoveLockEx.c)
 *     IoReleaseRemoveLockEx @ 0x14011AF40 (IoReleaseRemoveLockEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x14023D978 (PopFxBugCheck.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x140553B78 (PopFxFindDeviceAndAllocateUniqueId.c)
 *     PopDiagTraceFxDevicePreparation @ 0x14055E818 (PopDiagTraceFxDevicePreparation.c)
 */

void __fastcall PoFxPrepareDevice(__int64 a1, char a2)
{
  int v2; // eax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *v6; // rdi
  ULONG_PTR *v7; // rsi
  __int64 v8; // rdi
  unsigned __int8 (__fastcall *v9)(__int64, __int64 *); // rax
  __int64 v10; // r9
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  char v12; // [rsp+38h] [rbp-30h]
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 296);
  v13 = 0LL;
  if ( (v2 & 1) == 0 )
  {
    if ( (v2 & 2) == 0 )
    {
      if ( (unsigned int)PopFxFindDeviceAndAllocateUniqueId(a1, &v13) == -1073741738 )
        goto LABEL_12;
      *(_DWORD *)(a1 + 296) |= 2u;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxPluginLock, 0LL);
    v6 = (ULONG_PTR *)PopFxPluginList;
    v7 = 0LL;
    while ( v6 != &PopFxPluginList )
    {
      v9 = (unsigned __int8 (__fastcall *)(__int64, __int64 *))v6[12];
      if ( v9 )
      {
        v11 = a1 + 280;
        if ( !v9(1LL, &v11) )
          PopFxBugCheck(0x605uLL, 1uLL, (ULONG_PTR)v6, 0LL);
        if ( v12 )
        {
          LOBYTE(v10) = 1;
          PopDiagTraceFxDevicePreparation(a1, v6, a1 + 280, v10);
          v7 = v6;
          goto LABEL_8;
        }
      }
      v6 = (ULONG_PTR *)*v6;
    }
    if ( !a2 )
      goto LABEL_9;
LABEL_8:
    *(_DWORD *)(a1 + 296) |= 1u;
    *(_QWORD *)(a1 + 128) = v7;
    *(_WORD *)(a1 + 96) = 0;
    *(_BYTE *)(a1 + 98) = 6;
    *(_DWORD *)(a1 + 100) = 0;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
LABEL_9:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v7 )
    {
      v8 = v13;
      if ( !v13 )
        return;
      if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v13 + 248), (PVOID)0x70466F50, &File, 1u, 0x20u) != -1073741738 )
        *(_DWORD *)(a1 + 296) |= 0x4000u;
      goto LABEL_13;
    }
LABEL_12:
    v8 = v13;
LABEL_13:
    if ( v8 )
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 248), (PVOID)0x66466F50, 0x20u);
  }
}
