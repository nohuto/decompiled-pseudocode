/*
 * XREFs of ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C0065830
 * Callers:
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00383C8 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C0134680 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00371A4 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MouseOwner::Set(CMouseProcessor::MouseOwner *this, const struct CInputDest *a2)
{
  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  CInputDest::operator=((__int64)this, (__int64)a2);
  _InterlockedExchange((volatile __int32 *)this + 46, 1);
}
