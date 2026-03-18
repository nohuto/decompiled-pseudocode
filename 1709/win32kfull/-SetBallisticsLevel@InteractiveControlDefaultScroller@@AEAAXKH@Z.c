/*
 * XREFs of ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1C0223460
 * Callers:
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAVInteractiveControlDevice@@PEAUtagWND@@@Z @ 0x1C022314C (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAVInteractiveControlDevice@@PEAUtagWND@@@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1C02234D4 (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

void __fastcall InteractiveControlDefaultScroller::SetBallisticsLevel(
        InteractiveControlDefaultScroller *this,
        unsigned int a2,
        int a3)
{
  __int64 v3; // rdi
  int v5; // ebx
  int v6; // ecx

  v3 = 3LL;
  if ( *((_DWORD *)this + 14) != 2 )
    v3 = a2;
  if ( *((_DWORD *)this + 6) != (_DWORD)v3 || a3 )
  {
    *((_DWORD *)this + 6) = v3;
    v5 = *((_DWORD *)InteractiveControlManager::Instance() + 43);
    if ( v5 == *((_DWORD *)InteractiveControlManager::Instance() + 44) )
      v6 = dword_1C03340F4[2 * v3];
    else
      v6 = *((_DWORD *)InteractiveControlManager::Instance() + 43);
    *((_DWORD *)this + 7) = v6;
  }
}
