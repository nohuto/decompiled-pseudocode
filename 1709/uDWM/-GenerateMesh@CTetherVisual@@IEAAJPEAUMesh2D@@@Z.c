/*
 * XREFs of ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x180087BF0
 * Callers:
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x18008825C (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x180046766 (sqrtf_0.c)
 *     ?AddAndSet@?$DynArray@K$0A@@@QEAAJIAEBK@Z @ 0x1800858AC (-AddAndSet@-$DynArray@K$0A@@@QEAAJIAEBK@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z @ 0x180085974 (-AddMultipleAndSet@-$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z @ 0x180085A0C (-AddMultipleAndSet@-$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z.c)
 */

__int64 __fastcall CTetherVisual::GenerateMesh(CTetherVisual *this, struct Mesh2D *a2)
{
  int v2; // r8d
  int v4; // edi
  int v6; // ebx
  int v7; // r15d
  int v8; // r12d
  int v9; // ecx
  int v10; // edx
  float v11; // xmm6_4
  float v12; // xmm0_4
  __int64 v13; // rcx
  __int64 v14; // rax
  float v15; // xmm1_4
  int v16; // r8d
  int v17; // r10d
  __m128i v18; // xmm3
  __m128i v19; // xmm2
  double v20; // xmm1_8
  int v21; // eax
  int v22; // ebx
  int v23; // r9d
  char *v24; // rdi
  __int64 v25; // rsi
  unsigned int v26; // r14d
  __int64 v27; // rdx
  _DWORD *v28; // r9
  unsigned int v29; // ecx
  unsigned int v30; // eax
  int v31; // eax
  unsigned int v33; // [rsp+28h] [rbp-89h]
  __int64 v34; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v35[6]; // [rsp+40h] [rbp-71h] BYREF
  float v36[12]; // [rsp+58h] [rbp-59h] BYREF
  double v37; // [rsp+88h] [rbp-29h] BYREF
  __int64 v38; // [rsp+90h] [rbp-21h]
  double v39; // [rsp+98h] [rbp-19h]
  __int64 v40; // [rsp+A0h] [rbp-11h]
  double v41; // [rsp+A8h] [rbp-9h]
  __int64 v42; // [rsp+B0h] [rbp-1h]
  double v43; // [rsp+B8h] [rbp+7h]
  __int64 v44; // [rsp+C0h] [rbp+Fh]

  v2 = *((_DWORD *)this + 74);
  v4 = *((_DWORD *)this + 76);
  v6 = v2 - v4;
  if ( v2 == v4 )
  {
    v7 = 6;
    v8 = 0;
  }
  else
  {
    v9 = *((_DWORD *)this + 75);
    v10 = *((_DWORD *)this + 77);
    if ( v9 == v10 )
    {
      v7 = 0;
      v8 = 6;
    }
    else
    {
      LODWORD(v11) = COERCE_UNSIGNED_INT((float)((float)v2 - (float)v4) / (float)((float)v9 - (float)v10)) ^ _xmm;
      v12 = sqrtf_0((float)(v11 * v11) + 1.0);
      v7 = (int)(float)(6.0 / v12);
      v8 = (int)(float)((float)(6.0 / v12) * v11);
    }
  }
  v13 = *((_QWORD *)this + 49);
  v34 = *((_QWORD *)this + 37);
  v14 = *((_QWORD *)this + 38);
  if ( v13 )
  {
    v15 = *(double *)(v13 + 48);
    v16 = v4 + (int)(float)((float)v6 * v15);
    v17 = *((_DWORD *)this + 77) + (int)(float)((float)(*((_DWORD *)this + 75) - *((_DWORD *)this + 77)) * v15);
  }
  else
  {
    v17 = HIDWORD(v34);
    v16 = v34;
  }
  v36[2] = 0.0;
  v36[5] = 0.0;
  v36[8] = 0.0;
  v36[11] = 0.0;
  v35[0] = 0;
  *((_DWORD *)this + 82) = v16 + v7;
  *((_DWORD *)this + 83) = v17 + v8;
  *((_DWORD *)this + 79) = v17 - v8;
  *((_DWORD *)this + 78) = v16 - v7;
  *((_DWORD *)this + 84) = v14 + v7;
  *((_DWORD *)this + 81) = HIDWORD(v14) - v8;
  *((_DWORD *)this + 85) = HIDWORD(v14) + v8;
  *((_DWORD *)this + 80) = v14 - v7;
  v18 = _mm_cvtsi32_si128(*((_DWORD *)this + 89));
  v19 = _mm_cvtsi32_si128(*((_DWORD *)this + 91));
  v35[1] = 1;
  v35[3] = 1;
  v35[5] = 3;
  v36[0] = (float)(v16 - v7);
  v36[1] = (float)(v17 - v8);
  v36[3] = (float)(v14 - v7);
  v36[4] = (float)(HIDWORD(v14) - v8);
  v36[6] = (float)(v16 + v7);
  v36[7] = (float)(v17 + v8);
  v35[2] = 2;
  v35[4] = 2;
  v36[10] = (float)(HIDWORD(v14) + v8);
  v41 = (double)*((int *)this + 90);
  v36[9] = (float)(v14 + v7);
  v20 = (double)*((int *)this + 88);
  v43 = v41;
  v37 = v20;
  v39 = v20;
  v38 = *(_OWORD *)&_mm_cvtepi32_pd(v18);
  v40 = *(_OWORD *)&_mm_cvtepi32_pd(v19);
  v42 = v38;
  v44 = v40;
  v21 = DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)a2, v36, 4u);
  v22 = v21;
  if ( v21 < 0 )
  {
    v33 = 190;
LABEL_11:
    v23 = v21;
    goto LABEL_29;
  }
  v21 = DynArray<MilPoint2D,0>::AddMultipleAndSet((__int64)a2 + 32, &v37, 4u);
  v22 = v21;
  if ( v21 < 0 )
  {
    v33 = 191;
    goto LABEL_11;
  }
  LODWORD(v34) = 255;
  v21 = DynArray<unsigned long,0>::AddAndSet((__int64)a2 + 96, 4u, (int *)&v34);
  v22 = v21;
  if ( v21 < 0 )
  {
    v33 = 192;
    goto LABEL_11;
  }
  v24 = (char *)a2 + 64;
  v25 = 0LL;
  v26 = v34;
  while ( 1 )
  {
    v27 = *((unsigned int *)v24 + 6);
    v28 = &v35[v25];
    v29 = v27 + 1;
    v30 = v27 + 1;
    if ( (int)v27 + 1 < (unsigned int)v27 )
      v30 = v26;
    v22 = v29 < (unsigned int)v27 ? 0x80070216 : 0;
    v26 = v30;
    if ( v29 >= (unsigned int)v27 )
    {
      if ( v30 > *((_DWORD *)v24 + 5) )
      {
        v31 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v24, 4u, 1, v28);
        v22 = v31;
        if ( v31 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0xC0u);
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)v24 + 4 * v27) = *v28;
        *((_DWORD *)v24 + 6) = v30;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xB5u);
    }
    if ( v22 < 0 )
      break;
    v25 = (unsigned int)(v25 + 1);
    if ( (unsigned int)v25 >= 6 )
      return (unsigned int)v22;
  }
  v33 = 196;
  v23 = v22;
LABEL_29:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, v33);
  return (unsigned int)v22;
}
