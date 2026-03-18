/*
 * XREFs of ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801CB710
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800237F0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x180191838 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 *     ?Attach@?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z @ 0x180195A6C (-Attach@-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801CB584 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?TransformGeometry@CTransformingGeometrySink@@SAJPEBVCMILMatrix@@PEBUID2D1Geometry@@PEAPEAU3@@Z @ 0x1801CBBA4 (-TransformGeometry@CTransformingGeometrySink@@SAJPEBVCMILMatrix@@PEBUID2D1Geometry@@PEAPEAU3@@Z.c)
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x1801DAEAC (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 */

__int64 __fastcall CComplexShape::GetD2DGeometry(
        CComplexShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  signed int v3; // ebx
  const struct ID2D1Geometry **v4; // rsi
  int v7; // xmm0_4
  struct CD2DFactory *v8; // r14
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  enum D2D1_FACTORY_TYPE v11; // ecx
  struct CD2DFactory *v12; // rax
  signed int v13; // eax
  signed int v14; // eax
  int v15; // eax
  DWORD v16; // r9d
  signed int v17; // eax
  struct ID2D1Geometry *v18; // rax
  unsigned int v20; // [rsp+20h] [rbp-40h]
  struct ID2D1Geometry *v21; // [rsp+30h] [rbp-30h] BYREF
  __int64 v22; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v23[4]; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-10h]

  v3 = 0;
  v4 = (const struct ID2D1Geometry **)((char *)this + 8);
  v21 = 0LL;
  if ( !*((_QWORD *)this + 1) )
    goto LABEL_24;
  if ( !a2 )
  {
    Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)&v21, (__int64 *)this + 1);
    goto LABEL_24;
  }
  if ( CMILMatrix::Is2DAffine<1>((__int64)a2, 1) )
  {
    v7 = *(_DWORD *)a2;
    v8 = 0LL;
    v9 = (__m128)*((unsigned int *)a2 + 13);
    v23[1] = *((_DWORD *)a2 + 1);
    v23[3] = *((_DWORD *)a2 + 5);
    v10 = (__m128)*((unsigned int *)a2 + 12);
    v23[0] = v7;
    v23[2] = *((_DWORD *)a2 + 4);
    v24 = _mm_unpacklo_ps(v10, v9).m128_u64[0];
    EnterCriticalSection(&CriticalSection);
    v12 = qword_18026EF28;
    if ( !qword_18026EF28 )
    {
      v13 = CD2DFactory::Create(v11, 0, &qword_18026EF28);
      v3 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x10Fu);
        goto LABEL_16;
      }
      v14 = CMesh2DEffect::Register(qword_18026EF28);
      v3 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x13Fu);
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x111u);
LABEL_16:
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x3FFu);
LABEL_12:
        LeaveCriticalSection(&CriticalSection);
        if ( v3 < 0 )
        {
          v20 = 217;
          v16 = v3;
        }
        else
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD, const struct ID2D1Geometry *, _DWORD *, __int64 *))(**((_QWORD **)v8 + 3) + 72LL))(
                  *((_QWORD *)v8 + 3),
                  *v4,
                  v23,
                  &v22);
          v3 = v15;
          if ( v15 >= 0 )
          {
            Microsoft::WRL::ComPtr<CManipulation>::Attach((__int64 *)&v21, v22);
LABEL_24:
            v18 = v21;
            v21 = 0LL;
            *a3 = v18;
            goto LABEL_25;
          }
          v20 = 224;
          v16 = v15;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, v20);
        goto LABEL_25;
      }
      v12 = qword_18026EF28;
    }
    v8 = v12;
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  v17 = CTransformingGeometrySink::TransformGeometry(a2, *v4, &v21);
  v3 = v17;
  if ( v17 >= 0 )
    goto LABEL_24;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0xE7u);
LABEL_25:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  return (unsigned int)v3;
}
