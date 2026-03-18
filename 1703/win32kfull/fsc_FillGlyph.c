/*
 * XREFs of fsc_FillGlyph @ 0x1C02C0850
 * Callers:
 *     fs_ContourScan @ 0x1C02BA328 (fs_ContourScan.c)
 * Callees:
 *     EvaluateSpline @ 0x1C02BFEA8 (EvaluateSpline.c)
 *     fsc_FillBitMap @ 0x1C02CD5D4 (fsc_FillBitMap.c)
 *     fsc_SetupScan @ 0x1C02CD7A4 (fsc_SetupScan.c)
 *     fsc_CheckEndPoint @ 0x1C02CE038 (fsc_CheckEndPoint.c)
 *     fsc_EndContourEndpoint @ 0x1C02CE128 (fsc_EndContourEndpoint.c)
 *     fsc_CalcLine @ 0x1C02CE210 (fsc_CalcLine.c)
 */

__int64 __fastcall fsc_FillGlyph(__int64 a1, __int16 *a2, __int64 a3, __int16 a4, unsigned __int16 a5)
{
  int v5; // r10d
  __int16 v7; // r11
  __int16 *v8; // r15
  __int64 v9; // r13
  __int64 result; // rax
  int v11; // ebp
  unsigned __int16 v12; // r14
  int v13; // r9d
  int v14; // edi
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int16 v19; // ax
  __int16 v20; // r8
  __int16 v21; // dx
  __int64 v22; // r10
  __int64 v23; // r11
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned int *v27; // rbx
  int *v28; // r15
  int *v29; // rsi
  _BYTE *v30; // r14
  int v31; // edi
  int v32; // r12d
  unsigned int v33; // r13d
  int v34; // ebp
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rdx
  unsigned int v38; // ecx
  unsigned int v39; // r15d
  __int64 v40; // rcx
  signed int v41; // r15d
  char v42; // [rsp+50h] [rbp-68h]
  unsigned __int16 v43; // [rsp+52h] [rbp-66h]
  unsigned __int16 v44; // [rsp+54h] [rbp-64h]
  int v45; // [rsp+58h] [rbp-60h]
  unsigned int v46; // [rsp+58h] [rbp-60h]
  int v47; // [rsp+5Ch] [rbp-5Ch]
  int v48; // [rsp+60h] [rbp-58h]
  int v49; // [rsp+64h] [rbp-54h]
  int v50; // [rsp+68h] [rbp-50h]
  int v51; // [rsp+6Ch] [rbp-4Ch]
  int *v52; // [rsp+70h] [rbp-48h]
  _BOOL8 v53; // [rsp+78h] [rbp-40h]

  LOWORD(v5) = a2[3];
  v7 = a2[5];
  v8 = a2;
  v9 = a1;
  if ( (__int16)v5 <= v7 )
    return 0LL;
  v11 = a2[1];
  v12 = a5 & 0xFFFE;
  v49 = a2[2];
  v13 = v49 - 1;
  if ( !*((_DWORD *)a2 + 4) )
    v12 = a5;
  v43 = v12;
  if ( (v12 & 2) != 0 )
    v13 = a2[2];
  v14 = (__int16)v5;
  if ( v11 > (__int16)v5 )
    v11 = (__int16)v5;
  v51 = v11;
  if ( v13 < v7 )
    v13 = v7;
  v50 = v13;
  if ( a4 == 2 )
  {
    v5 = (__int16)v5;
    v13 = v7;
    v15 = 1;
  }
  else
  {
    v5 = v11;
    v15 = 0;
    if ( a4 == 3 )
      return fsc_FillBitMap(*((_QWORD *)v8 + 5), v51, v50, *v8, v49, v12);
  }
  v16 = *(_QWORD *)(a3 + 40);
  v17 = *(_QWORD *)(a3 + 32) + *(int *)(a3 + 4);
  qword_1C0338C38 = *(_QWORD *)(a3 + 32);
  qword_1C0338C48 = v17;
  v18 = v16 + *(int *)(a3 + 8);
  qword_1C0338C40 = v16;
  qword_1C0338C50 = v18;
  qword_1C0338BE8 = (__int64)CalcHorizLineSubpix;
  qword_1C0338C00 = (__int64)CalcVertLineSubpix;
  qword_1C0338BF0 = (__int64)CalcHorizSpSubpix;
  qword_1C0338C08 = (__int64)CalcVertSpSubpix;
  qword_1C0338BF8 = (__int64)CalcHorizEpSubpix;
  qword_1C0338C10 = (__int64)CalcVertEpSubpix;
  v53 = v5 < v14 || v13 > v7;
  v47 = (v5 << 6) - 32;
  v48 = (v13 << 6) + 32;
  result = fsc_SetupScan(
             (int)v8 + 6,
             v12,
             v5,
             v13,
             v15,
             *v8,
             *(_DWORD *)(a3 + 12),
             *(_DWORD *)(a3 + 16),
             *(_DWORD *)(a3 + 20),
             *(_QWORD *)(a3 + 24));
  if ( !(_DWORD)result )
  {
    v19 = 0;
    v44 = 0;
    if ( *(_WORD *)v9 )
    {
      while ( 1 )
      {
        v20 = *(_WORD *)(*(_QWORD *)(v9 + 8) + 2LL * v19);
        v21 = *(_WORD *)(*(_QWORD *)(v9 + 16) + 2LL * v19);
        if ( v20 != v21 )
        {
          v22 = *(_QWORD *)(v9 + 24);
          v23 = *(_QWORD *)(v9 + 40);
          v24 = *(_QWORD *)(v9 + 32);
          v25 = v20;
          v26 = v21;
          v27 = (unsigned int *)(v22 + 4 * v25);
          v28 = (int *)(v22 + 4LL * v21);
          v29 = (int *)(v24 + 4 * v25);
          v52 = v28;
          v30 = (_BYTE *)(v23 + v25);
          if ( (*(_BYTE *)(v21 + v23) & 1) != 0 )
          {
            v31 = *(_DWORD *)(v24 + 4LL * v21);
            v32 = *v28++;
            LOBYTE(v26) = *v30;
            v33 = *v27;
            v34 = *v29;
            v42 = *v30;
            v52 = v28;
          }
          else
          {
            v34 = *(_DWORD *)(v24 + 4LL * v21);
            v33 = *v28;
            v35 = v21 - 1;
            v31 = *(_DWORD *)(v24 + 4LL * v35);
            v32 = *(_DWORD *)(v22 + 4LL * v35);
            if ( (*(_BYTE *)(v35 + v23) & 1) == 0 )
            {
              v32 = (int)(v33 + v32 + 1) >> 1;
              v31 = (v34 + v31 + 1) >> 1;
            }
            --v27;
            --v29;
            v42 = 0;
            LOBYTE(v26) = 0;
            --v30;
          }
          v36 = v43;
          dword_1C0338B18 = v32;
          dword_1C0338B1C = v31;
          State = 0x7FFFFFFF;
          if ( (v43 & 6) == 4 )
          {
            v37 = dword_1C0338C2C;
            *(_DWORD *)(qword_1C0338C18 + 4LL * dword_1C0338C2C) = v32;
            *(_DWORD *)(qword_1C0338C20 + 4 * v37) = v31;
            dword_1C0338C2C = v37 + 1;
            if ( (int)v37 + 1 > dword_1C0338C28 )
              return 6656LL;
            v36 = v43;
          }
          if ( v53 )
          {
            while ( v27 < (unsigned int *)v28 )
            {
              if ( (v26 & 1) != 0 )
              {
                result = fsc_CheckEndPoint(v33, (unsigned int)v34, (unsigned __int16)v36);
                if ( (_DWORD)result )
                  return result;
                if ( (v31 <= v47 || v34 <= v47) && (v31 >= v48 || v34 >= v48) )
                {
                  result = fsc_CalcLine(v32, v31, v33, v34, v43);
                  if ( (_DWORD)result )
                    return result;
                }
                ++v27;
                ++v29;
                v32 = v33;
                ++v30;
                v31 = v34;
              }
              else
              {
                ++v27;
                ++v29;
                ++v30;
                v40 = *v27;
                v41 = *v29;
                v46 = *v27;
                if ( (*v30 & 1) != 0 )
                {
                  ++v27;
                  ++v29;
                  ++v30;
                }
                else
                {
                  v40 = (unsigned int)((int)(v33 + v40 + 1) >> 1);
                  v46 = v40;
                  v41 = (v34 + v41 + 1) >> 1;
                }
                if ( (v31 <= v47 || v34 <= v47 || v41 <= v47) && (v31 >= v48 || v34 >= v48 || v41 >= v48) )
                  result = EvaluateSpline(v32, v31, v33, v34, v40, v41, v36);
                else
                  result = fsc_CheckEndPoint(v40, (unsigned int)v41, (unsigned __int16)v36);
                if ( (_DWORD)result )
                  return result;
                v32 = v46;
                v31 = v41;
                v28 = v52;
              }
              if ( v27 == (unsigned int *)v28 )
              {
                LOBYTE(v26) = v42;
              }
              else
              {
                LOBYTE(v26) = *v30;
                v33 = *v27;
                v34 = *v29;
                v42 = *v30;
              }
              v36 = v43;
            }
          }
          else
          {
            while ( v27 < (unsigned int *)v28 )
            {
              if ( (v26 & 1) != 0 )
              {
                result = fsc_CheckEndPoint(v33, (unsigned int)v34, (unsigned __int16)v36);
                if ( (_DWORD)result )
                  return result;
                result = fsc_CalcLine(v32, v31, v33, v34, v43);
                if ( (_DWORD)result )
                  return result;
                ++v27;
                ++v29;
                v32 = v33;
                ++v30;
                v31 = v34;
              }
              else
              {
                ++v29;
                ++v27;
                ++v30;
                v38 = *v29;
                v39 = *v27;
                v45 = *v29;
                if ( (*v30 & 1) != 0 )
                {
                  ++v27;
                  ++v29;
                  ++v30;
                }
                else
                {
                  v39 = (int)(v33 + v39 + 1) >> 1;
                  v38 = (int)(v34 + v38 + 1) >> 1;
                  v45 = v38;
                }
                result = EvaluateSpline(v32, v31, v33, v34, v39, v38, v36);
                if ( (_DWORD)result )
                  return result;
                v31 = v45;
                v32 = v39;
                v28 = v52;
              }
              if ( v27 == (unsigned int *)v28 )
              {
                LOBYTE(v26) = v42;
              }
              else
              {
                LOBYTE(v26) = *v30;
                v33 = *v27;
                v34 = *v29;
                v42 = *v30;
              }
              v36 = v43;
            }
          }
          v12 = v43;
          result = fsc_EndContourEndpoint(v43, v36, v26, 1LL);
          if ( (_DWORD)result )
            return result;
          v9 = a1;
        }
        v19 = v44 + 1;
        v44 = v19;
        if ( v19 >= *(_WORD *)v9 )
        {
          v8 = a2;
          return fsc_FillBitMap(*((_QWORD *)v8 + 5), v51, v50, *v8, v49, v12);
        }
      }
    }
    return fsc_FillBitMap(*((_QWORD *)v8 + 5), v51, v50, *v8, v49, v12);
  }
  return result;
}
