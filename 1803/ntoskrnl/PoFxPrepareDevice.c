/*
 * XREFs of PoFxPrepareDevice @ 0x140146F44
 * Callers:
 *     PnpStartDevice @ 0x140146E98 (PnpStartDevice.c)
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x140646334 (PiProcessAddBootDevices.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     IoAcquireRemoveLockEx @ 0x1400782B0 (IoAcquireRemoveLockEx.c)
 *     IoReleaseRemoveLockEx @ 0x1400BA4B0 (IoReleaseRemoveLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 *     PopDiagTraceFxDevicePreparation @ 0x1405C8244 (PopDiagTraceFxDevicePreparation.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x1405D5B48 (PopFxFindDeviceAndAllocateUniqueId.c)
 */

void __fastcall PoFxPrepareDevice(__int64 a1, char a2)
{
  int v2; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r9
  ULONG_PTR *v7; // rdi
  ULONG_PTR *v8; // rbp
  __int64 v9; // rdi
  unsigned __int8 (__fastcall *v10)(__int64, __int64 *); // rax
  char v11; // cl
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  char v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 296);
  v14 = 0LL;
  if ( (v2 & 1) == 0 )
  {
    if ( (v2 & 2) == 0 )
    {
      if ( (unsigned int)PopFxFindDeviceAndAllocateUniqueId(a1, &v14) == -1073741738 )
        goto LABEL_11;
      *(_DWORD *)(a1 + 296) |= 2u;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxPluginLock, 0LL);
    v7 = (ULONG_PTR *)PopFxPluginList;
    v8 = 0LL;
    if ( (ULONG_PTR *)PopFxPluginList == &PopFxPluginList )
    {
LABEL_6:
      if ( !a2 )
        goto LABEL_8;
    }
    else
    {
      while ( 1 )
      {
        v10 = (unsigned __int8 (__fastcall *)(__int64, __int64 *))v7[12];
        v11 = 0;
        if ( v10 )
        {
          v12 = a1 + 280;
          if ( !v10(1LL, &v12) )
            PopFxBugCheck(0x605uLL, 1uLL, (ULONG_PTR)v7, 0LL);
          v11 = v13;
        }
        if ( v11 )
          break;
        v7 = (ULONG_PTR *)*v7;
        if ( v7 == &PopFxPluginList )
          goto LABEL_6;
      }
      LOBYTE(v6) = 1;
      PopDiagTraceFxDevicePreparation(a1, v7, a1 + 280, v6);
      v8 = v7;
    }
    *(_DWORD *)(a1 + 296) |= 1u;
    *(_QWORD *)(a1 + 128) = v8;
    *(_WORD *)(a1 + 96) = 0;
    *(_BYTE *)(a1 + 98) = 6;
    *(_DWORD *)(a1 + 100) = 0;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
LABEL_8:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v8 )
    {
      v9 = v14;
      if ( !v14 )
        return;
      if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v14 + 248), (PVOID)0x70466F50, &File, 1u, 0x20u) != -1073741738 )
        *(_DWORD *)(a1 + 296) |= 0x4000u;
      goto LABEL_12;
    }
LABEL_11:
    v9 = v14;
LABEL_12:
    if ( v9 )
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 248), (PVOID)0x66466F50, 0x20u);
  }
}
