/*
 * XREFs of ?TestCounter@CDwmWinSqm@@AEAA_NXZ @ 0x18007D95C
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180028460 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800292A0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x18007D97C (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDwmWinSqm::TestCounter(CDwmWinSqm *this)
{
  if ( ++dword_1800C2508 == 50 )
  {
    dword_1800C2508 = 0;
    return 1;
  }
  else
  {
    return 0;
  }
}
