/*
 * XREFs of ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C0138DE8
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0139E9C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z @ 0x1C0136704 (-CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C013BACC (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 */

void __fastcall CPTPEngine::HandleButtonSuppressionAndPendingUps(CPTPEngine *this, struct PTPInput *a2, int a3)
{
  unsigned int v3; // eax
  int v7; // edi
  int v8; // ecx

  v3 = *((_DWORD *)this + 824);
  if ( (v3 & 1) == 0 )
  {
    v7 = *((_DWORD *)this + 750) & 0x10;
    if ( (v3 & 0x1000) != 0 )
      goto LABEL_13;
    if ( v7 )
    {
      if ( *((_DWORD *)this + 26) == 2 && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow(this, a2, 8u, 0, 0)
        || *((_DWORD *)this + 743)
        || *((_DWORD *)this + 817) && !a3 )
      {
        v8 = 4096;
      }
      else
      {
        v8 = 0;
      }
      v3 = v8 | *((_DWORD *)this + 824) & 0xFFFFEFFF;
      *((_DWORD *)this + 824) = v3;
    }
    if ( (v3 & 0x1000) != 0 )
    {
LABEL_13:
      if ( v7 )
      {
        *((_DWORD *)this + 750) &= ~0x10u;
      }
      else
      {
        v3 &= ~0x1000u;
        *((_DWORD *)this + 824) = v3;
      }
    }
    else if ( v7 )
    {
      CPTPEngine::CancelMouseUpTimer(this, *((_DWORD *)a2 + 6) - *((_DWORD *)this + 820), 1);
      v3 = *((_DWORD *)this + 824);
    }
  }
  if ( (v3 & 2) == 0
    && (v3 & 4) == 0
    && ((*((_DWORD *)this + 750) & 0x20) != 0 || (*((_DWORD *)this + 750) & 0x40) != 0) )
  {
    CPTPEngine::CancelMouseUpTimer(this, *((_DWORD *)a2 + 6) - *((_DWORD *)this + 820), 1);
  }
}
