/*
 * XREFs of ?AlphaMultiply_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1801C7BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??BCFloat16@@QEAAMXZ @ 0x1801BAA8C (--BCFloat16@@QEAAMXZ.c)
 */

void __fastcall AlphaMultiply_64bppABGRFloat(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int v2; // ebx
  unsigned __int16 *v3; // r11
  float v4; // xmm1_4
  float v5; // xmm1_4
  unsigned __int16 *v6; // r10
  unsigned int v7; // edx
  int v8; // r8d
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // ecx
  float v13; // xmm1_4
  _WORD *v14; // r9
  __int64 v15; // r10
  unsigned __int16 *v16; // r11
  float v17; // edx
  int v18; // r8d
  float v19; // eax
  int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // edx
  int v24; // r8d
  unsigned int v25; // eax
  int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // ecx
  float v29; // xmm1_4
  __int64 v30; // r9
  __int64 v31; // r10
  unsigned __int16 *v32; // r11
  float v33; // edx
  int v34; // r8d
  float v35; // eax
  int v36; // ecx
  unsigned int v37; // edx
  unsigned int v38; // ecx
  unsigned int v39; // edx
  int v40; // r8d
  unsigned int v41; // eax
  int v42; // ecx
  unsigned int v43; // edx
  unsigned int v44; // ecx
  float v45; // xmm1_4
  __int64 v46; // r9
  __int64 v47; // r11
  float v48; // edx
  int v49; // r8d
  float v50; // eax
  int v51; // ecx
  unsigned int v52; // edx
  unsigned int v53; // ecx
  float v54; // [rsp+40h] [rbp+20h] BYREF

  v2 = *((_DWORD *)a1 + 2);
  if ( v2 )
  {
    v3 = (unsigned __int16 *)(*((_QWORD *)a2 + 1) + 6LL);
    do
    {
      --v2;
      v4 = CFloat16::operator float(v3);
      if ( v4 != CFloat16::operator float((unsigned __int16 *)&word_1802725A8) )
      {
        v5 = CFloat16::operator float(v3);
        if ( v5 != CFloat16::operator float((unsigned __int16 *)&word_1802725AC) )
        {
          v54 = (float)*v6;
          v7 = LODWORD(v54) & 0x7FFFFFFF;
          v8 = HIWORD(LODWORD(v54)) & 0x8000;
          if ( (LODWORD(v54) & 0x7FFFFFFFu) <= 0x47FFEFFF )
          {
            v9 = LODWORD(v54) & 0x7FFFFFFF;
            if ( v7 >= 0x38800000 )
            {
              v12 = v7 - 939520001;
            }
            else
            {
              v10 = 113 - (v7 >> 23);
              if ( v10 >= 24 )
                v11 = 0;
              else
                v11 = (LODWORD(v54) & 0x7FFFFF | 0x800000u) >> v10;
              v9 = v11;
              v12 = v11 + 4095;
            }
            LOWORD(v54) = v8 | ((((v9 >> 13) & 1) + v12) >> 13);
          }
          else
          {
            LOWORD(v54) = v8 | 0x7FFF;
          }
          v13 = CFloat16::operator float(v3);
          v54 = v13 * CFloat16::operator float((unsigned __int16 *)&v54);
          v17 = fabs(v54);
          v18 = HIWORD(LODWORD(v54)) & 0x8000;
          if ( LODWORD(v17) <= 0x47FFEFFF )
          {
            v19 = v17;
            if ( LODWORD(v17) >= 0x38800000 )
            {
              v22 = LODWORD(v17) - 939520001;
            }
            else
            {
              v20 = 113 - (LODWORD(v17) >> 23);
              if ( v20 >= 24 )
                v21 = 0;
              else
                v21 = (LODWORD(v17) & 0x7FFFFF | 0x800000u) >> v20;
              v19 = *(float *)&v21;
              v22 = v21 + 4095;
            }
            *v14 = v18 | ((((LODWORD(v19) >> 13) & 1) + v22) >> 13);
          }
          else
          {
            *v14 = v18 | 0x7FFF;
          }
          v54 = (float)*(unsigned __int16 *)(v15 + 2);
          v23 = LODWORD(v54) & 0x7FFFFFFF;
          v24 = HIWORD(LODWORD(v54)) & 0x8000;
          if ( (LODWORD(v54) & 0x7FFFFFFFu) <= 0x47FFEFFF )
          {
            v25 = LODWORD(v54) & 0x7FFFFFFF;
            if ( v23 >= 0x38800000 )
            {
              v28 = v23 - 939520001;
            }
            else
            {
              v26 = 113 - (v23 >> 23);
              if ( v26 >= 24 )
                v27 = 0;
              else
                v27 = (LODWORD(v54) & 0x7FFFFF | 0x800000u) >> v26;
              v25 = v27;
              v28 = v27 + 4095;
            }
            LOWORD(v54) = v24 | ((((v25 >> 13) & 1) + v28) >> 13);
          }
          else
          {
            LOWORD(v54) = v24 | 0x7FFF;
          }
          v29 = CFloat16::operator float(v16);
          v54 = v29 * CFloat16::operator float((unsigned __int16 *)&v54);
          v33 = fabs(v54);
          v34 = HIWORD(LODWORD(v54)) & 0x8000;
          if ( LODWORD(v33) <= 0x47FFEFFF )
          {
            v35 = v33;
            if ( LODWORD(v33) >= 0x38800000 )
            {
              v38 = LODWORD(v33) - 939520001;
            }
            else
            {
              v36 = 113 - (LODWORD(v33) >> 23);
              if ( v36 >= 24 )
                v37 = 0;
              else
                v37 = (LODWORD(v33) & 0x7FFFFF | 0x800000u) >> v36;
              v35 = *(float *)&v37;
              v38 = v37 + 4095;
            }
            *(_WORD *)(v30 + 2) = v34 | ((((LODWORD(v35) >> 13) & 1) + v38) >> 13);
          }
          else
          {
            *(_WORD *)(v30 + 2) = v34 | 0x7FFF;
          }
          v54 = (float)*(unsigned __int16 *)(v31 + 4);
          v39 = LODWORD(v54) & 0x7FFFFFFF;
          v40 = HIWORD(LODWORD(v54)) & 0x8000;
          if ( (LODWORD(v54) & 0x7FFFFFFFu) <= 0x47FFEFFF )
          {
            v41 = LODWORD(v54) & 0x7FFFFFFF;
            if ( v39 >= 0x38800000 )
            {
              v44 = v39 - 939520001;
            }
            else
            {
              v42 = 113 - (v39 >> 23);
              if ( v42 >= 24 )
                v43 = 0;
              else
                v43 = (LODWORD(v54) & 0x7FFFFF | 0x800000u) >> v42;
              v41 = v43;
              v44 = v43 + 4095;
            }
            LOWORD(v54) = v40 | ((((v41 >> 13) & 1) + v44) >> 13);
          }
          else
          {
            LOWORD(v54) = v40 | 0x7FFF;
          }
          v45 = CFloat16::operator float(v32);
          v54 = v45 * CFloat16::operator float((unsigned __int16 *)&v54);
          v48 = fabs(v54);
          v49 = HIWORD(LODWORD(v54)) & 0x8000;
          if ( LODWORD(v48) <= 0x47FFEFFF )
          {
            v50 = v48;
            if ( LODWORD(v48) >= 0x38800000 )
            {
              v53 = LODWORD(v48) - 939520001;
            }
            else
            {
              v51 = 113 - (LODWORD(v48) >> 23);
              if ( v51 >= 24 )
                v52 = 0;
              else
                v52 = (LODWORD(v48) & 0x7FFFFF | 0x800000u) >> v51;
              v50 = *(float *)&v52;
              v53 = v52 + 4095;
            }
            *(_WORD *)(v46 + 4) = v49 | ((((LODWORD(v50) >> 13) & 1) + v53) >> 13);
          }
          else
          {
            *(_WORD *)(v46 + 4) = v49 | 0x7FFF;
          }
          v3 = (unsigned __int16 *)(v47 + 8);
        }
      }
    }
    while ( v2 );
  }
}
