/*
 * XREFs of ?HasEnded@CAnimation@@MEAA_NXZ @ 0x1800BC4E0
 * Callers:
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800BB9F0 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 *     ?IsAnimate@CAnimation@@UEAA_NPEA_N@Z @ 0x1800BC820 (-IsAnimate@CAnimation@@UEAA_NPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimation::HasEnded(CAnimation *this)
{
  __int64 result; // rax

  if ( (*((_BYTE *)this + 112) & 2) != 0 )
    return 1LL;
  result = 0LL;
  if ( !*((_QWORD *)this + 15) )
    return 1LL;
  return result;
}
