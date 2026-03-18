/*
 * XREFs of ?SetScale@CComponentTransform3D@@AEAAJMMM@Z @ 0x18002BDA4
 * Callers:
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18002B720 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetScale@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETSCALE@@@Z @ 0x18002BC4C (-ProcessSetScale@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D.c)
 * Callees:
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x18002ADE0 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CComponentTransform3D::SetScale(CComponentTransform3D *this, float a2, float a3, float a4)
{
  unsigned int v4; // edi
  int v7; // eax
  _DWORD v8[4]; // [rsp+30h] [rbp-58h] BYREF

  v4 = 0;
  if ( *((float *)this + 46) != a2 || *((float *)this + 47) != a3 || *((float *)this + 48) != a4 )
  {
    *((float *)this + 46) = a2;
    *((float *)this + 47) = a3;
    *((float *)this + 48) = a4;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    *(float *)v8 = a2;
    *(float *)&v8[1] = a3;
    *(float *)&v8[2] = a4;
    v7 = CPropertyChangeResource::NotifyVector3PropertyChanged(this, 22LL, (const struct D2DVector3 *)v8);
    v4 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x156u);
    else
      CResource::InvalidateAnimationSources(this, 0x16u);
  }
  return v4;
}
