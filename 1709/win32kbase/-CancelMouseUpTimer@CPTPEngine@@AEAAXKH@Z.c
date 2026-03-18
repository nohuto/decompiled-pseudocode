/*
 * XREFs of ?CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z @ 0x1C01326C8
 * Callers:
 *     ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C0134C50 (-HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z.c)
 *     ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x1C0135BA0 (-ProcessTimer@CPTPEngine@@MEAAJXZ.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0135CC0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z @ 0x1C0137118 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z.c)
 *     ?SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z @ 0x1C013723C (-SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z.c)
 */

void __fastcall CPTPEngine::CancelMouseUpTimer(CPTPEngine *this, unsigned int a2, int a3)
{
  unsigned int *v3; // rdi

  v3 = (unsigned int *)((char *)this + 3264);
  if ( *((_DWORD *)this + 816) )
  {
    if ( *((_DWORD *)this + 815) )
    {
      CBasePTPEngine::SendTimerOutput(this, 1LL);
      *((_DWORD *)this + 815) = 0;
    }
    if ( a3 )
      CPTPEngine::SendMouseUpIfPending(this, v3, a2);
  }
}
