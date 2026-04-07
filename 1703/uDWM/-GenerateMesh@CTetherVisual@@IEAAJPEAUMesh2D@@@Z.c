/*
 * XREFs of ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x18008CE50
 * Callers:
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x18008D3DC (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     sqrtf_0 @ 0x18004DE9C (sqrtf_0.c)
 *     ?AddAndSet@?$DynArray@K$0A@@@QEAAJIAEBK@Z @ 0x18006E3B8 (-AddAndSet@-$DynArray@K$0A@@@QEAAJIAEBK@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z @ 0x18006E47C (-AddMultipleAndSet@-$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z @ 0x18006E520 (-AddMultipleAndSet@-$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z.c)
 */

__int64 __fastcall CTetherVisual::GenerateMesh(CTetherVisual *this, struct Mesh2D *a2)
{
  int v2; // r8d
  int v4; // edi
  int v6; // ebx
  int v7; // r14d
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
  unsigned int v24; // edi
  __int64 v25; // r14
  unsigned int v26; // ecx
  _DWORD *v27; // r9
  unsigned int v28; // eax
  int v29; // eax
  unsigned int v31; // [rsp+28h] [rbp-89h]
  __int64 v32; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v33[6]; // [rsp+40h] [rbp-71h] BYREF
  float v34[12]; // [rsp+58h] [rbp-59h] BYREF
  double v35; // [rsp+88h] [rbp-29h] BYREF
  __int64 v36; // [rsp+90h] [rbp-21h]
  double v37; // [rsp+98h] [rbp-19h]
  __int64 v38; // [rsp+A0h] [rbp-11h]
  double v39; // [rsp+A8h] [rbp-9h]
  __int64 v40; // [rsp+B0h] [rbp-1h]
  double v41; // [rsp+B8h] [rbp+7h]
  __int64 v42; // [rsp+C0h] [rbp+Fh]

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
  v32 = *((_QWORD *)this + 37);
  v14 = *((_QWORD *)this + 38);
  if ( v13 )
  {
    v15 = *(double *)(v13 + 48);
    v16 = v4 + (int)(float)((float)v6 * v15);
    v17 = *((_DWORD *)this + 77) + (int)(float)((float)(*((_DWORD *)this + 75) - *((_DWORD *)this + 77)) * v15);
  }
  else
  {
    v17 = HIDWORD(v32);
    v16 = v32;
  }
  v34[2] = 0.0;
  v34[5] = 0.0;
  v34[8] = 0.0;
  v34[11] = 0.0;
  v33[0] = 0;
  *((_DWORD *)this + 82) = v16 + v7;
  *((_DWORD *)this + 83) = v17 + v8;
  *((_DWORD *)this + 79) = v17 - v8;
  *((_DWORD *)this + 84) = v14 + v7;
  *((_DWORD *)this + 85) = HIDWORD(v14) + v8;
  *((_DWORD *)this + 81) = HIDWORD(v14) - v8;
  *((_DWORD *)this + 78) = v16 - v7;
  *((_DWORD *)this + 80) = v14 - v7;
  v33[1] = 1;
  v33[3] = 1;
  v18 = _mm_cvtsi32_si128(*((_DWORD *)this + 89));
  v19 = _mm_cvtsi32_si128(*((_DWORD *)this + 91));
  v34[1] = (float)(v17 - v8);
  v33[5] = 3;
  v34[0] = (float)(v16 - v7);
  v34[3] = (float)(v14 - v7);
  v34[4] = (float)(HIDWORD(v14) - v8);
  v34[6] = (float)(v16 + v7);
  v34[7] = (float)(v17 + v8);
  v33[2] = 2;
  v33[4] = 2;
  v34[10] = (float)(HIDWORD(v14) + v8);
  v39 = (double)*((int *)this + 90);
  v34[9] = (float)(v14 + v7);
  v20 = (double)*((int *)this + 88);
  v41 = v39;
  v35 = v20;
  v37 = v20;
  v36 = *(_OWORD *)&_mm_cvtepi32_pd(v18);
  v38 = *(_OWORD *)&_mm_cvtepi32_pd(v19);
  v40 = v36;
  v42 = v38;
  v21 = DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)a2, v34, 4u);
  v22 = v21;
  if ( v21 < 0 )
  {
    v31 = 190;
LABEL_11:
    v23 = v21;
    goto LABEL_29;
  }
  v21 = DynArray<MilPoint2D,0>::AddMultipleAndSet((__int64)a2 + 32, &v35, 4u);
  v22 = v21;
  if ( v21 < 0 )
  {
    v31 = 191;
    goto LABEL_11;
  }
  LODWORD(v32) = 255;
  v21 = DynArray<unsigned long,0>::AddAndSet((__int64)a2 + 96, 4u, (int *)&v32);
  v22 = v21;
  if ( v21 < 0 )
  {
    v31 = 192;
    goto LABEL_11;
  }
  v24 = v32;
  v25 = 0LL;
  while ( 1 )
  {
    v26 = *((_DWORD *)a2 + 22);
    v27 = &v33[v25];
    v28 = v26 + 1;
    if ( v26 + 1 >= v26 )
      v24 = v26 + 1;
    v22 = v28 < v26 ? 0x80070216 : 0;
    if ( v28 >= v26 )
    {
      if ( v24 > *((_DWORD *)a2 + 21) )
      {
        v29 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 64, 4u, 1, v27);
        v22 = v29;
        if ( v29 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v29, 0xC0u);
      }
      else
      {
        *(_DWORD *)(*((_QWORD *)a2 + 8) + 4LL * *((unsigned int *)a2 + 22)) = *v27;
        *((_DWORD *)a2 + 22) = v24;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0xB5u);
    }
    if ( v22 < 0 )
      break;
    v25 = (unsigned int)(v25 + 1);
    if ( (unsigned int)v25 >= 6 )
      return (unsigned int)v22;
  }
  v31 = 196;
  v23 = v22;
LABEL_29:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, v31);
  return (unsigned int)v22;
}
