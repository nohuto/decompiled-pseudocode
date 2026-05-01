/*
 * XREFs of ?HampHostComputeActivityCounters@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043660
 * Callers:
 *     ?PendReasonChanged@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_KW4_HAM_PEND_STATE@@@Z @ 0x180045CF4 (-PendReasonChanged@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_KW4_HAM_PEND_STATE@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18004750C (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActNotifyRmStarted@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047A8C (-HampActNotifyRmStarted@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampHostEvaluatePendState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043720 (-HampHostEvaluatePendState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043888 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800438A0 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 */

void __fastcall HampHostComputeActivityCounters(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v2; // edi
  struct _HAM_ACTIVITY *i; // rax
  int v4; // r8d

  HampHostEvaluatePendState(a1);
  v2 = (*((_DWORD *)a1 + 157) >> 15) & 1;
  *((_DWORD *)a1 + 157) &= 0xFFFF1FFF;
  for ( i = HampHostGetFirstActivity(a1); i; i = HampHostGetNextActivity(i) )
  {
    if ( *((_BYTE *)i + 500) == 3 )
    {
      *((_DWORD *)a1 + 157) |= 0x2000u;
      if ( *((char *)i + 104) < 0 )
        *((_DWORD *)a1 + 157) |= 0x4000u;
      if ( (*((_DWORD *)i + 26) & 0x100) != 0 )
        *((_DWORD *)a1 + 157) |= 0x8000u;
    }
  }
  if ( ((*((_DWORD *)a1 + 157) >> 13) & 1) != v4 )
    RtlWakeAllConditionVariable((char *)a1 + 16);
  if ( ((*((_DWORD *)a1 + 157) >> 15) & 1) != v2 )
    RtlWakeAllConditionVariable((char *)a1 + 632);
}
