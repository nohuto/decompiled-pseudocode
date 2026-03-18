/*
 * XREFs of itrp_IUP @ 0x1C02CDBA0
 * Callers:
 *     <none>
 * Callees:
 *     CompDiv @ 0x1C02B6F58 (CompDiv.c)
 *     FixMul @ 0x1C02B6FFC (FixMul.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     ExecutePhaseControl @ 0x1C02C90A8 (ExecutePhaseControl.c)
 */

__int64 __fastcall itrp_IUP(__int64 a1, char a2)
{
  __int64 v2; // rbx
  char v4; // al
  __int16 v6; // cx
  int v7; // edi
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // r13
  int v11; // ecx
  _WORD *v12; // r15
  __int64 v13; // r14
  unsigned __int16 v14; // si
  unsigned __int16 v15; // di
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // ax
  int v18; // r12d
  unsigned __int16 v19; // ax
  int v20; // esi
  int v21; // edi
  int v22; // ebp
  __int64 v23; // r12
  __int64 v24; // r13
  int v25; // r10d
  char v26; // r9
  __int64 v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rdi
  __int64 v35; // r8
  int v36; // r14d
  int v37; // r11d
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rsi
  int v42; // ecx
  char *v43; // r12
  int v44; // r9d
  int v45; // eax
  int v46; // r9d
  int v47; // eax
  int v48; // r13d
  int v49; // r15d
  int v50; // ebp
  int v51; // edx
  int v52; // ebp
  __int64 v53; // rax
  int v54; // r14d
  char *v55; // r8
  unsigned __int64 v56; // rdi
  int *v57; // r11
  _DWORD *v58; // rcx
  __int64 v59; // rsi
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // r11d
  int v65; // ecx
  int v66; // eax
  int v67; // eax
  int v68; // [rsp+20h] [rbp-D8h]
  int v69; // [rsp+20h] [rbp-D8h]
  int v70; // [rsp+24h] [rbp-D4h]
  int v71; // [rsp+28h] [rbp-D0h]
  __int64 v72; // [rsp+30h] [rbp-C8h]
  __int64 v73; // [rsp+38h] [rbp-C0h]
  __int64 v74; // [rsp+38h] [rbp-C0h]
  __int64 v75; // [rsp+40h] [rbp-B8h]
  __int64 v76; // [rsp+48h] [rbp-B0h]
  __int64 v77; // [rsp+50h] [rbp-A8h]
  __int64 v78; // [rsp+58h] [rbp-A0h]
  int v79; // [rsp+60h] [rbp-98h]
  int v80; // [rsp+64h] [rbp-94h]
  int v81; // [rsp+68h] [rbp-90h]
  __int64 v82; // [rsp+70h] [rbp-88h]
  __int64 v83; // [rsp+88h] [rbp-70h]
  unsigned __int64 v84; // [rsp+98h] [rbp-60h]
  __int64 v85; // [rsp+A0h] [rbp-58h]
  __int16 v87; // [rsp+108h] [rbp+10h]
  char v88; // [rsp+110h] [rbp+18h]
  int v89; // [rsp+118h] [rbp+20h]

  v2 = qword_1C0327C60;
  v85 = qword_1C0327C60;
  v88 = 2;
  v4 = *(_BYTE *)(qword_1C0327C90 + 333);
  if ( v4 == 2 )
  {
    if ( qword_1C0327C60 != qword_1C0327C88 )
    {
      v6 = *(_WORD *)(qword_1C0327C90 + 452);
      if ( (v6 & 1) != 0 && (v6 & 2) != 0 && (v6 & 4) != (a2 & 1) && !*(_DWORD *)(qword_1C0327C60 + 96) )
        ExecutePhaseControl((__int64)&LocalGS, qword_1C0327C60);
    }
  }
  else if ( v4 || qword_1C0327C88 != qword_1C0327C60 )
  {
    dword_1C0327CE0 = 4380;
    return qword_1C0327CE8;
  }
  v7 = a2 & 1;
  v78 = *(_QWORD *)(v2 + 72);
  v87 = v7;
  if ( v7 )
  {
    v75 = *(_QWORD *)v2;
    v82 = *(_QWORD *)(v2 + 16);
    if ( *(_BYTE *)(qword_1C0327C90 + 397) )
      v72 = *(_QWORD *)(v2 + 16);
    else
      v72 = *(_QWORD *)(v2 + 32);
    v88 = 1;
  }
  else
  {
    v75 = *(_QWORD *)(v2 + 8);
    v82 = *(_QWORD *)(v2 + 24);
    if ( *(_BYTE *)(qword_1C0327C90 + 397) )
      v72 = *(_QWORD *)(v2 + 24);
    else
      v72 = *(_QWORD *)(v2 + 40);
  }
  LOWORD(v8) = *(_WORD *)(v2 + 80);
  v81 = 0;
  if ( (__int16)v8 > 0 )
  {
    v9 = 0LL;
    v83 = 0LL;
    while ( 1 )
    {
      v10 = qword_1C0327C90;
      v11 = *(__int16 *)(*(_QWORD *)(v2 + 56) + 2 * v9);
      v12 = *(_WORD **)(qword_1C0327C90 + 344);
      v73 = *(_QWORD *)(v2 + 64);
      v89 = v11;
      v13 = *(__int16 *)(v73 + 2 * v9);
      v14 = v12[4];
      v15 = v12[6];
      v77 = v13;
      v84 = v72 + 4 * v13;
      v16 = v15;
      if ( v14 > v15 )
        v16 = v12[4];
      if ( v16 <= 1u )
      {
        v68 = 1;
      }
      else
      {
        v17 = v12[6];
        if ( v14 > v15 )
          v17 = v12[4];
        v68 = v17;
      }
      v76 = qword_1C0327C88;
      if ( qword_1C0327C88 == v2 )
      {
        if ( v11 >= (unsigned __int16)v12[8] || v11 < 0 )
          goto LABEL_128;
        v18 = 1;
      }
      else
      {
        if ( v11 >= *(_DWORD *)(qword_1C0327C90 + 440) || v11 < 0 )
        {
LABEL_128:
          dword_1C0327CE0 = 4370;
          return qword_1C0327CE8;
        }
        v18 = 5;
      }
      if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v2)
        || (__int16)v8 >= 1 && (__int16)v8 <= v68 && v89 >= v18 + *(__int16 *)(v73 + 2LL * ((__int16)v8 - 1)) )
      {
        goto LABEL_128;
      }
      v19 = v15;
      if ( v14 > v15 )
        v19 = v14;
      if ( v19 <= 1u )
      {
        v20 = 1;
      }
      else
      {
        if ( v14 > v15 )
          v15 = v14;
        v20 = v15;
      }
      if ( v76 == v2 )
      {
        if ( (int)v13 >= (unsigned __int16)v12[8] || (int)v13 < 0 )
          goto LABEL_128;
        v21 = 1;
      }
      else
      {
        if ( (int)v13 >= *(_DWORD *)(v10 + 440) || (int)v13 < 0 )
          goto LABEL_128;
        v21 = 5;
      }
      if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v2)
        || (__int16)v8 >= 1 && (__int16)v8 <= v20 && (int)v13 >= v21 + *(__int16 *)(v73 + 2LL * ((__int16)v8 - 1)) )
      {
        goto LABEL_128;
      }
      v22 = v89;
      v23 = v13;
      v24 = v78;
      v25 = v89;
      v26 = v88;
      v27 = v89;
      if ( ((unsigned __int8)v88 & *(_BYTE *)(v89 + v78)) == 0 )
      {
        v28 = v89;
        do
        {
          if ( v28 > v13 )
            break;
          ++v28;
          ++v25;
        }
        while ( ((unsigned __int8)v88 & *(_BYTE *)(v28 + v78)) == 0 );
      }
      if ( v25 <= (int)v13 )
        break;
LABEL_106:
      v8 = *(__int16 *)(v2 + 80);
      v9 = v83 + 1;
      ++v81;
      ++v83;
      if ( v81 >= v8 )
      {
        LOWORD(v7) = v87;
        goto LABEL_108;
      }
    }
    v29 = v25;
    v74 = v25;
    v80 = v25;
    while ( 1 )
    {
      v30 = v25;
      do
      {
        v31 = v30 + 1;
        v32 = v25;
        v33 = v25 + 1;
        v34 = v27;
        v25 = v22;
        if ( v31 <= v23 )
        {
          v25 = v33;
          v34 = v31;
        }
        v35 = v25;
        v36 = v25;
        v37 = v25;
        if ( ((unsigned __int8)v26 & *(_BYTE *)(v34 + v24)) == 0 )
          break;
        v30 = v34;
      }
      while ( v34 != v29 );
      if ( v25 == v80 )
        goto LABEL_104;
      v38 = v25;
      do
      {
        v39 = v38 + 1;
        v40 = v25 + 1;
        v41 = v27;
        v25 = v22;
        if ( v39 <= v23 )
        {
          v41 = v39;
          v25 = v40;
        }
        v38 = v41;
      }
      while ( ((unsigned __int8)v26 & *(_BYTE *)(v41 + v24)) == 0 );
      v42 = *(_DWORD *)(v72 + 4 * v32);
      v43 = (char *)(v72 + 4LL * v25);
      v44 = *(_DWORD *)v43;
      if ( v42 >= *(_DWORD *)v43 )
      {
        v70 = *(_DWORD *)v43;
        v46 = v42 - v44;
        v45 = v25;
      }
      else
      {
        v45 = v32;
        v70 = *(_DWORD *)(v72 + 4 * v32);
        LODWORD(v32) = v25;
        v46 = v44 - v42;
      }
      v79 = *(_DWORD *)(v75 + 4LL * v45);
      v47 = *(_DWORD *)(v82 + 4LL * v45);
      v48 = v79 - v47;
      v71 = v47;
      if ( v46 )
      {
        v49 = *(_DWORD *)(v82 + 4LL * (int)v32);
        v50 = *(_DWORD *)(v75 + 4LL * (int)v32);
        v51 = v50 - v49;
        v52 = v50 - v79;
        v69 = v51;
        if ( v46 >= 0x8000 || v52 >= 0x8000 )
        {
          v64 = CompDiv(v46, (__int64)v52 << 16);
          v25 = v36;
          if ( v34 != v41 )
          {
            v65 = v71;
            do
            {
              v66 = *(_DWORD *)(v82 + 4 * v34);
              if ( v66 > v65 )
              {
                if ( v66 < v49 )
                {
                  v67 = v79 + FixMul(*(_DWORD *)(v72 + 4 * v34) - v70, v64);
                  v65 = v71;
                }
                else
                {
                  v67 = v69 + v66;
                }
              }
              else
              {
                v67 = v48 + v66;
              }
              *(_DWORD *)(v75 + 4 * v34) = v67;
              if ( v34 >= v77 )
              {
                v25 = v89;
                v34 = v89;
              }
              else
              {
                ++v25;
                ++v34;
              }
            }
            while ( v34 != v41 );
            v22 = v89;
            v27 = v89;
            goto LABEL_102;
          }
        }
        else
        {
          v53 = v35;
          v54 = v46 >> 1;
          v55 = (char *)(v72 + 4 * v35);
          v56 = (unsigned __int64)(v43 - v55 + 3) >> 2;
          v57 = (int *)(v82 + 4 * v53);
          v58 = (_DWORD *)(v75 + 4 * v53);
          v59 = 0LL;
          if ( v55 > v43 )
            v56 = 0LL;
          if ( v56 )
          {
            while ( 1 )
            {
              v60 = *v57;
              if ( *v57 <= v71 )
                break;
              if ( v60 >= v49 )
                goto LABEL_87;
              v51 = v69;
              v61 = v79 + (v54 + v52 * (*(_DWORD *)v55 - v70)) / v46;
LABEL_89:
              *v58 = v61;
              ++v57;
              ++v58;
              v55 += 4;
              if ( ++v59 >= v56 )
              {
                v43 = (char *)(v72 + 4LL * v25);
                goto LABEL_91;
              }
            }
            if ( v60 < v49 )
            {
              v61 = v48 + v60;
              goto LABEL_89;
            }
LABEL_87:
            v61 = v51 + v60;
            goto LABEL_89;
          }
LABEL_91:
          if ( v55 != v43 )
          {
            while ( 1 )
            {
              v62 = *v57;
              if ( *v57 <= v71 )
                break;
              if ( v62 >= v49 )
                goto LABEL_96;
              v63 = v79 + (v54 + v52 * (*(_DWORD *)v55 - v70)) / v46;
LABEL_98:
              *v58 = v63;
              v55 += 4;
              ++v58;
              ++v57;
              if ( (unsigned __int64)v55 > v84 )
              {
                v55 = (char *)(v72 + 4LL * v89);
                v57 = (int *)(v82 + 4LL * v89);
                v58 = (_DWORD *)(v75 + 4LL * v89);
              }
              v51 = v69;
              if ( v55 == v43 )
                goto LABEL_101;
            }
            if ( v62 < v49 )
            {
              v63 = v48 + v62;
              goto LABEL_98;
            }
LABEL_96:
            v63 = v51 + v62;
            goto LABEL_98;
          }
        }
LABEL_101:
        v27 = v89;
        v22 = v89;
      }
      else
      {
        v25 = v37;
        if ( v34 != v41 )
        {
          v23 = v77;
          do
          {
            *(_DWORD *)(v75 + 4 * v34) += v48;
            if ( v34 >= v77 )
            {
              v25 = v22;
              v34 = v27;
            }
            else
            {
              ++v25;
              ++v34;
            }
          }
          while ( v34 != v41 );
          goto LABEL_103;
        }
      }
LABEL_102:
      v23 = v77;
LABEL_103:
      v26 = v88;
      v29 = v74;
      v24 = v78;
LABEL_104:
      if ( v25 == v80 )
      {
        v2 = v85;
        goto LABEL_106;
      }
    }
  }
LABEL_108:
  *(_WORD *)(qword_1C0327C90 + 454) |= (v7 ^ 1) + 1;
  return a1;
}
