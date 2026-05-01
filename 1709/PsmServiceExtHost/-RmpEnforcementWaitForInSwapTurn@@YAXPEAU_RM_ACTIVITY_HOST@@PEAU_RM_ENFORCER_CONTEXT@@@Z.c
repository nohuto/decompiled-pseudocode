/*
 * XREFs of ?RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x18001B8A4
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001B684 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180004090 (CempLockSleepConditionVariableExclusive.c)
 *     ?RmpEnforcementIsHostAllowedToInSwap@@YAKPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x18001B97C (-RmpEnforcementIsHostAllowedToInSwap@@YAKPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall RmpEnforcementWaitForInSwapTurn(struct _RM_ACTIVITY_HOST *a1, struct _RM_ENFORCER_CONTEXT *a2)
{
  unsigned int v4; // edx
  struct _RM_ENFORCER_CONTEXT **v5; // rcx
  char *v6; // rdi
  __int64 v7; // rcx
  char **v8; // rax

  if ( !RmpEnforcementIsHostAllowedToInSwap(a1, a2) )
  {
    *((_DWORD *)a1 + 252) |= 1u;
    v5 = (struct _RM_ENFORCER_CONTEXT **)*((_QWORD *)a2 + 4);
    v6 = (char *)a1 + 1024;
    if ( *v5 != (struct _RM_ENFORCER_CONTEXT *)((char *)a2 + 24) )
      __fastfail(3u);
    *((_QWORD *)a1 + 129) = v5;
    *(_QWORD *)v6 = (char *)a2 + 24;
    *v5 = (struct _RM_ENFORCER_CONTEXT *)v6;
    *((_QWORD *)a2 + 4) = v6;
    HampHostReleaseLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)a1 + 64), v4);
    do
      CempLockSleepConditionVariableExclusive((__int64)&RmpGlobalLock, (__int64)a1 + 1000);
    while ( !RmpEnforcementIsHostAllowedToInSwap(a1, a2) );
    HampHostAcquireLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)a1 + 64), 0);
    *((_DWORD *)a1 + 252) &= ~1u;
    v7 = *(_QWORD *)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = (char **)*((_QWORD *)a1 + 129), *v8 != v6) )
      __fastfail(3u);
    *v8 = (char *)v7;
    *(_QWORD *)(v7 + 8) = v8;
  }
  ++*((_DWORD *)a2 + 10);
}
