/*
 * XREFs of ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18020AB80
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009BA00 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180088FE0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A58B0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAXPEAUID2D1PathGeometry@@@Z @ 0x1801CE64C (-Attach@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAXPEAUID2D1PathGeometry@@@Z.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18020A99C (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?TransformGeometry@CTransformingGeometrySink@@SAJPEBVCMILMatrix@@PEBUID2D1Geometry@@PEAPEAU3@@Z @ 0x18020AEA4 (-TransformGeometry@CTransformingGeometrySink@@SAJPEBVCMILMatrix@@PEBUID2D1Geometry@@PEAPEAU3@@Z.c)
 */

__int64 __fastcall CComplexShape::GetD2DGeometry(
        CComplexShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  unsigned int v3; // ebx
  const struct ID2D1Geometry **v4; // rsi
  CD3DDeviceManager *v7; // rcx
  int v8; // xmm0_4
  int v9; // xmm1_4
  int v10; // xmm1_4
  int v11; // xmm0_4
  __int64 v12; // xmm1_8
  int D2DFactoryNoRef; // eax
  int v14; // eax
  int v15; // eax
  struct ID2D1Geometry *v16; // rax
  struct ID2D1Geometry *v18; // [rsp+30h] [rbp-40h] BYREF
  struct CD2DFactory *v19; // [rsp+38h] [rbp-38h] BYREF
  __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v21[4]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h]

  v3 = 0;
  v4 = (const struct ID2D1Geometry **)((char *)this + 16);
  v18 = 0LL;
  if ( !*((_QWORD *)this + 2) )
    goto LABEL_13;
  if ( !a2 )
  {
    Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)&v18, (__int64 *)this + 2);
    goto LABEL_13;
  }
  if ( CMILMatrix::Is2DAffine<1>((__int64)a2, 1) )
  {
    v8 = *(_DWORD *)a2;
    v9 = *((_DWORD *)a2 + 1);
    v19 = 0LL;
    v21[1] = v9;
    v10 = *((_DWORD *)a2 + 5);
    v21[0] = v8;
    v11 = *((_DWORD *)a2 + 4);
    v21[3] = v10;
    v12 = *((_QWORD *)a2 + 6);
    v21[2] = v11;
    v22 = v12;
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v7, &v19);
    v3 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DFactoryNoRef, 0xD9u);
      goto LABEL_14;
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, const struct ID2D1Geometry *, _DWORD *, __int64 *))(**((_QWORD **)v19 + 3)
                                                                                               + 72LL))(
            *((_QWORD *)v19 + 3),
            *v4,
            v21,
            &v20);
    v3 = v14;
    if ( v14 >= 0 )
    {
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::Attach((__int64 *)&v18, v20);
LABEL_13:
      v16 = v18;
      v18 = 0LL;
      *a3 = v16;
      goto LABEL_14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xE0u);
  }
  else
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
    v15 = CTransformingGeometrySink::TransformGeometry(a2, *v4, &v18);
    v3 = v15;
    if ( v15 >= 0 )
      goto LABEL_13;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xE7u);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  return v3;
}
