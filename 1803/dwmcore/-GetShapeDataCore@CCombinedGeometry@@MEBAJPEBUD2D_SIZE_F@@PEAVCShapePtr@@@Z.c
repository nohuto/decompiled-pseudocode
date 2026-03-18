/*
 * XREFs of ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801B1A10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800C2BE4 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCombinedGeometry::GetShapeDataCore(
        CCombinedGeometry *this,
        const struct D2D_SIZE_F *a2,
        CRectanglesShape **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  CGeometry *v8; // rcx
  int ShapeData; // eax
  CGeometry *v10; // rcx
  int v11; // eax
  int v12; // eax
  CRectanglesShape *v14; // [rsp+30h] [rbp-20h] BYREF
  char v15; // [rsp+38h] [rbp-18h]
  CRectanglesShape *v16; // [rsp+40h] [rbp-10h] BYREF
  char v17; // [rsp+48h] [rbp-8h]
  struct CShape *v18; // [rsp+70h] [rbp+20h] BYREF

  v3 = *((_DWORD *)this + 8);
  v4 = 0;
  v16 = 0LL;
  v14 = 0LL;
  v18 = 0LL;
  v17 = 0;
  v15 = 0;
  *((_DWORD *)this + 8) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6) & 6) != 2 )
  {
    CShapePtr::Release(a3);
    *a3 = 0LL;
LABEL_3:
    *((_BYTE *)a3 + 8) = 1;
    goto LABEL_15;
  }
  v8 = (CGeometry *)*((_QWORD *)this + 21);
  if ( v8 )
  {
    ShapeData = CGeometry::GetShapeData(v8, a2, &v16);
    v4 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0x41u);
      goto LABEL_15;
    }
  }
  v10 = (CGeometry *)*((_QWORD *)this + 22);
  if ( v10 )
  {
    v11 = CGeometry::GetShapeData(v10, a2, &v14);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x46u);
      goto LABEL_15;
    }
  }
  v12 = CShape::Combine(v16, (__int64)a2, v14, 0LL, *((_DWORD *)this + 40), &v18);
  v4 = v12;
  if ( v12 >= 0 )
  {
    CShapePtr::Release(a3);
    *a3 = v18;
    goto LABEL_3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x52u);
  if ( v18 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v18)(v18, 1LL);
LABEL_15:
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  CShapePtr::Release(&v14);
  CShapePtr::Release(&v16);
  return v4;
}
