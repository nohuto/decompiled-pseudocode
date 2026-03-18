/*
 * XREFs of itrp_IP @ 0x1C02D2CC0
 * Callers:
 *     <none>
 * Callees:
 *     CompDiv @ 0x1C02BD158 (CompDiv.c)
 *     AddProportion @ 0x1C02CEEFC (AddProportion.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeMovePoint @ 0x1C02CF604 (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02CF6B4 (InvokeProject.c)
 */

__int64 __fastcall itrp_IP(__int64 a1)
{
  __int64 v1; // r12
  _WORD *v2; // r13
  __int64 v3; // r15
  __int64 v4; // rbx
  __int64 v5; // r14
  unsigned __int16 v6; // bp
  unsigned __int16 v7; // di
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax
  __int16 v10; // ax
  unsigned __int16 v11; // ax
  int v12; // eax
  int v13; // r13d
  int v14; // ebp
  __int16 v15; // ax
  int *v16; // r13
  int v17; // r12d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // r9d
  int v22; // r10d
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // r15d
  __int64 v26; // rdi
  _WORD *v27; // r8
  __int64 v28; // rbx
  unsigned __int16 v29; // dx
  unsigned __int16 v30; // cx
  unsigned __int16 v31; // ax
  __int64 v32; // r15
  int v33; // ebp
  __int16 v34; // ax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdi
  _WORD *v38; // r8
  __int64 v39; // rbx
  unsigned __int16 v40; // dx
  unsigned __int16 v41; // cx
  unsigned __int16 v42; // ax
  __int64 v43; // r15
  int v44; // ebp
  __int16 v45; // ax
  __int64 v46; // rcx
  __int64 v47; // rbx
  _WORD *v48; // r9
  __int64 v49; // rbp
  unsigned __int16 v50; // r8
  unsigned __int16 v51; // dx
  unsigned __int16 v52; // cx
  int v53; // edi
  __int16 v54; // ax
  __int64 v55; // rcx
  int v56; // eax
  int v57; // ebx
  int v58; // eax
  __int64 v59; // rbx
  _WORD *v60; // r8
  __int64 v61; // rbp
  unsigned __int16 v62; // dx
  unsigned __int16 v63; // cx
  unsigned __int16 v64; // ax
  __int64 v65; // r15
  int v66; // edi
  __int16 v67; // ax
  __int64 v68; // rcx
  int v69; // ebx
  int v70; // eax
  __int64 result; // rax
  int v72; // [rsp+30h] [rbp-88h]
  int v73; // [rsp+30h] [rbp-88h]
  int v74; // [rsp+30h] [rbp-88h]
  int i; // [rsp+30h] [rbp-88h]
  int v76; // [rsp+30h] [rbp-88h]
  int v77; // [rsp+34h] [rbp-84h]
  int v78; // [rsp+34h] [rbp-84h]
  int v79; // [rsp+34h] [rbp-84h]
  int v80; // [rsp+38h] [rbp-80h]
  int j; // [rsp+38h] [rbp-80h]
  int v82; // [rsp+3Ch] [rbp-7Ch]
  int v83; // [rsp+40h] [rbp-78h]
  int v84; // [rsp+44h] [rbp-74h]
  __int64 v85; // [rsp+48h] [rbp-70h]
  __int64 v86; // [rsp+48h] [rbp-70h]
  __int64 v87; // [rsp+50h] [rbp-68h]
  int k; // [rsp+58h] [rbp-60h]
  __int64 v89; // [rsp+60h] [rbp-58h]
  int v91; // [rsp+C8h] [rbp+10h]
  int v92; // [rsp+D0h] [rbp+18h]
  int v93; // [rsp+D0h] [rbp+18h]
  int v94; // [rsp+D8h] [rbp+20h]
  int v95; // [rsp+D8h] [rbp+20h]
  int v96; // [rsp+D8h] [rbp+20h]

  v1 = qword_1C032CA00;
  v2 = *(_WORD **)(qword_1C032CA00 + 344);
  v3 = LocalGS;
  v4 = qword_1C032C9C8;
  v5 = qword_1C032C9D0;
  v6 = v2[4];
  v7 = v2[6];
  v91 = dword_1C032CA20 + 1;
  v92 = dword_1C032CA18;
  v8 = v7;
  if ( v6 > v7 )
    v8 = v2[4];
  v85 = qword_1C032C9F8;
  v94 = HIDWORD(qword_1C032CA10);
  if ( v8 <= 1u )
  {
    v72 = 1;
  }
  else
  {
    v9 = v2[6];
    if ( v6 > v7 )
      v9 = v2[4];
    v72 = v9;
  }
  if ( qword_1C032C9F8 == LocalGS )
  {
    if ( SHIDWORD(qword_1C032CA10) >= (unsigned __int16)v2[8] || qword_1C032CA10 < 0 )
      goto LABEL_153;
    v77 = 0;
  }
  else
  {
    if ( SHIDWORD(qword_1C032CA10) >= *(_DWORD *)(qword_1C032CA00 + 440) || qword_1C032CA10 < 0 )
      goto LABEL_153;
    v77 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    goto LABEL_153;
  v10 = *(_WORD *)(v3 + 80);
  if ( v10 >= 1 && v10 <= v72 && v94 >= *(__int16 *)(*(_QWORD *)(v3 + 64) + 2LL * (v10 - 1)) + v77 + 1 )
    goto LABEL_153;
  v11 = v7;
  if ( v6 > v7 )
    v11 = v6;
  if ( v11 <= 1u )
  {
    v73 = 1;
  }
  else
  {
    if ( v6 > v7 )
      v7 = v6;
    v73 = v7;
  }
  if ( v85 == v4 )
  {
    v12 = (unsigned __int16)v2[8];
    v13 = v92;
    if ( v92 >= v12 || v92 < 0 )
      goto LABEL_153;
    v14 = 0;
  }
  else
  {
    v13 = v92;
    if ( v92 >= *(_DWORD *)(v1 + 440) || v92 < 0 )
      goto LABEL_153;
    v14 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v4)
    || (v15 = *(_WORD *)(v4 + 80), v15 >= 1)
    && v15 <= v73
    && v13 >= v14 + *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (v15 - 1)) + 1 )
  {
LABEL_153:
    dword_1C032CA50 = 4370;
    return qword_1C032CA58;
  }
  v16 = (int *)qword_1C032C9E8;
  v74 = dword_1C032CA2C;
  v80 = dword_1C032CA30;
  if ( (v1 ^ *(_QWORD *)v1 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(v1 + 424)) != *(_QWORD *)(v1 + 432)
    || v91 > (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)v1) >> 2) )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  if ( v3 == v85 || v4 == v85 || v5 == v85 || *(_BYTE *)(v1 + 397) )
  {
    v17 = v94;
    v18 = *(_QWORD *)(v4 + 16);
    v19 = *(_QWORD *)(v4 + 24);
    v20 = 4LL * v94;
    v21 = *(_DWORD *)(v20 + *(_QWORD *)(v3 + 16));
    v22 = *(_DWORD *)(v20 + *(_QWORD *)(v3 + 24));
    v86 = *(_QWORD *)(v5 + 16);
    v23 = *(_QWORD *)(v5 + 24);
  }
  else
  {
    v17 = v94;
    v18 = *(_QWORD *)(v4 + 32);
    v19 = *(_QWORD *)(v4 + 40);
    v20 = 4LL * v94;
    v21 = *(_DWORD *)(v20 + *(_QWORD *)(v3 + 32));
    v22 = *(_DWORD *)(v20 + *(_QWORD *)(v3 + 40));
    v86 = *(_QWORD *)(v5 + 32);
    v23 = *(_QWORD *)(v5 + 40);
  }
  v87 = v23;
  v83 = v22;
  v84 = v21;
  v82 = *(_DWORD *)(v20 + *(_QWORD *)v3);
  v24 = *(_QWORD *)(v3 + 8);
  v25 = v92;
  v95 = *(_DWORD *)(v20 + v24);
  v78 = InvokeProject(dword_1C032CA34, *(_DWORD *)(v18 + 4LL * v92) - v21, *(_DWORD *)(v19 + 4LL * v92) - v22);
  if ( v78 )
  {
    if ( v74 == 2 )
    {
      for ( i = *(_DWORD *)(*(_QWORD *)v4 + 4LL * v92) - v82; v91; --v91 )
      {
        v26 = qword_1C032CA00;
        --v16;
        v27 = *(_WORD **)(qword_1C032CA00 + 344);
        v28 = *v16;
        v29 = v27[4];
        v30 = v27[6];
        v31 = v30;
        if ( v29 > v30 )
          v31 = v27[4];
        if ( v31 <= 1u )
        {
          v96 = 1;
        }
        else
        {
          if ( v29 > v30 )
            v30 = v27[4];
          v96 = v30;
        }
        v32 = qword_1C032C9F8;
        if ( qword_1C032C9F8 == v5 )
        {
          if ( (int)v28 >= (unsigned __int16)v27[8] || (int)v28 < 0 )
            goto LABEL_153;
          v33 = 0;
        }
        else
        {
          if ( (int)v28 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)v28 < 0 )
            goto LABEL_153;
          v33 = 4;
        }
        if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v5) )
          goto LABEL_153;
        v34 = *(_WORD *)(v5 + 80);
        v35 = 1LL;
        if ( v34 >= 1 && v34 <= v96 )
        {
          v35 = v34 - 1;
          if ( (int)v28 >= v33 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2 * v35) + 1 )
            goto LABEL_153;
        }
        if ( v5 != v32 && *(_BYTE *)(v26 + 333) == 2 && word_1C032CA74 && (*(_BYTE *)(v26 + 452) & 2) != 0 )
          AddProportion(v35, v5, v17, v28, v92);
        *(_DWORD *)(*(_QWORD *)v5 + 4 * v28) = CompDiv(v78, i * (__int64)(*(_DWORD *)(v86 + 4 * v28) - v84)) + v82;
        *(_BYTE *)(*(_QWORD *)(v5 + 72) + v28) |= 1u;
      }
    }
    else
    {
      v36 = *(_QWORD *)(v4 + 8);
      if ( v74 == 3 )
      {
        for ( j = *(_DWORD *)(v36 + 4LL * v92) - v95; v91; --v91 )
        {
          v37 = qword_1C032CA00;
          --v16;
          v38 = *(_WORD **)(qword_1C032CA00 + 344);
          v39 = *v16;
          v40 = v38[4];
          v41 = v38[6];
          v42 = v41;
          if ( v40 > v41 )
            v42 = v38[4];
          if ( v42 <= 1u )
          {
            v76 = 1;
          }
          else
          {
            if ( v40 > v41 )
              v41 = v38[4];
            v76 = v41;
          }
          v43 = qword_1C032C9F8;
          if ( qword_1C032C9F8 == v5 )
          {
            if ( (int)v39 >= (unsigned __int16)v38[8] || (int)v39 < 0 )
              goto LABEL_153;
            v44 = 0;
          }
          else
          {
            if ( (int)v39 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)v39 < 0 )
              goto LABEL_153;
            v44 = 4;
          }
          if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v5) )
            goto LABEL_153;
          v45 = *(_WORD *)(v5 + 80);
          v46 = 1LL;
          if ( v45 >= 1 && v45 <= v76 )
          {
            v46 = v45 - 1;
            if ( (int)v39 >= v44 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2 * v46) + 1 )
              goto LABEL_153;
          }
          if ( v5 != v43 && *(_BYTE *)(v37 + 333) == 2 && word_1C032CA74 && (*(_BYTE *)(v37 + 452) & 2) != 0 )
            AddProportion(v46, v5, v17, v39, v92);
          *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v39) = CompDiv(v78, j * (__int64)(*(_DWORD *)(v87 + 4 * v39) - v83))
                                                     + v95;
          *(_BYTE *)(*(_QWORD *)(v5 + 72) + v39) |= 2u;
        }
      }
      else
      {
        for ( k = InvokeProject(v80, *(_DWORD *)(*(_QWORD *)v4 + 4LL * v92) - v82, *(_DWORD *)(v36 + 4LL * v92) - v95);
              v91;
              --v91 )
        {
          v47 = qword_1C032CA00;
          --v16;
          v48 = *(_WORD **)(qword_1C032CA00 + 344);
          v49 = *v16;
          v50 = v48[4];
          v51 = v48[6];
          v52 = v51;
          if ( v50 > v51 )
            v52 = v48[4];
          if ( v52 <= 1u )
          {
            v93 = 1;
          }
          else
          {
            if ( v50 > v51 )
              v51 = v48[4];
            v93 = v51;
          }
          v89 = qword_1C032C9F8;
          if ( qword_1C032C9F8 == v5 )
          {
            if ( (int)v49 >= (unsigned __int16)v48[8] || (int)v49 < 0 )
              goto LABEL_153;
            v53 = 0;
          }
          else
          {
            if ( (int)v49 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)v49 < 0 )
              goto LABEL_153;
            v53 = 4;
          }
          if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v5) )
            goto LABEL_153;
          v54 = *(_WORD *)(v5 + 80);
          v55 = 1LL;
          if ( v54 >= 1 && v54 <= v93 )
          {
            v55 = v54 - 1;
            if ( (int)v49 >= v53 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2 * v55) + 1 )
              goto LABEL_153;
          }
          if ( v5 != v89 && *(_BYTE *)(v47 + 333) == 2 && word_1C032CA74 && (*(_BYTE *)(v47 + 452) & 2) != 0 )
            AddProportion(v55, v5, v17, v49, v25);
          v56 = InvokeProject(v80, *(_DWORD *)(v86 + 4 * v49) - v84, *(_DWORD *)(v87 + 4 * v49) - v83);
          v57 = CompDiv(v78, k * (__int64)v56);
          v58 = InvokeProject(
                  v80,
                  *(_DWORD *)(*(_QWORD *)v5 + 4 * v49) - v82,
                  *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v49) - v95);
          InvokeMovePoint(v74, (_QWORD *)v5, v49, v57 - v58);
        }
      }
    }
  }
  else
  {
    for ( ; v91; --v91 )
    {
      v59 = qword_1C032CA00;
      --v16;
      v60 = *(_WORD **)(qword_1C032CA00 + 344);
      v61 = *v16;
      v62 = v60[4];
      v63 = v60[6];
      v64 = v63;
      if ( v62 > v63 )
        v64 = v60[4];
      if ( v64 <= 1u )
      {
        v79 = 1;
      }
      else
      {
        if ( v62 > v63 )
          v63 = v60[4];
        v79 = v63;
      }
      v65 = qword_1C032C9F8;
      if ( qword_1C032C9F8 == v5 )
      {
        if ( (int)v61 >= (unsigned __int16)v60[8] || (int)v61 < 0 )
          goto LABEL_153;
        v66 = 0;
      }
      else
      {
        if ( (int)v61 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)v61 < 0 )
          goto LABEL_153;
        v66 = 4;
      }
      if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v5) )
        goto LABEL_153;
      v67 = *(_WORD *)(v5 + 80);
      v68 = 1LL;
      if ( v67 >= 1 && v67 <= v79 )
      {
        v68 = v67 - 1;
        if ( (int)v61 >= v66 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2 * v68) + 1 )
          goto LABEL_153;
      }
      if ( v5 != v65 && *(_BYTE *)(v59 + 333) == 2 && word_1C032CA74 && (*(_BYTE *)(v59 + 452) & 2) != 0 )
        AddProportion(v68, v5, v17, v61, v92);
      v69 = InvokeProject(v80, *(_DWORD *)(v86 + 4 * v61) - v84, *(_DWORD *)(v87 + 4 * v61) - v83);
      v70 = InvokeProject(
              v80,
              *(_DWORD *)(*(_QWORD *)v5 + 4 * v61) - v82,
              *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v61) - v95);
      InvokeMovePoint(v74, (_QWORD *)v5, v61, v69 - v70);
    }
  }
  result = a1;
  qword_1C032C9E8 = (__int64)v16;
  dword_1C032CA20 = 0;
  return result;
}
