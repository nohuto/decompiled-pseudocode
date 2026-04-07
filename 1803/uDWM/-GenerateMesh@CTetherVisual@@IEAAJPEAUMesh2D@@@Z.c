/*
 * XREFs of ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x180090CC0
 * Callers:
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x18009131C (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     sqrtf_0 @ 0x18004B36C (sqrtf_0.c)
 *     ?AddAndSet@?$DynArray@K$0A@@@QEAAJIAEBK@Z @ 0x18008E9A8 (-AddAndSet@-$DynArray@K$0A@@@QEAAJIAEBK@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z @ 0x18008EA70 (-AddMultipleAndSet@-$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z @ 0x18008EB04 (-AddMultipleAndSet@-$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z.c)
 */

__int64 __fastcall CTetherVisual::GenerateMesh(CTetherVisual *this, struct Mesh2D *a2)
{
  int v2; // r8d
  int v4; // r12d
  int v6; // ebx
  int v7; // r14d
  int v8; // r15d
  int v9; // ecx
  int v10; // edx
  float v11; // xmm6_4
  float v12; // xmm0_4
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  __int64 v15; // r10
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r9
  float v18; // xmm1_4
  int v19; // ebx
  int v20; // r10d
  int v21; // ecx
  int v22; // r10d
  int v23; // r11d
  int v24; // edx
  int v25; // eax
  int v26; // r8d
  int v27; // r9d
  int v28; // r11d
  int v29; // ebx
  __m128i v30; // xmm3
  __m128i v31; // xmm2
  double v32; // xmm0_8
  int v33; // eax
  int v34; // ebx
  int v35; // r9d
  unsigned int v36; // edi
  __int64 v37; // r14
  unsigned int v38; // ecx
  _DWORD *v39; // r9
  unsigned int v40; // eax
  int v41; // eax
  unsigned int v43; // [rsp+28h] [rbp-89h]
  unsigned int v44; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v45[6]; // [rsp+40h] [rbp-71h] BYREF
  float v46[12]; // [rsp+58h] [rbp-59h] BYREF
  double v47; // [rsp+88h] [rbp-29h] BYREF
  __int64 v48; // [rsp+90h] [rbp-21h]
  double v49; // [rsp+98h] [rbp-19h]
  __int64 v50; // [rsp+A0h] [rbp-11h]
  double v51; // [rsp+A8h] [rbp-9h]
  __int64 v52; // [rsp+B0h] [rbp-1h]
  double v53; // [rsp+B8h] [rbp+7h]
  __int64 v54; // [rsp+C0h] [rbp+Fh]

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
  v13 = *((_QWORD *)this + 38);
  v14 = *((_QWORD *)this + 37);
  v15 = *((_QWORD *)this + 49);
  v16 = HIDWORD(v14);
  v17 = HIDWORD(v13);
  if ( v15 )
  {
    v18 = *(double *)(v15 + 48);
    LODWORD(v16) = HIDWORD(v13) + (int)(float)((float)(HIDWORD(v14) - HIDWORD(v13)) * v18);
    LODWORD(v17) = HIDWORD(v13);
    LODWORD(v14) = v4 + (int)(float)((float)v6 * v18);
  }
  v46[2] = 0.0;
  v19 = v14;
  v46[5] = 0.0;
  v20 = v16;
  v46[8] = 0.0;
  v21 = v8 + v16;
  v46[11] = 0.0;
  v22 = v20 - v8;
  v45[0] = 0;
  v23 = v13;
  *((_DWORD *)this + 83) = v21;
  v24 = v17 - v8;
  *((_DWORD *)this + 79) = v22;
  *((_DWORD *)this + 81) = v17 - v8;
  v25 = v7 + v14;
  *((_DWORD *)this + 82) = v25;
  v26 = v7 + v13;
  *((_DWORD *)this + 84) = v26;
  v27 = v8 + v17;
  *((_DWORD *)this + 85) = v27;
  v28 = v23 - v7;
  *((_DWORD *)this + 80) = v28;
  v29 = v19 - v7;
  *((_DWORD *)this + 78) = v29;
  v45[1] = 1;
  v45[3] = 1;
  v45[5] = 3;
  v30 = _mm_cvtsi32_si128(*((_DWORD *)this + 89));
  v31 = _mm_cvtsi32_si128(*((_DWORD *)this + 91));
  v46[1] = (float)v22;
  v46[0] = (float)v29;
  v46[3] = (float)v28;
  v46[4] = (float)v24;
  v45[2] = 2;
  v45[4] = 2;
  v46[6] = (float)v25;
  v46[7] = (float)v21;
  v46[9] = (float)v26;
  v47 = (double)*((int *)this + 88);
  v46[10] = (float)v27;
  v32 = (double)*((int *)this + 90);
  v49 = v47;
  v51 = v32;
  v53 = v32;
  v48 = *(_OWORD *)&_mm_cvtepi32_pd(v30);
  v50 = *(_OWORD *)&_mm_cvtepi32_pd(v31);
  v52 = v48;
  v54 = v50;
  v33 = DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)a2, v46, 4u);
  v34 = v33;
  if ( v33 < 0 )
  {
    v43 = 190;
LABEL_10:
    v35 = v33;
    goto LABEL_28;
  }
  v33 = DynArray<MilPoint2D,0>::AddMultipleAndSet((__int64)a2 + 32, &v47, 4u);
  v34 = v33;
  if ( v33 < 0 )
  {
    v43 = 191;
    goto LABEL_10;
  }
  v44 = 255;
  v33 = DynArray<unsigned long,0>::AddAndSet((__int64)a2 + 96, 4u, (int *)&v44);
  v34 = v33;
  if ( v33 < 0 )
  {
    v43 = 192;
    goto LABEL_10;
  }
  v36 = v44;
  v37 = 0LL;
  while ( 1 )
  {
    v38 = *((_DWORD *)a2 + 22);
    v39 = &v45[v37];
    v40 = v38 + 1;
    if ( v38 + 1 >= v38 )
      v36 = v38 + 1;
    v34 = v40 < v38 ? 0x80070216 : 0;
    if ( v40 >= v38 )
    {
      if ( v36 > *((_DWORD *)a2 + 21) )
      {
        v41 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 64, 4, 1, v39);
        v34 = v41;
        if ( v41 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0xC0u);
      }
      else
      {
        *(_DWORD *)(*((_QWORD *)a2 + 8) + 4LL * *((unsigned int *)a2 + 22)) = *v39;
        *((_DWORD *)a2 + 22) = v36;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0xB5u);
    }
    if ( v34 < 0 )
      break;
    v37 = (unsigned int)(v37 + 1);
    if ( (unsigned int)v37 >= 6 )
      return (unsigned int)v34;
  }
  v43 = 196;
  v35 = v34;
LABEL_28:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, v43);
  return (unsigned int)v34;
}
