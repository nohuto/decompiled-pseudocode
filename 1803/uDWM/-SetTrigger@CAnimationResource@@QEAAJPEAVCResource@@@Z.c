/*
 * XREFs of ?SetTrigger@CAnimationResource@@QEAAJPEAVCResource@@@Z @ 0x1800A72DC
 * Callers:
 *     ?GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAnimationResource@@@Z @ 0x180093A70 (-GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAni.c)
 *     ?SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCResource@@@Z @ 0x180094330 (-SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationResource::SetTrigger(CAnimationResource *this, struct CResource *a2)
{
  __int64 result; // rax

  result = 2147942405LL;
  if ( !*((_BYTE *)this + 81) && !*((_QWORD *)this + 12) )
  {
    *((_QWORD *)this + 12) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    return 0LL;
  }
  return result;
}
