/*
 * XREFs of ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001B480
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180016A30 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001B100 (-RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800365B0 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18003AA14 (-RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003AAE4 (-RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180040264 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@@Z @ 0x180040BB8 (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@@Z.c)
 *     ?RmpSystemFreezeHostJob@@YAJPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180040E40 (-RmpSystemFreezeHostJob@@YAJPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18004133C (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180045F60 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppIssueStateChangeNotification@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18004631C (-HampAppIssueStateChangeNotification@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180046404 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@1@Z @ 0x180046ECC (-HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@.c)
 */

void __fastcall RmpEnforcementOptimizeHost(__int64 a1, unsigned int a2)
{
  char v2; // bl
  int updated; // ebx
  __int64 v5; // r14
  __int64 v6; // rdi
  int v7; // ecx
  __int64 v8; // rdi
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  if ( ((a2 - 1) & a2) == 0 && (a2 & 0x10) != 0 )
  {
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
    RmpActivityHostSetCommitSavings((struct _RM_ACTIVITY_HOST *)a1, 1u);
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), 0);
  }
  else if ( (a2 & 0x80u) != 0 )
  {
    *(_DWORD *)(a1 + 1016) |= 0x80u;
    v5 = a1 + 64;
    *(_DWORD *)(a1 + 692) = *(_DWORD *)(a1 + 692) & 0xFFFEFC7F | 0x80;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
    RmpReleaseGlobalLock();
    if ( *(_DWORD *)(v5 + 560) == 2 )
    {
      v6 = *(_QWORD *)(v5 + 720);
      HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v6);
      v7 = *(_DWORD *)(v6 + 592);
      if ( ((v7 - 1) & 0xFFFFFFFC) != 0 || v7 == 2 )
      {
        HampAppIssueStateChangeNotification(v6, 1LL);
        HampPkgUpdateApplicationStateCounters(*(_QWORD *)(v6 + 48), 1LL, *(unsigned int *)(v6 + 592));
        *(_DWORD *)(v6 + 592) = 1;
      }
      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v6);
    }
    RmpSystemChangePsmApplicationState(a1, 1LL);
    v11 = 0LL;
    v12 = 5000LL;
    RmpSystemResourceTimerSet((struct _RM_HAM_ACTIVITY_HOST *)v5, 0x1388uLL);
    RmHamHostStateWorkerWaitForQuiesce((struct _RM_HAM_ACTIVITY_HOST *)v5, &v12, &v11);
    *(_DWORD *)(a1 + 1016) &= ~0x80u;
    *(_DWORD *)(a1 + 1012) |= 0x80u;
  }
  else if ( (a2 & 0x100) != 0 )
  {
    *(_DWORD *)(a1 + 1016) |= 0x100u;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
    RmpReleaseGlobalLock();
    RmpSystemChangePsmApplicationState(a1, 2LL);
    if ( *(_DWORD *)(a1 + 624) == 2 )
    {
      v8 = *(_QWORD *)(a1 + 784);
      HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v8);
      if ( (unsigned int)(*(_DWORD *)(v8 + 592) - 2) > 2 )
      {
        HampAppIssueStateChangeNotification(v8, 2LL);
        HampPkgUpdateApplicationStateCounters(*(_QWORD *)(v8 + 48), 2LL, *(unsigned int *)(v8 + 592));
        *(_DWORD *)(v8 + 592) = 2;
      }
      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v8);
    }
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), 0);
    *(_DWORD *)(a1 + 1016) &= ~0x100u;
    *(_DWORD *)(a1 + 1012) |= 0x100u;
  }
  else if ( (a2 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 1016) |= 0x40u;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
    RmpReleaseGlobalLock();
    RmpSystemFreezeHostJob((struct _RM_ACTIVITY_HOST *)a1, (v2 & 0x40) != 0);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), 0);
    *(_DWORD *)(a1 + 1016) &= ~0x40u;
    *(_DWORD *)(a1 + 1012) |= 0x40u;
  }
  else if ( (a2 & 8) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 1008) & 0x20) != 0 )
    {
      *(_DWORD *)(a1 + 1012) |= 8u;
    }
    else
    {
      *(_DWORD *)(a1 + 1016) |= 8u;
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
      RmpReleaseGlobalLock();
      updated = RmpEnforcementUpdateSwapState((struct _RM_ACTIVITY_HOST *)a1, 1);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), 0);
      *(_DWORD *)(a1 + 1012) |= 8u;
      *(_DWORD *)(a1 + 1016) &= ~8u;
      if ( updated < 0 )
        *(_DWORD *)(a1 + 1008) |= 0x20u;
    }
  }
  else
  {
    v9 = a2 & 0x27;
    if ( (a2 & 0x27) != 0 && *(int *)(a1 + 20) >= 0 )
    {
      *(_DWORD *)(a1 + 1016) |= v9;
      NtClearEvent(*(HANDLE *)(a1 + 1088));
      if ( !*(_DWORD *)(a1 + 1104) || RmpEmptyWorkerWaitForCompleteOrAbort((struct _RM_ACTIVITY_HOST *)a1) )
      {
        if ( *(int *)(a1 + 20) >= 0 )
        {
          RmpEmptyWorkerRun(a1, v9);
          v10 = RmpEmptyWorkerWaitForCompleteOrAbort((struct _RM_ACTIVITY_HOST *)a1);
          *(_DWORD *)(a1 + 1016) &= ~v9;
          if ( v10 )
            *(_DWORD *)(a1 + 1012) |= v9;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 1016) &= ~v9;
      }
    }
  }
}
