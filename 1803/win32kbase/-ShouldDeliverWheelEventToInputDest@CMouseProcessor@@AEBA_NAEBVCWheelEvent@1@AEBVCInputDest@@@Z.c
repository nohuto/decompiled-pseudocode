/*
 * XREFs of ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x1C0135EF8
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01354D0 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0036E3C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0036F78 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     IsShellProcess @ 0x1C003C1D4 (IsShellProcess.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CMouseProcessor::ShouldDeliverWheelEventToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2,
        const struct CInputDest *a3)
{
  char v3; // bl
  __int64 v6; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v8; // rax

  v3 = 0;
  if ( !*(_DWORD *)a3 )
    return 0;
  if ( *((_DWORD *)a2 + 2) == 2 || (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) != 0 )
    return 1;
  v6 = *(unsigned int *)(*(_QWORD *)a2 + 88LL);
  if ( (v6 & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2);
  if ( CInputDest::IsCompositionInput(a3) )
    return 1;
  ThreadInfo = CInputDest::GetThreadInfo(a3);
  if ( !ThreadInfo || (*(_DWORD *)(*((_QWORD *)ThreadInfo + 52) + 812LL) & 0x30) != 0 )
  {
    v8 = CInputDest::GetThreadInfo(a3);
    if ( !v8 || !(unsigned int)IsShellProcess(*((_QWORD *)v8 + 52)) )
      return 1;
  }
  return v3;
}
