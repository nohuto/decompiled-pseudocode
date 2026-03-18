/*
 * XREFs of ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1C01332A0
 * Callers:
 *     ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C01360D0 (-HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z.c)
 *     ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x1C0136C30 (-ProcessTimer@CPTPEngine@@MEAAJXZ.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z @ 0x1C0137E38 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z.c)
 *     ?SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z @ 0x1C0137F5C (-SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z.c)
 */

void __fastcall CPTPEngine::CancelMouseUpTimer(CPTPEngine *this, int a2)
{
  unsigned int *v2; // rdi

  v2 = (unsigned int *)((char *)this + 3204);
  if ( *((_DWORD *)this + 801) )
  {
    if ( *((_DWORD *)this + 800) )
    {
      CBasePTPEngine::SendTimerOutput(this, 1LL);
      *((_DWORD *)this + 800) = 0;
    }
    if ( a2 )
      CPTPEngine::SendMouseUpIfPending(this, v2, *((_DWORD *)this + 802));
  }
}
