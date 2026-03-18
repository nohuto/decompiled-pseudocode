/*
 * XREFs of itrp_ISECT @ 0x1C02D3690
 * Callers:
 *     <none>
 * Callees:
 *     CompDiv @ 0x1C02BD158 (CompDiv.c)
 *     Mul26Dot6 @ 0x1C02BD3AC (Mul26Dot6.c)
 *     AddProportion @ 0x1C02CEEFC (AddProportion.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_ISECT(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rsi
  _WORD *v3; // rdx
  __int64 v4; // rbp
  unsigned __int16 v5; // di
  unsigned __int16 v6; // bx
  __int64 v7; // r14
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax
  int v10; // r13d
  __int16 v11; // r12
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // ax
  int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r13
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // ax
  int v20; // r12d
  int v21; // ebp
  __int16 v22; // r14
  unsigned __int16 v23; // ax
  unsigned __int16 v24; // ax
  int v25; // r12d
  int v26; // ebp
  int v27; // eax
  int v28; // r14d
  __int64 v29; // rcx
  int v30; // ebp
  int v31; // r13d
  __int64 v32; // rax
  int v33; // r12d
  int v34; // esi
  int v35; // eax
  unsigned __int16 v36; // ax
  __int64 v37; // rsi
  int v38; // edi
  __int64 v39; // rbx
  __int16 v40; // ax
  __int64 v41; // rcx
  int v42; // r9d
  __int64 v43; // r14
  __int64 v44; // r15
  int v45; // ecx
  int v47; // ecx
  int v48; // r10d
  int v49; // ebp
  int v50; // edi
  int v51; // r8d
  int v52; // edx
  int v53; // [rsp+30h] [rbp-88h]
  int v54; // [rsp+34h] [rbp-84h]
  int v55; // [rsp+38h] [rbp-80h]
  int v56; // [rsp+3Ch] [rbp-7Ch]
  int v57; // [rsp+40h] [rbp-78h]
  int v58; // [rsp+44h] [rbp-74h]
  __int64 v59; // [rsp+48h] [rbp-70h]
  _WORD *v60; // [rsp+50h] [rbp-68h]
  int v61; // [rsp+58h] [rbp-60h]
  __int64 v62; // [rsp+60h] [rbp-58h]
  int *v63; // [rsp+60h] [rbp-58h]
  int v64; // [rsp+68h] [rbp-50h]
  int v66; // [rsp+C8h] [rbp+10h]
  int v67; // [rsp+C8h] [rbp+10h]
  char v68; // [rsp+C8h] [rbp+10h]
  int v69; // [rsp+D0h] [rbp+18h]
  int v70; // [rsp+D0h] [rbp+18h]
  int v71; // [rsp+D8h] [rbp+20h]

  v1 = qword_1C032CA00;
  v57 = 0;
  v56 = 0;
  v2 = LocalGS;
  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) < 5 )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  v3 = *(_WORD **)(qword_1C032CA00 + 344);
  v4 = *(int *)(qword_1C032C9E8 - 4);
  v64 = 4;
  v62 = qword_1C032C9E8 - 8;
  v5 = v3[4];
  v6 = v3[6];
  v7 = *(int *)(qword_1C032C9E8 - 8);
  v8 = v6;
  v60 = v3;
  if ( v5 > v6 )
    v8 = v3[4];
  if ( v8 <= 1u )
  {
    v66 = 1;
  }
  else
  {
    v9 = v3[6];
    if ( v5 > v6 )
      v9 = v3[4];
    v66 = v9;
  }
  v59 = qword_1C032C9F8;
  if ( qword_1C032C9F8 == LocalGS )
  {
    if ( (int)v4 >= (unsigned __int16)v3[8] || (int)v4 < 0 )
      goto LABEL_78;
    v10 = 0;
  }
  else
  {
    if ( (int)v4 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)v4 < 0 )
      goto LABEL_78;
    v10 = 4;
  }
  if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
  {
    v11 = *(_WORD *)(v2 + 80);
    if ( v11 < 1 || v11 > v66 || (int)v4 < v10 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v11 - 1)) + 1 )
    {
      v12 = v6;
      if ( v5 > v6 )
        v12 = v5;
      if ( v12 <= 1u )
      {
        v67 = 1;
      }
      else
      {
        v13 = v6;
        if ( v5 > v6 )
          v13 = v5;
        v67 = v13;
      }
      if ( v59 == v2 )
      {
        if ( (int)v7 >= (unsigned __int16)v60[8] || (int)v7 < 0 )
          goto LABEL_78;
        v14 = 0;
      }
      else
      {
        if ( (int)v7 >= *(_DWORD *)(v1 + 440) || (int)v7 < 0 )
          goto LABEL_78;
        v14 = 4;
      }
      if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v2)
        && (v11 < 1 || v11 > v67 || (int)v7 < v14 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v11 - 1)) + 1) )
      {
        v71 = *(_DWORD *)(*(_QWORD *)v2 + 4 * v7);
        v54 = *(_DWORD *)(*(_QWORD *)v2 + 4 * v4) - v71;
        v15 = *(_QWORD *)(v2 + 8);
        v53 = *(_DWORD *)(v15 + 4 * v7);
        v55 = *(_DWORD *)(v15 + 4 * v4) - v53;
        v68 = *(_BYTE *)(v1 + 333);
        if ( v68 == 2 && (*(_BYTE *)(v1 + 452) & 2) != 0 )
        {
          v56 = v4;
          v57 = v7;
        }
        v16 = qword_1C032C9C8;
        v17 = *(int *)(v62 - 4);
        v63 = (int *)(v62 - 8);
        v61 = v17;
        v69 = *v63;
        v18 = v6;
        if ( v5 > v6 )
          v18 = v5;
        if ( v18 <= 1u )
        {
          v20 = 1;
        }
        else
        {
          v19 = v6;
          if ( v5 > v6 )
            v19 = v5;
          v20 = v19;
        }
        if ( v59 == qword_1C032C9C8 )
        {
          if ( (int)v17 >= (unsigned __int16)v60[8] || (int)v17 < 0 )
            goto LABEL_78;
          v21 = 0;
        }
        else
        {
          if ( (int)v17 >= *(_DWORD *)(v1 + 440) || (int)v17 < 0 )
            goto LABEL_78;
          v21 = 4;
        }
        if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C032C9C8) )
        {
          v22 = *(_WORD *)(v16 + 80);
          if ( v22 < 1 || v22 > v20 || (int)v17 < v21 + *(__int16 *)(*(_QWORD *)(v16 + 64) + 2LL * (v22 - 1)) + 1 )
          {
            v23 = v6;
            if ( v5 > v6 )
              v23 = v5;
            if ( v23 <= 1u )
            {
              v25 = 1;
            }
            else
            {
              v24 = v6;
              if ( v5 > v6 )
                v24 = v5;
              v25 = v24;
            }
            if ( v59 == v16 )
            {
              if ( v69 >= (unsigned __int16)v60[8] || v69 < 0 )
                goto LABEL_78;
              v26 = 0;
            }
            else
            {
              if ( v69 >= *(_DWORD *)(v1 + 440) || v69 < 0 )
                goto LABEL_78;
              v26 = 4;
            }
            if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v16) )
            {
              if ( v22 < 1 )
              {
                v28 = v69;
              }
              else
              {
                v27 = v22;
                v28 = v69;
                if ( v27 <= v25 && v69 >= v26 + *(__int16 *)(*(_QWORD *)(v16 + 64) + 2LL * (v27 - 1)) + 1 )
                  goto LABEL_78;
              }
              v29 = v17;
              v30 = *(_DWORD *)(*(_QWORD *)v16 + 4LL * v28);
              v31 = *(_DWORD *)(*(_QWORD *)v16 + 4 * v17) - v30;
              v32 = *(_QWORD *)(v16 + 8);
              v58 = v30;
              v33 = *(_DWORD *)(v32 + 4 * v29) - *(_DWORD *)(v32 + 4LL * v28);
              v70 = *(_DWORD *)(v32 + 4LL * v28);
              if ( v68 == 2 && (*(_BYTE *)(v1 + 452) & 2) != 0 )
              {
                v34 = Mul26Dot6(v33, v54);
                if ( v34 < 0 )
                  v34 = -v34;
                v35 = Mul26Dot6(v31, v55);
                if ( v35 < 0 )
                  v35 = -v35;
                if ( v34 > v35 )
                {
                  v56 = v61;
                  v57 = v28;
                }
              }
              v36 = v6;
              if ( v5 > v6 )
                v36 = v5;
              v37 = *(v63 - 1);
              if ( v36 <= 1u )
              {
                v38 = 1;
              }
              else
              {
                if ( v5 > v6 )
                  v6 = v5;
                v38 = v6;
              }
              v39 = qword_1C032C9D0;
              if ( v59 == qword_1C032C9D0 )
              {
                if ( (int)v37 >= (unsigned __int16)v60[8] || (int)v37 < 0 )
                  goto LABEL_78;
                v64 = 0;
              }
              else if ( (int)v37 >= *(_DWORD *)(v1 + 440) || (int)v37 < 0 )
              {
                goto LABEL_78;
              }
              if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C032C9D0) )
              {
                v40 = *(_WORD *)(v39 + 80);
                v41 = 1LL;
                if ( v40 < 1
                  || v40 > v38
                  || (v41 = (unsigned int)*(__int16 *)(*(_QWORD *)(v39 + 64) + 2LL * (v40 - 1)),
                      (int)v37 < (int)v41 + v64 + 1) )
                {
                  qword_1C032C9E8 = (__int64)(v63 - 1);
                  if ( v39 != v59 && *(_BYTE *)(v1 + 333) == 2 && (*(_BYTE *)(v1 + 452) & 2) != 0 )
                  {
                    AddProportion(v41, v39, v57, v37, v56);
                    v39 = qword_1C032C9D0;
                  }
                  v42 = v55;
                  *(_BYTE *)(*(_QWORD *)(v39 + 72) + v37) |= 3u;
                  v43 = *(_QWORD *)qword_1C032C9D0;
                  v44 = *(_QWORD *)(qword_1C032C9D0 + 8);
                  if ( v55 )
                  {
                    v51 = v54;
                    if ( !v54 )
                    {
                      if ( !v33 )
                      {
                        *(_DWORD *)(v43 + 4 * v37) = v71;
                        v45 = v70;
                        goto LABEL_112;
                      }
                      v52 = v71;
                      v47 = v70;
                      v49 = v30 - v71;
                      v48 = v53;
                      v50 = -v31;
LABEL_124:
                      if ( v50 )
                      {
                        *(_DWORD *)(v43 + 4 * v37) = v58 + CompDiv(v50, v49 * (__int64)v31);
                        *(_DWORD *)(v44 + 4 * v37) = v70 + CompDiv(v50, v49 * (__int64)v33);
                      }
                      else
                      {
                        *(_DWORD *)(v43 + 4 * v37) = (v52 + (v31 >> 1) + v58 + (v51 >> 1)) >> 1;
                        *(_DWORD *)(v44 + 4 * v37) = (v48 + v47 + (v33 >> 1) + (v42 >> 1)) >> 1;
                      }
                      return a1;
                    }
                    if ( (int)abs32(v54) < (int)abs32(v55) )
                    {
                      v49 = CompDiv(v55, v54 * (__int64)(v70 - v53)) + v71 - v30;
                      v50 = v31 - CompDiv(v55, v54 * (__int64)v33);
                    }
                    else
                    {
                      v49 = v70 - v53 - CompDiv(v54, v55 * (__int64)(v30 - v71));
                      v50 = CompDiv(v54, v55 * (__int64)v31) - v33;
                    }
                    v48 = v53;
                    v47 = v70;
                    v42 = v55;
                  }
                  else
                  {
                    if ( !v31 )
                    {
                      v45 = v53;
                      *(_DWORD *)(v43 + 4 * v37) = v30;
LABEL_112:
                      *(_DWORD *)(v44 + 4 * v37) = v45;
                      return a1;
                    }
                    v47 = v70;
                    v48 = v53;
                    v49 = v70 - v53;
                    v50 = -v33;
                  }
                  v51 = v54;
                  v52 = v71;
                  goto LABEL_124;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_78:
  dword_1C032CA50 = 4370;
  return qword_1C032CA58;
}
