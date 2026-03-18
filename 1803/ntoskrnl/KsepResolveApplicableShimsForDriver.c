/*
 * XREFs of KsepResolveApplicableShimsForDriver @ 0x140745B44
 * Callers:
 *     KsepGetShimsForDriver @ 0x1405FC594 (KsepGetShimsForDriver.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KsepPoolFreePaged @ 0x140161A40 (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x140161AC4 (KsepLogInfo.c)
 *     KsepLoadShimProvider @ 0x14024CEDC (KsepLoadShimProvider.c)
 *     KsepDebugPrint @ 0x14024D0B4 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14024D344 (KsepLogError.c)
 *     KsepIsShimRegistered @ 0x14062344C (KsepIsShimRegistered.c)
 *     KsepGetLoadedModulesList @ 0x1406235DC (KsepGetLoadedModulesList.c)
 *     KsepResolveShimHooks @ 0x140745634 (KsepResolveShimHooks.c)
 */

__int64 __fastcall KsepResolveApplicableShimsForDriver(_QWORD *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int LoadedModulesList; // esi
  int v4; // r14d
  int v5; // r13d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // r14
  _QWORD *v12; // r15
  __int64 v13; // r12
  int v14; // eax
  __int64 v15; // r15
  _QWORD *v16; // r12
  struct _KTHREAD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r15
  __int64 *v22; // r12
  __int64 v23; // rax
  struct _KTHREAD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r15
  _QWORD *v29; // r14
  __int64 v30; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // [rsp+68h] [rbp+10h]
  int *v36; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  LoadedModulesList = 0;
  v36 = 0LL;
  v4 = 0;
  v5 = 0;
  v35 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CDF10, 0LL);
  if ( a2 )
  {
    v11 = a1 + 9;
    v12 = a1;
    v13 = a2;
    do
    {
      if ( (unsigned int)KsepIsShimRegistered((__int64)&KseEngine, v12, v9, v12 + 9) == 1 )
      {
        v14 = *(_DWORD *)(*v11 + 24LL);
        if ( !v14 )
          v5 = 1;
        *(_DWORD *)(*v11 + 24LL) = v14 + 1;
      }
      else
      {
        *v11 = 0LL;
        v5 = 1;
        v35 = 1;
      }
      v12 += 10;
      v11 += 10;
      --v13;
    }
    while ( v13 );
    v4 = v35;
    LoadedModulesList = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CDF10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CDF10, v8, v9, v10);
  KeAbPostRelease((ULONG_PTR)&qword_1403CDF10);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !v4 )
  {
LABEL_25:
    if ( v5 )
    {
      LoadedModulesList = KsepGetLoadedModulesList(&v36);
      if ( LoadedModulesList < 0 )
        goto LABEL_38;
      v24 = KeGetCurrentThread();
      --v24->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CDF10, 0LL);
      v28 = 0LL;
      if ( a2 )
      {
        v29 = a1 + 9;
        while ( 1 )
        {
          LoadedModulesList = KsepResolveShimHooks((__int64)v36, *(int **)(*(_QWORD *)(*v29 + 16LL) + 48LL));
          if ( LoadedModulesList < 0 )
            break;
          v28 = (unsigned int)(v28 + 1);
          v29 += 10;
          if ( (unsigned int)v28 >= a2 )
            goto LABEL_31;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CDF10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CDF10, v25, v26, v27);
        KeAbPostRelease((ULONG_PTR)&qword_1403CDF10);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v34 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
        dword_1403AD3A4[2 * v34] = LoadedModulesList;
        KsepHistoryErrors[2 * v34] = 459288;
        if ( (KsepDebugFlag & 2) != 0 )
          KsepDebugPrint(
            6LL,
            "KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
            LODWORD(a1[10 * v28]),
            LoadedModulesList);
        KsepLogError(
          6,
          "KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
          LODWORD(a1[10 * v28]),
          LoadedModulesList);
      }
      else
      {
LABEL_31:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CDF10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CDF10, v25, v26, v27);
        KeAbPostRelease((ULONG_PTR)&qword_1403CDF10);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
    }
    goto LABEL_34;
  }
  v15 = 0LL;
  if ( a2 )
  {
    v16 = a1 + 9;
    while ( 1 )
    {
      if ( !*v16 )
      {
        LoadedModulesList = KsepLoadShimProvider((__int64)&a1[10 * v15]);
        if ( LoadedModulesList < 0 )
          break;
      }
      v15 = (unsigned int)(v15 + 1);
      v16 += 10;
      if ( (unsigned int)v15 >= a2 )
        goto LABEL_18;
    }
    v32 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    dword_1403AD3A4[2 * v32] = LoadedModulesList;
    KsepHistoryErrors[2 * v32] = 459211;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(
        6LL,
        "KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
        LODWORD(a1[10 * v15]),
        LoadedModulesList);
    KsepLogError(
      6,
      "KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
      LODWORD(a1[10 * v15]),
      LoadedModulesList);
LABEL_34:
    if ( LoadedModulesList >= 0 )
    {
      v30 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
      HIDWORD(KsepHistoryMessages[v30]) = 0;
      LODWORD(KsepHistoryMessages[v30]) = 459302;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(6LL, "KSE: Successfully resolved %d shim(s).\n", a2);
      KsepLogInfo(6LL, (__int64)"KSE: Successfully resolved %d shim(s).\n", a2);
    }
    goto LABEL_38;
  }
LABEL_18:
  v17 = KeGetCurrentThread();
  --v17->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CDF10, 0LL);
  v21 = 0LL;
  if ( !a2 )
  {
LABEL_22:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CDF10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CDF10, v18, v19, v20);
    KeAbPostRelease((ULONG_PTR)&qword_1403CDF10);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    goto LABEL_25;
  }
  v22 = a1 + 9;
  while ( (unsigned int)KsepIsShimRegistered((__int64)&KseEngine, &a1[10 * v21], v19, &a1[10 * v21 + 9]) )
  {
    v23 = *v22;
    v21 = (unsigned int)(v21 + 1);
    v22 += 10;
    ++*(_DWORD *)(v23 + 24);
    if ( (unsigned int)v21 >= a2 )
      goto LABEL_22;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CDF10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CDF10, v18, v19, v20);
  KeAbPostRelease((ULONG_PTR)&qword_1403CDF10);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  LoadedModulesList = -1073740782;
  v33 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  dword_1403AD3A4[2 * v33] = -1073740782;
  KsepHistoryErrors[2 * v33] = 459240;
  if ( (KsepDebugFlag & 2) != 0 )
    KsepDebugPrint(6LL, "KSE: The provider did not register shim [0x%08X] in time\n", LODWORD(a1[10 * v21]));
  KsepLogError(6, "KSE: The provider did not register shim [0x%08X] in time\n", LODWORD(a1[10 * v21]));
LABEL_38:
  KsepPoolFreePaged(v36);
  return (unsigned int)LoadedModulesList;
}
