/*
 * XREFs of ?SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z @ 0x180174384
 * Callers:
 *     ?ProcessSetCommonParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMATION_SETCOMMONPARAMETERS@@@Z @ 0x180173DEC (-ProcessSetCommonParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMAT.c)
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801745E4 (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CNaturalAnimation::SetStartTimeIfNecessary(CNaturalAnimation *this, __int64 a2)
{
  char v2; // al

  v2 = *((_BYTE *)this + 524);
  if ( (v2 & 2) == 0 )
  {
    *((_QWORD *)this + 42) = a2 - Time::s_luBegin.QuadPart;
    *((_BYTE *)this + 524) = v2 | 2;
  }
}
