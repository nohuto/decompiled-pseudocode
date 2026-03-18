/*
 * XREFs of ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801814F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180047DB0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096C0C (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097094 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1800B9E18 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometryGroup::GetShapeDataCore(
        CGeometryGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  int v3; // eax
  unsigned int v4; // edi
  struct CShape *v5; // rbx
  struct CShape *v9; // rax
  signed int ShapeData; // eax
  signed int v11; // eax
  unsigned int v12; // r14d
  __int64 v13; // rdx
  unsigned int v15; // [rsp+20h] [rbp-38h]
  struct CShape *v16; // [rsp+60h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 8);
  v4 = 0;
  v5 = 0LL;
  v16 = 0LL;
  *((_DWORD *)this + 8) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6) & 6) != 2 )
  {
    v9 = (struct CShape *)CRectanglesShape::operator new(this);
    v5 = v9;
    if ( v9 )
    {
      *(_QWORD *)v9 = &CRectanglesShape::`vftable';
      *((_DWORD *)v9 + 8) = 0;
      *((_QWORD *)v9 + 1) = (char *)v9 + 40;
      *((_QWORD *)v9 + 2) = (char *)v9 + 40;
      *((_DWORD *)v9 + 6) = 1;
      *((_DWORD *)v9 + 7) = 1;
      *((_QWORD *)v9 + 7) = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    if ( !v5 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x27u);
      goto LABEL_21;
    }
    goto LABEL_15;
  }
  ShapeData = CGeometry::GetShapeData(**((CGeometry ***)this + 17), a2, a3);
  v4 = ShapeData;
  if ( ShapeData < 0 )
  {
    v15 = 49;
  }
  else
  {
    v11 = CShape::CopyShape(*(CShape **)a3, 0LL, &v16);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x32u);
      v5 = v16;
      goto LABEL_21;
    }
    v12 = 1;
    v5 = v16;
    if ( *((_DWORD *)this + 32) <= 1u )
    {
LABEL_15:
      CShapePtr::Release((CRegionShape **)a3);
      *(_QWORD *)a3 = v5;
      v5 = 0LL;
      *((_BYTE *)a3 + 8) = 1;
      goto LABEL_21;
    }
    while ( 1 )
    {
      ShapeData = CGeometry::GetShapeData(*(CGeometry **)(*((_QWORD *)this + 17) + 8LL * v12), a2, a3);
      v4 = ShapeData;
      if ( ShapeData < 0 )
        break;
      ShapeData = CShape::Combine((__int64)v5, v13, *(_QWORD *)a3, 0LL, 1, &v16);
      v4 = ShapeData;
      if ( ShapeData < 0 )
      {
        v15 = 67;
        goto LABEL_20;
      }
      if ( v5 )
        (**(void (__fastcall ***)(struct CShape *, __int64))v5)(v5, 1LL);
      v5 = v16;
      if ( ++v12 >= *((_DWORD *)this + 32) )
        goto LABEL_15;
    }
    v15 = 59;
  }
LABEL_20:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ShapeData, v15);
LABEL_21:
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  if ( v5 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v5)(v5, 1LL);
  return v4;
}
