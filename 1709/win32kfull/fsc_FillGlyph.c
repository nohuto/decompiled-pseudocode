/*
 * XREFs of fsc_FillGlyph @ 0x1C02BA658
 * Callers:
 *     fs_ContourScan @ 0x1C02B4134 (fs_ContourScan.c)
 * Callees:
 *     EvaluateSpline @ 0x1C02B9CB4 (EvaluateSpline.c)
 *     fsc_FillBitMap @ 0x1C02C73BC (fsc_FillBitMap.c)
 *     fsc_SetupScan @ 0x1C02C757C (fsc_SetupScan.c)
 *     fsc_CheckEndPoint @ 0x1C02C7E0C (fsc_CheckEndPoint.c)
 *     fsc_EndContourEndpoint @ 0x1C02C7EF4 (fsc_EndContourEndpoint.c)
 *     fsc_CalcLine @ 0x1C02C7FE0 (fsc_CalcLine.c)
 */

__int64 __fastcall fsc_FillGlyph(__int64 a1, __int16 *a2, __int64 a3, __int16 a4, unsigned __int16 a5)
{
  int v5; // r10d
  __int16 v7; // r11
  __int16 *v8; // r15
  __int64 v9; // r13
  __int64 result; // rax
  unsigned __int16 v11; // r14
  int v12; // edi
  int v13; // ecx
  int v14; // ebp
  int v15; // r9d
  int v16; // r9d
  int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int16 v21; // ax
  __int16 v22; // r8
  __int16 v23; // dx
  __int64 v24; // r10
  __int64 v25; // r11
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // r8
  unsigned int *v29; // rbx
  int *v30; // r15
  int *v31; // rsi
  _BYTE *v32; // r14
  int v33; // edi
  int v34; // r12d
  unsigned int v35; // r13d
  int v36; // ebp
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rdx
  unsigned int v40; // r15d
  unsigned int v41; // r13d
  __int64 v42; // rcx
  signed int v43; // r15d
  char v44; // [rsp+50h] [rbp-68h]
  unsigned __int16 v45; // [rsp+52h] [rbp-66h]
  int v46; // [rsp+54h] [rbp-64h]
  unsigned int v47; // [rsp+54h] [rbp-64h]
  unsigned __int16 v48; // [rsp+58h] [rbp-60h]
  int v49; // [rsp+5Ch] [rbp-5Ch]
  int v50; // [rsp+60h] [rbp-58h]
  int v51; // [rsp+64h] [rbp-54h]
  int v52; // [rsp+68h] [rbp-50h]
  int v53; // [rsp+6Ch] [rbp-4Ch]
  int *v54; // [rsp+70h] [rbp-48h]
  _BOOL8 v55; // [rsp+78h] [rbp-40h]

  LOWORD(v5) = a2[3];
  v7 = a2[5];
  v8 = a2;
  v9 = a1;
  if ( (__int16)v5 <= v7 )
    return 0LL;
  v11 = a5 & 0xFFFE;
  v12 = (__int16)v5;
  v51 = a2[2];
  v13 = v51 - 1;
  if ( !*((_DWORD *)a2 + 4) )
    v11 = a5;
  v14 = v7;
  v45 = v11;
  if ( (v11 & 2) != 0 )
    v13 = a2[2];
  v15 = (__int16)v5;
  if ( a2[1] <= (__int16)v5 )
    v15 = a2[1];
  v53 = v15;
  if ( v13 >= v7 )
    v14 = v13;
  v52 = v14;
  if ( a4 == 2 )
  {
    v5 = (__int16)v5;
    v16 = v7;
    v17 = 1;
  }
  else
  {
    v5 = v15;
    v16 = v14;
    v17 = 0;
    if ( a4 == 3 )
      return fsc_FillBitMap(*((_QWORD *)v8 + 5), v53, v52, *v8, v51, v11);
  }
  v18 = *(_QWORD *)(a3 + 40);
  v19 = *(_QWORD *)(a3 + 32) + *(int *)(a3 + 4);
  qword_1C0334358 = *(_QWORD *)(a3 + 32);
  qword_1C0334368 = v19;
  v20 = v18 + *(int *)(a3 + 8);
  qword_1C0334360 = v18;
  qword_1C0334370 = v20;
  qword_1C0334308 = (__int64)CalcHorizLineSubpix;
  qword_1C0334320 = (__int64)CalcVertLineSubpix;
  qword_1C0334310 = (__int64)CalcHorizSpSubpix;
  qword_1C0334328 = (__int64)CalcVertSpSubpix;
  qword_1C0334318 = (__int64)CalcHorizEpSubpix;
  qword_1C0334330 = (__int64)CalcVertEpSubpix;
  v55 = v5 < v12 || v16 > v7;
  v49 = (v5 << 6) - 32;
  v50 = (v16 << 6) + 32;
  result = fsc_SetupScan(
             (int)v8 + 6,
             v11,
             v5,
             v16,
             v17,
             *v8,
             *(_DWORD *)(a3 + 12),
             *(_DWORD *)(a3 + 16),
             *(_DWORD *)(a3 + 20),
             *(_QWORD *)(a3 + 24));
  if ( !(_DWORD)result )
  {
    v21 = 0;
    v48 = 0;
    if ( *(_WORD *)v9 )
    {
      while ( 1 )
      {
        v22 = *(_WORD *)(*(_QWORD *)(v9 + 8) + 2LL * v21);
        v23 = *(_WORD *)(*(_QWORD *)(v9 + 16) + 2LL * v21);
        if ( v22 != v23 )
        {
          v24 = *(_QWORD *)(v9 + 24);
          v25 = *(_QWORD *)(v9 + 40);
          v26 = *(_QWORD *)(v9 + 32);
          v27 = v22;
          v28 = v23;
          v29 = (unsigned int *)(v24 + 4 * v27);
          v30 = (int *)(v24 + 4LL * v23);
          v31 = (int *)(v26 + 4 * v27);
          v54 = v30;
          v32 = (_BYTE *)(v25 + v27);
          if ( (*(_BYTE *)(v23 + v25) & 1) != 0 )
          {
            v33 = *(_DWORD *)(v26 + 4LL * v23);
            v34 = *v30++;
            LOBYTE(v28) = *v32;
            v35 = *v29;
            v36 = *v31;
            v44 = *v32;
            v54 = v30;
            v46 = *v29;
          }
          else
          {
            v36 = *(_DWORD *)(v26 + 4LL * v23);
            v35 = *v30;
            v37 = v23 - 1;
            v46 = *v30;
            v33 = *(_DWORD *)(v26 + 4LL * v37);
            v34 = *(_DWORD *)(v24 + 4LL * v37);
            if ( (*(_BYTE *)(v37 + v25) & 1) == 0 )
            {
              v34 = (int)(v35 + v34 + 1) >> 1;
              v33 = (v36 + v33 + 1) >> 1;
            }
            --v29;
            --v31;
            v44 = 0;
            LOBYTE(v28) = 0;
            --v32;
          }
          v38 = v45;
          dword_1C0334238 = v34;
          dword_1C033423C = v33;
          State = 0x7FFFFFFF;
          if ( (v45 & 6) == 4 )
          {
            v39 = dword_1C033434C;
            *(_DWORD *)(qword_1C0334338 + 4LL * dword_1C033434C) = v34;
            *(_DWORD *)(qword_1C0334340 + 4 * v39) = v33;
            dword_1C033434C = v39 + 1;
            if ( (int)v39 + 1 > dword_1C0334348 )
              return 6656LL;
            v38 = v45;
          }
          if ( v55 )
          {
            while ( v29 < (unsigned int *)v30 )
            {
              if ( (v28 & 1) != 0 )
              {
                result = fsc_CheckEndPoint(v35, (unsigned int)v36, (unsigned __int16)v38);
                if ( (_DWORD)result )
                  return result;
                if ( (v33 <= v49 || v36 <= v49) && (v33 >= v50 || v36 >= v50) )
                {
                  result = fsc_CalcLine(v34, v33, v35, v36, v45);
                  if ( (_DWORD)result )
                    return result;
                }
                ++v29;
                ++v31;
                v34 = v35;
                ++v32;
                v33 = v36;
              }
              else
              {
                ++v29;
                ++v31;
                ++v32;
                v42 = *v29;
                v43 = *v31;
                v47 = *v29;
                if ( (*v32 & 1) != 0 )
                {
                  ++v29;
                  ++v31;
                  ++v32;
                }
                else
                {
                  v42 = (unsigned int)((int)(v35 + v42 + 1) >> 1);
                  v47 = v42;
                  v43 = (v36 + v43 + 1) >> 1;
                }
                if ( (v33 <= v49 || v36 <= v49 || v43 <= v49) && (v33 >= v50 || v36 >= v50 || v43 >= v50) )
                  result = EvaluateSpline(v34, v33, v35, v36, v42, v43, v38);
                else
                  result = fsc_CheckEndPoint(v42, (unsigned int)v43, (unsigned __int16)v38);
                if ( (_DWORD)result )
                  return result;
                v34 = v47;
                v33 = v43;
                v30 = v54;
              }
              if ( v29 == (unsigned int *)v30 )
              {
                LOBYTE(v28) = v44;
              }
              else
              {
                LOBYTE(v28) = *v32;
                v35 = *v29;
                v36 = *v31;
                v44 = *v32;
              }
              v38 = v45;
            }
          }
          else
          {
            while ( v29 < (unsigned int *)v30 )
            {
              if ( (v28 & 1) != 0 )
              {
                result = fsc_CheckEndPoint(v35, (unsigned int)v36, (unsigned __int16)v38);
                if ( (_DWORD)result )
                  return result;
                result = fsc_CalcLine(v34, v33, v35, v36, v45);
                if ( (_DWORD)result )
                  return result;
                ++v29;
                ++v31;
                v34 = v35;
                ++v32;
                v33 = v36;
              }
              else
              {
                ++v29;
                ++v31;
                ++v32;
                v40 = *v29;
                v41 = *v31;
                if ( (*v32 & 1) != 0 )
                {
                  ++v29;
                  ++v31;
                  ++v32;
                }
                else
                {
                  v40 = (int)(v46 + v40 + 1) >> 1;
                  v41 = (int)(v36 + v41 + 1) >> 1;
                }
                result = EvaluateSpline(v34, v33, v46, v36, v40, v41, v38);
                if ( (_DWORD)result )
                  return result;
                v34 = v40;
                v30 = v54;
                v33 = v41;
                v35 = v46;
              }
              if ( v29 == (unsigned int *)v30 )
              {
                LOBYTE(v28) = v44;
              }
              else
              {
                LOBYTE(v28) = *v32;
                v35 = *v29;
                v36 = *v31;
                v44 = *v32;
                v46 = *v29;
              }
              v38 = v45;
            }
          }
          v11 = v45;
          result = fsc_EndContourEndpoint(v45, v38, v28, 1LL);
          if ( (_DWORD)result )
            return result;
          v9 = a1;
        }
        v21 = v48 + 1;
        v48 = v21;
        if ( v21 >= *(_WORD *)v9 )
        {
          v8 = a2;
          return fsc_FillBitMap(*((_QWORD *)v8 + 5), v53, v52, *v8, v51, v11);
        }
      }
    }
    return fsc_FillBitMap(*((_QWORD *)v8 + 5), v53, v52, *v8, v51, v11);
  }
  return result;
}
