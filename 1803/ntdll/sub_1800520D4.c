/*
 * XREFs of sub_1800520D4 @ 0x1800520D4
 * Callers:
 *     sub_1800515C0 @ 0x1800515C0 (sub_1800515C0.c)
 *     sub_1800DE200 @ 0x1800DE200 (sub_1800DE200.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180053118 @ 0x180053118 (sub_180053118.c)
 *     sub_180053460 @ 0x180053460 (sub_180053460.c)
 *     sub_180053E18 @ 0x180053E18 (sub_180053E18.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800DBCC0 @ 0x1800DBCC0 (sub_1800DBCC0.c)
 *     sub_1800DE154 @ 0x1800DE154 (sub_1800DE154.c)
 */

__int64 __fastcall sub_1800520D4(
        __int64 a1,
        char *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        unsigned __int64 *a10,
        _QWORD *a11,
        int a12,
        _WORD *a13)
{
  unsigned __int64 v13; // r15
  __int64 v16; // rdi
  int v17; // r13d
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  int v20; // r8d
  int v21; // r14d
  int v22; // r12d
  int v23; // r11d
  int v24; // ecx
  unsigned __int64 v25; // rbx
  unsigned int *v26; // rsi
  int v27; // eax
  int v28; // ecx
  unsigned __int64 v29; // r10
  int v30; // r13d
  char *v31; // rdx
  char *v32; // rcx
  unsigned int *v33; // r12
  unsigned int *v34; // rax
  int v35; // r15d
  int v36; // r14d
  bool v37; // zf
  __int64 result; // rax
  int v39; // r14d
  int v40; // r8d
  char *Heap; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  char v46; // r15
  __int64 v47; // rax
  unsigned int *v48; // rdi
  int v49; // r8d
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // r13
  int v53; // r10d
  unsigned __int64 v54; // r11
  unsigned __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int64 *v57; // r9
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rdx
  int v61; // r8d
  __int64 v62; // rax
  unsigned int v63; // r10d
  __int64 v64; // rdi
  int v65; // r9d
  __int64 v66; // r14
  __int64 v67; // r15
  __int64 v68; // rax
  int v69; // r9d
  __int64 v70; // r14
  __int64 v71; // rax
  __int64 v72; // r11
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  int v75; // eax
  __int64 v76; // r14
  __int64 v77; // rcx
  unsigned __int64 v78; // rdi
  unsigned __int64 v79; // rdx
  __int64 v80; // rcx
  unsigned int v81; // [rsp+40h] [rbp-188h]
  unsigned int *BaseAddress; // [rsp+48h] [rbp-180h]
  unsigned __int64 v83; // [rsp+50h] [rbp-178h] BYREF
  char v84; // [rsp+58h] [rbp-170h]
  unsigned __int16 v85; // [rsp+5Ch] [rbp-16Ch]
  int v86; // [rsp+60h] [rbp-168h]
  char v87; // [rsp+64h] [rbp-164h]
  int v88; // [rsp+68h] [rbp-160h]
  int v89; // [rsp+6Ch] [rbp-15Ch]
  unsigned int *v90; // [rsp+70h] [rbp-158h]
  int v91; // [rsp+78h] [rbp-150h]
  __int64 v92; // [rsp+80h] [rbp-148h]
  signed __int16 v93; // [rsp+88h] [rbp-140h]
  unsigned __int64 v94; // [rsp+90h] [rbp-138h]
  unsigned __int64 v95; // [rsp+98h] [rbp-130h]
  int v96; // [rsp+A0h] [rbp-128h]
  int v97; // [rsp+A4h] [rbp-124h]
  __int64 v98; // [rsp+A8h] [rbp-120h]
  unsigned __int64 v99; // [rsp+B0h] [rbp-118h]
  int v100; // [rsp+B8h] [rbp-110h]
  unsigned __int64 v101; // [rsp+C0h] [rbp-108h]
  char *v102; // [rsp+C8h] [rbp-100h]
  HANDLE Handle; // [rsp+D0h] [rbp-F8h]
  __int64 v104; // [rsp+D8h] [rbp-F0h]
  __int64 v105; // [rsp+E0h] [rbp-E8h]
  __int64 v106; // [rsp+E8h] [rbp-E0h]
  int v107; // [rsp+F0h] [rbp-D8h]
  __int64 v108; // [rsp+F8h] [rbp-D0h]
  unsigned int *v109; // [rsp+100h] [rbp-C8h]
  unsigned int *v110; // [rsp+108h] [rbp-C0h]
  _QWORD *v111; // [rsp+110h] [rbp-B8h]
  _WORD *v112; // [rsp+118h] [rbp-B0h]
  __int64 v113; // [rsp+120h] [rbp-A8h]
  unsigned __int64 v114; // [rsp+128h] [rbp-A0h]
  unsigned __int64 *v115; // [rsp+130h] [rbp-98h]
  _QWORD v116[2]; // [rsp+138h] [rbp-90h] BYREF
  _QWORD *v117; // [rsp+148h] [rbp-80h]
  int v118; // [rsp+150h] [rbp-78h] BYREF
  const wchar_t *v119; // [rsp+158h] [rbp-70h]
  __int64 v120; // [rsp+160h] [rbp-68h]
  __int64 v121; // [rsp+168h] [rbp-60h]
  _BYTE v122[16]; // [rsp+170h] [rbp-58h] BYREF

  v13 = a4;
  v94 = a4;
  v95 = a3;
  Handle = a2;
  v16 = a1;
  v98 = a1;
  v104 = a5;
  v113 = a6;
  v106 = a7;
  v108 = a9;
  v115 = a10;
  v117 = a11;
  v112 = a13;
  v120 = 0LL;
  v121 = 0LL;
  v93 = 0;
  LOWORD(v17) = 0;
  v92 = 0LL;
  BaseAddress = 0LL;
  v91 = 0;
  v85 = 0;
  LODWORD(v116[0]) = 5636180;
  v116[1] = L"LdrpResSearchResourceInsideDirectory Enter";
  v118 = 5505106;
  v119 = L"LdrpResSearchResourceInsideDirectory Exit";
  if ( RtlGetCurrentServiceSessionId() )
  {
    v18 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
    v91 = v85;
    LOWORD(v17) = v92;
  }
  else
  {
    v18 = 2147353477LL;
  }
  if ( (*(_BYTE *)v18 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v80 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
      v91 = v85;
      LOWORD(v17) = v92;
    }
    else
    {
      v80 = 2147353476LL;
    }
    sub_1800DBCC0(v116, *(unsigned __int8 *)v80);
  }
  if ( !v13 )
    return 3221225485LL;
  if ( !v104 )
    return 3221225485LL;
  v19 = (_QWORD *)v106;
  if ( !v106 )
    return 3221225485LL;
  v20 = a8;
  if ( (unsigned int)(a8 - 1) > 3 )
    return 3221225485LL;
  LOBYTE(v21) = a12;
  v86 = a12;
  if ( (a12 & 0x8000) != 0 && ((unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || !a6) )
    return 3221225485LL;
  v22 = a12 & 0x1000;
  v89 = v22;
  v84 = v22 != 0;
  v23 = a12 & 0x8800;
  v96 = v23;
  if ( (a12 & 0x1000) != 0 && !a3 )
    return 3221225485LL;
  if ( v23 != 34816 )
  {
    if ( v16 )
      goto LABEL_13;
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
LABEL_13:
  v111 = (_QWORD *)v106;
  v24 = a8;
  v97 = a8;
  v25 = v13;
  v26 = 0LL;
  v90 = 0LL;
  v101 = 0LL;
  if ( v112 )
    *v112 = 0;
LABEL_15:
  if ( !v25 )
    goto LABEL_48;
  v27 = v24;
  v28 = v24 - 1;
  v97 = v28;
  v107 = v28;
  if ( !v27 )
    goto LABEL_48;
  v92 = *v19;
  if ( !v28 && v20 == 3 )
  {
    v101 = v25;
    if ( !v108 )
      goto LABEL_180;
    v93 = *(_WORD *)v108;
    v91 = 0;
    v85 = 0;
    if ( (~(_BYTE)v21 & 4) != 0 )
      v92 = *(unsigned __int16 *)(v108 + 4);
  }
  if ( v23 == 34816 )
  {
    result = sub_1800DE154(Handle);
    if ( (int)result < 0 )
      return result;
    v20 = a8;
    v23 = v96;
    if ( v96 == 34816 )
      goto LABEL_177;
  }
  if ( !v22 )
  {
LABEL_177:
    v29 = v95;
  }
  else
  {
    if ( v25 + 24 < v25 )
      goto LABEL_186;
    v83 = v25 + 24;
    v29 = v95;
    if ( v25 + 24 > v95 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
      goto LABEL_185;
  }
  v30 = WORD2(v121);
  if ( v23 != 34816 )
    v30 = *(unsigned __int16 *)(v25 + 12);
  v88 = v30;
  if ( v30 && v22 )
  {
    v105 = 8LL * (unsigned int)v30;
    v45 = (unsigned int)(8 * v30);
    if ( v45 + v25 + 16 < v25 )
      goto LABEL_186;
    v83 = v45 + v25 + 16;
    if ( v83 > v29 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
      goto LABEL_185;
  }
  v31 = (char *)(v25 + 16);
  v105 = v25 + 16;
  v102 = (char *)(v25 + 16);
  if ( (v92 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( v30 )
    {
      if ( v22 )
      {
        if ( &v31[v30] < v31 )
          goto LABEL_186;
        v83 = (unsigned __int64)&v31[v30];
      }
      v31 += 8 * v30;
      v105 = (__int64)v31;
      v102 = v31;
    }
    v30 = HIWORD(v121);
    if ( v23 != 34816 )
      v30 = *(unsigned __int16 *)(v25 + 14);
    v88 = v30;
    if ( v22 )
    {
      v116[0] = 8LL * (unsigned int)v30;
      v32 = &v31[8 * v30];
      if ( v32 < v31 )
        goto LABEL_186;
      v83 = (unsigned __int64)&v31[8 * v30];
      if ( (unsigned __int64)v32 > v29 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
        goto LABEL_185;
    }
  }
  if ( !v30 )
  {
    v99 = 0LL;
    goto LABEL_50;
  }
  if ( v23 != 34816 )
  {
LABEL_34:
    if ( v101 && (v21 & 0x20) != 0 )
    {
      v25 = 0LL;
      v99 = 0LL;
      v26 = (unsigned int *)(v13 + *((unsigned int *)v31 + 1));
      if ( v22 )
      {
        if ( (unsigned __int64)v26 < v13 )
          goto LABEL_186;
        v83 = v13 + *((unsigned int *)v31 + 1);
      }
      v90 = v26;
      v17 = *(_DWORD *)v31;
      v92 = *(unsigned int *)v31;
      v20 = a8;
      goto LABEL_48;
    }
LABEL_35:
    v25 = 0LL;
    v99 = 0LL;
    v33 = (unsigned int *)v31;
    v102 = v31;
    v34 = (unsigned int *)&v31[8 * v30 - 8];
    v110 = v34;
    v88 = v30;
    v35 = v30;
    while ( 1 )
    {
      if ( v33 > v34 )
      {
        v13 = v94;
        v16 = v98;
        v21 = v86;
        goto LABEL_41;
      }
      v36 = v35 >> 1;
      if ( !(v35 >> 1) )
      {
        v21 = v86;
        v16 = v98;
        v37 = v35 == 0;
        v13 = v94;
        if ( !v37 )
        {
          result = sub_180053118(v98, Handle, v95);
          if ( (int)result < 0 )
            return result;
          if ( !v100 )
          {
            v44 = v33[1];
            v22 = v89;
            if ( (int)v44 >= 0 )
            {
              if ( v89 )
              {
                if ( !v101 )
                  goto LABEL_185;
                v26 = (unsigned int *)(v94 + v44);
                if ( v94 + v44 < v94 )
                  goto LABEL_186;
                v83 = v94 + v44;
              }
              else
              {
                v26 = (unsigned int *)(v94 + v44);
              }
              v90 = v26;
            }
            else
            {
              if ( v89 )
              {
                if ( v101 )
                  goto LABEL_185;
                LODWORD(v44) = v44 & 0x7FFFFFFF;
                v25 = v94 + v44;
                if ( v94 + v44 < v94 )
                  goto LABEL_186;
                v83 = v94 + v44;
              }
              else
              {
                v25 = v94 + (v44 & 0xFFFFFFFF7FFFFFFFuLL);
              }
              v99 = v25;
            }
            goto LABEL_42;
          }
        }
LABEL_41:
        v22 = v89;
        goto LABEL_42;
      }
      v109 = v33;
      v46 = v35 & 1;
      v37 = v46 == 0;
      v87 = v46;
      v35 = v36 - 1;
      v47 = v36;
      if ( v37 )
        v47 = v35;
      v48 = &v33[2 * v47];
      v109 = v48;
      result = sub_180053118(v98, Handle, v95);
      if ( (int)result < 0 )
        return result;
      if ( !v100 )
      {
        v62 = v48[1];
        v22 = v89;
        if ( (int)v62 >= 0 )
        {
          v25 = 0LL;
          v99 = 0LL;
          if ( v89 )
          {
            if ( !v101 )
              goto LABEL_185;
            v13 = v94;
            v26 = (unsigned int *)(v94 + v62);
            if ( v94 + v62 < v94 )
              goto LABEL_186;
            v83 = v94 + v62;
          }
          else
          {
            v13 = v94;
            v26 = (unsigned int *)(v94 + v62);
          }
          v90 = v26;
        }
        else
        {
          if ( v89 )
          {
            if ( !v101 )
            {
              LODWORD(v62) = v62 & 0x7FFFFFFF;
              v13 = v94;
              v25 = v94 + v62;
              if ( v94 + v62 >= v94 )
              {
                v83 = v94 + v62;
                goto LABEL_136;
              }
LABEL_186:
              v83 = -1LL;
            }
LABEL_185:
            v81 = -1073741701;
LABEL_52:
            Heap = (char *)BaseAddress;
LABEL_53:
            if ( Heap )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
            if ( RtlGetCurrentServiceSessionId() )
              v42 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
            else
              v42 = 2147353477LL;
            if ( (*(_BYTE *)v42 & 1) != 0 )
            {
              if ( RtlGetCurrentServiceSessionId() )
                v43 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
              else
                v43 = 2147353476LL;
              sub_1800DBCC0(&v118, *(unsigned __int8 *)v43);
            }
            return v81;
          }
          v13 = v94;
          v25 = v94 + (v62 & 0xFFFFFFFF7FFFFFFFuLL);
LABEL_136:
          v99 = v25;
        }
        v16 = v98;
        v21 = v86;
LABEL_42:
        if ( !v101 || v26 )
          goto LABEL_43;
        if ( (v21 & 4) == 0 )
        {
          HIWORD(v49) = HIWORD(v91);
          LOWORD(v49) = v91 + 1;
          v91 = v49;
          v85 = v49;
          if ( (unsigned __int16)v49 < v93 )
          {
            v92 = *(unsigned __int16 *)(v108 + 8LL * (unsigned __int16)v49 + 4);
            v31 = (char *)v105;
            goto LABEL_35;
          }
          if ( !*(_BYTE *)(v108 + 516) )
          {
            v21 |= 0x20u;
            v86 = v21;
            a12 = v21;
            v31 = (char *)v105;
            goto LABEL_34;
          }
LABEL_43:
          v19 = (_QWORD *)(v106 + 8);
          v106 = (__int64)v19;
          v111 = v19;
          v20 = a8;
          LOWORD(v17) = v92;
          v23 = v96;
          v24 = v97;
          goto LABEL_15;
        }
        v20 = a8;
        LOWORD(v17) = v92;
LABEL_48:
        v39 = v21 & 2;
        if ( v26 && !v39 )
        {
          if ( v22
            && ((unsigned __int64)v26 <= v13 || (unsigned __int64)(v26 + 4) > v95 + (v16 & 0xFFFFFFFFFFFFFFFCuLL)) )
          {
            v90 = 0LL;
            goto LABEL_185;
          }
          if ( v112 )
            *v112 = v17;
          v50 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (v16 & 1) == 0 && v96 != 34816 )
          {
            v51 = 0LL;
            v114 = 0LL;
            v52 = v95;
            goto LABEL_100;
          }
          if ( *(_WORD *)(v104 + 24) == 267 )
          {
            v63 = *(_DWORD *)(v104 + 136);
          }
          else if ( *(_WORD *)(v104 + 24) == 523 )
          {
            v63 = *(_DWORD *)(v104 + 152);
          }
          else
          {
            v63 = 0;
          }
          if ( !v63 )
          {
            v90 = 0LL;
            v81 = -1073741687;
            goto LABEL_52;
          }
          v64 = v63;
          if ( v22 )
          {
            if ( v63 + v50 < v50 )
              goto LABEL_186;
            v83 = v63 + v50;
            if ( (int)sub_180053460(v83, v13, &v83) < 0 )
              goto LABEL_185;
          }
          v51 = v50 + v64 - v13;
          v114 = v51;
          v52 = v95;
          v66 = sub_180053E18(v50, v95, v104, v113, v63, v84);
          if ( !v66 )
            goto LABEL_208;
          if ( v96 == 34816 )
          {
            result = sub_1800DE154(Handle);
            if ( (int)result < 0 )
              return result;
            v26 = (unsigned int *)v122;
            v90 = (unsigned int *)v122;
            v65 = v113;
          }
          if ( *v26 <= *(_DWORD *)(v66 + 8) )
          {
LABEL_100:
            v53 = -1073741675;
            goto LABEL_101;
          }
          v67 = *(unsigned int *)(v66 + 12);
          v68 = sub_180053E18(v50, v52, v104, v65, *v26, v84);
          if ( !v68 )
            goto LABEL_208;
          v70 = *(unsigned int *)(v68 + 12);
          v71 = sub_180053E18(v50, v52, v104, v69, *(_DWORD *)(v68 + 12), v84);
          v72 = v71;
          v53 = -1073741675;
          if ( v71 )
          {
            if ( v22 )
            {
              v73 = (unsigned int)v70 - (unsigned __int64)*(unsigned int *)(v71 + 12);
              v74 = v73 + v50;
              if ( v73 + v50 < v50 )
              {
                v83 = -1LL;
                v75 = -1073741675;
                v74 = -1LL;
              }
              else
              {
                v83 = v73 + v50;
                v75 = 0;
              }
              if ( v75 < 0 )
                goto LABEL_185;
              if ( v74 + *(unsigned int *)(v72 + 20) < v74 )
                goto LABEL_186;
              v83 = v74 + *(unsigned int *)(v72 + 20);
            }
            v76 = v50 + *(unsigned int *)(v72 + 20) - (unsigned __int64)*(unsigned int *)(v72 + 12) + v70;
          }
          else
          {
            v76 = 0LL;
          }
          if ( v22
            && ((int)sub_180053460(*(unsigned int *)(v72 + 12), v67, &v83) < 0
             || (int)sub_180053460(v83, v76 - v94, &v83) < 0) )
          {
            goto LABEL_185;
          }
          v77 = *(unsigned int *)(v72 + 12) - v67 - v76;
          v13 = v94;
          v51 += v94 + v77;
          v114 = v51;
LABEL_101:
          if ( v22 )
          {
            if ( (int)sub_180053460(*v26, v51, &v83) < 0 )
              goto LABEL_185;
            v55 = v83;
            if ( v83 >= v13 - v98 && v83 <= v52 )
            {
              if ( (_DWORD)v54 )
              {
                v56 = (unsigned int)v54;
                if ( v54 <= v52 && v83 + v54 <= v52 )
                  goto LABEL_108;
              }
            }
LABEL_208:
            v90 = 0LL;
            goto LABEL_185;
          }
          v55 = 0LL;
          v56 = v26[1];
LABEL_108:
          v57 = v115;
          if ( v115 )
          {
            if ( v22 )
            {
              v58 = v55 + v50;
              if ( v55 + v50 < v50 )
              {
                v83 = -1LL;
                v59 = -1LL;
              }
              else
              {
                v83 = v55 + v50;
                v53 = 0;
                v59 = v55 + v50;
              }
              if ( v53 < 0 || v59 < v50 || v59 > v52 + (v50 & 0xFFFFFFFFFFFFFFFCuLL) )
                goto LABEL_185;
              *v115 = v58;
            }
            else
            {
              *v115 = v50 + *v26 - v51;
            }
          }
          if ( v117 )
          {
            if ( v22 && v57 )
            {
              v60 = *v57 + v56;
              if ( v60 < *v57 )
                goto LABEL_186;
              v83 = *v57 + v56;
              if ( v60 > v50 + v52 )
                goto LABEL_185;
            }
            *v117 = v56;
          }
LABEL_122:
          v81 = 0;
          goto LABEL_52;
        }
        if ( v25 && v39 )
        {
          if ( v22 )
          {
            if ( v25 + 24 < v25 )
            {
              v83 = -1LL;
              v99 = 0LL;
              goto LABEL_185;
            }
            v83 = v25 + 24;
            v78 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
            v79 = v95;
            if ( v25 + 24 > v95 + v78 )
            {
              v99 = 0LL;
              goto LABEL_185;
            }
          }
          else
          {
            v78 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
            v79 = v95;
          }
          if ( v115 )
          {
            if ( v22 && (v25 < v78 || v25 > v78 + v79) )
              goto LABEL_185;
            *v115 = v25;
          }
          goto LABEL_122;
        }
LABEL_50:
        v40 = v20 - v97 - 1;
        if ( !v40 )
        {
          v81 = -1073741686;
          goto LABEL_52;
        }
        v61 = v40 - 1;
        if ( !v61 )
        {
          v81 = -1073741685;
          goto LABEL_52;
        }
        if ( v61 == 1 )
        {
          v81 = -1073741308;
          goto LABEL_52;
        }
LABEL_180:
        v81 = -1073741811;
        goto LABEL_52;
      }
      if ( v100 >= 0 )
        break;
      v34 = v48 - 2;
      v110 = v48 - 2;
      if ( v87 )
      {
        v88 = v36;
LABEL_76:
        v35 = v36;
      }
      else
      {
        v88 = v36 - 1;
      }
    }
    v33 = v48 + 2;
    v102 = (char *)(v48 + 2);
    v88 = v36;
    v34 = v110;
    goto LABEL_76;
  }
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v30 = v88;
  }
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v30);
  BaseAddress = (unsigned int *)Heap;
  if ( !Heap )
  {
    v81 = -1073741801;
    goto LABEL_53;
  }
  v30 = v88;
  result = sub_1800DE154(Handle);
  if ( (int)result >= 0 )
  {
    v31 = Heap;
    v105 = (__int64)Heap;
    v102 = Heap;
    LOBYTE(v21) = a12;
    v86 = a12;
    v91 = v85;
    v106 = (__int64)v111;
    v97 = v107;
    v26 = v90;
    goto LABEL_34;
  }
  return result;
}
