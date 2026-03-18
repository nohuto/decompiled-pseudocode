/*
 * XREFs of ?SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z @ 0x18019D688
 * Callers:
 *     ?ProcessSetCommonParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMATION_SETCOMMONPARAMETERS@@@Z @ 0x18019CFF4 (-ProcessSetCommonParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMAT.c)
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x18019D8EC (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CNaturalAnimation::SetStartTimeIfNecessary(CNaturalAnimation *this, __int64 a2)
{
  char v2; // al

  v2 = *((_BYTE *)this + 540);
  if ( (v2 & 2) == 0 )
  {
    *((_QWORD *)this + 44) = a2 - Time::s_luBegin.QuadPart;
    *((_BYTE *)this + 540) = v2 | 2;
  }
}
