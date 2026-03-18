/*
 * XREFs of ?SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z @ 0x18002BEA0
 * Callers:
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18002B720 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRotationAxis@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS@@@Z @ 0x18002BB8C (-ProcessSetRotationAxis@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRAN.c)
 * Callees:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x180029C8C (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x18002ADE0 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CComponentTransform3D::SetRotationAxis(CComponentTransform3D *this, float a2, float a3, float a4)
{
  unsigned int v5; // ebx
  float v6; // edx
  unsigned __int64 v7; // rcx
  int v9; // eax
  unsigned __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  float v11; // [rsp+38h] [rbp-20h]

  v10 = __PAIR64__(LODWORD(a3), LODWORD(a2));
  v11 = a4;
  v5 = 0;
  D3DXVec3Normalize((struct D2DVector3 *)&v10, (const struct D2DVector3 *)&v10);
  v6 = v11;
  v7 = *(_QWORD *)((char *)this + 172) - v10;
  if ( !v7 )
    v7 = *((unsigned int *)this + 45) - (unsigned __int64)LODWORD(v11);
  if ( v7 )
  {
    *(_QWORD *)((char *)this + 172) = v10;
    *((float *)this + 45) = v6;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v9 = CPropertyChangeResource::NotifyVector3PropertyChanged(
           this,
           21LL,
           (CComponentTransform3D *)((char *)this + 172));
    v5 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x137u);
    else
      CResource::InvalidateAnimationSources(this, 0x15u);
  }
  return v5;
}
