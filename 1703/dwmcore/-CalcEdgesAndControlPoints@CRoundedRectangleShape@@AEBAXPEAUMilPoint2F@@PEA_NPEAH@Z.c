/*
 * XREFs of ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEA_NPEAH@Z @ 0x1801B0A24
 * Callers:
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJXZ @ 0x1801B0958 (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJXZ.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1800120B0 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall CRoundedRectangleShape::CalcEdgesAndControlPoints(
        CRoundedRectangleShape *this,
        struct MilPoint2F *a2,
        bool *a3,
        int *a4)
{
  float v4; // xmm8_4
  float v5; // xmm9_4
  float v6; // xmm7_4
  float v7; // xmm6_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  CMILMatrix *v16; // rcx
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

  *(_DWORD *)a3 = 0;
  *a4 = 0;
  v4 = *((float *)this + 2);
  v5 = *((float *)this + 3);
  v6 = *((float *)this + 4);
  v7 = *((float *)this + 5);
  v8 = *((float *)this + 6);
  *(_QWORD *)&v25 = __PAIR64__(LODWORD(v5), LODWORD(v4));
  *((_QWORD *)&v26 + 1) = __PAIR64__(LODWORD(v5), LODWORD(v6));
  *(_QWORD *)&v29 = __PAIR64__(LODWORD(v7), LODWORD(v4));
  *((_QWORD *)&v30 + 1) = __PAIR64__(LODWORD(v7), LODWORD(v6));
  if ( v8 > 0.0 )
  {
    v9 = *((float *)this + 7);
    if ( v9 > 0.0 )
    {
      *a3 = 1;
      ++*a4;
      *((float *)&v27 + 1) = v9 + v5;
      *(float *)&v27 = v4;
      *((float *)&v25 + 3) = v5;
      *((float *)&v25 + 2) = v8 + v4;
      *(float *)&v31 = v4;
      *((float *)&v31 + 1) = (float)(v9 + v5) - (float)(v9 * 0.55228478);
      *((float *)&v31 + 3) = v5;
      *((float *)&v31 + 2) = (float)(v8 + v4) - (float)(v8 * 0.55228478);
    }
  }
  v10 = *((float *)this + 8);
  if ( v10 > 0.0 )
  {
    v11 = *((float *)this + 9);
    if ( v11 > 0.0 )
    {
      a3[1] = 1;
      ++*a4;
      *((float *)&v26 + 1) = v5;
      *((float *)&v27 + 3) = v11 + v5;
      *((float *)&v27 + 2) = v6;
      *(float *)&v26 = v6 - v10;
      *(_QWORD *)((char *)&v32 + 4) = __PAIR64__(LODWORD(v6), LODWORD(v5));
      *((float *)&v32 + 3) = (float)(v11 + v5) - (float)(v11 * 0.55228478);
      *(float *)&v32 = (float)(v10 * 0.55228478) + (float)(v6 - v10);
    }
  }
  v12 = *((float *)this + 10);
  if ( v12 > 0.0 )
  {
    v13 = *((float *)this + 11);
    if ( v13 > 0.0 )
    {
      a3[2] = 1;
      ++*a4;
      *((float *)&v29 + 3) = v7;
      *((float *)&v29 + 2) = v12 + v4;
      *(float *)&v28 = v4;
      *((float *)&v28 + 1) = v7 - v13;
      *((float *)&v34 + 1) = v7;
      *(float *)&v33 = v4;
      *(float *)&v34 = (float)(v12 + v4) - (float)(v12 * 0.55228478);
      *((float *)&v33 + 1) = (float)(v13 * 0.55228478) + (float)(v7 - v13);
    }
  }
  v14 = *((float *)this + 12);
  if ( v14 > 0.0 )
  {
    v15 = *((float *)this + 13);
    if ( v15 > 0.0 )
    {
      a3[3] = 1;
      ++*a4;
      *((float *)&v28 + 2) = v6;
      *((float *)&v28 + 3) = v7 - v15;
      *((float *)&v30 + 1) = v7;
      *(float *)&v30 = v6 - v14;
      *((float *)&v33 + 2) = v6;
      *((float *)&v34 + 3) = v7;
      *((float *)&v33 + 3) = (float)(v15 * 0.55228478) + (float)(v7 - v15);
      *((float *)&v34 + 2) = (float)(v14 * 0.55228478) + (float)(v6 - v14);
    }
  }
  v16 = (CMILMatrix *)*((_QWORD *)this + 8);
  if ( v16 )
  {
    CMILMatrix::Transform(v16, (const struct MilPoint2F *)&v25, a2, 20);
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
