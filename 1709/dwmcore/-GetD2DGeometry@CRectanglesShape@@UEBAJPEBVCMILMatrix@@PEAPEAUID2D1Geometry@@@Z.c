/*
 * XREFs of ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180035430
 * Callers:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097BAC (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ @ 0x18003562C (-EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800BC2AC (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1801907DC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x180191838 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x1801DAEAC (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 */

__int64 __fastcall CRectanglesShape::GetD2DGeometry(
        CRectanglesShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  int v6; // eax
  int v7; // ebx
  enum D2D1_FACTORY_TYPE v9; // ecx
  struct CD2DFactory *v10; // rsi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int i; // ebx
  __int64 v15; // rax
  int v16; // xmm2_4
  int v17; // xmm0_4
  struct ID2D1Geometry *v18; // rax
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-49h]
  __int64 v21; // [rsp+30h] [rbp-39h] BYREF
  struct CD2DFactory *v22; // [rsp+38h] [rbp-31h] BYREF
  int v23; // [rsp+40h] [rbp-29h] BYREF
  int v24; // [rsp+44h] [rbp-25h]
  int v25; // [rsp+48h] [rbp-21h]
  int v26; // [rsp+4Ch] [rbp-1Dh]
  int v27; // [rsp+50h] [rbp-19h]
  int v28; // [rsp+54h] [rbp-15h]
  int v29; // [rsp+58h] [rbp-11h]
  int v30; // [rsp+5Ch] [rbp-Dh]
  _DWORD v31[8]; // [rsp+60h] [rbp-9h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  if ( a2 )
  {
    EnterCriticalSection(&CriticalSection);
    v10 = qword_18026EF28;
    v7 = 0;
    if ( qword_18026EF28 )
      goto LABEL_15;
    v11 = CD2DFactory::Create(v9, 0, &qword_18026EF28);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x10Fu);
    }
    else
    {
      v12 = CMesh2DEffect::Register(qword_18026EF28);
      v7 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x13Fu);
      if ( v7 >= 0 )
      {
        v10 = qword_18026EF28;
        goto LABEL_15;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x111u);
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x3FFu);
    v10 = v22;
LABEL_15:
    LeaveCriticalSection(&CriticalSection);
    if ( v7 < 0 )
    {
      v20 = 60;
      v19 = v7;
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, struct CD2DFactory **))(**((_QWORD **)v10 + 3) + 80LL))(
              *((_QWORD *)v10 + 3),
              &v22);
      v7 = v13;
      if ( v13 < 0 )
      {
        v20 = 62;
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(struct CD2DFactory *, __int64 *))(*(_QWORD *)v22 + 136LL))(v22, &v21);
        v7 = v13;
        if ( v13 < 0 )
        {
          v20 = 64;
        }
        else
        {
          for ( i = 0; i < *((_DWORD *)this + 8); ++i )
          {
            v15 = *((_QWORD *)this + 1);
            v16 = *(_DWORD *)(v15 + 16LL * i);
            v17 = *(_DWORD *)(v15 + 16LL * i + 8);
            v24 = *(_DWORD *)(v15 + 16LL * i + 4);
            v26 = v24;
            v28 = *(_DWORD *)(v15 + 16LL * i + 12);
            v30 = v28;
            v23 = v16;
            v25 = v17;
            v27 = v17;
            v29 = v16;
            CMILMatrix::Transform(a2, (const struct MilPoint2F *)&v23, (struct MilPoint2F *)v31, 4u);
            (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v21 + 40LL))(
              v21,
              _mm_unpacklo_ps((__m128)v31[0], (__m128)v31[1]).m128_u64[0],
              0LL);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v21 + 80LL))(
              v21,
              _mm_unpacklo_ps((__m128)v31[2], (__m128)v31[3]).m128_u64[0]);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v21 + 80LL))(
              v21,
              _mm_unpacklo_ps((__m128)v31[4], (__m128)v31[5]).m128_u64[0]);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v21 + 80LL))(
              v21,
              _mm_unpacklo_ps((__m128)v31[6], (__m128)v31[7]).m128_u64[0]);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 64LL))(v21, 1LL);
          }
          v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 72LL))(v21);
          v7 = v13;
          if ( v13 >= 0 )
          {
            v18 = v22;
            v22 = 0LL;
            *a3 = v18;
            goto LABEL_4;
          }
          v20 = 98;
        }
      }
      v19 = v13;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v20);
    goto LABEL_4;
  }
  v6 = CRectanglesShape::EnsureD2DGeometry(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x33u);
  }
  else
  {
    *a3 = (struct ID2D1Geometry *)*((_QWORD *)this + 7);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 8LL))(*((_QWORD *)this + 7));
  }
LABEL_4:
  ReleaseInterface<ID2D1PrivateCompositorBuffer>(&v22);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>(&v21);
  return (unsigned int)v7;
}
