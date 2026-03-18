/*
 * XREFs of ?HasEnded@CAnimation@@MEAA_NXZ @ 0x18002CAE0
 * Callers:
 *     ?IsAnimate@CAnimation@@UEAA_NXZ @ 0x18002D030 (-IsAnimate@CAnimation@@UEAA_NXZ.c)
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800B9950 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAnimation::HasEnded(CAnimation *this)
{
  bool result; // al

  if ( (*((_BYTE *)this + 112) & 2) != 0 )
    return 1;
  result = 0;
  if ( !*((_QWORD *)this + 15) )
    return 1;
  return result;
}
