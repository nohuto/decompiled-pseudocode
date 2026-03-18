/*
 * XREFs of ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180097090
 * Callers:
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800518C0 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x18002B318 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180051998 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComponentTransform2D::SetRotationAngle(
        CComponentTransform2D *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  unsigned int v3; // ebx
  int v6; // eax

  v3 = 0;
  if ( *((float *)this + 46) != *(float *)a3 )
  {
    *((_DWORD *)this + 46) = *a3;
    CResource::InvalidateAnimationSources(this, 3);
    CResource::InvalidateAnimationSources(this, 4);
    (*(void (__fastcall **)(CComponentTransform2D *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
    v6 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 3u, *((float *)this + 46));
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xDAu);
  }
  return v3;
}
