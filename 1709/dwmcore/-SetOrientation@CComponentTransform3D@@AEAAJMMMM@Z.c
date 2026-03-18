/*
 * XREFs of ?SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z @ 0x180095C7C
 * Callers:
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180095F80 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetOrientation@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETORIENTATION@@@Z @ 0x18009600C (-ProcessSetOrientation@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18009EEC0 (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??9D2DQuaternion@@QEBAHAEBU0@@Z @ 0x1800BC1CC (--9D2DQuaternion@@QEBAHAEBU0@@Z.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DQuaternion@@@Z @ 0x1801754E0 (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetOrientation(
        CComponentTransform3D *this,
        float a2,
        float a3,
        float a4,
        unsigned int a5)
{
  unsigned int v6; // ebx
  unsigned int v8; // edx
  signed int v9; // eax
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&v10 = __PAIR64__(LODWORD(a3), LODWORD(a2));
  v6 = 0;
  *((_QWORD *)&v10 + 1) = __PAIR64__(a5, LODWORD(a4));
  D3DXQuaternionNormalize((struct D2DQuaternion *)&v10, (const struct D2DQuaternion *)&v10);
  if ( (unsigned int)D2DQuaternion::operator!=((char *)this + 196, &v10) )
  {
    *(_OWORD *)((char *)this + 196) = v10;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v9 = CPropertyChangeResource::NotifyQuaternionPropertyChanged(
           this,
           v8,
           (CComponentTransform3D *)((char *)this + 196));
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x18Bu);
    else
      CResource::InvalidateAnimationSources(this, 0x14u);
  }
  return v6;
}
