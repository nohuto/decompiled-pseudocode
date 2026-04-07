/*
 * XREFs of ?AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ @ 0x18007D5F4
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180028460 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800292A0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x18007D97C (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDwmWinSqm::AdjustTimeScaledCount(CDwmWinSqm *this)
{
  DWORD TickCount; // eax
  unsigned int v2; // edx
  unsigned int v3; // ecx

  TickCount = GetTickCount();
  v2 = TickCount;
  if ( dword_1800C250C )
    TickCount = dword_1800C2510;
  else
    dword_1800C250C = TickCount;
  v3 = v2 - TickCount;
  if ( v2 < TickCount )
    --v3;
  dword_1800C2510 = v2;
  *(double *)&xmmword_1800C2518 = *(double *)&xmmword_1800C2518 + (double)(int)(v3 * dword_1800C2500);
  *((double *)&xmmword_1800C2518 + 1) = *((double *)&xmmword_1800C2518 + 1) + (double)(int)(v3 * dword_1800C2504);
}
