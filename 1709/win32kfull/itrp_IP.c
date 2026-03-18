/*
 * XREFs of itrp_IP @ 0x1C02CCA70
 * Callers:
 *     <none>
 * Callees:
 *     CompDiv @ 0x1C02B6F58 (CompDiv.c)
 *     AddProportion @ 0x1C02C8CB0 (AddProportion.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeMovePoint @ 0x1C02C939C (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02C9438 (InvokeProject.c)
 */

__int64 __fastcall itrp_IP(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r14
  _WORD *v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r13
  unsigned __int16 v7; // r15
  unsigned __int16 v8; // di
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // ax
  __int16 v11; // ax
  unsigned __int16 v12; // ax
  int v13; // r15d
  int v14; // edi
  __int16 v15; // ax
  int *v16; // r15
  int v17; // r12d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // r10d
  int v22; // r11d
  __int64 v23; // rax
  int v24; // r13d
  int v25; // r14d
  __int64 v26; // rdi
  _WORD *v27; // r8
  __int64 v28; // rbx
  unsigned __int16 v29; // dx
  unsigned __int16 v30; // cx
  unsigned __int16 v31; // ax
  __int64 v32; // r13
  int v33; // r14d
  __int16 v34; // ax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdi
  _WORD *v38; // r8
  __int64 v39; // rbx
  unsigned __int16 v40; // dx
  unsigned __int16 v41; // cx
  unsigned __int16 v42; // ax
  __int64 v43; // r13
  int v44; // r14d
  __int16 v45; // ax
  __int64 v46; // rcx
  __int64 v47; // rbx
  _WORD *v48; // r9
  __int64 v49; // r14
  unsigned __int16 v50; // r8
  unsigned __int16 v51; // dx
  unsigned __int16 v52; // cx
  __int64 v53; // r13
  int v54; // edi
  __int16 v55; // ax
  __int64 v56; // rcx
  int v57; // eax
  int v58; // ebx
  int v59; // eax
  __int64 v60; // rbx
  _WORD *v61; // r8
  __int64 v62; // r14
  unsigned __int16 v63; // dx
  unsigned __int16 v64; // cx
  unsigned __int16 v65; // ax
  __int64 v66; // r13
  int v67; // edi
  __int16 v68; // ax
  __int64 v69; // rcx
  int v70; // ebx
  int v71; // eax
  __int64 result; // rax
  int v73; // [rsp+30h] [rbp-88h]
  int v74; // [rsp+30h] [rbp-88h]
  int v75; // [rsp+30h] [rbp-88h]
  int i; // [rsp+34h] [rbp-84h]
  int j; // [rsp+34h] [rbp-84h]
  int v78; // [rsp+34h] [rbp-84h]
  int v79; // [rsp+34h] [rbp-84h]
  int v80; // [rsp+38h] [rbp-80h]
  int v81; // [rsp+38h] [rbp-80h]
  int v82; // [rsp+3Ch] [rbp-7Ch]
  int v83; // [rsp+40h] [rbp-78h]
  int v84; // [rsp+44h] [rbp-74h]
  int v85; // [rsp+48h] [rbp-70h]
  __int64 v86; // [rsp+50h] [rbp-68h]
  __int64 v87; // [rsp+50h] [rbp-68h]
  __int64 v88; // [rsp+58h] [rbp-60h]
  int k; // [rsp+60h] [rbp-58h]
  int v91; // [rsp+C8h] [rbp+10h]
  int v92; // [rsp+D0h] [rbp+18h]
  int v93; // [rsp+D8h] [rbp+20h]
  int v94; // [rsp+D8h] [rbp+20h]
  int v95; // [rsp+D8h] [rbp+20h]

  v1 = qword_1C0327C90;
  v2 = LocalGS;
  v3 = *(_WORD **)(qword_1C0327C90 + 344);
  v4 = qword_1C0327C58;
  v5 = qword_1C0327C60;
  v6 = qword_1C0327C88;
  v7 = v3[4];
  v8 = v3[6];
  v91 = dword_1C0327CB0 + 1;
  v92 = dword_1C0327CA8;
  v9 = v8;
  if ( v7 > v8 )
    v9 = v3[4];
  v93 = HIDWORD(qword_1C0327CA0);
  v86 = *(_QWORD *)(qword_1C0327C90 + 344);
  if ( v9 <= 1u )
  {
    v73 = 1;
  }
  else
  {
    v10 = v3[6];
    if ( v7 > v8 )
      v10 = v3[4];
    v73 = v10;
  }
  if ( qword_1C0327C88 == LocalGS )
  {
    if ( SHIDWORD(qword_1C0327CA0) >= (unsigned __int16)v3[8] || qword_1C0327CA0 < 0 )
      goto LABEL_153;
    v80 = 1;
  }
  else
  {
    if ( SHIDWORD(qword_1C0327CA0) >= *(_DWORD *)(qword_1C0327C90 + 440) || qword_1C0327CA0 < 0 )
      goto LABEL_153;
    v80 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    goto LABEL_153;
  v11 = *(_WORD *)(v2 + 80);
  if ( v11 >= 1 && v11 <= v73 && v93 >= v80 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v11 - 1)) )
    goto LABEL_153;
  v12 = v8;
  if ( v7 > v8 )
    v12 = v7;
  if ( v12 <= 1u )
  {
    v13 = 1;
  }
  else
  {
    if ( v7 > v8 )
      v8 = v7;
    v13 = v8;
  }
  if ( v6 == v4 )
  {
    if ( v92 >= *(unsigned __int16 *)(v86 + 16) || v92 < 0 )
      goto LABEL_153;
    v14 = 1;
  }
  else
  {
    if ( v92 >= *(_DWORD *)(v1 + 440) || v92 < 0 )
      goto LABEL_153;
    v14 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v4)
    || (v15 = *(_WORD *)(v4 + 80), v15 >= 1)
    && v15 <= v13
    && v92 >= v14 + *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (v15 - 1)) )
  {
LABEL_153:
    dword_1C0327CE0 = 4370;
    return qword_1C0327CE8;
  }
  v16 = (int *)qword_1C0327C78;
  v74 = dword_1C0327CBC;
  v84 = dword_1C0327CC0;
  if ( (v1 ^ *(_QWORD *)v1 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(v1 + 424)) != *(_QWORD *)(v1 + 432)
    || v91 > (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)v1) >> 2) )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  if ( v2 == v6 || v4 == v6 || v5 == v6 || *(_BYTE *)(v1 + 397) )
  {
    v17 = v93;
    v18 = *(_QWORD *)(v4 + 16);
    v19 = *(_QWORD *)(v4 + 24);
    v20 = 4LL * v93;
    v21 = *(_DWORD *)(v20 + *(_QWORD *)(v2 + 16));
    v22 = *(_DWORD *)(v20 + *(_QWORD *)(v2 + 24));
    v87 = *(_QWORD *)(v5 + 16);
    v23 = *(_QWORD *)(v5 + 24);
  }
  else
  {
    v17 = v93;
    v18 = *(_QWORD *)(v4 + 32);
    v19 = *(_QWORD *)(v4 + 40);
    v20 = 4LL * v93;
    v21 = *(_DWORD *)(v20 + *(_QWORD *)(v2 + 32));
    v22 = *(_DWORD *)(v20 + *(_QWORD *)(v2 + 40));
    v87 = *(_QWORD *)(v5 + 32);
    v23 = *(_QWORD *)(v5 + 40);
  }
  v88 = v23;
  v94 = v22;
  v82 = v21;
  v24 = *(_DWORD *)(v20 + *(_QWORD *)v2);
  v81 = v24;
  v25 = *(_DWORD *)(v20 + *(_QWORD *)(v2 + 8));
  v85 = v25;
  v83 = InvokeProject(dword_1C0327CC4, *(_DWORD *)(v18 + 4LL * v92) - v21, *(_DWORD *)(v19 + 4LL * v92) - v22);
  if ( v83 )
  {
    if ( v74 == 2 )
    {
      for ( i = *(_DWORD *)(*(_QWORD *)v4 + 4LL * v92) - v24; v91; --v91 )
      {
        v26 = qword_1C0327C90;
        --v16;
        v27 = *(_WORD **)(qword_1C0327C90 + 344);
        v28 = *v16;
        v29 = v27[4];
        v30 = v27[6];
        v31 = v30;
        if ( v29 > v30 )
          v31 = v27[4];
        if ( v31 <= 1u )
        {
          v95 = 1;
        }
        else
        {
          if ( v29 > v30 )
            v30 = v27[4];
          v95 = v30;
        }
        v32 = qword_1C0327C88;
        if ( qword_1C0327C88 == v5 )
        {
          if ( (int)v28 >= (unsigned __int16)v27[8] || (int)v28 < 0 )
            goto LABEL_153;
          v33 = 1;
        }
        else
        {
          if ( (int)v28 >= *(_DWORD *)(qword_1C0327C90 + 440) || (int)v28 < 0 )
            goto LABEL_153;
          v33 = 5;
        }
        if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v5) )
          goto LABEL_153;
        v34 = *(_WORD *)(v5 + 80);
        v35 = 1LL;
        if ( v34 >= 1 && v34 <= v95 )
        {
          v35 = v34 - 1;
          if ( (int)v28 >= v33 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2 * v35) )
            goto LABEL_153;
        }
        if ( v5 != v32 && *(_BYTE *)(v26 + 333) == 2 && word_1C0327D04 && (*(_BYTE *)(v26 + 452) & 2) != 0 )
          AddProportion(v35, v5, v17, v28, v92);
        *(_DWORD *)(*(_QWORD *)v5 + 4 * v28) = CompDiv(v83, i * (__int64)(*(_DWORD *)(v87 + 4 * v28) - v82)) + v81;
        *(_BYTE *)(*(_QWORD *)(v5 + 72) + v28) |= 1u;
      }
    }
    else
    {
      v36 = *(_QWORD *)(v4 + 8);
      if ( v74 == 3 )
      {
        for ( j = *(_DWORD *)(v36 + 4LL * v92) - v25; v91; --v91 )
        {
          v37 = qword_1C0327C90;
          --v16;
          v38 = *(_WORD **)(qword_1C0327C90 + 344);
          v39 = *v16;
          v40 = v38[4];
          v41 = v38[6];
          v42 = v41;
          if ( v40 > v41 )
            v42 = v38[4];
          if ( v42 <= 1u )
          {
            v75 = 1;
          }
          else
          {
            if ( v40 > v41 )
              v41 = v38[4];
            v75 = v41;
          }
          v43 = qword_1C0327C88;
          if ( qword_1C0327C88 == v5 )
          {
            if ( (int)v39 >= (unsigned __int16)v38[8] || (int)v39 < 0 )
              goto LABEL_153;
            v44 = 1;
          }
          else
          {
            if ( (int)v39 >= *(_DWORD *)(qword_1C0327C90 + 440) || (int)v39 < 0 )
              goto LABEL_153;
            v44 = 5;
          }
          if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v5) )
            goto LABEL_153;
          v45 = *(_WORD *)(v5 + 80);
          v46 = 1LL;
          if ( v45 >= 1 && v45 <= v75 )
          {
            v46 = v45 - 1;
            if ( (int)v39 >= v44 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2 * v46) )
              goto LABEL_153;
          }
          if ( v5 != v43 && *(_BYTE *)(v37 + 333) == 2 && word_1C0327D04 && (*(_BYTE *)(v37 + 452) & 2) != 0 )
            AddProportion(v46, v5, v17, v39, v92);
          *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v39) = CompDiv(v83, j * (__int64)(*(_DWORD *)(v88 + 4 * v39) - v94))
                                                     + v85;
          *(_BYTE *)(*(_QWORD *)(v5 + 72) + v39) |= 2u;
        }
      }
      else
      {
        for ( k = InvokeProject(v84, *(_DWORD *)(*(_QWORD *)v4 + 4LL * v92) - v24, *(_DWORD *)(v36 + 4LL * v92) - v25);
              v91;
              --v91 )
        {
          v47 = qword_1C0327C90;
          --v16;
          v48 = *(_WORD **)(qword_1C0327C90 + 344);
          v49 = *v16;
          v50 = v48[4];
          v51 = v48[6];
          v52 = v51;
          if ( v50 > v51 )
            v52 = v48[4];
          if ( v52 <= 1u )
          {
            v78 = 1;
          }
          else
          {
            if ( v50 > v51 )
              v51 = v48[4];
            v78 = v51;
          }
          v53 = qword_1C0327C88;
          if ( qword_1C0327C88 == v5 )
          {
            if ( (int)v49 >= (unsigned __int16)v48[8] || (int)v49 < 0 )
              goto LABEL_153;
            v54 = 1;
          }
          else
          {
            if ( (int)v49 >= *(_DWORD *)(qword_1C0327C90 + 440) || (int)v49 < 0 )
              goto LABEL_153;
            v54 = 5;
          }
          if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v5) )
            goto LABEL_153;
          v55 = *(_WORD *)(v5 + 80);
          v56 = 1LL;
          if ( v55 >= 1 && v55 <= v78 )
          {
            v56 = v55 - 1;
            if ( (int)v49 >= v54 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2 * v56) )
              goto LABEL_153;
          }
          if ( v5 != v53 && *(_BYTE *)(v47 + 333) == 2 && word_1C0327D04 && (*(_BYTE *)(v47 + 452) & 2) != 0 )
            AddProportion(v56, v5, v17, v49, v92);
          v57 = InvokeProject(v84, *(_DWORD *)(v87 + 4 * v49) - v82, *(_DWORD *)(v88 + 4 * v49) - v94);
          v58 = CompDiv(v83, k * (__int64)v57);
          v59 = InvokeProject(
                  v84,
                  *(_DWORD *)(*(_QWORD *)v5 + 4 * v49) - v81,
                  *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v49) - v85);
          InvokeMovePoint(v74, (_QWORD *)v5, v49, v58 - v59);
        }
      }
    }
  }
  else
  {
    for ( ; v91; --v91 )
    {
      v60 = qword_1C0327C90;
      --v16;
      v61 = *(_WORD **)(qword_1C0327C90 + 344);
      v62 = *v16;
      v63 = v61[4];
      v64 = v61[6];
      v65 = v64;
      if ( v63 > v64 )
        v65 = v61[4];
      if ( v65 <= 1u )
      {
        v79 = 1;
      }
      else
      {
        if ( v63 > v64 )
          v64 = v61[4];
        v79 = v64;
      }
      v66 = qword_1C0327C88;
      if ( qword_1C0327C88 == v5 )
      {
        if ( (int)v62 >= (unsigned __int16)v61[8] || (int)v62 < 0 )
          goto LABEL_153;
        v67 = 1;
      }
      else
      {
        if ( (int)v62 >= *(_DWORD *)(qword_1C0327C90 + 440) || (int)v62 < 0 )
          goto LABEL_153;
        v67 = 5;
      }
      if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v5) )
        goto LABEL_153;
      v68 = *(_WORD *)(v5 + 80);
      v69 = 1LL;
      if ( v68 >= 1 && v68 <= v79 )
      {
        v69 = v68 - 1;
        if ( (int)v62 >= v67 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2 * v69) )
          goto LABEL_153;
      }
      if ( v5 != v66 && *(_BYTE *)(v60 + 333) == 2 && word_1C0327D04 && (*(_BYTE *)(v60 + 452) & 2) != 0 )
        AddProportion(v69, v5, v17, v62, v92);
      v70 = InvokeProject(v84, *(_DWORD *)(v87 + 4 * v62) - v82, *(_DWORD *)(v88 + 4 * v62) - v94);
      v71 = InvokeProject(
              v84,
              *(_DWORD *)(*(_QWORD *)v5 + 4 * v62) - v81,
              *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v62) - v85);
      InvokeMovePoint(v74, (_QWORD *)v5, v62, v70 - v71);
    }
  }
  result = a1;
  qword_1C0327C78 = (__int64)v16;
  dword_1C0327CB0 = 0;
  return result;
}
