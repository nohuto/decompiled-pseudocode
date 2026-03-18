/*
 * XREFs of ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z @ 0x1C0137E38
 * Callers:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1C01332A0 (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAA?AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z @ 0x1C0134D64 (-DoTPMouseProcessing@CPTPEngine@@AEAA-AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C0137DE0 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z.c)
 */

void __fastcall CPTPEngine::SendMouseUpIfPending(CPTPEngine *this, unsigned int *a2, int a3)
{
  int v3; // eax
  int v4; // edx

  v3 = *a2;
  if ( *a2 )
  {
    *a2 = 0;
    v4 = 2;
    if ( v3 != 4 )
      v4 = 4;
    CBasePTPEngine::SendMouseOutput((__int64)this, v4, *(_QWORD *)((char *)this + 3212), a3);
  }
}
