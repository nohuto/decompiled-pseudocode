/*
 * XREFs of ?SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z @ 0x180095B90
 * Callers:
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180095F80 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX@@@Z @ 0x1800960CC (-ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTT.c)
 * Callees:
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005A8E0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DMatrix@@@Z @ 0x180096324 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DMatrix@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetTransformMatrix(CComponentTransform3D *this, const struct D2DMatrix *a2)
{
  __int128 v2; // xmm1
  __int128 v5; // xmm2
  unsigned int v6; // ebx
  __int128 v7; // xmm3
  __int128 v8; // xmm4
  __int64 v9; // rcx
  __int128 v10; // xmm4
  unsigned int v11; // edx
  signed int v12; // eax
  _OWORD v14[4]; // [rsp+30h] [rbp-58h] BYREF
  int v15; // [rsp+70h] [rbp-18h]

  v2 = *(_OWORD *)a2;
  v5 = *((_OWORD *)a2 + 1);
  v6 = 0;
  v7 = *((_OWORD *)a2 + 2);
  v15 = 0;
  v8 = *((_OWORD *)a2 + 3);
  v14[0] = v2;
  v14[1] = v5;
  v14[2] = v7;
  v14[3] = v8;
  if ( !CMILMatrix::IsEqualTo<0>((float *)this + 54, (float *)v14) )
  {
    *(_OWORD *)v9 = v2;
    *(_OWORD *)(v9 + 16) = v5;
    *(_OWORD *)(v9 + 32) = v7;
    *(_OWORD *)(v9 + 48) = v10;
    *(_DWORD *)(v9 + 64) = 0;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v12 = CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(this, v11, a2);
    v6 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x1BCu);
    else
      CResource::InvalidateAnimationSources(this, 0x11u);
  }
  return v6;
}
