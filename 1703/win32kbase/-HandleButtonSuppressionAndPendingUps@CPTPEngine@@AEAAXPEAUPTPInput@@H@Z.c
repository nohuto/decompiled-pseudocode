/*
 * XREFs of ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C01360D0
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1C01332A0 (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C01383B0 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 */

void __fastcall CPTPEngine::HandleButtonSuppressionAndPendingUps(CPTPEngine *this, struct PTPInput *a2, int a3)
{
  int v3; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // ecx

  v3 = *((_DWORD *)this + 805);
  if ( (v3 & 1) == 0 )
  {
    v6 = *((_DWORD *)this + 732) & 0x10;
    if ( (v3 & 0x1000) == 0 && v6 )
    {
      if ( *((_DWORD *)this + 26) == 2 && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow(this, a2, 8u, 0, 0)
        || *((_DWORD *)this + 726)
        || *((_DWORD *)this + 800) && !a3 )
      {
        v7 = 4096;
      }
      else
      {
        v7 = 0;
      }
      *((_DWORD *)this + 805) = v7 | *((_DWORD *)this + 805) & 0xFFFFEFFF;
    }
    v8 = *((_DWORD *)this + 805);
    if ( (v8 & 0x1000) != 0 )
    {
      if ( v6 )
        *((_DWORD *)this + 732) &= ~0x10u;
      else
        *((_DWORD *)this + 805) = v8 & 0xFFFFEFFF;
    }
    else if ( v6 )
    {
      if ( *((_DWORD *)this + 801) )
        *((_DWORD *)this + 805) = v8 & 0xFFFFFFF7;
      CPTPEngine::CancelMouseUpTimer(this, 1);
    }
  }
  v9 = *((_DWORD *)this + 805);
  if ( (v9 & 2) == 0
    && (v9 & 4) == 0
    && ((*((_DWORD *)this + 732) & 0x20) != 0 || (*((_DWORD *)this + 732) & 0x40) != 0) )
  {
    if ( *((_DWORD *)this + 801) )
      *((_DWORD *)this + 805) = v9 & 0xFFFFFFF7;
    CPTPEngine::CancelMouseUpTimer(this, 1);
  }
}
