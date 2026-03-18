/*
 * XREFs of LocalGetStringForRelativeAttribute @ 0x1407372E0
 * Callers:
 *     LocalGetAceCondition @ 0x1407332A8 (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1400E0214 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _i64tow_s @ 0x1401636F0 (_i64tow_s.c)
 *     _ui64tow_s @ 0x140163780 (_ui64tow_s.c)
 *     _ultow_s @ 0x1401637A0 (_ultow_s.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x14057C7AC (SddlpAlloc.c)
 *     LocalGetStringForSid @ 0x140733530 (LocalGetStringForSid.c)
 *     EncodeAttributeName @ 0x1407344B4 (EncodeAttributeName.c)
 */

__int64 __fastcall LocalGetStringForRelativeAttribute(
        unsigned int *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        size_t *a7)
{
  void *v9; // rdi
  unsigned int v10; // esi
  __int64 v11; // r13
  int v12; // r15d
  __int64 v13; // rcx
  unsigned __int16 *v14; // r11
  __int64 v15; // rdx
  size_t v16; // rdx
  unsigned int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // r8d
  unsigned int *v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // r10d
  unsigned int v25; // r9d
  unsigned __int64 v26; // rax
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int *v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // edx
  __int64 v32; // rcx
  unsigned int v33; // eax
  _BYTE *v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // edx
  int v37; // eax
  unsigned int v38; // r15d
  unsigned int *v39; // r11
  __int64 v40; // rcx
  __int64 v41; // r11
  int v42; // eax
  unsigned int v43; // ecx
  _WORD *v44; // rax
  unsigned int v45; // r12d
  unsigned int *v46; // r15
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned int v49; // ecx
  int v50; // eax
  unsigned int v51; // r12d
  unsigned int *v52; // r15
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // ecx
  int v56; // eax
  unsigned __int64 v57; // rbx
  void *v58; // rdx
  _WORD *v59; // rdi
  _WORD *v60; // rdi
  int v61; // eax
  __int64 v62; // rax
  size_t v63; // rbx
  char *v64; // rdi
  __int64 v65; // r9
  char *v66; // rdi
  int v67; // r15d
  int v68; // r15d
  int v69; // r15d
  int v70; // r15d
  int v71; // r15d
  unsigned int *v72; // r8
  __int64 v73; // r12
  __int64 v74; // rcx
  unsigned int v75; // r9d
  unsigned __int8 *v76; // rdx
  __int64 v77; // r10
  unsigned int v78; // ecx
  unsigned int v79; // r15d
  _DWORD *v80; // r12
  __int64 v81; // r8
  char *v82; // rdi
  __int64 v83; // rax
  size_t v84; // rbx
  __int64 v85; // r12
  unsigned int *v86; // r15
  char *v87; // rdi
  _WORD *v88; // rdx
  __int64 v89; // rax
  size_t v90; // rbx
  char *v91; // rdi
  unsigned int *v92; // r15
  __int64 v93; // r12
  char *v94; // rdi
  __int64 v95; // rax
  size_t v96; // rbx
  unsigned int *v97; // r15
  __int64 v98; // r12
  char *v99; // rdi
  __int64 v100; // rax
  size_t v101; // rbx
  size_t *v102; // rax
  int v104; // [rsp+20h] [rbp-E0h]
  int v105; // [rsp+30h] [rbp-D0h]
  unsigned int v106; // [rsp+30h] [rbp-D0h]
  unsigned int v107; // [rsp+34h] [rbp-CCh]
  unsigned int v108; // [rsp+34h] [rbp-CCh]
  unsigned int v109; // [rsp+34h] [rbp-CCh]
  unsigned int v110; // [rsp+34h] [rbp-CCh]
  size_t pcbLength; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int StringForSid; // [rsp+40h] [rbp-C0h]
  PVOID P[2]; // [rsp+48h] [rbp-B8h] BYREF
  void *Src; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v115; // [rsp+60h] [rbp-A0h]
  size_t Size; // [rsp+68h] [rbp-98h]
  size_t *v117; // [rsp+70h] [rbp-90h]
  wchar_t v118[72]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t DstBuf[40]; // [rsp+110h] [rbp+10h] BYREF

  v115 = a3;
  v117 = a7;
  Src = 0LL;
  v9 = 0LL;
  memset(DstBuf, 0, 0x46uLL);
  memset(v118, 0, 0x8CuLL);
  P[0] = 0LL;
  pcbLength = 0LL;
  if ( !a1 || !a2 || !a7 )
  {
    v10 = 87;
LABEL_143:
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    goto LABEL_145;
  }
  if ( a2 < 0x14 )
    return 1336;
  v11 = a1[3];
  LOWORD(v12) = *((_WORD *)a1 + 2);
  if ( !(_DWORD)v11 )
    return 1336;
  ultow_s(a1[2], DstBuf, 0x23uLL, 16);
  v13 = *a1;
  if ( a2 < (unsigned int)v13
    || a2 - (unsigned int)v13 < 4
    || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v13), a2 - (unsigned int)v13, &pcbLength) < 0
    || !(_DWORD)pcbLength )
  {
    return 1336;
  }
  StringForSid = EncodeAttributeName(v14, pcbLength, (__int64 *)&Src);
  v10 = StringForSid;
  if ( !StringForSid )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *((_WORD *)Src + v15) );
    v16 = (unsigned int)(2 * v15);
    Size = v16;
    if ( (unsigned __int64)(2 * v11) <= 0xFFFFFFFF
      && (unsigned int)(2 * v11 + 24) >= 0x18
      && 2 * (int)v11 + 24 + (int)v16 >= (unsigned int)(2 * v11 + 24) )
    {
      v17 = 2 * v11 + 24 + v16;
      v18 = -1LL;
      do
        ++v18;
      while ( DstBuf[v18] );
      v19 = v17 + 2 * v18;
      if ( v19 >= v17 )
      {
        v20 = v19;
        if ( (unsigned __int64)(4 * v11) <= 0xFFFFFFFF )
        {
          if ( a2 - 16 < 4 * (int)v11 )
            goto LABEL_29;
          v12 = (unsigned __int16)v12;
          v105 = (unsigned __int16)v12;
          if ( (unsigned __int16)v12 != 1 )
          {
            switch ( (unsigned __int16)v12 )
            {
              case 2u:
                goto LABEL_70;
              case 3u:
                v38 = 0;
                v39 = a1 + 4;
                while ( 1 )
                {
                  v40 = *v39;
                  v108 = v20;
                  if ( a2 < (unsigned int)v40
                    || a2 - (unsigned int)v40 < 2
                    || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v40), a2 - (unsigned int)v40, &pcbLength) < 0 )
                  {
                    goto LABEL_29;
                  }
                  v42 = -1;
                  v43 = v20 + pcbLength + 4;
                  if ( v43 >= v20 )
                    v42 = v20 + pcbLength + 4;
                  v20 = v42;
                  if ( v43 < v108 )
                    goto LABEL_15;
                  ++v38;
                  v39 = (unsigned int *)(v41 + 4);
                  if ( v38 >= (unsigned int)v11 )
                    goto LABEL_66;
                }
              case 5u:
                v106 = 0;
                v29 = a1 + 4;
                pcbLength = (size_t)(a1 + 4);
                while ( 1 )
                {
                  v30 = *v29;
                  v107 = v20;
                  if ( a2 < (unsigned int)v30 )
                    goto LABEL_29;
                  if ( a2 - (unsigned int)v30 < 4 )
                    goto LABEL_29;
                  v31 = *(unsigned int *)((char *)a1 + v30);
                  v32 = (unsigned int)(v30 + 4);
                  if ( !v31 )
                    goto LABEL_29;
                  v33 = a2 - v32;
                  if ( a2 - (unsigned int)v32 < v31 )
                    goto LABEL_29;
                  if ( v33 < 8 )
                    goto LABEL_29;
                  v34 = (char *)a1 + v32;
                  if ( !v34[1] || v33 - 8 < 4 * (unsigned __int64)(unsigned __int8)v34[1] )
                    goto LABEL_29;
                  StringForSid = LocalGetStringForSid(v34, (wchar_t **)P, v115, 0LL, v104, a6);
                  v10 = StringForSid;
                  if ( StringForSid )
                    goto LABEL_145;
                  v35 = -1LL;
                  do
                    ++v35;
                  while ( *((_WORD *)P[0] + v35) );
                  v36 = v20 + 2 * v35;
                  v37 = -1;
                  if ( v36 >= v20 )
                    v37 = v36;
                  v20 = v37;
                  if ( v36 < v107 )
                    goto LABEL_15;
                  if ( P[0] )
                  {
                    ExFreePoolWithTag(P[0], 0);
                    P[0] = 0LL;
                  }
                  v29 = (unsigned int *)(pcbLength + 4);
                  ++v106;
                  pcbLength += 4LL;
                  if ( v106 >= (unsigned int)v11 )
                    goto LABEL_67;
                }
              case 6u:
LABEL_70:
                v45 = 0;
                v46 = a1 + 4;
                while ( 1 )
                {
                  v47 = *v46;
                  v109 = v20;
                  if ( a2 < (unsigned int)v47 || a2 - (unsigned int)v47 < 8 )
                    break;
                  ui64tow_s(*(_QWORD *)((char *)a1 + v47), v118, 0x46uLL, 10);
                  v48 = -1LL;
                  do
                    ++v48;
                  while ( v118[v48] );
                  v49 = v20 + 2 * v48;
                  v50 = -1;
                  if ( v49 >= v20 )
                    v50 = v49;
                  v20 = v50;
                  if ( v49 < v109 )
                    goto LABEL_15;
                  ++v45;
                  ++v46;
                  if ( v45 >= (unsigned int)v11 )
                    goto LABEL_66;
                }
                break;
              case 0x10u:
                v21 = 0;
                v22 = a1 + 4;
                while ( 1 )
                {
                  v23 = *v22;
                  v24 = v20;
                  if ( a2 < (unsigned int)v23 )
                    break;
                  if ( a2 - (unsigned int)v23 < 4 )
                    break;
                  v25 = *(unsigned int *)((char *)a1 + v23);
                  if ( a2 - (unsigned int)v23 - 4 < v25 )
                    break;
                  v26 = 4LL * v25;
                  if ( v26 > 0xFFFFFFFF )
                    goto LABEL_15;
                  v27 = v20 + v26;
                  v28 = -1;
                  if ( v27 >= v20 )
                    v28 = v27;
                  v20 = v28;
                  if ( v27 < v24 )
                    goto LABEL_15;
                  ++v21;
                  ++v22;
                  if ( v21 >= (unsigned int)v11 )
                    goto LABEL_67;
                }
                break;
            }
LABEL_29:
            v10 = 1336;
            goto LABEL_145;
          }
          v51 = 0;
          v52 = a1 + 4;
          do
          {
            v53 = *v52;
            v110 = v20;
            if ( a2 < (unsigned int)v53 || a2 - (unsigned int)v53 < 8 )
              goto LABEL_29;
            i64tow_s(*(_QWORD *)((char *)a1 + v53), v118, 0x46uLL, 10);
            v54 = -1LL;
            do
              ++v54;
            while ( v118[v54] );
            v55 = v20 + 2 * v54;
            v56 = -1;
            if ( v55 >= v20 )
              v56 = v55;
            v20 = v56;
            if ( v55 < v110 )
              goto LABEL_15;
            ++v51;
            ++v52;
          }
          while ( v51 < (unsigned int)v11 );
LABEL_66:
          v12 = v105;
LABEL_67:
          if ( v20 + 3 >= v20 )
          {
            v44 = SddlpAlloc((v20 + 3) & 0xFFFFFFFC);
            pcbLength = (size_t)v44;
            if ( !v44 )
            {
              v10 = 8;
              goto LABEL_145;
            }
            v57 = (unsigned int)Size;
            v58 = Src;
            *v44 = 40;
            v44[1] = 34;
            v59 = v44 + 2;
            memmove(v44 + 2, v58, (unsigned int)v57);
            v60 = &v59[v57 >> 1];
            *(_DWORD *)v60 = 2883618;
            switch ( v12 )
            {
              case 1:
                v61 = *(_DWORD *)L"TI";
                break;
              case 2:
                v61 = *(_DWORD *)L"TU";
                break;
              case 3:
                v61 = *(_DWORD *)L"TS";
                break;
              case 5:
                v61 = *(_DWORD *)L"TD";
                break;
              case 6:
                v61 = *(_DWORD *)L"TB";
                break;
              case 16:
                v61 = *(_DWORD *)L"TX";
                break;
              default:
LABEL_96:
                v10 = 1336;
LABEL_97:
                v9 = (void *)pcbLength;
                goto LABEL_143;
            }
            *((_DWORD *)v60 + 1) = v61;
            v62 = -1LL;
            v60[4] = 44;
            do
              ++v62;
            while ( DstBuf[v62] );
            *(_DWORD *)(v60 + 5) = 7864368;
            v63 = 2LL * (unsigned int)v62;
            v64 = (char *)(v60 + 7);
            memmove(v64, DstBuf, v63);
            v66 = &v64[v63];
            v67 = v12 - 1;
            if ( !v67 )
            {
              v97 = a1 + 4;
              v98 = v11;
              do
              {
                *(_WORD *)v66 = 44;
                v99 = v66 + 2;
                i64tow_s(*(_QWORD *)((char *)a1 + *v97), v118, 0x46uLL, 10);
                v100 = -1LL;
                do
                  ++v100;
                while ( v118[v100] );
                v101 = 2LL * (unsigned int)v100;
                memmove(v99, v118, v101);
                v66 = &v99[v101];
                ++v97;
                --v98;
              }
              while ( v98 );
              goto LABEL_140;
            }
            v68 = v67 - 1;
            if ( v68 )
            {
              v69 = v68 - 1;
              if ( !v69 )
              {
                v85 = v11;
                v86 = a1 + 4;
                do
                {
                  *(_DWORD *)v66 = 2228268;
                  v87 = v66 + 4;
                  v88 = (_WORD *)((char *)a1 + *v86);
                  v89 = -1LL;
                  do
                    ++v89;
                  while ( v88[v89] );
                  v90 = 2LL * (unsigned int)v89;
                  memmove(v87, v88, v90);
                  v91 = &v87[v90];
                  ++v86;
                  *(_WORD *)v91 = 34;
                  v66 = v91 + 2;
                  --v85;
                }
                while ( v85 );
                goto LABEL_140;
              }
              v70 = v69 - 2;
              if ( !v70 )
              {
                v79 = 0;
                v80 = a1 + 4;
                while ( 1 )
                {
                  v81 = v115;
                  *(_WORD *)v66 = 44;
                  v82 = v66 + 2;
                  v10 = LocalGetStringForSid((char *)a1 + (unsigned int)(*v80 + 4), (wchar_t **)P, v81, v65, v104, a6);
                  if ( v10 )
                    goto LABEL_97;
                  v83 = -1LL;
                  do
                    ++v83;
                  while ( *((_WORD *)P[0] + v83) );
                  v84 = 2LL * (unsigned int)v83;
                  memmove(v82, P[0], v84);
                  v66 = &v82[v84];
                  if ( P[0] )
                  {
                    ExFreePoolWithTag(P[0], 0);
                    P[0] = 0LL;
                  }
                  ++v79;
                  ++v80;
                  if ( v79 >= (unsigned int)v11 )
                    goto LABEL_141;
                }
              }
              v71 = v70 - 1;
              if ( v71 )
              {
                if ( v71 != 10 )
                  goto LABEL_96;
                v72 = a1 + 4;
                v73 = v11;
                do
                {
                  *(_WORD *)v66 = 44;
                  v66 += 2;
                  v74 = *v72;
                  v75 = *(unsigned int *)((char *)a1 + v74);
                  v76 = (unsigned __int8 *)a1 + (unsigned int)(v74 + 4);
                  if ( v75 )
                  {
                    v77 = v75;
                    do
                    {
                      v78 = *v76++;
                      *(_WORD *)v66 = a0123456789abcd[(unsigned __int64)v78 >> 4];
                      *((_WORD *)v66 + 1) = a0123456789abcd[v78 & 0xF];
                      v66 += 4;
                      --v77;
                    }
                    while ( v77 );
                  }
                  ++v72;
                  --v73;
                }
                while ( v73 );
LABEL_141:
                v102 = v117;
                *(_DWORD *)v66 = 41;
                *v102 = pcbLength;
                goto LABEL_145;
              }
            }
            v92 = a1 + 4;
            v93 = v11;
            do
            {
              *(_WORD *)v66 = 44;
              v94 = v66 + 2;
              ui64tow_s(*(_QWORD *)((char *)a1 + *v92), v118, 0x46uLL, 10);
              v95 = -1LL;
              do
                ++v95;
              while ( v118[v95] );
              v96 = 2LL * (unsigned int)v95;
              memmove(v94, v118, v96);
              v66 = &v94[v96];
              ++v92;
              --v93;
            }
            while ( v93 );
LABEL_140:
            v10 = StringForSid;
            goto LABEL_141;
          }
        }
      }
    }
LABEL_15:
    v10 = 534;
  }
LABEL_145:
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  return v10;
}
