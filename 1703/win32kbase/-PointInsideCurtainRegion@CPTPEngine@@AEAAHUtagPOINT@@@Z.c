/*
 * XREFs of ?PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z @ 0x1C01364C8
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C0138634 (-UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C007268C (PtInRect.c)
 */

__int64 __fastcall CPTPEngine::PointInsideCurtainRegion(CPTPEngine *this, struct tagPOINT a2)
{
  unsigned int v3; // r8d

  if ( !*((_DWORD *)this + 6) )
    return 0LL;
  LOBYTE(v3) = !PtInRect((_DWORD *)this + 12, *(_QWORD *)&a2);
  return v3;
}
