/*
 * XREFs of ?SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z @ 0x18002BC7C
 * Callers:
 *     ?ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX@@@Z @ 0x18002BBE0 (-ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTT.c)
 * Callees:
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DMatrix@@@Z @ 0x18002AEA8 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DMatrix@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetTransformMatrix(CComponentTransform3D *this, const struct D2DMatrix *a2)
{
  __int128 v3; // xmm3
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx

  v3 = *((_OWORD *)a2 + 1);
  v5 = *((_OWORD *)a2 + 2);
  v6 = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 216) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 232) = v3;
  *(_OWORD *)((char *)this + 248) = v5;
  *(_OWORD *)((char *)this + 264) = v6;
  *((_DWORD *)this + 70) = 0;
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  v8 = CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(this, v7, a2);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1A2u);
  else
    CResource::InvalidateAnimationSources(this, 0x11u);
  return v9;
}
