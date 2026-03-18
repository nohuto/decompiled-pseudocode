/*
 * XREFs of ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18002AFE4
 * Callers:
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18002B220 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@@Z @ 0x18002B360 (-NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV-$span@QEBUAnimatedProperty@.c)
 * Callees:
 *     ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001A4F8 (-NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x18002AF20 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x18002B158 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x18002B318 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z @ 0x1801A240C (-NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z @ 0x1801A24D8 (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z.c)
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x1801A25A4 (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyPropertyChanged(
        CPropertyChangeResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const struct _D3DCOLORVALUE *a3)
{
  int v3; // ebx
  unsigned int v4; // r10d
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // r9
  int v8; // eax
  int v10; // eax
  __int128 v11; // xmm1
  __int64 v12; // rcx
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD v16[2]; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v17[4]; // [rsp+50h] [rbp-48h] BYREF

  v3 = -2147024809;
  switch ( *((_DWORD *)a2 + 1) )
  {
    case 0x12:
      v10 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, *(_DWORD *)a2, a3->r);
LABEL_17:
      v3 = v10;
      goto LABEL_14;
    case 0x23:
      v10 = CPropertyChangeResource::NotifyVector2PropertyChanged(
              this,
              *(unsigned int *)a2,
              (const struct D2DVector2 *)a3);
      goto LABEL_17;
    case 0x34:
      v10 = CPropertyChangeResource::NotifyVector3PropertyChanged(this, *(_DWORD *)a2, (const struct D2DVector3 *)a3);
      goto LABEL_17;
    case 0x45:
      v10 = CPropertyChangeResource::NotifyVector4PropertyChanged(this, *(_DWORD *)a2, (const struct D2DVector4 *)a3);
      goto LABEL_17;
    case 0x46:
      v10 = CPropertyChangeResource::NotifyColorPropertyChanged(this, *(_DWORD *)a2, a3);
      goto LABEL_17;
    case 0x47:
      v10 = CPropertyChangeResource::NotifyQuaternionPropertyChanged(
              this,
              *(_DWORD *)a2,
              (const struct D2DQuaternion *)a3);
      goto LABEL_17;
    case 0x68:
      v10 = CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(
              this,
              *(unsigned int *)a2,
              (const struct D2D_MATRIX_3X2_F *)a3);
      goto LABEL_17;
  }
  if ( *((_DWORD *)a2 + 1) != 265 )
    goto LABEL_32;
  v4 = *(_DWORD *)a2;
  v3 = 0;
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
    v6 = *(_DWORD *)(v5 + 68);
  else
    v6 = 0;
  if ( !v6 || (v7 = *((unsigned int *)this + 14), !(_DWORD)v7) || (v8 = *((_DWORD *)this + 16), !_bittest(&v8, v4)) )
  {
LABEL_14:
    if ( v3 >= 0 )
      return (unsigned int)v3;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x9Cu);
    return (unsigned int)v3;
  }
  v11 = *(_OWORD *)&a3[1].r;
  v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 1312LL);
  v17[0] = *(const struct _D3DCOLORVALUE *)&a3->r;
  v17[1] = v11;
  v13 = *(_OWORD *)&a3[3].r;
  v17[2] = *(const struct _D3DCOLORVALUE *)&a3[2].r;
  v17[3] = v13;
  if ( v5 )
    v14 = *(unsigned int *)(v5 + 68);
  else
    v14 = 0LL;
  v15 = *(_QWORD *)(v12 + 56);
  v16[0] = v14;
  v16[1] = v7;
  v3 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int16, void *, unsigned int, _OWORD *))CoreUICallSend)(
         v15,
         v16,
         2LL,
         12LL,
         7,
         &unk_180239D08,
         v4,
         v17);
  if ( v3 == -2018375675 )
    v3 = 0;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x1FDu);
    goto LABEL_14;
  }
  return (unsigned int)v3;
}
