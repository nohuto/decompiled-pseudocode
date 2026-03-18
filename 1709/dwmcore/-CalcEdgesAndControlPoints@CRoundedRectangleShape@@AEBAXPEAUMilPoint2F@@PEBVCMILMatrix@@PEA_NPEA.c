/*
 * XREFs of ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEBVCMILMatrix@@PEA_NPEAH@Z @ 0x1801CBE58
 * Callers:
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801CBD90 (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1801907DC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 */

void __fastcall CRoundedRectangleShape::CalcEdgesAndControlPoints(
        CRoundedRectangleShape *this,
        struct MilPoint2F *a2,
        const struct CMILMatrix *a3,
        bool *a4,
        int *a5)
{
  float v5; // xmm8_4
  float v6; // xmm9_4
  float v7; // xmm7_4
  float v8; // xmm6_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v26; // [rsp+38h] [rbp-D0h]
  __int128 v27; // [rsp+48h] [rbp-C0h]
  __int128 v28; // [rsp+58h] [rbp-B0h]
  __int128 v29; // [rsp+68h] [rbp-A0h]
  __int128 v30; // [rsp+78h] [rbp-90h]
  __int128 v31; // [rsp+88h] [rbp-80h]
  __int128 v32; // [rsp+98h] [rbp-70h]
  __int128 v33; // [rsp+A8h] [rbp-60h]
  __int128 v34; // [rsp+B8h] [rbp-50h]

  *(_DWORD *)a4 = 0;
  *a5 = 0;
  v5 = *((float *)this + 2);
  v6 = *((float *)this + 3);
  v7 = *((float *)this + 4);
  v8 = *((float *)this + 5);
  v9 = *((float *)this + 6);
  *(_QWORD *)&v25 = __PAIR64__(LODWORD(v6), LODWORD(v5));
  *((_QWORD *)&v26 + 1) = __PAIR64__(LODWORD(v6), LODWORD(v7));
  *(_QWORD *)&v29 = __PAIR64__(LODWORD(v8), LODWORD(v5));
  *((_QWORD *)&v30 + 1) = __PAIR64__(LODWORD(v8), LODWORD(v7));
  if ( v9 > 0.0 )
  {
    v10 = *((float *)this + 7);
    if ( v10 > 0.0 )
    {
      *a4 = 1;
      ++*a5;
      *((float *)&v27 + 1) = v10 + v6;
      *(float *)&v27 = v5;
      *((float *)&v25 + 3) = v6;
      *((float *)&v25 + 2) = v9 + v5;
      *(float *)&v31 = v5;
      *((float *)&v31 + 1) = (float)(v10 + v6) - (float)(v10 * 0.55228478);
      *((float *)&v31 + 3) = v6;
      *((float *)&v31 + 2) = (float)(v9 + v5) - (float)(v9 * 0.55228478);
    }
  }
  v11 = *((float *)this + 8);
  if ( v11 > 0.0 )
  {
    v12 = *((float *)this + 9);
    if ( v12 > 0.0 )
    {
      a4[1] = 1;
      ++*a5;
      *((float *)&v26 + 1) = v6;
      *((float *)&v27 + 3) = v12 + v6;
      *((float *)&v27 + 2) = v7;
      *(float *)&v26 = v7 - v11;
      *(_QWORD *)((char *)&v32 + 4) = __PAIR64__(LODWORD(v7), LODWORD(v6));
      *((float *)&v32 + 3) = (float)(v12 + v6) - (float)(v12 * 0.55228478);
      *(float *)&v32 = (float)(v11 * 0.55228478) + (float)(v7 - v11);
    }
  }
  v13 = *((float *)this + 10);
  if ( v13 > 0.0 )
  {
    v14 = *((float *)this + 11);
    if ( v14 > 0.0 )
    {
      a4[2] = 1;
      ++*a5;
      *((float *)&v29 + 3) = v8;
      *((float *)&v29 + 2) = v13 + v5;
      *(float *)&v28 = v5;
      *((float *)&v28 + 1) = v8 - v14;
      *((float *)&v34 + 1) = v8;
      *(float *)&v33 = v5;
      *(float *)&v34 = (float)(v13 + v5) - (float)(v13 * 0.55228478);
      *((float *)&v33 + 1) = (float)(v14 * 0.55228478) + (float)(v8 - v14);
    }
  }
  v15 = *((float *)this + 12);
  if ( v15 > 0.0 )
  {
    v16 = *((float *)this + 13);
    if ( v16 > 0.0 )
    {
      a4[3] = 1;
      ++*a5;
      *((float *)&v28 + 2) = v7;
      *((float *)&v28 + 3) = v8 - v16;
      *((float *)&v30 + 1) = v8;
      *(float *)&v30 = v7 - v15;
      *((float *)&v33 + 2) = v7;
      *((float *)&v34 + 3) = v8;
      *((float *)&v33 + 3) = (float)(v16 * 0.55228478) + (float)(v8 - v16);
      *((float *)&v34 + 2) = (float)(v15 * 0.55228478) + (float)(v7 - v15);
    }
  }
  if ( a3 )
  {
    CMILMatrix::Transform(a3, (const struct MilPoint2F *)&v25, a2, 20);
  }
  else
  {
    v17 = v26;
    *(_OWORD *)a2 = v25;
    v18 = v27;
    *((_OWORD *)a2 + 1) = v17;
    v19 = v28;
    *((_OWORD *)a2 + 2) = v18;
    v20 = v29;
    *((_OWORD *)a2 + 3) = v19;
    v21 = v30;
    *((_OWORD *)a2 + 4) = v20;
    v22 = v31;
    *((_OWORD *)a2 + 5) = v21;
    v23 = v33;
    *((_OWORD *)a2 + 6) = v22;
    *((_OWORD *)a2 + 7) = v32;
    v24 = v34;
    *((_OWORD *)a2 + 8) = v23;
    *((_OWORD *)a2 + 9) = v24;
  }
}
