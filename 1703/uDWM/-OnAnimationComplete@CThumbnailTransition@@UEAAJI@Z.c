/*
 * XREFs of ?OnAnimationComplete@CThumbnailTransition@@UEAAJI@Z @ 0x18009EBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x18009EE70 (-StopAnimation@CThumbnailTransition@@QEAAXXZ.c)
 */

__int64 __fastcall CThumbnailTransition::OnAnimationComplete(CThumbnailTransition *this, int a2)
{
  if ( *((_DWORD *)this + 4) == a2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)this - 2);
    CThumbnailTransition::StopAnimation((CThumbnailTransition *)((char *)this - 16));
    *((_DWORD *)this + 4) = -1;
    CBaseObject::Release((CThumbnailTransition *)((char *)this - 16));
  }
  return 0LL;
}
