/*
 * XREFs of ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006F99C
 * Callers:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetShapeDataCore@CRgnGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18002AC40 (-GetShapeDataCore@CRgnGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008C1F8 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry::GetShapeDataWorker(CGeometry *this, unsigned __int64 a2, CRectanglesShape **a3)
{
  const struct D2D_SIZE_F *v5; // rsi
  __int64 (__fastcall *v6)(CRgnGeometry *, const struct D2D_SIZE_F *, CRectanglesShape **); // rax
  int ShapeDataCore; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  CShape *v11; // rcx
  int v12; // eax
  struct D2D_SIZE_F v13; // [rsp+30h] [rbp-49h] BYREF
  struct CShape *v14; // [rsp+38h] [rbp-41h] BYREF
  _DWORD v15[6]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v16; // [rsp+58h] [rbp-21h]
  __int64 v17; // [rsp+60h] [rbp-19h]
  int v18; // [rsp+68h] [rbp-11h]
  int v19; // [rsp+6Ch] [rbp-Dh]
  int v20; // [rsp+70h] [rbp-9h]
  int v21; // [rsp+74h] [rbp-5h]
  int v22; // [rsp+78h] [rbp-1h]
  int v23; // [rsp+7Ch] [rbp+3h]
  int v24; // [rsp+80h] [rbp+7h]
  _DWORD v25[6]; // [rsp+90h] [rbp+17h] BYREF

  v5 = (const struct D2D_SIZE_F *)(a2 & -(__int64)(*((_BYTE *)this + 128) != 0));
  v6 = *(__int64 (__fastcall **)(CRgnGeometry *, const struct D2D_SIZE_F *, CRectanglesShape **))(*(_QWORD *)this + 176LL);
  if ( v6 == CRgnGeometry::GetShapeDataCore )
    ShapeDataCore = CRgnGeometry::GetShapeDataCore(this, v5, a3);
  else
    ShapeDataCore = ((__int64 (__fastcall *)(CGeometry *, const struct D2D_SIZE_F *))v6)(this, v5);
  v8 = ShapeDataCore;
  if ( ShapeDataCore < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeDataCore, 0xDBu);
  }
  else
  {
    v9 = *((_QWORD *)this + 9);
    if ( v9 )
    {
      v13 = 0LL;
      if ( v5 )
        v13 = *v5;
      if ( *a3 )
      {
        (*(void (__fastcall **)(__int64, struct D2D_SIZE_F *, _DWORD *))(*(_QWORD *)v9 + 176LL))(v9, &v13, v25);
        v11 = *a3;
        v24 = 0;
        v15[2] = 0;
        v15[3] = 0;
        v16 = 0LL;
        v17 = 0LL;
        v19 = 0;
        v22 = 0;
        v15[0] = v25[0];
        v15[1] = v25[1];
        v15[4] = v25[2];
        v15[5] = v25[3];
        v20 = v25[4];
        v21 = v25[5];
        v18 = 1065353216;
        v23 = 1065353216;
        v12 = CShape::CopyShape(v11, (const struct CMILMatrix *)v15, &v14);
        v8 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xEFu);
        }
        else
        {
          CShapePtr::Release(a3);
          *a3 = v14;
          *((_BYTE *)a3 + 8) = 1;
        }
      }
    }
  }
  return v8;
}
