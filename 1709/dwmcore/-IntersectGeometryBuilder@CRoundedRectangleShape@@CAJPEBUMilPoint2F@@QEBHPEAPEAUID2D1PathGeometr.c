/*
 * XREFs of ?IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometry@@_N@Z @ 0x1801CC4E4
 * Callers:
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEB_NHPEAPEAUID2D1PathGeometry@@@Z @ 0x1801CC370 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEB_NHPEAPEAUID2D1PathG.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800BC2AC (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x180191838 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x1801DAEAC (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 */

__int64 __fastcall CRoundedRectangleShape::IntersectGeometryBuilder(
        const struct MilPoint2F *a1,
        const int *const a2,
        struct ID2D1PathGeometry **a3,
        char a4)
{
  __int64 v4; // rax
  struct CD2DFactory *v5; // r14
  unsigned int v8; // xmm0_4
  unsigned int v9; // xmm1_4
  __int64 v10; // rax
  int v11; // xmm6_4
  int v12; // xmm7_4
  __int64 v13; // rax
  int v14; // xmm8_4
  int v15; // xmm9_4
  __int64 v16; // rax
  __m128 v17; // xmm10
  __m128 v18; // xmm11
  __int64 v19; // rax
  unsigned int v20; // xmm0_4
  unsigned int v21; // xmm1_4
  __int64 v22; // rax
  unsigned int v23; // xmm0_4
  unsigned int v24; // xmm1_4
  __int64 v25; // rax
  int v26; // xmm1_4
  enum D2D1_FACTORY_TYPE v27; // ecx
  struct CD2DFactory *v28; // rax
  signed int v29; // ebx
  signed int v30; // eax
  signed int v31; // eax
  int v32; // eax
  signed int v33; // eax
  struct ID2D1PathGeometry *v34; // rax
  struct ID2D1PathGeometry *v35; // rax
  DWORD v36; // r9d
  unsigned int v38; // [rsp+28h] [rbp-A9h]
  __int64 v39; // [rsp+48h] [rbp-89h] BYREF
  struct ID2D1PathGeometry *v40; // [rsp+50h] [rbp-81h] BYREF
  struct ID2D1PathGeometry *v41; // [rsp+58h] [rbp-79h] BYREF
  __int64 v42; // [rsp+60h] [rbp-71h] BYREF
  unsigned __int64 v43; // [rsp+68h] [rbp-69h]
  unsigned __int64 v44; // [rsp+70h] [rbp-61h]
  unsigned __int64 v45; // [rsp+78h] [rbp-59h]
  __int64 v46; // [rsp+80h] [rbp-51h]
  _DWORD v47[4]; // [rsp+88h] [rbp-49h] BYREF
  unsigned __int64 v48; // [rsp+98h] [rbp-39h]

  v4 = *a2;
  v5 = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v8 = *((_DWORD *)a1 + 2 * v4);
  v9 = *((_DWORD *)a1 + 2 * v4 + 1);
  v10 = a2[1];
  v43 = __PAIR64__(v9, v8);
  v11 = *((_DWORD *)a1 + 2 * v10);
  v12 = *((_DWORD *)a1 + 2 * v10 + 1);
  v13 = a2[2];
  v14 = *((_DWORD *)a1 + 2 * v13);
  v15 = *((_DWORD *)a1 + 2 * v13 + 1);
  v16 = a2[3];
  v17 = (__m128)*((unsigned int *)a1 + 2 * v16);
  v18 = (__m128)*((unsigned int *)a1 + 2 * v16 + 1);
  v19 = a2[4];
  v20 = *((_DWORD *)a1 + 2 * v19);
  v21 = *((_DWORD *)a1 + 2 * v19 + 1);
  v22 = a2[5];
  v44 = __PAIR64__(v21, v20);
  v23 = *((_DWORD *)a1 + 2 * v22);
  v24 = *((_DWORD *)a1 + 2 * v22 + 1);
  v25 = a2[6];
  v45 = __PAIR64__(v24, v23);
  v26 = *((_DWORD *)a1 + 2 * v25 + 1);
  LODWORD(v46) = *((_DWORD *)a1 + 2 * v25);
  HIDWORD(v46) = v26;
  EnterCriticalSection(&CriticalSection);
  v28 = qword_18026EF28;
  v29 = 0;
  if ( qword_18026EF28 )
    goto LABEL_8;
  v30 = CD2DFactory::Create(v27, 0, &qword_18026EF28);
  v29 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v30, 0x10Fu);
    goto LABEL_16;
  }
  v31 = CMesh2DEffect::Register(qword_18026EF28);
  v29 = v31;
  if ( v31 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v31, 0x13Fu);
  if ( v29 >= 0 )
  {
    v28 = qword_18026EF28;
LABEL_8:
    v5 = v28;
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v29, 0x111u);
LABEL_16:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v29, 0x3FFu);
LABEL_9:
  LeaveCriticalSection(&CriticalSection);
  if ( v29 < 0 )
  {
    v38 = 325;
    v36 = v29;
    goto LABEL_31;
  }
  v32 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v5 + 3) + 80LL))(
          *((_QWORD *)v5 + 3),
          &v40);
  v29 = v32;
  if ( v32 < 0 )
  {
    v38 = 326;
    goto LABEL_23;
  }
  v33 = (*(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(*(_QWORD *)v40 + 136LL))(v40, &v39);
  v29 = v33;
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v33, 0x147u);
    goto LABEL_32;
  }
  (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v39 + 40LL))(v39, v43, 0LL);
  v47[0] = v11;
  v47[1] = v12;
  v47[2] = v14;
  v47[3] = v15;
  v48 = _mm_unpacklo_ps(v17, v18).m128_u64[0];
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v39 + 88LL))(v39, v47);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v39 + 80LL))(v39, v44);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v39 + 80LL))(v39, v45);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 80LL))(v39, v46);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 64LL))(v39, 1LL);
  v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 72LL))(v39);
  v29 = v32;
  if ( v32 < 0 )
  {
    v38 = 337;
LABEL_23:
    v36 = v32;
LABEL_31:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v36, v38);
    goto LABEL_32;
  }
  if ( !a4 )
  {
    v32 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v5 + 3) + 80LL))(
            *((_QWORD *)v5 + 3),
            &v41);
    v29 = v32;
    if ( v32 < 0 )
    {
      v38 = 349;
    }
    else
    {
      v32 = (*(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(*(_QWORD *)v41 + 136LL))(v41, &v42);
      v29 = v32;
      if ( v32 < 0 )
      {
        v38 = 350;
      }
      else
      {
        v32 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry *, __int64))(*(_QWORD *)*a3 + 88LL))(
                *a3,
                v40,
                1LL);
        v29 = v32;
        if ( v32 < 0 )
        {
          v38 = 359;
        }
        else
        {
          v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 72LL))(v42);
          v29 = v32;
          if ( v32 >= 0 )
          {
            ReleaseInterface<ID2D1PrivateCompositorBuffer>((__int64 *)a3);
            v35 = v41;
            v41 = 0LL;
            *a3 = v35;
            goto LABEL_32;
          }
          v38 = 361;
        }
      }
    }
    goto LABEL_23;
  }
  v34 = v40;
  v40 = 0LL;
  *a3 = v34;
LABEL_32:
  ReleaseInterface<ID2D1PrivateCompositorBuffer>((__int64 *)&v40);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>(&v39);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>((__int64 *)&v41);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>(&v42);
  return (unsigned int)v29;
}
