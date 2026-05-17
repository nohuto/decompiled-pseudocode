/*
 * XREFs of atan2 @ 0x18008D3C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180092E5C @ 0x180092E5C (sub_180092E5C.c)
 *     sub_180092F8C @ 0x180092F8C (sub_180092F8C.c)
 */

double __cdecl atan2(double Y, double X)
{
  double v2; // xmm8_8
  double v3; // xmm9_8
  double v4; // r15
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r13
  int v9; // edi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rsi
  int v12; // r8d
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // xmm6_8
  __int64 v15; // xmm0_8
  double v16; // xmm0_8
  unsigned __int64 v17; // rcx
  __int64 v18; // xmm0_8
  double v19; // xmm0_8
  double v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  double v23; // rax
  int v24; // r8d
  unsigned __int64 v25; // rax
  int v26; // r8d
  double v27; // xmm0_8
  double v28; // xmm5_8
  __int64 v29; // rcx
  double v30; // xmm7_8
  double v31; // xmm10_8
  double v32; // xmm6_8
  int v33; // kr00_4
  double v34; // xmm3_8
  double v35; // xmm4_8
  double v36; // xmm10_8
  int v37; // [rsp+E0h] [rbp+8h]

  v2 = Y;
  v3 = X;
  v4 = Y;
  v5 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  v6 = *(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFLL;
  v7 = (*(_QWORD *)&Y >> 52) & 0x7FFLL;
  v8 = (*(_QWORD *)&X >> 52) & 0x7FFLL;
  v37 = v7;
  v9 = ((*(_QWORD *)&Y >> 52) & 0x7FF) - v8;
  v10 = *(_QWORD *)&X & 0x8000000000000000uLL;
  v11 = *(_QWORD *)&Y & 0x8000000000000000uLL;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FF0000000000000LL )
  {
    v12 = LODWORD(X);
LABEL_3:
    sub_180092F8C((unsigned int)"atan2", 16, v12, 1, 0, 33, *(__int64 *)&X, *(__int64 *)&Y, 2);
    return Y;
  }
  v13 = 0LL;
  if ( v6 > 0x7FF0000000000000LL )
  {
    v12 = LODWORD(Y);
    goto LABEL_3;
  }
  if ( !v6 )
  {
    if ( !v10 )
      return Y;
    goto LABEL_8;
  }
  if ( !v5 )
  {
    if ( v11 )
    {
      v14 = qword_180156AA0;
      goto LABEL_32;
    }
    sub_180092E5C(16LL, 16LL);
    LODWORD(v7) = v37;
    v6 = *(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFLL;
    v5 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  }
  if ( (unsigned int)v8 < 0x3FD && (unsigned int)v7 < 0x3FD )
  {
    if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) != 0 )
    {
      v17 = *(_QWORD *)&X + 0x4000000000000000LL;
    }
    else
    {
      v15 = *(_QWORD *)&X | 0x4010000000000000LL;
      if ( v10 )
        v16 = *(double *)&v15 + 4.0;
      else
        v16 = *(double *)&v15 + -4.0;
      *(double *)&v17 = v16;
    }
    if ( (*(_QWORD *)&v4 & 0x7FF0000000000000LL) != 0 )
    {
      *(_QWORD *)&v20 = *(_QWORD *)&v4 + 0x4000000000000000LL;
    }
    else
    {
      v18 = *(_QWORD *)&v4 | 0x4010000000000000LL;
      if ( v4 >= 0.0 )
        v19 = *(double *)&v18 + -4.0;
      else
        v19 = *(double *)&v18 + 4.0;
      v20 = v19;
    }
    v3 = *(double *)&v17;
    v2 = v20;
    v9 = ((*(_QWORD *)&v20 >> 52) & 0x7FF) - ((v17 >> 52) & 0x7FF);
  }
  if ( v9 > 56 )
  {
    v14 = qword_180156AA0;
    goto LABEL_31;
  }
  if ( v9 >= -28 || v10 )
  {
    if ( v9 < -56 && v10 )
    {
LABEL_8:
      v14 = qword_180156A98;
      if ( v11 )
        *(double *)&v14 = -*(double *)&qword_180156A98;
      goto LABEL_33;
    }
    if ( v6 == 0x7FF0000000000000LL && v5 == 0x7FF0000000000000LL )
    {
      if ( v10 )
        v14 = qword_180156AB0;
      else
        v14 = qword_180156AA8;
LABEL_31:
      if ( !v11 )
      {
LABEL_33:
        v21 = 16LL;
        v22 = 16LL;
        goto LABEL_34;
      }
LABEL_32:
      *(double *)&v14 = -*(double *)&v14;
      goto LABEL_33;
    }
    if ( v10 )
      v3 = -v3;
    if ( v11 )
      v2 = -v2;
    v26 = 0;
    LOBYTE(v26) = v2 > v3;
    if ( v2 > v3 )
    {
      v27 = v3;
      v3 = v2;
      v2 = v27;
    }
    v28 = v2 / v3;
    if ( v2 / v3 <= 0.0625 )
    {
      v31 = 0.0;
      if ( v28 >= 0.00000001 )
        v28 = (v2
             - COERCE_DOUBLE(*(_QWORD *)&v28 & 0xFFFFFFFF00000000uLL)
             * COERCE_DOUBLE(*(_QWORD *)&v3 & 0xFFFFFFFF00000000uLL)
             - (v3 - COERCE_DOUBLE(*(_QWORD *)&v3 & 0xFFFFFFFF00000000uLL))
             * COERCE_DOUBLE(*(_QWORD *)&v28 & 0xFFFFFFFF00000000uLL)
             - (v28 - COERCE_DOUBLE(*(_QWORD *)&v28 & 0xFFFFFFFF00000000uLL)) * v3)
            / v3
            - (0.3333333333333317
             - (0.1999999999939322
              - (0.1428571356180717 - (0.1111073628351453 - v28 * v28 * 0.09002981028544979) * (v28 * v28))
              * (v28
               * v28))
             * (v28
              * v28))
            * (v28
             * v28
             * v28)
            + v28;
    }
    else
    {
      v29 = (unsigned int)((int)(v28 * 256.0 + 0.5) - 16);
      v30 = qword_180116BF0[v29];
      v31 = qword_180116460[v29];
      v32 = (double)(int)(v28 * 256.0 + 0.5) * 0.00390625;
      v33 = 1023 - ((*(_QWORD *)&v3 >> 52) & 0x7FF);
      LODWORD(v29) = v33 - v33 / 2;
      v34 = COERCE_DOUBLE((v33 / 2 + 1023LL) << 52) * v2 * COERCE_DOUBLE(((int)v29 + 1023LL) << 52);
      v35 = (v34
           - COERCE_DOUBLE(COERCE_UNSIGNED_INT64(COERCE_DOUBLE((v33 / 2 + 1023LL) << 52) * v3 * COERCE_DOUBLE(((int)v29 + 1023LL) << 52)) & 0xFFFFFFFFF8000000uLL)
           * v32
           - (COERCE_DOUBLE((v33 / 2 + 1023LL) << 52) * v3 * COERCE_DOUBLE(((int)v29 + 1023LL) << 52)
            - COERCE_DOUBLE(COERCE_UNSIGNED_INT64(COERCE_DOUBLE((v33 / 2 + 1023LL) << 52) * v3 * COERCE_DOUBLE(((int)v29 + 1023LL) << 52)) & 0xFFFFFFFFF8000000uLL))
           * v32)
          / (v32 * v34 + COERCE_DOUBLE((v33 / 2 + 1023LL) << 52) * v3 * COERCE_DOUBLE(((int)v29 + 1023LL) << 52));
      v28 = v35 + v30 - (0.333333333332241 - v35 * v35 * 0.1999991803898914) * (v35 * v35) * v35;
    }
    if ( v26 )
    {
      v31 = *(double *)&qword_180156AC8 - v31;
      v28 = *(double *)&qword_180156AD0 - v28;
    }
    if ( v10 )
    {
      v31 = *(double *)&qword_180156AB8 - v31;
      v28 = *(double *)&qword_180156AC0 - v28;
    }
    v36 = v31 + v28;
    if ( v11 )
      return -v36;
    return v36;
  }
  else if ( v9 >= -1074 )
  {
    if ( v9 < -1022 )
    {
      v23 = fabs(1.267650600228229e30 * v2 / v3);
      v24 = (*(_QWORD *)&v23 >> 52) - 100;
      if ( v24 <= 0 )
      {
        v25 = *(_QWORD *)&v23 & 0x800FFFFFFFFFFFFFuLL | 0x10000000000000LL;
        if ( 1 - v24 <= 54 )
          v13 = ((v25 >> -(char)v24) & 1) + (v25 >> -(char)v24 >> 1);
      }
      else
      {
        v13 = *(_QWORD *)&v23 & 0x800FFFFFFFFFFFFFuLL | (((*(_QWORD *)&v23 >> 52) - 100LL) << 52);
      }
      v14 = COERCE_UNSIGNED_INT64(1.267650600228229e30 * v2 / v3) & 0x8000000000000000uLL | v13;
      if ( (v13 & 0x7FF0000000000000LL) != 0 )
        return *(double *)&v14;
      v22 = 18LL;
      v21 = 18LL;
LABEL_34:
      sub_180092E5C(v22, v21);
      return *(double *)&v14;
    }
    return v2 / v3;
  }
  else
  {
    sub_180092E5C(18LL, 18LL);
    if ( v11 )
      return -0.0;
    else
      return 0.0;
  }
}
