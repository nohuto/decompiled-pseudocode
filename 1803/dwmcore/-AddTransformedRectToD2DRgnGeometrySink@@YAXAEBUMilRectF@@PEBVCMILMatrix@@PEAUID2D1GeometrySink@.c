/*
 * XREFs of ?AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@@@Z @ 0x1801C881C
 * Callers:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180063DA0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1801C75EC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 */

void __fastcall AddTransformedRectToD2DRgnGeometrySink(
        const struct MilRectF *a1,
        const struct CMILMatrix *a2,
        struct ID2D1GeometrySink *a3)
{
  __m128 v4; // xmm2
  int v5; // xmm0_4
  __int32 *v6; // rbx
  __int32 v7; // [rsp+20h] [rbp-50h] BYREF
  int v8; // [rsp+24h] [rbp-4Ch]
  int v9; // [rsp+28h] [rbp-48h]
  int v10; // [rsp+2Ch] [rbp-44h]
  int v11; // [rsp+30h] [rbp-40h]
  int v12; // [rsp+34h] [rbp-3Ch]
  __int32 v13; // [rsp+38h] [rbp-38h]
  int v14; // [rsp+3Ch] [rbp-34h]
  _DWORD v15[8]; // [rsp+40h] [rbp-30h] BYREF

  v4 = (__m128)*(unsigned int *)a1;
  v5 = *((_DWORD *)a1 + 2);
  v8 = *((_DWORD *)a1 + 1);
  v10 = v8;
  v12 = *((_DWORD *)a1 + 3);
  v14 = v12;
  v7 = v4.m128_i32[0];
  v9 = v5;
  v11 = v5;
  v13 = v4.m128_i32[0];
  if ( a2 )
  {
    CMILMatrix::Transform(a2, (const struct MilPoint2F *)&v7, (struct MilPoint2F *)v15, 4);
    v4 = (__m128)v15[0];
    v6 = v15;
  }
  else
  {
    v6 = &v7;
  }
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(*(_QWORD *)a3 + 40LL))(
    a3,
    _mm_unpacklo_ps(v4, (__m128)(unsigned int)v6[1]).m128_u64[0],
    0LL);
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a3 + 80LL))(a3, *((_QWORD *)v6 + 1));
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a3 + 80LL))(a3, *((_QWORD *)v6 + 2));
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a3 + 80LL))(a3, *((_QWORD *)v6 + 3));
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a3 + 64LL))(a3, 1LL);
}
