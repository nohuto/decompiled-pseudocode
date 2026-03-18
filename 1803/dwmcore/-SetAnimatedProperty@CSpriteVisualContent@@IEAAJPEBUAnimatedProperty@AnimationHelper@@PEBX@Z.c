/*
 * XREFs of ?SetAnimatedProperty@CSpriteVisualContent@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18009CD20
 * Callers:
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800518C0 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180051998 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     memcmp_0 @ 0x1800DD3F5 (memcmp_0.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisualContent::SetAnimatedProperty(
        CSpriteVisualContent *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  char *v4; // rbp
  __int64 (__fastcall *v7)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *); // rax

  v4 = (char *)this + *((_QWORD *)a2 + 1);
  if ( memcmp_0(v4, a3, *((_QWORD *)a2 + 2)) )
  {
    memcpy_0(v4, a3, *((_QWORD *)a2 + 2));
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    v7 = *(__int64 (__fastcall **)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *))(*(_QWORD *)this + 64LL);
    if ( v7 == CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(this, 0LL, this);
    else
      v7(this, 0LL, this);
  }
  return 0LL;
}
