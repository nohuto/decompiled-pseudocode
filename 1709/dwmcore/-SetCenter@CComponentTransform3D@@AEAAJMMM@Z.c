/*
 * XREFs of ?SetCenter@CComponentTransform3D@@AEAAJMMM@Z @ 0x180095E6C
 * Callers:
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180095F80 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetCenterPoint@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETCENTERPOINT@@@Z @ 0x180096048 (-ProcessSetCenterPoint@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x180096264 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CComponentTransform3D::SetCenter(CComponentTransform3D *this, float a2, float a3, float a4)
{
  unsigned int v4; // edi
  signed int v7; // eax
  _DWORD v8[4]; // [rsp+30h] [rbp-58h] BYREF

  v4 = 0;
  if ( *((float *)this + 40) != a2 || *((float *)this + 41) != a3 || *((float *)this + 42) != a4 )
  {
    *((float *)this + 40) = a2;
    *((float *)this + 41) = a3;
    *((float *)this + 42) = a4;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    *(float *)v8 = a2;
    *(float *)&v8[1] = a3;
    *(float *)&v8[2] = a4;
    v7 = CPropertyChangeResource::NotifyVector3PropertyChanged(this, 0x12u, (const struct D2DVector3 *)v8);
    v4 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x12Fu);
    else
      CResource::InvalidateAnimationSources(this, 0x12u);
  }
  return v4;
}
