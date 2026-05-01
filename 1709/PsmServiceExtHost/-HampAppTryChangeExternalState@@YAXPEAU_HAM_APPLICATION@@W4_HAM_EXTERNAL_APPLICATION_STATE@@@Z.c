/*
 * XREFs of ?HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180046450
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001B684 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 * Callees:
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180045F60 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppIssueStateChangeNotification@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18004631C (-HampAppIssueStateChangeNotification@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE.c)
 *     ?HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@1@Z @ 0x180046ECC (-HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@.c)
 */

void __fastcall HampAppTryChangeExternalState(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx

  v2 = a2;
  HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)a1, a2);
  v4 = *(unsigned int *)(a1 + 592);
  if ( (_DWORD)v4 != v2 && ((_DWORD)v4 != 4 || !v2) )
  {
    if ( !v2 )
      goto LABEL_10;
    if ( v2 != 1 && v2 != 2 )
    {
      if ( v2 != 3 )
        goto LABEL_11;
      goto LABEL_10;
    }
    if ( (_DWORD)v4 != 3 )
    {
LABEL_10:
      HampAppIssueStateChangeNotification(a1, v2);
      HampPkgUpdateApplicationStateCounters(*(_QWORD *)(a1 + 48), v2, *(unsigned int *)(a1 + 592));
      *(_DWORD *)(a1 + 592) = v2;
    }
  }
LABEL_11:
  HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)a1, v4);
}
