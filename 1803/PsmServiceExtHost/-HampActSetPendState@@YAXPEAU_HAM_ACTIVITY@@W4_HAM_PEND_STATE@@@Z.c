/*
 * XREFs of ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180005400
 * Callers:
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x1800114F0 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180029E5C (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampActSetPendState(__int64 a1, unsigned __int8 a2)
{
  char *v4; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v5; // rcx

  v4 = *(char **)(a1 + 512);
  if ( a2 == 5 )
  {
    if ( v4 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
      *(_QWORD *)(a1 + 512) = 0LL;
    }
  }
  else if ( a2 )
  {
    RtlQueryPerformanceCounter(&v4[8 * a2]);
  }
  v5 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
  *(_BYTE *)(a1 + 541) = a2;
  HampHostUpdateActivityState(v5);
}
