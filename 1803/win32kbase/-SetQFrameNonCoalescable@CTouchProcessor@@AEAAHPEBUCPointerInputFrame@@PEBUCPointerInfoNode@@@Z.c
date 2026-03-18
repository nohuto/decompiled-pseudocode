/*
 * XREFs of ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C011D49C
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C011BCA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C011D060 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0117308 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetQFrameNonCoalescable(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 result; // rax

  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, 0LL);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
  v7 = *((unsigned int *)a3 + 2);
  if ( (unsigned int)v7 >= *((_DWORD *)a2 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v7);
    v7 = *((unsigned int *)a3 + 2);
  }
  v8 = *((_QWORD *)a2 + 13);
  v9 = 224LL * (unsigned int)v7;
  if ( *(_DWORD *)(v9 + v8) != (_DWORD)v7 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v7);
    LODWORD(v7) = *((_DWORD *)a3 + 2);
    v8 = *((_QWORD *)a2 + 13);
  }
  result = 1LL;
  *(_DWORD *)(224LL * (unsigned int)v7 + v8 + 204) &= ~1u;
  return result;
}
