/*
 * XREFs of ?SetAnimatedProperty@CColorGradientStop@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180012EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180051938 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180051998 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorGradientStop::SetAnimatedProperty(
        CColorGradientStop *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  void (__fastcall *v5)(CColorGradientStop *, __int64, CColorGradientStop *); // rax

  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    v5 = *(void (__fastcall **)(CColorGradientStop *, __int64, CColorGradientStop *))(*(_QWORD *)this + 64LL);
    if ( (char *)v5 == (char *)CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(this, 10LL, this);
    else
      v5(this, 10LL, this);
  }
  return 0LL;
}
