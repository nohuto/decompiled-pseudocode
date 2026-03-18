/*
 * XREFs of ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C013804C
 * Callers:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C01358D8 (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 *     ?MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136380 (-MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C0138634 (-UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z.c)
 *     ?UpdateTPContactState@CPTPEngine@@AEAAXIPEAUPTPEnginePointerNode@@@Z @ 0x1C0138AF4 (-UpdateTPContactState@CPTPEngine@@AEAAXIPEAUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPTPEngine::SetContactRestingState(CPTPEngine *this, struct CContactState *a2, int a3)
{
  int v3; // r9d
  int v4; // r8d

  v3 = *(_DWORD *)a2;
  if ( -__CFSHR__(*(_DWORD *)a2, 9) != a3 && (v3 & 1) != 0 )
  {
    v4 = v3 ^ (v3 ^ (a3 << 8)) & 0x100;
    *(_DWORD *)a2 = v4;
    if ( (v4 & 0x100) != 0 )
    {
      ++*((_DWORD *)this + 729);
      --*((_DWORD *)this + 730);
    }
    else
    {
      ++*((_DWORD *)this + 730);
      --*((_DWORD *)this + 729);
    }
  }
}
