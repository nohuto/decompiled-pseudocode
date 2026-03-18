/*
 * XREFs of ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEBVCMILMatrix@@PEA_NPEAH@Z @ 0x18020CA88
 * Callers:
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18020C9D0 (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1801C75EC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 */

void __fastcall CRoundedRectangleShape::CalcEdgesAndControlPoints(
        CRoundedRectangleShape *this,
        struct MilPoint2F *a2,
        const struct CMILMatrix *a3,
        bool *a4,
        int *a5)
{
  char v6; // al
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm2_4
  float v10; // xmm5_4
  float v11; // xmm9_4
  float v12; // xmm8_4
  float *v13; // r11
  float v14; // xmm9_4
  float v15; // xmm8_4
  float *v16; // r8
  float v17; // xmm8_4
  float v18; // xmm2_4
  float *v19; // rcx
  float v20; // xmm4_4
  float v21; // xmm2_4
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v31; // [rsp+38h] [rbp-D0h]
  __int128 v32; // [rsp+48h] [rbp-C0h]
  __int128 v33; // [rsp+58h] [rbp-B0h]
  __int128 v34; // [rsp+68h] [rbp-A0h]
  __int128 v35; // [rsp+78h] [rbp-90h]
  __int128 v36; // [rsp+88h] [rbp-80h]
  __int128 v37; // [rsp+98h] [rbp-70h]
  __int128 v38; // [rsp+A8h] [rbp-60h]
  __int128 v39; // [rsp+B8h] [rbp-50h]

  *(_DWORD *)a4 = 0;
  *a5 = 0;
  v6 = *((_BYTE *)this + 64);
  v7 = *((float *)this + 6);
  v8 = *((float *)this + 4);
  v9 = *((float *)this + 5);
  if ( v6 )
  {
    v7 = v7 + v8;
    v10 = v9 + *((float *)this + 7);
  }
  else
  {
    v10 = *((float *)this + 7);
  }
  v11 = *((float *)this + 8);
  LODWORD(v30) = *((_DWORD *)this + 4);
  *((float *)&v30 + 1) = v9;
  *((_QWORD *)&v31 + 1) = __PAIR64__(LODWORD(v9), LODWORD(v7));
  *(_QWORD *)&v34 = __PAIR64__(LODWORD(v10), LODWORD(v8));
  *((_QWORD *)&v35 + 1) = __PAIR64__(LODWORD(v10), LODWORD(v7));
  if ( v11 > 0.0 )
  {
    v12 = *((float *)this + 9);
    if ( v12 > 0.0 )
    {
      *a4 = 1;
      ++*a5;
      v6 = *((_BYTE *)this + 64);
      *((float *)&v32 + 1) = v12 + v9;
      *((float *)&v30 + 2) = v11 + v8;
      *(float *)&v32 = v8;
      *((float *)&v30 + 3) = v9;
      *(float *)&v36 = v8;
      *((float *)&v36 + 1) = (float)(v12 + v9) - (float)(v12 * 0.55228478);
      *((float *)&v36 + 3) = v9;
      *((float *)&v36 + 2) = (float)(v11 + v8) - (float)(v11 * 0.55228478);
    }
  }
  v13 = (float *)((char *)this + 40);
  if ( v6 )
    v13 = (float *)((char *)this + 32);
  v14 = *v13;
  if ( *v13 > 0.0 )
  {
    v15 = v13[1];
    if ( v15 > 0.0 )
    {
      a4[1] = 1;
      ++*a5;
      v6 = *((_BYTE *)this + 64);
      *((float *)&v32 + 3) = v15 + v9;
      *(float *)&v31 = v7 - v14;
      *((float *)&v31 + 1) = v9;
      *((float *)&v32 + 2) = v7;
      *(_QWORD *)((char *)&v37 + 4) = __PAIR64__(LODWORD(v7), LODWORD(v9));
      *((float *)&v37 + 3) = (float)(v15 + v9) - (float)(v15 * 0.55228478);
      *(float *)&v37 = (float)(v14 * 0.55228478) + (float)(v7 - v14);
    }
  }
  v16 = v13 + 2;
  if ( v6 )
    v16 = v13;
  v17 = *v16;
  if ( *v16 > 0.0 )
  {
    v18 = v16[1];
    if ( v18 > 0.0 )
    {
      a4[2] = 1;
      ++*a5;
      v6 = *((_BYTE *)this + 64);
      *((float *)&v34 + 2) = v17 + v8;
      *((float *)&v34 + 3) = v10;
      *(float *)&v33 = v8;
      *((float *)&v33 + 1) = v10 - v18;
      *((float *)&v39 + 1) = v10;
      *(float *)&v39 = (float)(v17 + v8) - (float)(v17 * 0.55228478);
      *(float *)&v38 = v8;
      *((float *)&v38 + 1) = (float)(v18 * 0.55228478) + (float)(v10 - v18);
    }
  }
  v19 = v16 + 2;
  if ( v6 )
    v19 = v16;
  v20 = *v19;
  if ( *v19 > 0.0 )
  {
    v21 = v19[1];
    if ( v21 > 0.0 )
    {
      a4[3] = 1;
      ++*a5;
      *((float *)&v33 + 2) = v7;
      *((float *)&v33 + 3) = v10 - v21;
      *((float *)&v35 + 1) = v10;
      *(float *)&v35 = v7 - v20;
      *((float *)&v38 + 2) = v7;
      *((float *)&v39 + 3) = v10;
      *((float *)&v38 + 3) = (float)(v21 * 0.55228478) + (float)(v10 - v21);
      *((float *)&v39 + 2) = (float)(v20 * 0.55228478) + (float)(v7 - v20);
    }
  }
  if ( a3 )
  {
    CMILMatrix::Transform(a3, (const struct MilPoint2F *)&v30, a2, 20);
  }
  else
  {
    v22 = v31;
    *(_OWORD *)a2 = v30;
    v23 = v32;
    *((_OWORD *)a2 + 1) = v22;
    v24 = v33;
    *((_OWORD *)a2 + 2) = v23;
    v25 = v34;
    *((_OWORD *)a2 + 3) = v24;
    v26 = v35;
    *((_OWORD *)a2 + 4) = v25;
    v27 = v36;
    *((_OWORD *)a2 + 5) = v26;
    v28 = v38;
    *((_OWORD *)a2 + 6) = v27;
    *((_OWORD *)a2 + 7) = v37;
    v29 = v39;
    *((_OWORD *)a2 + 8) = v28;
    *((_OWORD *)a2 + 9) = v29;
  }
}
