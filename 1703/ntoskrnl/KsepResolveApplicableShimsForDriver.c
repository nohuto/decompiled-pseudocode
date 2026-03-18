/*
 * XREFs of KsepResolveApplicableShimsForDriver @ 0x14059873C
 * Callers:
 *     KsepGetShimsForDriver @ 0x1404B45D8 (KsepGetShimsForDriver.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x14006D8D8 (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x14006D95C (KsepLogInfo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KsepLoadShimProvider @ 0x140208258 (KsepLoadShimProvider.c)
 *     KsepDebugPrint @ 0x140208448 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14020848C (KsepLogError.c)
 *     KsepResolveShimHooks @ 0x140598934 (KsepResolveShimHooks.c)
 *     KsepIsShimRegistered @ 0x14059D7C0 (KsepIsShimRegistered.c)
 *     KsepGetLoadedModulesList @ 0x14059D950 (KsepGetLoadedModulesList.c)
 */

__int64 __fastcall KsepResolveApplicableShimsForDriver(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int LoadedModulesList; // esi
  int v4; // r14d
  int v5; // r12d
  __int64 v8; // r8
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r13
  int v12; // eax
  struct _KTHREAD *v13; // rax
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v18; // r14
  _QWORD *v19; // r15
  __int64 v20; // rax
  struct _KTHREAD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r14
  __int64 *v24; // r15
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // [rsp+68h] [rbp+10h]
  void *v29; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  LoadedModulesList = 0;
  v29 = 0LL;
  v4 = 0;
  v5 = 0;
  v28 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036BCB0, 0LL);
  if ( a2 )
  {
    v9 = a1 + 72;
    v10 = a1;
    v11 = a2;
    do
    {
      if ( (unsigned int)KsepIsShimRegistered(&KseEngine, v10, v8, v10 + 72) == 1 )
      {
        v12 = *(_DWORD *)(*(_QWORD *)v9 + 24LL);
        if ( !v12 )
          v5 = 1;
        *(_DWORD *)(*(_QWORD *)v9 + 24LL) = v12 + 1;
      }
      else
      {
        *(_QWORD *)v9 = 0LL;
        v5 = 1;
        v28 = 1;
      }
      v10 += 80LL;
      v9 += 80LL;
      --v11;
    }
    while ( v11 );
    v4 = v28;
    LoadedModulesList = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036BCB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036BCB0);
  KeAbPostRelease((ULONG_PTR)&qword_14036BCB0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( !v4 )
  {
LABEL_12:
    if ( v5 )
    {
      LoadedModulesList = KsepGetLoadedModulesList(&v29);
      if ( LoadedModulesList < 0 )
        goto LABEL_25;
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036BCB0, 0LL);
      v14 = 0LL;
      if ( a2 )
      {
        v15 = a1 + 72;
        while ( 1 )
        {
          LoadedModulesList = KsepResolveShimHooks(v29, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 16LL) + 48LL));
          if ( LoadedModulesList < 0 )
            break;
          v14 = (unsigned int)(v14 + 1);
          v15 += 80LL;
          if ( (unsigned int)v14 >= a2 )
            goto LABEL_18;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036BCB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036BCB0);
        KeAbPostRelease((ULONG_PTR)&qword_14036BCB0);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v27 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
        dword_14034F864[2 * v27] = LoadedModulesList;
        KsepHistoryErrors[2 * v27] = 459288;
        if ( (KsepDebugFlag & 2) != 0 )
          KsepDebugPrint(
            6LL,
            "KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
            *(_DWORD *)(a1 + 80 * v14),
            LoadedModulesList);
        KsepLogError(
          6,
          "KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
          *(unsigned int *)(a1 + 80 * v14),
          (unsigned int)LoadedModulesList);
      }
      else
      {
LABEL_18:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036BCB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036BCB0);
        KeAbPostRelease((ULONG_PTR)&qword_14036BCB0);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
    goto LABEL_21;
  }
  v18 = 0LL;
  if ( a2 )
  {
    v19 = (_QWORD *)(a1 + 72);
    while ( 1 )
    {
      if ( !*v19 )
      {
        LoadedModulesList = KsepLoadShimProvider(a1 + 80 * v18);
        if ( LoadedModulesList < 0 )
          break;
      }
      v18 = (unsigned int)(v18 + 1);
      v19 += 10;
      if ( (unsigned int)v18 >= a2 )
        goto LABEL_35;
    }
    v20 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    dword_14034F864[2 * v20] = LoadedModulesList;
    KsepHistoryErrors[2 * v20] = 459211;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(
        6LL,
        "KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
        *(_DWORD *)(a1 + 80 * v18),
        LoadedModulesList);
    KsepLogError(
      6,
      "KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
      *(unsigned int *)(a1 + 80 * v18),
      (unsigned int)LoadedModulesList);
LABEL_21:
    if ( LoadedModulesList >= 0 )
    {
      v16 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
      HIDWORD(KsepHistoryMessages[v16]) = 0;
      LODWORD(KsepHistoryMessages[v16]) = 459302;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(6LL, "KSE: Successfully resolved %d shim(s).\n", a2);
      KsepLogInfo(6LL, (__int64)"KSE: Successfully resolved %d shim(s).\n", a2);
    }
    goto LABEL_25;
  }
LABEL_35:
  v21 = KeGetCurrentThread();
  --v21->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036BCB0, 0LL);
  v23 = 0LL;
  if ( !a2 )
  {
LABEL_39:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036BCB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036BCB0);
    KeAbPostRelease((ULONG_PTR)&qword_14036BCB0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    goto LABEL_12;
  }
  v24 = (__int64 *)(a1 + 72);
  while ( (unsigned int)KsepIsShimRegistered(&KseEngine, a1 + 80 * v23, v22, a1 + 80 * v23 + 72) )
  {
    v25 = *v24;
    v23 = (unsigned int)(v23 + 1);
    v24 += 10;
    ++*(_DWORD *)(v25 + 24);
    if ( (unsigned int)v23 >= a2 )
      goto LABEL_39;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036BCB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036BCB0);
  KeAbPostRelease((ULONG_PTR)&qword_14036BCB0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  LoadedModulesList = -1073740782;
  v26 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  dword_14034F864[2 * v26] = -1073740782;
  KsepHistoryErrors[2 * v26] = 459240;
  if ( (KsepDebugFlag & 2) != 0 )
    KsepDebugPrint(6LL, "KSE: The provider did not register shim [0x%08X] in time\n", *(_DWORD *)(a1 + 80 * v23));
  KsepLogError(6, "KSE: The provider did not register shim [0x%08X] in time\n", *(_DWORD *)(a1 + 80 * v23));
LABEL_25:
  KsepPoolFreePaged(v29);
  return (unsigned int)LoadedModulesList;
}
