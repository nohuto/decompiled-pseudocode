/*
 * XREFs of itrp_IUP @ 0x1C02D3DF0
 * Callers:
 *     <none>
 * Callees:
 *     CompDiv @ 0x1C02BD158 (CompDiv.c)
 *     FixMul @ 0x1C02BD1FC (FixMul.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     ExecutePhaseControl @ 0x1C02CF308 (ExecutePhaseControl.c)
 */

__int64 __fastcall itrp_IUP(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  char v5; // al
  __int64 v6; // r14
  __int16 v8; // cx
  int v9; // esi
  int v10; // r15d
  __int64 v11; // rdx
  _WORD *v12; // r13
  int v13; // ecx
  unsigned __int16 v14; // bp
  unsigned __int16 v15; // si
  __int64 v16; // r12
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // ax
  int v20; // ebp
  int v21; // esi
  int v22; // ebp
  __int64 v23; // r9
  __int64 v24; // r13
  int v25; // r10d
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rbx
  __int64 v34; // r8
  int v35; // r14d
  int v36; // r11d
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rsi
  int v41; // ecx
  char *v42; // r12
  int v43; // r9d
  int v44; // eax
  int v45; // r9d
  int v46; // ecx
  int v47; // eax
  int v48; // r13d
  int v49; // r15d
  int v50; // ebp
  int v51; // edx
  int v52; // ebp
  __int64 v53; // rax
  char *v54; // r8
  unsigned __int64 v55; // rbx
  int *v56; // r11
  int v57; // r14d
  _DWORD *v58; // rcx
  __int64 v59; // rsi
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // r11d
  int v66; // ecx
  __int64 v67; // rdx
  int v68; // eax
  int v69; // eax
  int fixed; // eax
  int v71; // [rsp+20h] [rbp-C8h]
  int v72; // [rsp+20h] [rbp-C8h]
  int v73; // [rsp+24h] [rbp-C4h]
  int v74; // [rsp+24h] [rbp-C4h]
  int v75; // [rsp+28h] [rbp-C0h]
  int v76; // [rsp+2Ch] [rbp-BCh]
  __int64 v77; // [rsp+30h] [rbp-B8h]
  __int64 v78; // [rsp+38h] [rbp-B0h]
  __int64 v79; // [rsp+38h] [rbp-B0h]
  __int64 v80; // [rsp+40h] [rbp-A8h]
  __int64 v81; // [rsp+48h] [rbp-A0h]
  __int64 v82; // [rsp+50h] [rbp-98h]
  int v83; // [rsp+58h] [rbp-90h]
  int v84; // [rsp+5Ch] [rbp-8Ch]
  __int64 v85; // [rsp+60h] [rbp-88h]
  __int64 v86; // [rsp+80h] [rbp-68h]
  unsigned __int64 v87; // [rsp+90h] [rbp-58h]
  __int64 v88; // [rsp+98h] [rbp-50h]
  int v90; // [rsp+F8h] [rbp+10h]
  char v91; // [rsp+100h] [rbp+18h]
  int v92; // [rsp+108h] [rbp+20h]

  v2 = qword_1C032CA00;
  v3 = qword_1C032C9D0;
  v88 = qword_1C032C9D0;
  v5 = *(_BYTE *)(qword_1C032CA00 + 333);
  if ( v5 == 2 )
  {
    v6 = qword_1C032C9F8;
    if ( qword_1C032C9D0 != qword_1C032C9F8 )
    {
      v8 = *(_WORD *)(qword_1C032CA00 + 452);
      if ( (v8 & 3) == 3 && (v8 & 4) != (a2 & 1) && !*(_DWORD *)(qword_1C032C9D0 + 96) )
      {
        ExecutePhaseControl((__int64)&LocalGS, qword_1C032C9D0);
        v2 = qword_1C032CA00;
        v6 = qword_1C032C9F8;
      }
    }
  }
  else if ( v5 || (v6 = qword_1C032C9F8, qword_1C032C9F8 != qword_1C032C9D0) )
  {
    dword_1C032CA50 = 4380;
    return qword_1C032CA58;
  }
  v9 = a2 & 1;
  v82 = *(_QWORD *)(v3 + 72);
  v90 = v9;
  if ( v9 )
  {
    v77 = *(_QWORD *)v3;
    v85 = *(_QWORD *)(v3 + 16);
    if ( *(_BYTE *)(v2 + 397) )
      v80 = *(_QWORD *)(v3 + 16);
    else
      v80 = *(_QWORD *)(v3 + 32);
    v91 = 1;
  }
  else
  {
    v77 = *(_QWORD *)(v3 + 8);
    v85 = *(_QWORD *)(v3 + 24);
    if ( *(_BYTE *)(v2 + 397) )
      v80 = *(_QWORD *)(v3 + 24);
    else
      v80 = *(_QWORD *)(v3 + 40);
    v91 = 2;
  }
  LOWORD(v10) = *(_WORD *)(v3 + 80);
  v84 = 0;
  if ( (__int16)v10 > 0 )
  {
    v11 = 0LL;
    v86 = 0LL;
    while ( 1 )
    {
      v12 = *(_WORD **)(v2 + 344);
      v13 = *(__int16 *)(*(_QWORD *)(v3 + 56) + 2 * v11);
      v14 = v12[4];
      v15 = v12[6];
      v78 = *(_QWORD *)(v3 + 64);
      v16 = *(__int16 *)(v78 + 2 * v11);
      v92 = v13;
      v81 = v16;
      v87 = v80 + 4 * v16;
      v17 = v15;
      if ( v14 > v15 )
        v17 = v12[4];
      if ( v17 <= 1u )
      {
        v73 = 1;
      }
      else
      {
        v18 = v12[6];
        if ( v14 > v15 )
          v18 = v12[4];
        v73 = v18;
      }
      if ( v6 == v3 )
      {
        if ( v13 >= (unsigned __int16)v12[8] || v13 < 0 )
          goto LABEL_129;
        v71 = 0;
      }
      else
      {
        if ( v13 >= *(_DWORD *)(v2 + 440) || v13 < 0 )
        {
LABEL_129:
          dword_1C032CA50 = 4370;
          return qword_1C032CA58;
        }
        v71 = 4;
      }
      if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v3)
        || (__int16)v10 >= 1 && (__int16)v10 <= v73 && v92 >= *(__int16 *)(v78 + 2LL * ((__int16)v10 - 1)) + v71 + 1 )
      {
        goto LABEL_129;
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
      if ( v6 == v3 )
      {
        if ( (int)v16 >= (unsigned __int16)v12[8] || (int)v16 < 0 )
          goto LABEL_129;
        v21 = 0;
      }
      else
      {
        if ( (int)v16 >= *(_DWORD *)(v2 + 440) || (int)v16 < 0 )
          goto LABEL_129;
        v21 = 4;
      }
      if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v3)
        || (__int16)v10 >= 1
        && (__int16)v10 <= v20
        && (int)v16 >= *(__int16 *)(v78 + 2LL * ((__int16)v10 - 1)) + v21 + 1 )
      {
        goto LABEL_129;
      }
      v22 = v92;
      v23 = v16;
      v24 = v82;
      v25 = v92;
      v26 = v92;
      if ( ((unsigned __int8)v91 & *(_BYTE *)(v92 + v82)) == 0 )
      {
        v27 = v92;
        do
        {
          if ( v27 > v16 )
            break;
          ++v27;
          ++v25;
        }
        while ( ((unsigned __int8)v91 & *(_BYTE *)(v27 + v82)) == 0 );
      }
      if ( v25 <= (int)v16 )
        break;
LABEL_106:
      v10 = *(__int16 *)(v3 + 80);
      v11 = v86 + 1;
      ++v84;
      ++v86;
      if ( v84 >= v10 )
      {
        v9 = v90;
        goto LABEL_131;
      }
    }
    v28 = v25;
    v79 = v25;
    v83 = v25;
    while ( 1 )
    {
      v29 = v25;
      do
      {
        v30 = v29 + 1;
        v31 = v25;
        v32 = v25 + 1;
        v33 = v26;
        v25 = v22;
        if ( v30 <= v23 )
        {
          v25 = v32;
          v33 = v30;
        }
        v34 = v25;
        v35 = v25;
        v36 = v25;
        if ( ((unsigned __int8)v91 & *(_BYTE *)(v33 + v24)) == 0 )
          break;
        v29 = v33;
      }
      while ( v33 != v28 );
      if ( v25 == v83 )
        goto LABEL_104;
      v37 = v25;
      do
      {
        v38 = v37 + 1;
        v39 = v25 + 1;
        v40 = v26;
        v25 = v22;
        if ( v38 <= v23 )
        {
          v40 = v38;
          v25 = v39;
        }
        v37 = v40;
      }
      while ( ((unsigned __int8)v91 & *(_BYTE *)(v40 + v24)) == 0 );
      v41 = *(_DWORD *)(v80 + 4 * v31);
      v42 = (char *)(v80 + 4LL * v25);
      v43 = *(_DWORD *)v42;
      if ( v41 >= *(_DWORD *)v42 )
      {
        v75 = *(_DWORD *)v42;
        v45 = v41 - v43;
        v44 = v25;
      }
      else
      {
        v44 = v31;
        v75 = *(_DWORD *)(v80 + 4 * v31);
        LODWORD(v31) = v25;
        v45 = v43 - v41;
      }
      v46 = *(_DWORD *)(v77 + 4LL * v44);
      v47 = *(_DWORD *)(v85 + 4LL * v44);
      v48 = v46 - v47;
      v74 = v46;
      v76 = v47;
      if ( v45 )
      {
        v49 = *(_DWORD *)(v85 + 4LL * (int)v31);
        v50 = *(_DWORD *)(v77 + 4LL * (int)v31);
        v51 = v50 - v49;
        v52 = v50 - v46;
        v72 = v51;
        if ( v45 >= 0x8000 || v52 >= 0x8000 )
        {
          v64 = CompDiv(v45, (__int64)v52 << 16);
          v23 = v81;
          v65 = v64;
          v25 = v35;
          if ( v33 == v40 )
          {
            v26 = v92;
          }
          else
          {
            v66 = v76;
            v67 = v77;
            do
            {
              v68 = *(_DWORD *)(v85 + 4 * v33);
              if ( v68 > v66 )
              {
                if ( v68 < v49 )
                {
                  fixed = FixMul(*(_DWORD *)(v80 + 4 * v33) - v75, v65);
                  v66 = v76;
                  v69 = v74 + fixed;
                  v67 = v77;
                  v23 = v81;
                }
                else
                {
                  v69 = v72 + v68;
                }
              }
              else
              {
                v69 = v48 + v68;
              }
              *(_DWORD *)(v67 + 4 * v33) = v69;
              if ( v33 >= v23 )
              {
                v25 = v92;
                v33 = v92;
              }
              else
              {
                ++v25;
                ++v33;
              }
            }
            while ( v33 != v40 );
            v26 = v92;
          }
          v22 = v92;
          goto LABEL_103;
        }
        v53 = v34;
        v54 = (char *)(v80 + 4 * v34);
        v55 = (unsigned __int64)(v42 - v54 + 3) >> 2;
        v56 = (int *)(v85 + 4 * v53);
        v57 = v45 >> 1;
        v58 = (_DWORD *)(v77 + 4 * v53);
        v59 = 0LL;
        if ( v54 > v42 )
          v55 = 0LL;
        if ( v55 )
        {
          while ( 1 )
          {
            v60 = *v56;
            if ( *v56 <= v76 )
              break;
            if ( v60 >= v49 )
              goto LABEL_87;
            v51 = v72;
            v61 = v74 + (v57 + v52 * (*(_DWORD *)v54 - v75)) / v45;
LABEL_89:
            *v58 = v61;
            ++v56;
            ++v58;
            v54 += 4;
            if ( ++v59 >= v55 )
            {
              v42 = (char *)(v80 + 4LL * v25);
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
        if ( v54 != v42 )
        {
          while ( 1 )
          {
            v62 = *v56;
            if ( *v56 <= v76 )
              break;
            if ( v62 >= v49 )
              goto LABEL_96;
            v63 = v74 + (v57 + v52 * (*(_DWORD *)v54 - v75)) / v45;
LABEL_98:
            *v58 = v63;
            v54 += 4;
            ++v58;
            ++v56;
            if ( (unsigned __int64)v54 > v87 )
            {
              v54 = (char *)(v80 + 4LL * v92);
              v56 = (int *)(v85 + 4LL * v92);
              v58 = (_DWORD *)(v77 + 4LL * v92);
            }
            v51 = v72;
            if ( v54 == v42 )
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
LABEL_101:
        v26 = v92;
        v22 = v92;
      }
      else
      {
        v25 = v36;
        if ( v33 != v40 )
        {
          v23 = v81;
          do
          {
            *(_DWORD *)(v77 + 4 * v33) += v48;
            if ( v33 >= v81 )
            {
              v25 = v22;
              v33 = v26;
            }
            else
            {
              ++v25;
              ++v33;
            }
          }
          while ( v33 != v40 );
          goto LABEL_103;
        }
      }
      v23 = v81;
LABEL_103:
      v28 = v79;
      v24 = v82;
LABEL_104:
      if ( v25 == v83 )
      {
        v3 = v88;
        v2 = qword_1C032CA00;
        v6 = qword_1C032C9F8;
        goto LABEL_106;
      }
    }
  }
LABEL_131:
  *(_WORD *)(v2 + 454) |= 2 - (v9 != 0);
  return a1;
}
