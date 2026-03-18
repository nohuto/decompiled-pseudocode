/*
 * XREFs of ?MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136380
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C013804C (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 */

void __fastcall CPTPEngine::MarkRecentlyTrackedContactsAsNonResting(CPTPEngine *this, struct PTPInput *a2)
{
  struct CContactState *v2; // r10
  struct CContactState *v4; // rbx
  CPTPEngine *v5; // r11

  v2 = (CPTPEngine *)((char *)this + 1168);
  v4 = (CPTPEngine *)((char *)this + 2896);
  v5 = this;
  while ( v2 != v4 )
  {
    if ( (*(_DWORD *)v2 & 1) != 0
      && (*(_DWORD *)v2 & 0x100) != 0
      && *(_QWORD *)a2 - *((_QWORD *)v2 + 10) < *((_QWORD *)v5 + 12)
                                              * (unsigned __int64)*((unsigned int *)v5 + 87)
                                              / 0x3E8 )
    {
      CPTPEngine::SetContactRestingState(v5, v2, 0);
    }
    v2 = (struct CContactState *)((char *)v2 + 288);
  }
}
