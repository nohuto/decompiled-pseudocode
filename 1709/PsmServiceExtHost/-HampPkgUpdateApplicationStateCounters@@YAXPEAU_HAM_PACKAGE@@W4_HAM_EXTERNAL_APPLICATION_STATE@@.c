/*
 * XREFs of ?HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@1@Z @ 0x180046ECC
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001B480 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800438BC (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180046050 (-HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180046450 (-HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z.c)
 * Callees:
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800465B4 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgIssueStateChangeNotification@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180046CEC (-HampPkgIssueStateChangeNotification@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z.c)
 */

void __fastcall HampPkgUpdateApplicationStateCounters(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned int v7; // edi
  _DWORD *v8; // rax

  v3 = a3;
  v5 = (int)a2;
  HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)a1, a2);
  if ( (_DWORD)v3 != 4 )
    --*(_DWORD *)(a1 + 4 * v3 + 336);
  if ( (_DWORD)v5 != 4 )
    ++*(_DWORD *)(a1 + 4 * v5 + 336);
  v7 = 0;
  v8 = (_DWORD *)(a1 + 336);
  do
  {
    if ( *v8 )
      break;
    ++v7;
    ++v8;
  }
  while ( v7 < 4 );
  if ( v7 == 4 )
    v7 = 3;
  if ( *(_DWORD *)(a1 + 352) != v7 )
  {
    HampPkgIssueStateChangeNotification(a1, v7);
    *(_DWORD *)(a1 + 352) = v7;
  }
  HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)a1, v6);
}
