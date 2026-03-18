/*
 * XREFs of ?SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z @ 0x18002BD38
 * Callers:
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18002B720 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetOrientation@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETORIENTATION@@@Z @ 0x18002BB20 (-ProcessSetOrientation@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANS.c)
 * Callees:
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x180029BD0 (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18002A3E0 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DQuaternion@@@Z @ 0x18016BAF4 (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DQuaternion@@@Z.c)
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
  int v9; // eax
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&v10 = __PAIR64__(LODWORD(a3), LODWORD(a2));
  v6 = 0;
  *((_QWORD *)&v10 + 1) = __PAIR64__(a5, LODWORD(a4));
  D3DXQuaternionNormalize((struct D2DQuaternion *)&v10, (const struct D2DQuaternion *)&v10);
  if ( operator!=((float *)this + 49, (float *)&v10) )
  {
    *(_OWORD *)((char *)this + 196) = v10;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v9 = CPropertyChangeResource::NotifyQuaternionPropertyChanged(
           this,
           v8,
           (CComponentTransform3D *)((char *)this + 196));
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x175u);
    else
      CResource::InvalidateAnimationSources(this, 0x14u);
  }
  return v6;
}
