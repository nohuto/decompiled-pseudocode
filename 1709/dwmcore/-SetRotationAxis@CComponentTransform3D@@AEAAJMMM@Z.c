/*
 * XREFs of ?SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z @ 0x180095DE4
 * Callers:
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180095F80 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRotationAxis@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS@@@Z @ 0x180096078 (-ProcessSetRotationAxis@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRAN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x180096264 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800BA844 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CComponentTransform3D::SetRotationAxis(CComponentTransform3D *this, float a2, float a3, float a4)
{
  unsigned int v5; // ebx
  float v6; // edx
  unsigned __int64 v7; // rcx
  signed int v9; // eax
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
           0x15u,
           (CComponentTransform3D *)((char *)this + 172));
    v5 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x14Du);
    else
      CResource::InvalidateAnimationSources(this, 0x15u);
  }
  return v5;
}
