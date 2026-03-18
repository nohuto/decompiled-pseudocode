/*
 * XREFs of ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C0134C50
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0135CC0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z @ 0x1C01326C8 (-CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C013770C (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 */

void __fastcall CPTPEngine::HandleButtonSuppressionAndPendingUps(CPTPEngine *this, struct PTPInput *a2, int a3)
{
  int v3; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ecx

  v3 = *((_DWORD *)this + 820);
  if ( (v3 & 1) == 0 )
  {
    v7 = *((_DWORD *)this + 749) & 0x10;
    if ( (v3 & 0x1000) == 0 && v7 )
    {
      if ( *((_DWORD *)this + 26) == 2 && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow(this, a2, 8u, 0, 0)
        || *((_DWORD *)this + 743)
        || *((_DWORD *)this + 815) && !a3 )
      {
        v8 = 4096;
      }
      else
      {
        v8 = 0;
      }
      *((_DWORD *)this + 820) = v8 | *((_DWORD *)this + 820) & 0xFFFFEFFF;
    }
    v9 = *((_DWORD *)this + 820);
    if ( (v9 & 0x1000) != 0 )
    {
      if ( v7 )
        *((_DWORD *)this + 749) &= ~0x10u;
      else
        *((_DWORD *)this + 820) = v9 & 0xFFFFEFFF;
    }
    else if ( v7 )
    {
      if ( *((_DWORD *)this + 816) )
        *((_DWORD *)this + 820) = v9 & 0xFFFFFFF7;
      CPTPEngine::CancelMouseUpTimer(this, *((_DWORD *)a2 + 6) - *((_DWORD *)this + 817), 1);
    }
  }
  v10 = *((_DWORD *)this + 820);
  if ( (v10 & 2) == 0
    && (v10 & 4) == 0
    && ((*((_DWORD *)this + 749) & 0x20) != 0 || (*((_DWORD *)this + 749) & 0x40) != 0) )
  {
    if ( *((_DWORD *)this + 816) )
      *((_DWORD *)this + 820) = v10 & 0xFFFFFFF7;
    CPTPEngine::CancelMouseUpTimer(this, *((_DWORD *)a2 + 6) - *((_DWORD *)this + 817), 1);
  }
}
