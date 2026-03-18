/*
 * XREFs of ?IsLastMsgData@CTouchProcessor@@AEAAH_K@Z @ 0x1C0117384
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0024C50 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CTouchProcessor::IsLastMsgData(struct _KTHREAD **this, __int64 a2)
{
  _QWORD *v3; // rbx

  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 != *(_QWORD *)(a2 + 8) )
    return 0LL;
  if ( *v3 != a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( v3[1] != a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( *((_WORD *)v3 - 128) != *(_WORD *)(a2 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  return *((_DWORD *)v3 - 63) == 3;
}
