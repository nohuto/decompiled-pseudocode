/*
 * XREFs of ?SetOrientation@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18002B4E0
 * Callers:
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800518C0 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1800274FC (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180051998 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z @ 0x1801A24D8 (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetOrientation(
        CComponentTransform3D *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const struct D2DQuaternion *a3)
{
  unsigned int v4; // edi
  int v6; // eax
  float v7[6]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  D3DXQuaternionNormalize((struct D2DQuaternion *)v7, a3);
  if ( *((float *)this + 49) != v7[0]
    || *((float *)this + 50) != v7[1]
    || *((float *)this + 51) != v7[2]
    || *((float *)this + 52) != v7[3] )
  {
    *(_OWORD *)((char *)this + 196) = *(_OWORD *)v7;
    CResource::InvalidateAnimationSources(this, 0x14u);
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v6 = CPropertyChangeResource::NotifyQuaternionPropertyChanged(
           this,
           0x14u,
           (CComponentTransform3D *)((char *)this + 196));
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x155u);
  }
  return v4;
}
