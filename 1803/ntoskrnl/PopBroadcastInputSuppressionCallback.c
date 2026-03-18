/*
 * XREFs of PopBroadcastInputSuppressionCallback @ 0x140613C70
 * Callers:
 *     <none>
 * Callees:
 *     PopEvaluateInputSuppressionAction @ 0x140613CE0 (PopEvaluateInputSuppressionAction.c)
 */

__int64 __fastcall PopBroadcastInputSuppressionCallback(_QWORD *a1)
{
  _QWORD *v1; // r8
  __int64 v2; // rax
  __int64 v3; // rdx

  v1 = a1;
  v2 = *a1;
  v3 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *a1 )
    v3 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - a1[1];
  if ( !v3 )
    goto LABEL_10;
  a1 = (_QWORD *)(*(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - v2);
  if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == v2 )
    a1 = (_QWORD *)(*(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - v1[1]);
  if ( !a1 )
    goto LABEL_10;
  a1 = (_QWORD *)(*(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - v2);
  if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == v2 )
    a1 = (_QWORD *)(*(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - v1[1]);
  if ( !a1 )
LABEL_10:
    PopEvaluateInputSuppressionAction(a1, v3, v1);
  return 0LL;
}
