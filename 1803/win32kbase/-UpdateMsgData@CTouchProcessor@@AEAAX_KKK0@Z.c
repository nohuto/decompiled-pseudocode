/*
 * XREFs of ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C011EEEC
 * Callers:
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C010E714 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 * Callees:
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011ABA4 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011E1F8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateMsgData(struct _KTHREAD **this, _DWORD *a2, int a3, int a4, unsigned __int64 a5)
{
  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( (a2[9] & 0x10) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  a2[8] = a4;
  a2[7] = a3;
  if ( a5 )
  {
    if ( (*(_DWORD *)(a5 + 36) & 0x20) != 0 )
    {
      if ( (a2[9] & 0x20) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
      CTouchProcessor::ReferenceMsgData((__int64)this, (__int64)a2, 1);
      CTouchProcessor::UnreferenceMsgData((__int64)this, a5, 1);
    }
    *(_DWORD *)(a5 + 36) |= 0x10u;
  }
}
