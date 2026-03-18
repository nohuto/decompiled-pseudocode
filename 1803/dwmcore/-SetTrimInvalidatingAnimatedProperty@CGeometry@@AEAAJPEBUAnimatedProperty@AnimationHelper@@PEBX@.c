/*
 * XREFs of ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18018FE40
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180051938 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180051998 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CGeometry::SetTrimInvalidatingAnimatedProperty(
        CGeometry *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    *(_WORD *)((char *)this + 129) = 257;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
  return 0LL;
}
