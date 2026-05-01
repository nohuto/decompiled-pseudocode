/*
 * XREFs of ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000AC4C
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001A400 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800087C8 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x1800087E4 (-HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x1800088BC (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z.c)
 *     ?HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18000A0EC (-HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z.c)
 *     ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000BD0C (-RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800165C0 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A390 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001D5F8 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@@Z @ 0x180031204 (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@@Z.c)
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180040EFC (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 *     ?HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180041144 (-HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_EXTERNAL_APPLICATI.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180041E28 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180054B88 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800598F4 (-RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800599D4 (-RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x1800617F0 (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostAcquireLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180064AA8 (-HampHostAcquireLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs @ 0x18006AB10 (CempQueryUnbiasedInterruptTimeMs.c)
 */

void __fastcall RmpEnforcementOptimizeHost(__int64 a1, unsigned int a2)
{
  char v2; // bl
  struct _RM_HAM_ACTIVITY_HOST *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  struct _HAM_ACTIVITY *i; // rax
  unsigned int v8; // edx
  struct _HAM_ACTIVITY *v9; // r14
  int updated; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // eax
  unsigned __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2;
  if ( ((a2 - 1) & a2) == 0 && (a2 & 0x10) != 0 )
  {
    HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64));
    RmpActivityHostSetCommitSavings((struct _RM_ACTIVITY_HOST *)a1, 1u);
    v4 = (struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64);
LABEL_4:
    HampHostAcquireLockExclusive(v4);
    return;
  }
  if ( (a2 & 0x80u) != 0 )
  {
    *(_DWORD *)(a1 + 1160) |= 0x80u;
    v6 = *(_QWORD *)(a1 + 696);
    *(_DWORD *)(a1 + 708) = 0;
    *(_DWORD *)(a1 + 712) = 0;
    v5 = a1 + 64;
    *(_QWORD *)(a1 + 696) = v6 & 0xFFFFFDFF1FFFFFFFuLL | 0x20000000;
    for ( i = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64)); ; i = HampHostGetNextActivity(v9) )
    {
      v9 = i;
      if ( !i )
        break;
      if ( *((char *)i + 120) < 0 && (unsigned __int8)(*((_BYTE *)i + 540) - 2) <= 1u )
        HampActRequestStop(i, 1LL, 9LL, 6400LL, 0, 0LL);
    }
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v5, v8);
    RmpReleaseGlobalLock();
    HampUtilQueryQuiesceTimeouts(&v14, 0LL);
    v15 = 0LL;
    v13 = v14;
    HampHostAcquireLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)v5);
    *(_DWORD *)(v5 + 648) = v13;
    *(_DWORD *)(v5 + 644) = CempQueryUnbiasedInterruptTimeMs();
    HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)v5);
    if ( *(_DWORD *)(v5 + 560) == 2 )
    {
      HampAppTryChangeExternalState(*(_QWORD *)(v5 + 744), 1u);
      HampWakeContextUpdateExternalApplicationState(*(_QWORD *)(v5 + 936), 1LL);
    }
    RmpSystemChangePsmApplicationState(a1, 1LL);
    RmpSystemResourceTimerSet((struct _RM_HAM_ACTIVITY_HOST *)v5, v13, *(void **)(v5 + 760));
    RmHamHostStateWorkerWaitForQuiesce((struct _RM_HAM_ACTIVITY_HOST *)v5, &v13, &v15);
    if ( *(char *)(a1 + 1156) >= 0 )
      *(_DWORD *)(a1 + 1160) &= ~0x80u;
    *(_QWORD *)(v5 + 632) &= ~0x20000000000000uLL;
    HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)v5);
    ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(
      *(ExecutionModel::ResourceManager **)(*(_QWORD *)(a1 + 48) + 2232LL),
      (struct _RM_ACTIVITY_HOST *)a1);
    SetEvent(*(HANDLE *)(*(_QWORD *)(a1 + 56) + 88LL));
    v4 = (struct _RM_HAM_ACTIVITY_HOST *)v5;
    goto LABEL_4;
  }
  if ( (a2 & 0x100) != 0 )
  {
    *(_DWORD *)(a1 + 1160) |= 0x100u;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
    RmpReleaseGlobalLock();
    RmpSystemChangePsmApplicationState(a1, 2LL);
    if ( *(_DWORD *)(a1 + 624) == 2 )
    {
      HampAppTryChangeExternalState(*(_QWORD *)(a1 + 808), 2u);
      HampWakeContextUpdateExternalApplicationState(*(_QWORD *)(a1 + 1000), 2LL);
    }
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), 0);
    *(_DWORD *)(a1 + 1160) &= ~0x100u;
    *(_DWORD *)(a1 + 1156) |= 0x100u;
  }
  else if ( (a2 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 1160) |= 0x40u;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
    RmpReleaseGlobalLock();
    RmpSystemFreezeHostJob((struct _RM_ACTIVITY_HOST *)a1, (v2 & 0x40) != 0);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), 0);
    *(_DWORD *)(a1 + 1160) &= ~0x40u;
    *(_DWORD *)(a1 + 1156) |= 0x40u;
  }
  else if ( (a2 & 8) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 1152) & 0x20) != 0 )
    {
      *(_DWORD *)(a1 + 1156) |= 8u;
    }
    else
    {
      *(_DWORD *)(a1 + 1160) |= 8u;
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
      RmpReleaseGlobalLock();
      updated = RmpEnforcementUpdateSwapState((struct _RM_ACTIVITY_HOST *)a1, 1u);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), 0);
      *(_DWORD *)(a1 + 1156) |= 8u;
      *(_DWORD *)(a1 + 1160) &= ~8u;
      if ( updated < 0 )
        *(_DWORD *)(a1 + 1152) |= 0x20u;
    }
  }
  else
  {
    v11 = a2 & 0x27;
    if ( (a2 & 0x27) != 0 && *(int *)(a1 + 24) >= 0 )
    {
      *(_DWORD *)(a1 + 1160) |= v11;
      NtClearEvent(*(HANDLE *)(a1 + 1232));
      if ( !*(_DWORD *)(a1 + 1248) || RmpEmptyWorkerWaitForCompleteOrAbort((struct _RM_ACTIVITY_HOST *)a1) )
      {
        if ( *(int *)(a1 + 24) >= 0 )
        {
          RmpEmptyWorkerRun(a1, v11);
          v12 = RmpEmptyWorkerWaitForCompleteOrAbort((struct _RM_ACTIVITY_HOST *)a1);
          *(_DWORD *)(a1 + 1160) &= ~v11;
          if ( v12 )
            *(_DWORD *)(a1 + 1156) |= v11;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 1160) &= ~v11;
      }
    }
  }
}
