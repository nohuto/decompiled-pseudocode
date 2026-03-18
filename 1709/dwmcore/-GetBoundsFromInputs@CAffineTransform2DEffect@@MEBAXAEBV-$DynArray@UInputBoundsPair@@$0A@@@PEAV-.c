/*
 * XREFs of ?GetBoundsFromInputs@CAffineTransform2DEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017F860
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180163E60 (-GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-$TMilRect_@.c)
 */

char __fastcall CAffineTransform2DEffect::GetBoundsFromInputs(float *a1, _DWORD *a2, float *a3)
{
  float *v3; // rax
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm7_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm12_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm11_4
  float v18; // xmm3_4
  float v19; // xmm12_4
  float v20; // xmm10_4
  float v21; // xmm0_4
  float v22; // xmm11_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm10_4
  float v27; // xmm3_4
  __int64 v28; // rcx
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v32; // [rsp+28h] [rbp-80h]
  _DWORD v33[5]; // [rsp+2Ch] [rbp-7Ch] BYREF

  if ( a2[6] == 1 )
  {
    v4 = a1[48];
    v5 = *(float *)(*(_QWORD *)a2 + 4LL);
    v6 = a1[49];
    v7 = a1[47];
    v8 = v6 * *(float *)(*(_QWORD *)a2 + 16LL);
    v9 = v6 * *(float *)(*(_QWORD *)a2 + 8LL);
    v10 = a1[46] * v5;
    v11 = *(float *)(*(_QWORD *)a2 + 8LL) * v4;
    v12 = *(float *)(*(_QWORD *)a2 + 16LL) * v4;
    v13 = v5 * v7;
    v14 = v10 + v11;
    v15 = v12 + v10;
    v16 = v8 + v13;
    v17 = v13;
    v18 = *(float *)(*(_QWORD *)a2 + 12LL);
    v19 = v14 + a1[50];
    v20 = a1[46] * v18;
    v3 = (float *)v33;
    v21 = v16 + a1[51];
    v22 = (float)(v17 + v9) + a1[51];
    v23 = v18 * v7;
    v32 = v15 + a1[50];
    *(float *)v33 = v21;
    v24 = v20 + v12;
    v25 = (float)(v23 + v8) + a1[51];
    v26 = (float)(v20 + v11) + a1[50];
    v27 = (float)(v23 + v9) + a1[51];
    *(float *)&v33[1] = v24 + a1[50];
    v28 = 3LL;
    *a3 = v19;
    v29 = v22;
    *(float *)&v33[2] = v25;
    *(float *)&v33[3] = v26;
    *(float *)&v33[4] = v27;
    a3[1] = v22;
    a3[2] = v19;
    a3[3] = v22;
    do
    {
      v30 = fminf(*a3, *(v3 - 1));
      v22 = fminf(v22, *v3);
      v19 = fmaxf(v19, *(v3 - 1));
      v29 = fmaxf(v29, *v3);
      v3 += 2;
      *a3 = v30;
      --v28;
    }
    while ( v28 );
    a3[1] = v22;
    a3[2] = v19;
    a3[3] = v29;
  }
  else
  {
    LOBYTE(v3) = CFilterEffect::GetBoundsFromInputs((__int64)a1, (__int64)a2, a3);
  }
  return (char)v3;
}
