/*
 * XREFs of ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801B2720
 * Callers:
 *     <none>
 * Callees:
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x18001D1D8 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008C1F8 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800C2BE4 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometryGroup::GetShapeDataCore(
        CGeometryGroup *this,
        const struct D2D_SIZE_F *a2,
        CRectanglesShape **a3)
{
  int v3; // eax
  unsigned int v4; // edi
  struct CRectanglesShape *v5; // rbx
  struct CRectanglesShape *v9; // rax
  int ShapeData; // eax
  int v11; // eax
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
    v9 = (struct CRectanglesShape *)CRectanglesShape::operator new(this);
    v5 = v9;
    if ( v9 )
    {
      *((_QWORD *)v9 + 1) = 0LL;
      *(_QWORD *)v9 = &CRectanglesShape::`vftable';
      *((_DWORD *)v9 + 10) = 0;
      *((_QWORD *)v9 + 2) = (char *)v9 + 48;
      *((_QWORD *)v9 + 3) = (char *)v9 + 48;
      *((_DWORD *)v9 + 8) = 1;
      *((_DWORD *)v9 + 9) = 1;
      *((_QWORD *)v9 + 8) = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    if ( !v5 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27u);
      goto LABEL_21;
    }
    goto LABEL_15;
  }
  ShapeData = CGeometry::GetShapeData(**((CGeometry ***)this + 21), a2, a3);
  v4 = ShapeData;
  if ( ShapeData < 0 )
  {
    v15 = 49;
  }
  else
  {
    v11 = CShape::CopyShape((struct ID2D1RegionGeometry **)*a3, 0LL, &v16);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x32u);
      v5 = v16;
      goto LABEL_21;
    }
    v12 = 1;
    v5 = v16;
    if ( *((_DWORD *)this + 40) <= 1u )
    {
LABEL_15:
      CShapePtr::Release(a3);
      *a3 = v5;
      v5 = 0LL;
      *((_BYTE *)a3 + 8) = 1;
      goto LABEL_21;
    }
    while ( 1 )
    {
      ShapeData = CGeometry::GetShapeData(*(CGeometry **)(*((_QWORD *)this + 21) + 8LL * v12), a2, a3);
      v4 = ShapeData;
      if ( ShapeData < 0 )
        break;
      ShapeData = CShape::Combine(v5, v13, *a3, 0LL, 1, &v16);
      v4 = ShapeData;
      if ( ShapeData < 0 )
      {
        v15 = 67;
        goto LABEL_20;
      }
      if ( v5 )
        (**(void (__fastcall ***)(struct CRectanglesShape *, __int64))v5)(v5, 1LL);
      v5 = v16;
      if ( ++v12 >= *((_DWORD *)this + 40) )
        goto LABEL_15;
    }
    v15 = 59;
  }
LABEL_20:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, v15);
LABEL_21:
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  if ( v5 )
    (**(void (__fastcall ***)(struct CRectanglesShape *, __int64))v5)(v5, 1LL);
  return v4;
}
