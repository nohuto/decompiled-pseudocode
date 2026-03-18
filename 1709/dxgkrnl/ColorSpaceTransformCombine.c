/*
 * XREFs of ColorSpaceTransformCombine @ 0x1C00379F4
 * Callers:
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C007C464 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 */

__int64 __fastcall ColorSpaceTransformCombine(char *Src, int *a2, _DWORD *a3)
{
  int v6; // eax
  bool v8; // zf
  int v9; // r11d
  __int64 v10; // r9
  __int64 v11; // rbp
  _DWORD *v12; // rdi
  unsigned int v13; // r14d
  int v14; // r15d
  __int64 v15; // r10
  __int64 v16; // rdx
  unsigned __int64 v17; // r13
  __int64 v18; // rdx
  unsigned __int64 v19; // r12
  unsigned int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // r8
  float v23; // xmm1_4
  float v24; // xmm4_4
  float v25; // xmm2_4
  float v26; // xmm3_4
  __int64 v27; // rdx
  float *v28; // rax
  float v29; // xmm4_4
  float v30; // xmm3_4
  float v31; // xmm2_4
  float v32; // xmm0_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  __int64 v35; // [rsp+60h] [rbp+8h]

  if ( !Src || !a3 )
    return 3221225485LL;
  v6 = *a2;
  if ( *a2 == 1 )
  {
    if ( *((_QWORD *)a2 + 1) || *((_QWORD *)a2 + 2) )
      return 3223192391LL;
  }
  else
  {
    if ( v6 == 2 )
    {
      v8 = *((_QWORD *)a2 + 1) == 1536LL;
    }
    else
    {
      if ( v6 != 3 )
        return 3223192391LL;
      v8 = *((_QWORD *)a2 + 1) == 12324LL;
    }
    if ( !v8 || !*((_QWORD *)a2 + 2) )
      return 3223192391LL;
  }
  memmove(a3, Src, 0x30uLL);
  a3[12] = *((_DWORD *)Src + 12);
  if ( *a2 == 1 )
  {
    memmove(a3 + 13, Src + 52, 0xC000uLL);
  }
  else
  {
    v9 = 0;
    v10 = 4096LL;
    v11 = 0LL;
    v12 = a3 + 14;
    v35 = 4096LL;
    v13 = 1;
    do
    {
      if ( *a2 == 2 )
      {
        v14 = 4095 - v9;
        if ( v9 )
        {
          v15 = *((_QWORD *)a2 + 2);
          v10 = v35;
          v16 = ((v9 * *(unsigned __int16 *)(v15 + 2LL * v13) + v14 * (unsigned int)*(unsigned __int16 *)(v15 + 2 * v11))
               * (unsigned __int128)0x10010010010011uLL) >> 64;
          v17 = (v16
               + (((unsigned __int64)(v9 * *(unsigned __int16 *)(v15 + 2LL * v13)
                                    + v14 * (unsigned int)*(unsigned __int16 *)(v15 + 2 * v11))
                 - v16) >> 1)) >> 15;
          v18 = ((v14 * *(unsigned __int16 *)(v15 + 2 * v11 + 512)
                + v9 * (unsigned int)*(unsigned __int16 *)(v15 + 2LL * v13 + 512))
               * (unsigned __int128)0x10010010010011uLL) >> 64;
          v19 = (v18
               + (((unsigned __int64)(v14 * *(unsigned __int16 *)(v15 + 2 * v11 + 512)
                                    + v9 * (unsigned int)*(unsigned __int16 *)(v15 + 2LL * v13 + 512))
                 - v18) >> 1)) >> 15;
          v20 = (v14 * *(unsigned __int16 *)(v15 + 2 * v11 + 1024)
               + v9 * (unsigned int)*(unsigned __int16 *)(v15 + 2LL * v13 + 1024))
              / 0xFFF0;
        }
        else
        {
          v21 = *((_QWORD *)a2 + 2);
          LODWORD(v17) = *(unsigned __int16 *)(v21 + 2 * v11) >> 4;
          LODWORD(v19) = *(unsigned __int16 *)(v21 + 2 * v11 + 512) >> 4;
          v20 = v17;
        }
        v9 += 255;
      }
      else
      {
        if ( v9 )
        {
          v22 = *((_QWORD *)a2 + 2);
          v23 = (float)(4095 - v9);
          v24 = (float)((float)(v23 * *(float *)(v22 + 12 * v11 + 24))
                      + (float)((float)v9 * *(float *)(v22 + 12LL * v13 + 24)))
              / 4095.0;
          v25 = (float)((float)((float)v9 * *(float *)(v22 + 12LL * v13 + 32))
                      + (float)(v23 * *(float *)(v22 + 12 * v11 + 32)))
              / 4095.0;
          v26 = (float)((float)((float)v9 * *(float *)(v22 + 12LL * v13 + 28))
                      + (float)(v23 * *(float *)(v22 + 12 * v11 + 28)))
              / 4095.0;
        }
        else
        {
          v27 = *((_QWORD *)a2 + 2);
          v24 = *(float *)(v27 + 12 * v11 + 24);
          v26 = *(float *)(v27 + 12 * v11 + 28);
          v25 = *(float *)(v27 + 12 * v11 + 32);
        }
        v28 = (float *)*((_QWORD *)a2 + 2);
        v29 = (float)(v24 * *v28) + v28[3];
        v30 = (float)(v26 * v28[1]) + v28[4];
        v31 = (float)(v25 * v28[2]) + v28[5];
        if ( v29 >= 0.0 )
          v32 = fminf(1.0, v29);
        else
          v32 = 0.0;
        LODWORD(v17) = (int)(float)(v32 * 4095.0);
        if ( v30 >= 0.0 )
          v33 = fminf(1.0, v30);
        else
          v33 = 0.0;
        LODWORD(v19) = (int)(float)(v33 * 4095.0);
        if ( v31 >= 0.0 )
          v34 = fminf(1.0, v31);
        else
          v34 = 0.0;
        v9 += 1024;
        v20 = (int)(float)(v34 * 4095.0);
      }
      if ( (unsigned int)v9 >= 0xFFF )
      {
        v9 -= 4095;
        v11 = (unsigned int)(v11 + 1);
        ++v13;
      }
      *(v12 - 1) = *(_DWORD *)&Src[12 * (unsigned int)v17 + 52];
      *v12 = *(_DWORD *)&Src[12 * (unsigned int)v19 + 56];
      v12[1] = *(_DWORD *)&Src[12 * v20 + 60];
      v12 += 3;
      v35 = --v10;
    }
    while ( v10 );
  }
  return 0LL;
}
