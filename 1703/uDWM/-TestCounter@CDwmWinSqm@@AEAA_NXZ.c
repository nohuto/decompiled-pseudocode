/*
 * XREFs of ?TestCounter@CDwmWinSqm@@AEAA_NXZ @ 0x18008655C
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F620 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030490 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x18008657C (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDwmWinSqm::TestCounter(CDwmWinSqm *this)
{
  if ( ++dword_1800C4478 == 50 )
  {
    dword_1800C4478 = 0;
    return 1;
  }
  else
  {
    return 0;
  }
}
