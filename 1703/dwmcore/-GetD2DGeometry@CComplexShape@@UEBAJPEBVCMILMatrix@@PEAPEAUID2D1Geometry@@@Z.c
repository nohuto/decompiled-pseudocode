/*
 * XREFs of ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801B0490
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800AB220 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800429E0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099C10 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801B02D8 (--4-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Attach@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAXPEAUID2D1Geometry@@@Z @ 0x1801B03C4 (-Attach@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAXPEAUID2D1Geometry@@@Z.c)
 *     ?TransformGeometry@CTransformingGeometrySink@@SAJPEBVCMILMatrix@@PEBUID2D1Geometry@@PEAPEAU3@@Z @ 0x1801B07B4 (-TransformGeometry@CTransformingGeometrySink@@SAJPEBVCMILMatrix@@PEBUID2D1Geometry@@PEAPEAU3@@Z.c)
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
  __m128 v10; // xmm2
  __m128 v11; // xmm1
  int D2DFactoryNoRef; // eax
  int v13; // eax
  int v14; // eax
  struct ID2D1Geometry *v15; // rax
  struct ID2D1Geometry *v17; // [rsp+30h] [rbp-40h] BYREF
  struct CD2DFactory *v18; // [rsp+38h] [rbp-38h] BYREF
  __int64 v19; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v20[4]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-18h]

  v3 = 0;
  v4 = (const struct ID2D1Geometry **)((char *)this + 8);
  v17 = 0LL;
  if ( !*((_QWORD *)this + 1) )
    goto LABEL_13;
  if ( !a2 )
  {
    Microsoft::WRL::ComPtr<ID2D1Geometry>::operator=((__int64 *)&v17, (__int64 *)this + 1);
    goto LABEL_13;
  }
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>((__int64)a2, 1) )
  {
    v8 = *(_DWORD *)a2;
    v9 = *((_DWORD *)a2 + 1);
    v10 = (__m128)*((unsigned int *)a2 + 13);
    v18 = 0LL;
    v20[1] = v9;
    v20[3] = *((_DWORD *)a2 + 5);
    v11 = (__m128)*((unsigned int *)a2 + 12);
    v20[0] = v8;
    v20[2] = *((_DWORD *)a2 + 4);
    v21 = _mm_unpacklo_ps(v11, v10).m128_u64[0];
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v7, &v18);
    v3 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, 0xD9u);
      goto LABEL_14;
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, const struct ID2D1Geometry *, _DWORD *, __int64 *))(**((_QWORD **)v18 + 3)
                                                                                               + 72LL))(
            *((_QWORD *)v18 + 3),
            *v4,
            v20,
            &v19);
    v3 = v13;
    if ( v13 >= 0 )
    {
      Microsoft::WRL::ComPtr<ID2D1Geometry>::Attach((__int64 *)&v17, v19);
LABEL_13:
      v15 = v17;
      v17 = 0LL;
      *a3 = v15;
      goto LABEL_14;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xE0u);
  }
  else
  {
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v17);
    v14 = CTransformingGeometrySink::TransformGeometry(a2, *v4, &v17);
    v3 = v14;
    if ( v14 >= 0 )
      goto LABEL_13;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xE7u);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v17);
  return v3;
}
