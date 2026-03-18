/*
 * XREFs of ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x1801776AC
 * Callers:
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18014B1C0 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x180186788 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z.c)
 */

__int64 __fastcall CPolygon::D2DGeometryFromPolygon(
        const struct MilPoint4F **this,
        struct ID2D1PathGeometry *a2,
        const struct CMILMatrix *a3)
{
  __int128 v3; // xmm0
  int v4; // eax
  __int128 v6; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __m128 v10; // xmm6
  __int64 (__fastcall *v11)(struct ID2D1PathGeometry *, __int64 *); // rax
  __m128 v12; // xmm7
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rdi
  __m128 v18; // xmm0
  __m128 v19; // xmm1
  void (__fastcall *v20)(__int64, unsigned __int64); // rax
  int v21; // eax
  __int64 v23[2]; // [rsp+38h] [rbp-59h] BYREF
  _OWORD v24[4]; // [rsp+48h] [rbp-49h] BYREF
  int v25; // [rsp+88h] [rbp-9h]
  float v26; // [rsp+98h] [rbp+7h] BYREF
  float v27; // [rsp+9Ch] [rbp+Bh]
  float v28; // [rsp+A4h] [rbp+13h]

  v3 = *(_OWORD *)a3;
  v4 = *((_DWORD *)a3 + 16);
  v6 = *((_OWORD *)a3 + 1);
  v23[0] = 0LL;
  v24[0] = v3;
  v8 = *((_OWORD *)a3 + 2);
  v25 = v4;
  v24[1] = v6;
  v9 = *((_OWORD *)a3 + 3);
  v24[2] = v8;
  v24[3] = v9;
  CMILMatrix::Multiply((const struct CMILMatrix *)(this + 18), (const struct CMILMatrix *)v24, (struct CMILMatrix *)v24);
  CMILMatrix::Transform((CMILMatrix *)v24, this[2], (struct MilPoint4F *)&v26, 1u);
  v10 = (__m128)LODWORD(v26);
  v12 = (__m128)LODWORD(v27);
  v10.m128_f32[0] = v26 / v28;
  v11 = *(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(*(_QWORD *)a2 + 136LL);
  v12.m128_f32[0] = v27 / v28;
  v26 = v26 / v28;
  v27 = v27 / v28;
  v13 = v11(a2, v23);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x23Eu);
  }
  else
  {
    (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v23[0] + 40LL))(
      v23[0],
      _mm_unpacklo_ps(v10, v12).m128_u64[0],
      0LL);
    v15 = *((_DWORD *)this + 10);
    if ( v15 > 1 )
    {
      v16 = 20LL;
      v17 = v15 - 1;
      do
      {
        CMILMatrix::Transform(
          (CMILMatrix *)v24,
          (const struct MilPoint4F *)((char *)this[2] + v16),
          (struct MilPoint4F *)&v26,
          1u);
        v18 = (__m128)LODWORD(v26);
        v19 = (__m128)LODWORD(v27);
        v20 = *(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v23[0] + 80LL);
        v26 = v26 / v28;
        v18.m128_f32[0] = v26;
        v27 = v27 / v28;
        v19.m128_f32[0] = v27;
        v20(v23[0], _mm_unpacklo_ps(v18, v19).m128_u64[0]);
        v16 += 20LL;
        --v17;
      }
      while ( v17 );
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23[0] + 64LL))(v23[0], 1LL);
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23[0] + 72LL))(v23[0]);
    v14 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x252u);
  }
  ReleaseInterface<ID2D1Geometry>(v23);
  return v14;
}
