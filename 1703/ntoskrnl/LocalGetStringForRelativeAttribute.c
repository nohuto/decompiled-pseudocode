/*
 * XREFs of LocalGetStringForRelativeAttribute @ 0x1406FF890
 * Callers:
 *     LocalGetAceCondition @ 0x1406FB8C0 (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14003D760 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _i64tow_s @ 0x14016EEF0 (_i64tow_s.c)
 *     _ui64tow_s @ 0x14016EF80 (_ui64tow_s.c)
 *     _ultow_s @ 0x14016EFA0 (_ultow_s.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x14057FE50 (SddlpAlloc.c)
 *     LocalGetStringForSid @ 0x1406FBB48 (LocalGetStringForSid.c)
 *     EncodeAttributeName @ 0x1406FCABC (EncodeAttributeName.c)
 */

__int64 __fastcall LocalGetStringForRelativeAttribute(
        unsigned int *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  void *v9; // rdi
  unsigned int v10; // esi
  __int64 v11; // r13
  int v12; // r15d
  __int64 v13; // rcx
  unsigned __int16 *v14; // r11
  __int64 v15; // r12
  unsigned int v16; // r12d
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // edi
  unsigned int v23; // r8d
  unsigned int *v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // r10d
  unsigned int v27; // r9d
  unsigned __int64 v28; // rax
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int *v31; // r12
  __int64 v32; // rcx
  unsigned int v33; // edx
  __int64 v34; // rcx
  unsigned int v35; // eax
  _BYTE *v36; // rcx
  __int64 v37; // rax
  unsigned int v38; // edx
  int v39; // eax
  _WORD *v40; // rax
  unsigned int v41; // r15d
  unsigned int *v42; // r11
  __int64 v43; // rcx
  unsigned int v44; // r12d
  __int64 v45; // r11
  int v46; // eax
  unsigned int v47; // ecx
  unsigned int v48; // r12d
  unsigned int *v49; // r15
  __int64 v50; // rcx
  __int64 v51; // rax
  unsigned int v52; // ecx
  int v53; // eax
  unsigned int v54; // r12d
  unsigned int *v55; // r15
  __int64 v56; // rcx
  __int64 v57; // rax
  unsigned int v58; // ecx
  int v59; // eax
  void *v60; // rdx
  _WORD *v61; // rdi
  _WORD *v62; // rdi
  int v63; // eax
  __int64 v64; // rax
  size_t v65; // rbx
  char *v66; // rdi
  __int64 v67; // r9
  char *v68; // rdi
  int v69; // r15d
  int v70; // r15d
  int v71; // r15d
  int v72; // r15d
  int v73; // r15d
  unsigned int *v74; // r8
  __int64 v75; // r12
  __int64 v76; // rcx
  unsigned int v77; // r9d
  unsigned __int8 *v78; // rdx
  __int64 v79; // r10
  unsigned __int64 v80; // rax
  unsigned int v81; // r15d
  _DWORD *v82; // r12
  __int64 v83; // r8
  char *v84; // rdi
  __int64 v85; // rax
  size_t v86; // rbx
  __int64 v87; // r12
  unsigned int *v88; // r15
  __int64 v89; // rax
  char *v90; // rdi
  _WORD *v91; // rdx
  size_t v92; // rbx
  char *v93; // rdi
  unsigned int *v94; // r15
  __int64 v95; // r12
  char *v96; // rdi
  __int64 v97; // rax
  size_t v98; // rbx
  unsigned int *v99; // r15
  __int64 v100; // r12
  char *v101; // rdi
  __int64 v102; // rax
  size_t v103; // rbx
  _QWORD *v104; // rax
  int v106; // [rsp+20h] [rbp-E0h]
  int v107; // [rsp+30h] [rbp-D0h]
  int v108; // [rsp+30h] [rbp-D0h]
  unsigned int v109; // [rsp+38h] [rbp-C8h]
  PVOID v110; // [rsp+38h] [rbp-C8h]
  size_t pcbLength; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int StringForSid; // [rsp+48h] [rbp-B8h]
  PVOID P[2]; // [rsp+50h] [rbp-B0h] BYREF
  void *Src; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v115; // [rsp+68h] [rbp-98h]
  _QWORD *v116; // [rsp+70h] [rbp-90h]
  wchar_t v117[72]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t DstBuf[40]; // [rsp+110h] [rbp+10h] BYREF

  v115 = a3;
  v116 = a7;
  Src = 0LL;
  v9 = 0LL;
  memset(DstBuf, 0, 0x46uLL);
  memset(v117, 0, 0x8CuLL);
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
    v16 = 2 * v15;
    v109 = v16;
    if ( (unsigned __int64)(2 * v11) <= 0xFFFFFFFF )
    {
      v17 = 2 * v11 + 24;
      if ( v17 >= 0x18 )
      {
        v18 = v17 + v16;
        if ( 2 * (_DWORD)v11 + 24 + v16 >= 2 * (int)v11 + 24 )
        {
          v19 = v18;
          v20 = -1LL;
          do
            ++v20;
          while ( DstBuf[v20] );
          v21 = v19 + 2 * v20;
          if ( v21 >= v19 )
          {
            v22 = v21;
            if ( (unsigned __int64)(4 * v11) <= 0xFFFFFFFF )
            {
              if ( a2 - 16 < 4 * (int)v11 )
                goto LABEL_29;
              v12 = (unsigned __int16)v12;
              v107 = (unsigned __int16)v12;
              if ( (unsigned __int16)v12 != 1 )
              {
                switch ( (unsigned __int16)v12 )
                {
                  case 2u:
                    goto LABEL_70;
                  case 3u:
                    v41 = 0;
                    v42 = a1 + 4;
                    while ( 1 )
                    {
                      v43 = *v42;
                      v44 = v22;
                      if ( a2 < (unsigned int)v43
                        || a2 - (unsigned int)v43 < 2
                        || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v43), a2 - (unsigned int)v43, &pcbLength) < 0 )
                      {
                        goto LABEL_29;
                      }
                      v46 = -1;
                      v47 = v22 + pcbLength + 4;
                      if ( v47 >= v22 )
                        v46 = v22 + pcbLength + 4;
                      v22 = v46;
                      if ( v47 < v44 )
                        goto LABEL_15;
                      ++v41;
                      v42 = (unsigned int *)(v45 + 4);
                      if ( v41 >= (unsigned int)v11 )
                      {
                        v12 = v107;
                        goto LABEL_57;
                      }
                    }
                  case 5u:
                    v108 = 0;
                    v31 = a1 + 4;
                    while ( 1 )
                    {
                      v32 = *v31;
                      LODWORD(pcbLength) = v22;
                      if ( a2 < (unsigned int)v32 )
                        goto LABEL_29;
                      if ( a2 - (unsigned int)v32 < 4 )
                        goto LABEL_29;
                      v33 = *(unsigned int *)((char *)a1 + v32);
                      v34 = (unsigned int)(v32 + 4);
                      if ( !v33 )
                        goto LABEL_29;
                      v35 = a2 - v34;
                      if ( a2 - (unsigned int)v34 < v33 )
                        goto LABEL_29;
                      if ( v35 < 8 )
                        goto LABEL_29;
                      v36 = (char *)a1 + v34;
                      if ( !v36[1] || v35 - 8 < 4 * (unsigned __int64)(unsigned __int8)v36[1] )
                        goto LABEL_29;
                      StringForSid = LocalGetStringForSid(v36, (wchar_t **)P, v115, 0LL, v106, a6);
                      v10 = StringForSid;
                      if ( StringForSid )
                        goto LABEL_145;
                      v37 = -1LL;
                      do
                        ++v37;
                      while ( *((_WORD *)P[0] + v37) );
                      v38 = v22 + 2 * v37;
                      v39 = -1;
                      if ( v38 >= v22 )
                        v39 = v38;
                      v22 = v39;
                      if ( v38 < (unsigned int)pcbLength )
                        goto LABEL_15;
                      if ( P[0] )
                      {
                        ExFreePoolWithTag(P[0], 0);
                        P[0] = 0LL;
                      }
                      ++v31;
                      if ( ++v108 >= (unsigned int)v11 )
                        goto LABEL_57;
                    }
                  case 6u:
LABEL_70:
                    v48 = 0;
                    v49 = a1 + 4;
                    while ( 1 )
                    {
                      v50 = *v49;
                      LODWORD(pcbLength) = v22;
                      if ( a2 < (unsigned int)v50 || a2 - (unsigned int)v50 < 8 )
                        break;
                      ui64tow_s(*(_QWORD *)((char *)a1 + v50), v117, 0x46uLL, 10);
                      v51 = -1LL;
                      do
                        ++v51;
                      while ( v117[v51] );
                      v52 = v22 + 2 * v51;
                      v53 = -1;
                      if ( v52 >= v22 )
                        v53 = v52;
                      v22 = v53;
                      if ( v52 < (unsigned int)pcbLength )
                        goto LABEL_15;
                      ++v48;
                      ++v49;
                      if ( v48 >= (unsigned int)v11 )
                        goto LABEL_79;
                    }
                    break;
                  case 0x10u:
                    v23 = 0;
                    v24 = a1 + 4;
                    while ( 1 )
                    {
                      v25 = *v24;
                      v26 = v22;
                      if ( a2 < (unsigned int)v25 )
                        break;
                      if ( a2 - (unsigned int)v25 < 4 )
                        break;
                      v27 = *(unsigned int *)((char *)a1 + v25);
                      if ( a2 - (unsigned int)v25 - 4 < v27 )
                        break;
                      v28 = 4LL * v27;
                      if ( v28 > 0xFFFFFFFF )
                        goto LABEL_15;
                      v29 = v28 + v22;
                      v30 = -1;
                      if ( v29 >= v22 )
                        v30 = v29;
                      v22 = v30;
                      if ( v29 < v26 )
                        goto LABEL_15;
                      ++v23;
                      ++v24;
                      if ( v23 >= (unsigned int)v11 )
                        goto LABEL_58;
                    }
                    break;
                }
LABEL_29:
                v10 = 1336;
                goto LABEL_145;
              }
              v54 = 0;
              v55 = a1 + 4;
              do
              {
                v56 = *v55;
                LODWORD(pcbLength) = v22;
                if ( a2 < (unsigned int)v56 || a2 - (unsigned int)v56 < 8 )
                  goto LABEL_29;
                i64tow_s(*(_QWORD *)((char *)a1 + v56), v117, 0x46uLL, 10);
                v57 = -1LL;
                do
                  ++v57;
                while ( v117[v57] );
                v58 = v22 + 2 * v57;
                v59 = -1;
                if ( v58 >= v22 )
                  v59 = v58;
                v22 = v59;
                if ( v58 < (unsigned int)pcbLength )
                  goto LABEL_15;
                ++v54;
                ++v55;
              }
              while ( v54 < (unsigned int)v11 );
LABEL_79:
              v12 = v107;
LABEL_57:
              v16 = v109;
LABEL_58:
              if ( v22 + 3 >= v22 )
              {
                v40 = SddlpAlloc((v22 + 3) & 0xFFFFFFFC);
                v110 = v40;
                if ( !v40 )
                {
                  v10 = 8;
                  goto LABEL_145;
                }
                v60 = Src;
                *v40 = 40;
                v40[1] = 34;
                v61 = v40 + 2;
                memmove(v40 + 2, v60, v16);
                v62 = &v61[(unsigned __int64)v16 >> 1];
                *(_DWORD *)v62 = 2883618;
                switch ( v12 )
                {
                  case 1:
                    v63 = *(_DWORD *)L"TI";
                    break;
                  case 2:
                    v63 = *(_DWORD *)L"TU";
                    break;
                  case 3:
                    v63 = *(_DWORD *)L"TS";
                    break;
                  case 5:
                    v63 = *(_DWORD *)L"TD";
                    break;
                  case 6:
                    v63 = *(_DWORD *)L"TB";
                    break;
                  case 16:
                    v63 = *(_DWORD *)L"TX";
                    break;
                  default:
LABEL_96:
                    v10 = 1336;
LABEL_97:
                    v9 = v110;
                    goto LABEL_143;
                }
                *((_DWORD *)v62 + 1) = v63;
                v64 = -1LL;
                v62[4] = 44;
                do
                  ++v64;
                while ( DstBuf[v64] );
                *(_DWORD *)(v62 + 5) = 7864368;
                v65 = 2LL * (unsigned int)v64;
                v66 = (char *)(v62 + 7);
                memmove(v66, DstBuf, v65);
                v68 = &v66[v65];
                v69 = v12 - 1;
                if ( !v69 )
                {
                  v99 = a1 + 4;
                  v100 = v11;
                  do
                  {
                    *(_WORD *)v68 = 44;
                    v101 = v68 + 2;
                    i64tow_s(*(_QWORD *)((char *)a1 + *v99), v117, 0x46uLL, 10);
                    v102 = -1LL;
                    do
                      ++v102;
                    while ( v117[v102] );
                    v103 = 2LL * (unsigned int)v102;
                    memmove(v101, v117, v103);
                    v68 = &v101[v103];
                    ++v99;
                    --v100;
                  }
                  while ( v100 );
                  goto LABEL_140;
                }
                v70 = v69 - 1;
                if ( v70 )
                {
                  v71 = v70 - 1;
                  if ( !v71 )
                  {
                    v87 = v11;
                    v88 = a1 + 4;
                    do
                    {
                      *(_DWORD *)v68 = 2228268;
                      v89 = -1LL;
                      v90 = v68 + 4;
                      v91 = (_WORD *)((char *)a1 + *v88);
                      do
                        ++v89;
                      while ( v91[v89] );
                      v92 = 2LL * (unsigned int)v89;
                      memmove(v90, v91, v92);
                      v93 = &v90[v92];
                      ++v88;
                      *(_WORD *)v93 = 34;
                      v68 = v93 + 2;
                      --v87;
                    }
                    while ( v87 );
                    goto LABEL_140;
                  }
                  v72 = v71 - 2;
                  if ( !v72 )
                  {
                    v81 = 0;
                    v82 = a1 + 4;
                    while ( 1 )
                    {
                      v83 = v115;
                      *(_WORD *)v68 = 44;
                      v84 = v68 + 2;
                      v10 = LocalGetStringForSid(
                              (char *)a1 + (unsigned int)(*v82 + 4),
                              (wchar_t **)P,
                              v83,
                              v67,
                              v106,
                              a6);
                      if ( v10 )
                        goto LABEL_97;
                      v85 = -1LL;
                      do
                        ++v85;
                      while ( *((_WORD *)P[0] + v85) );
                      v86 = 2LL * (unsigned int)v85;
                      memmove(v84, P[0], v86);
                      v68 = &v84[v86];
                      if ( P[0] )
                      {
                        ExFreePoolWithTag(P[0], 0);
                        P[0] = 0LL;
                      }
                      ++v81;
                      ++v82;
                      if ( v81 >= (unsigned int)v11 )
                        goto LABEL_141;
                    }
                  }
                  v73 = v72 - 1;
                  if ( v73 )
                  {
                    if ( v73 != 10 )
                      goto LABEL_96;
                    v74 = a1 + 4;
                    v75 = v11;
                    do
                    {
                      *(_WORD *)v68 = 44;
                      v68 += 2;
                      v76 = *v74;
                      v77 = *(unsigned int *)((char *)a1 + v76);
                      v78 = (unsigned __int8 *)a1 + (unsigned int)(v76 + 4);
                      if ( v77 )
                      {
                        v79 = v77;
                        do
                        {
                          v80 = *v78++;
                          *(_WORD *)v68 = a0123456789abcd[v80 >> 4];
                          *((_WORD *)v68 + 1) = a0123456789abcd[v80 & 0xF];
                          v68 += 4;
                          --v79;
                        }
                        while ( v79 );
                      }
                      ++v74;
                      --v75;
                    }
                    while ( v75 );
LABEL_141:
                    v104 = v116;
                    *(_DWORD *)v68 = 41;
                    *v104 = v110;
                    goto LABEL_145;
                  }
                }
                v94 = a1 + 4;
                v95 = v11;
                do
                {
                  *(_WORD *)v68 = 44;
                  v96 = v68 + 2;
                  ui64tow_s(*(_QWORD *)((char *)a1 + *v94), v117, 0x46uLL, 10);
                  v97 = -1LL;
                  do
                    ++v97;
                  while ( v117[v97] );
                  v98 = 2LL * (unsigned int)v97;
                  memmove(v96, v117, v98);
                  v68 = &v96[v98];
                  ++v94;
                  --v95;
                }
                while ( v95 );
LABEL_140:
                v10 = StringForSid;
                goto LABEL_141;
              }
            }
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
