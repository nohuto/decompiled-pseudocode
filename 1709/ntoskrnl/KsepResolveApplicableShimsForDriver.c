/*
 * XREFs of KsepResolveApplicableShimsForDriver @ 0x1405C5620
 * Callers:
 *     KsepGetShimsForDriver @ 0x140545FD0 (KsepGetShimsForDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KsepPoolFreePaged @ 0x1400F9FD8 (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x1400FA05C (KsepLogInfo.c)
 *     KsepLoadShimProvider @ 0x14020EC88 (KsepLoadShimProvider.c)
 *     KsepDebugPrint @ 0x14020EE64 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14020EFB4 (KsepLogError.c)
 *     KsepResolveShimHooks @ 0x1405C5828 (KsepResolveShimHooks.c)
 *     KsepIsShimRegistered @ 0x1405C5ABC (KsepIsShimRegistered.c)
 *     KsepGetLoadedModulesList @ 0x1405C5C54 (KsepGetLoadedModulesList.c)
 */

__int64 __fastcall KsepResolveApplicableShimsForDriver(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int LoadedModulesList; // ebp
  int v4; // r15d
  int v5; // r13d
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // r12
  int v12; // eax
  char v13; // al
  struct _KTHREAD *v14; // rax
  __int64 v15; // r15
  __int64 v16; // r12
  char v17; // bl
  __int64 v18; // rax
  __int64 v20; // r12
  _QWORD *v21; // r13
  __int64 v22; // rax
  struct _KTHREAD *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r15
  __int64 *v26; // r13
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // [rsp+68h] [rbp+10h]
  int v31; // [rsp+70h] [rbp+18h]
  void *v32; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  LoadedModulesList = 0;
  v32 = 0LL;
  v4 = 0;
  v5 = 0;
  v31 = 0;
  --CurrentThread->KernelApcDisable;
  v30 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140387FB0, 0LL);
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
        v31 = 1;
      }
      v10 += 80LL;
      v9 += 80LL;
      --v11;
    }
    while ( v11 );
    v4 = v31;
    LoadedModulesList = 0;
    v30 = v5;
  }
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140387FB0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140387FB0);
  KeAbPostRelease((ULONG_PTR)&qword_140387FB0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !v4 )
  {
LABEL_11:
    if ( v30 )
    {
      LoadedModulesList = KsepGetLoadedModulesList(&v32);
      if ( LoadedModulesList < 0 )
        goto LABEL_23;
      v14 = KeGetCurrentThread();
      --v14->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140387FB0, 0LL);
      v15 = 0LL;
      if ( a2 )
      {
        v16 = a1 + 72;
        while ( 1 )
        {
          LoadedModulesList = KsepResolveShimHooks(v32, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 16LL) + 48LL));
          if ( LoadedModulesList < 0 )
            break;
          v15 = (unsigned int)(v15 + 1);
          v16 += 80LL;
          if ( (unsigned int)v15 >= a2 )
            goto LABEL_17;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140387FB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140387FB0);
        KeAbPostRelease((ULONG_PTR)&qword_140387FB0);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v29 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
        dword_14036A2C4[2 * v29] = LoadedModulesList;
        KsepHistoryErrors[2 * v29] = 459288;
        if ( (KsepDebugFlag & 2) != 0 )
          KsepDebugPrint(
            6LL,
            "KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
            *(_DWORD *)(a1 + 80 * v15),
            LoadedModulesList);
        KsepLogError(
          6,
          "KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
          *(unsigned int *)(a1 + 80 * v15),
          (unsigned int)LoadedModulesList);
      }
      else
      {
LABEL_17:
        v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140387FB0, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140387FB0);
        KeAbPostRelease((ULONG_PTR)&qword_140387FB0);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
    }
    goto LABEL_19;
  }
  v20 = 0LL;
  if ( a2 )
  {
    v21 = (_QWORD *)(a1 + 72);
    while ( 1 )
    {
      if ( !*v21 )
      {
        LoadedModulesList = KsepLoadShimProvider(a1 + 80 * v20);
        if ( LoadedModulesList < 0 )
          break;
      }
      v20 = (unsigned int)(v20 + 1);
      v21 += 10;
      if ( (unsigned int)v20 >= a2 )
        goto LABEL_35;
    }
    v22 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    dword_14036A2C4[2 * v22] = LoadedModulesList;
    KsepHistoryErrors[2 * v22] = 459211;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(
        6LL,
        "KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
        *(_DWORD *)(a1 + 80LL * (unsigned int)v20),
        LoadedModulesList);
    KsepLogError(
      6,
      "KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
      *(unsigned int *)(a1 + 80LL * (unsigned int)v20),
      (unsigned int)LoadedModulesList);
LABEL_19:
    if ( LoadedModulesList >= 0 )
    {
      v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
      HIDWORD(KsepHistoryMessages[v18]) = 0;
      LODWORD(KsepHistoryMessages[v18]) = 459302;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(6LL, "KSE: Successfully resolved %d shim(s).\n", a2);
      KsepLogInfo(6LL, (__int64)"KSE: Successfully resolved %d shim(s).\n", a2);
    }
    goto LABEL_23;
  }
LABEL_35:
  v23 = KeGetCurrentThread();
  --v23->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140387FB0, 0LL);
  v25 = 0LL;
  if ( !a2 )
  {
LABEL_39:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140387FB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140387FB0);
    KeAbPostRelease((ULONG_PTR)&qword_140387FB0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    goto LABEL_11;
  }
  v26 = (__int64 *)(a1 + 72);
  while ( (unsigned int)KsepIsShimRegistered(&KseEngine, a1 + 80 * v25, v24, a1 + 80 * v25 + 72) )
  {
    v27 = *v26;
    v25 = (unsigned int)(v25 + 1);
    v26 += 10;
    ++*(_DWORD *)(v27 + 24);
    if ( (unsigned int)v25 >= a2 )
      goto LABEL_39;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140387FB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140387FB0);
  KeAbPostRelease((ULONG_PTR)&qword_140387FB0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  LoadedModulesList = -1073740782;
  v28 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  dword_14036A2C4[2 * v28] = -1073740782;
  KsepHistoryErrors[2 * v28] = 459240;
  if ( (KsepDebugFlag & 2) != 0 )
    KsepDebugPrint(6LL, "KSE: The provider did not register shim [0x%08X] in time\n", *(_DWORD *)(a1 + 80 * v25));
  KsepLogError(6, "KSE: The provider did not register shim [0x%08X] in time\n", *(_DWORD *)(a1 + 80 * v25));
LABEL_23:
  KsepPoolFreePaged(v32);
  return (unsigned int)LoadedModulesList;
}
