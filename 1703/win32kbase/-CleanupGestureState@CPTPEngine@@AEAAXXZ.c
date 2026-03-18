/*
 * XREFs of ?CleanupGestureState@CPTPEngine@@AEAAXXZ @ 0x1C0133368
 * Callers:
 *     ?CacheGestureState@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0133098 (-CacheGestureState@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?CreateShellGestureFrame@CPTPEngine@@AEAAXPEBUPTPInput@@@Z @ 0x1C01333CC (-CreateShellGestureFrame@CPTPEngine@@AEAAXPEBUPTPInput@@@Z.c)
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1C0134A2C (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z.c)
 *     ?GestureContactProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@HPEAH@Z @ 0x1C0135DD0 (-GestureContactProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@HPEAH@Z.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x1C0137CA4 (-SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEngin.c)
 */

void __fastcall CPTPEngine::CleanupGestureState(CPTPEngine *this)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx

  v2 = (_DWORD *)((char *)this + 1168);
  v3 = 6LL;
  do
  {
    *v2 &= ~0x80u;
    v2 += 72;
    --v3;
  }
  while ( v3 );
  *((_DWORD *)this + 805) &= ~0x2000u;
  if ( *((_QWORD *)this + 399) )
  {
    CBasePTPEngine::SendGestureOutput(this, 4LL, 0LL, 0LL, 0LL);
    *((_QWORD *)this + 399) = 0LL;
  }
}
