/*
 * XREFs of ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18017B1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180029978 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18007258C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800BE94C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1800C456C (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometryGroup::GetShapeDataCore(
        CGeometryGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  unsigned int v3; // edi
  CRegionShape *v4; // rbx
  unsigned int v5; // eax
  int v7; // eax
  CRegionShape *v10; // rax
  int ShapeData; // eax
  int v12; // eax
  unsigned int v13; // r14d
  __int64 v14; // rdx
  unsigned int v16; // [rsp+20h] [rbp-38h]
  struct CShape *v17; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0LL;
  v5 = (*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2;
  v17 = 0LL;
  v7 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ v5) & 6;
  *((_DWORD *)this + 8) = v7;
  if ( (v7 & 6) != 2 )
  {
    v10 = (CRegionShape *)CRectanglesShape::operator new(this);
    v4 = v10;
    if ( v10 )
    {
      *(_QWORD *)v10 = &CRectanglesShape::`vftable';
      *((_DWORD *)v10 + 8) = 0;
      *((_QWORD *)v10 + 1) = (char *)v10 + 40;
      *((_QWORD *)v10 + 2) = (char *)v10 + 40;
      *((_DWORD *)v10 + 6) = 1;
      *((_DWORD *)v10 + 7) = 1;
      *((_QWORD *)v10 + 7) = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
    if ( !v4 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x27u);
      goto LABEL_21;
    }
    goto LABEL_15;
  }
  ShapeData = CGeometry::GetShapeData(**((CGeometry ***)this + 17), a2, a3);
  v3 = ShapeData;
  if ( ShapeData < 0 )
  {
    v16 = 49;
  }
  else
  {
    v12 = CShape::CopyShape(*(CShape **)a3, 0LL, &v17);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x32u);
      v4 = v17;
      goto LABEL_21;
    }
    v13 = 1;
    v4 = v17;
    if ( *((_DWORD *)this + 32) <= 1u )
    {
LABEL_15:
      CShapePtr::Release((CRectanglesShape **)a3);
      *(_QWORD *)a3 = v4;
      v4 = 0LL;
      *((_BYTE *)a3 + 8) = 1;
      goto LABEL_21;
    }
    while ( 1 )
    {
      ShapeData = CGeometry::GetShapeData(*(CGeometry **)(*((_QWORD *)this + 17) + 8LL * v13), a2, a3);
      v3 = ShapeData;
      if ( ShapeData < 0 )
        break;
      ShapeData = CShape::Combine(v4, v14, *(CRectanglesShape **)a3, 0LL, 1, &v17);
      v3 = ShapeData;
      if ( ShapeData < 0 )
      {
        v16 = 67;
        goto LABEL_20;
      }
      if ( v4 )
        (**(void (__fastcall ***)(CRegionShape *, __int64))v4)(v4, 1LL);
      v4 = v17;
      if ( ++v13 >= *((_DWORD *)this + 32) )
        goto LABEL_15;
    }
    v16 = 59;
  }
LABEL_20:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeData, v16);
LABEL_21:
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  if ( v4 )
    (**(void (__fastcall ***)(CRegionShape *, __int64))v4)(v4, 1LL);
  return v3;
}
