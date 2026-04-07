/*
 * XREFs of ?AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ @ 0x1800861F4
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F620 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030490 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x18008657C (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
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
  if ( dword_1800C447C )
    TickCount = dword_1800C4480;
  else
    dword_1800C447C = TickCount;
  v3 = v2 - TickCount;
  if ( v2 < TickCount )
    --v3;
  dword_1800C4480 = v2;
  *(double *)&xmmword_1800C4488 = *(double *)&xmmword_1800C4488 + (double)(int)(v3 * dword_1800C4470);
  *((double *)&xmmword_1800C4488 + 1) = *((double *)&xmmword_1800C4488 + 1) + (double)(int)(v3 * dword_1800C4474);
}
