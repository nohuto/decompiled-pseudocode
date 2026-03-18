/*
 * XREFs of ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z @ 0x1C0137118
 * Callers:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z @ 0x1C01326C8 (-CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0133D7C (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C01358D8 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0135CC0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C01370C0 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z.c)
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
    CBasePTPEngine::SendMouseOutput((__int64)this, v4, *((_QWORD *)this + 409), a3);
  }
}
