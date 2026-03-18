/*
 * XREFs of ?GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18018B7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180088FE0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18020A96C (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CEllipseGeometry::GetShapeDataCore(
        CEllipseGeometry *this,
        const struct D2D_SIZE_F *a2,
        CRectanglesShape **a3)
{
  __int128 v3; // xmm0
  CComplexShape *v4; // rdi
  int D2DFactoryNoRef; // eax
  unsigned int v7; // ebx
  CComplexShape *v8; // rax
  unsigned int v10; // [rsp+20h] [rbp-40h]
  struct ID2D1Geometry *v11; // [rsp+30h] [rbp-30h] BYREF
  struct CD2DFactory *v12; // [rsp+38h] [rbp-28h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF

  v3 = *(_OWORD *)((char *)this + 136);
  v4 = 0LL;
  v11 = 0LL;
  v13 = v3;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v12);
  v7 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v10 = 85;
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct ID2D1Geometry **))(**((_QWORD **)v12 + 3)
                                                                                           + 56LL))(
                      *((_QWORD *)v12 + 3),
                      &v13,
                      &v11);
  v7 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v10 = 87;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DFactoryNoRef, v10);
    goto LABEL_10;
  }
  v8 = (CComplexShape *)HeapAlloc(WPF::g_processHeap, 0, 0x18uLL);
  if ( v8 )
    v4 = CComplexShape::CComplexShape(v8, v11);
  if ( !v4 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x5Au);
  }
LABEL_10:
  CShapePtr::Release(a3);
  *a3 = v4;
  *((_BYTE *)a3 + 8) = 1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  return v7;
}
