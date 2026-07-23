/*
 * XREFs of sub_18005AD34 @ 0x18005AD34
 * Callers:
 *     sub_18005A0E4 @ 0x18005A0E4 (sub_18005A0E4.c)
 *     sub_1800E2DB0 @ 0x1800E2DB0 (sub_1800E2DB0.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_18005BD90 @ 0x18005BD90 (sub_18005BD90.c)
 *     sub_18005C0E0 @ 0x18005C0E0 (sub_18005C0E0.c)
 *     sub_18005CAB4 @ 0x18005CAB4 (sub_18005CAB4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800E2008 @ 0x1800E2008 (sub_1800E2008.c)
 *     sub_1800E2D04 @ 0x1800E2D04 (sub_1800E2D04.c)
 */

__int64 __fastcall sub_18005AD34(
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
        unsigned __int64 *a11,
        int a12,
        _WORD *a13)
{
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r15
  __int64 v16; // rdi
  __int64 v17; // rcx
  _QWORD *v18; // r9
  int v19; // r8d
  int v20; // r10d
  int v21; // r14d
  int v22; // edx
  int v23; // ecx
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rsi
  __int64 v26; // r12
  int v27; // eax
  int v28; // ecx
  int v29; // edi
  __int64 v30; // r10
  char *v31; // r9
  __int64 v32; // r11
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  char *v35; // rax
  unsigned int *v36; // r12
  unsigned int *v37; // r13
  int v38; // r15d
  bool v39; // zf
  __int64 result; // rax
  int v41; // edx
  int v42; // r8d
  char *Heap; // rbx
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // rax
  char v50; // di
  unsigned int *v51; // r14
  int v52; // edx
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rdi
  unsigned __int64 v55; // r9
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // r10
  unsigned __int64 *v58; // r11
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rax
  bool v63; // cf
  unsigned __int64 v64; // rcx
  __int64 v65; // rax
  unsigned __int64 v66; // rax
  int v67; // r8d
  int v68; // r11d
  unsigned int v69; // r9d
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  int v72; // r9d
  __int64 v73; // r14
  __int64 v74; // r15
  __int64 v75; // rax
  int v76; // r9d
  __int64 v77; // r14
  __int64 v78; // rax
  __int64 v79; // r9
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rdx
  unsigned __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // r10
  __int64 v85; // r10
  unsigned __int64 v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rcx
  int v89; // [rsp+40h] [rbp-188h]
  unsigned int v90; // [rsp+40h] [rbp-188h]
  char *BaseAddress; // [rsp+48h] [rbp-180h]
  char v92; // [rsp+50h] [rbp-178h]
  unsigned __int64 v93; // [rsp+58h] [rbp-170h] BYREF
  unsigned __int16 v94; // [rsp+60h] [rbp-168h]
  int v95; // [rsp+64h] [rbp-164h]
  _BYTE *v96; // [rsp+68h] [rbp-160h]
  int v97; // [rsp+70h] [rbp-158h]
  int v98; // [rsp+74h] [rbp-154h]
  int v99; // [rsp+78h] [rbp-150h]
  int v100; // [rsp+7Ch] [rbp-14Ch]
  __int64 v101; // [rsp+80h] [rbp-148h]
  unsigned __int64 v102; // [rsp+88h] [rbp-140h]
  signed __int16 v103; // [rsp+90h] [rbp-138h]
  __int64 v104; // [rsp+98h] [rbp-130h]
  int v105; // [rsp+A0h] [rbp-128h]
  unsigned __int64 v106; // [rsp+A8h] [rbp-120h]
  unsigned __int64 v107; // [rsp+B0h] [rbp-118h]
  int v108; // [rsp+B8h] [rbp-110h] BYREF
  unsigned __int64 v109; // [rsp+C0h] [rbp-108h]
  char *v110; // [rsp+C8h] [rbp-100h]
  HANDLE Handle; // [rsp+D0h] [rbp-F8h]
  char *v112; // [rsp+D8h] [rbp-F0h]
  __int64 v113; // [rsp+E0h] [rbp-E8h]
  __int64 v114; // [rsp+E8h] [rbp-E0h]
  int v115; // [rsp+F0h] [rbp-D8h]
  __int64 v116; // [rsp+F8h] [rbp-D0h]
  unsigned int *v117; // [rsp+100h] [rbp-C8h]
  _QWORD *v118; // [rsp+108h] [rbp-C0h]
  _WORD *v119; // [rsp+110h] [rbp-B8h]
  __int64 v120; // [rsp+118h] [rbp-B0h]
  unsigned __int64 v121; // [rsp+120h] [rbp-A8h]
  unsigned __int64 *v122; // [rsp+128h] [rbp-A0h]
  _QWORD v123[2]; // [rsp+130h] [rbp-98h] BYREF
  unsigned int *v124; // [rsp+140h] [rbp-88h]
  unsigned __int64 *v125; // [rsp+148h] [rbp-80h]
  int v126; // [rsp+150h] [rbp-78h] BYREF
  const wchar_t *v127; // [rsp+158h] [rbp-70h]
  __int64 v128; // [rsp+160h] [rbp-68h]
  __int64 v129; // [rsp+168h] [rbp-60h]
  _BYTE v130[16]; // [rsp+170h] [rbp-58h] BYREF

  v13 = a4;
  v107 = a4;
  v14 = a3;
  v102 = a3;
  Handle = a2;
  v16 = a1;
  v101 = a1;
  v114 = a5;
  v120 = a6;
  v113 = a7;
  v116 = a9;
  v122 = a10;
  v125 = a11;
  v119 = a13;
  v128 = 0LL;
  v129 = 0LL;
  v103 = 0;
  v104 = 0LL;
  BaseAddress = 0LL;
  v97 = 0;
  v94 = 0;
  LODWORD(v123[0]) = 5636180;
  v123[1] = L"LdrpResSearchResourceInsideDirectory Enter";
  v126 = 5505106;
  v127 = L"LdrpResSearchResourceInsideDirectory Exit";
  if ( RtlGetCurrentServiceSessionId() )
  {
    v17 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
    v97 = v94;
  }
  else
  {
    v17 = 2147353477LL;
  }
  if ( (*(_BYTE *)v17 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v88 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
      v97 = v94;
    }
    else
    {
      v88 = 2147353476LL;
    }
    sub_1800E2008(v123, *(unsigned __int8 *)v88);
  }
  if ( !v13 )
    return 3221225485LL;
  if ( !v114 )
    return 3221225485LL;
  v18 = (_QWORD *)v113;
  if ( !v113 )
    return 3221225485LL;
  v19 = a8;
  if ( (unsigned int)(a8 - 1) > 3 )
    return 3221225485LL;
  LOBYTE(v20) = a12;
  if ( (a12 & 0x8000) != 0 && ((unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || !a6) )
    return 3221225485LL;
  v21 = a12 & 0x1000;
  v100 = v21;
  v92 = v21 != 0;
  v22 = a12 & 0x8800;
  v99 = v22;
  if ( (a12 & 0x1000) != 0 && !v14 )
    return 3221225485LL;
  if ( v22 != 34816 )
  {
    if ( v16 )
      goto LABEL_13;
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
LABEL_13:
  v118 = (_QWORD *)v113;
  v23 = a8;
  v105 = a8;
  v24 = v13;
  v25 = 0LL;
  v96 = 0LL;
  v109 = 0LL;
  if ( v119 )
    *v119 = 0;
  v26 = -1LL;
LABEL_16:
  if ( !v24 )
    goto LABEL_48;
  v27 = v23;
  v28 = v23 - 1;
  v105 = v28;
  v115 = v28;
  if ( !v27 )
    goto LABEL_48;
  v104 = *v18;
  if ( !v28 && v19 == 3 )
  {
    v109 = v24;
    if ( !v116 )
      goto LABEL_194;
    v103 = *(_WORD *)v116;
    v97 = 0;
    v94 = 0;
    if ( (~(_BYTE)v20 & 4) != 0 )
      v104 = *(unsigned __int16 *)(v116 + 4);
  }
  if ( v22 == 34816 )
  {
    result = sub_1800E2D04(Handle);
    v89 = result;
    if ( (int)result < 0 )
      return result;
    v19 = a8;
    v22 = v99;
    if ( v99 == 34816 )
      goto LABEL_202;
  }
  if ( v21 )
  {
    if ( v24 + 24 < v24 )
      goto LABEL_201;
    v93 = v24 + 24;
    if ( v24 + 24 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
      goto LABEL_200;
  }
  if ( v22 == 34816 )
LABEL_202:
    v29 = WORD2(v129);
  else
    v29 = *(unsigned __int16 *)(v24 + 12);
  v98 = v29;
  v95 = v29;
  if ( v29 && v21 )
  {
    v47 = 8LL * (unsigned int)v29;
    v112 = (char *)v47;
    if ( v47 > 0xFFFFFFFF )
      goto LABEL_200;
    v48 = (unsigned int)v47;
    v49 = (unsigned int)v47 + v24 + 16;
    if ( v49 < v24 )
      goto LABEL_201;
    v93 = v49;
    v30 = v101;
    if ( v48 + v24 + 16 > v14 + (v101 & 0xFFFFFFFFFFFFFFFCuLL) )
      goto LABEL_200;
    v22 = v99;
  }
  else
  {
    v30 = v101;
  }
  v31 = (char *)(v24 + 16);
  v112 = (char *)(v24 + 16);
  v110 = (char *)(v24 + 16);
  v32 = v104;
  if ( (v104 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    goto LABEL_35;
  if ( v29 )
  {
    if ( v21 )
    {
      if ( &v31[v29] < v31 )
        goto LABEL_201;
      v93 = (unsigned __int64)&v31[v29];
    }
    v31 += 8 * v29;
    v112 = v31;
    v110 = v31;
  }
  v29 = HIWORD(v129);
  if ( v22 != 34816 )
    v29 = *(unsigned __int16 *)(v24 + 14);
  v98 = v29;
  v95 = v29;
  if ( !v21 )
    goto LABEL_35;
  v33 = 8LL * (unsigned int)v29;
  v123[0] = v33;
  if ( v33 > 0xFFFFFFFF )
    goto LABEL_200;
  v34 = (unsigned int)v33;
  v35 = &v31[(unsigned int)v33];
  if ( v35 < v31 )
  {
LABEL_201:
    v93 = -1LL;
    goto LABEL_200;
  }
  v93 = (unsigned __int64)v35;
  if ( (unsigned __int64)&v31[v34] > v14 + (v30 & 0xFFFFFFFFFFFFFFFCuLL) )
    goto LABEL_200;
LABEL_35:
  if ( !v29 )
  {
    v106 = 0LL;
    goto LABEL_51;
  }
  if ( v99 != 34816 )
    goto LABEL_37;
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v29 = v95;
  }
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v29);
  BaseAddress = Heap;
  if ( !Heap )
  {
    v90 = -1073741801;
    goto LABEL_54;
  }
  v29 = v95;
  v98 = v95;
  result = sub_1800E2D04(Handle);
  v89 = result;
  if ( (int)result >= 0 )
  {
    v31 = Heap;
    v112 = Heap;
    v110 = Heap;
    v97 = v94;
    v113 = (__int64)v118;
    v105 = v115;
    v25 = (unsigned __int64)v96;
    v32 = v104;
LABEL_37:
    v20 = a12;
LABEL_38:
    if ( v109 && (v20 & 0x20) != 0 )
    {
      v24 = 0LL;
      v106 = 0LL;
      if ( v21 )
      {
        v64 = v13 + *((unsigned int *)v31 + 1);
        v25 = -1LL;
        if ( v64 >= v13 )
          v25 = v13 + *((unsigned int *)v31 + 1);
        v93 = v25;
        if ( v64 < v13 )
          goto LABEL_200;
      }
      else
      {
        v25 = v13 + *((unsigned int *)v31 + 1);
      }
      v96 = (_BYTE *)v25;
      v41 = *(_DWORD *)v31;
      v104 = *(unsigned int *)v31;
      v19 = a8;
      v16 = v101;
      goto LABEL_49;
    }
LABEL_39:
    v24 = 0LL;
    v106 = 0LL;
    v36 = (unsigned int *)v31;
    v110 = v31;
    v37 = (unsigned int *)&v31[8 * v29 - 8];
    v124 = v37;
    v95 = v29;
    while ( 1 )
    {
      if ( v36 > v37 )
      {
        v13 = v107;
        goto LABEL_191;
      }
      v38 = v29 >> 1;
      if ( !(v29 >> 1) )
      {
        v13 = v107;
        v14 = v102;
        v39 = v29 == 0;
        v16 = v101;
        if ( v39 )
          goto LABEL_45;
        result = sub_18005BD90(v101, Handle, v102, v32, v107, v36, v20, &v108, v89);
        v89 = result;
        if ( (int)result < 0 )
          return result;
        if ( v108 )
          goto LABEL_45;
        v45 = v36[1];
        if ( (unsigned int)v45 < 0x80000000 )
        {
          if ( !v21 )
          {
            v25 = v45 + v107;
            v96 = (_BYTE *)(v45 + v107);
            goto LABEL_45;
          }
          if ( !v109 )
            goto LABEL_200;
          v26 = -1LL;
          v25 = -1LL;
          if ( v45 + v107 >= v107 )
            v25 = v45 + v107;
          v93 = v25;
          if ( v45 + v107 < v107 )
            goto LABEL_200;
          v96 = (_BYTE *)v25;
        }
        else
        {
          if ( !v21 )
          {
            v24 = v107 + (v45 & 0xFFFFFFFF7FFFFFFFuLL);
            v106 = v24;
            goto LABEL_45;
          }
          if ( v109 )
            goto LABEL_200;
          LODWORD(v45) = v45 & 0x7FFFFFFF;
          v46 = v107 + v45;
          v26 = -1LL;
          v24 = -1LL;
          if ( v46 >= v107 )
            v24 = v46;
          v93 = v24;
          if ( v46 < v107 )
            goto LABEL_200;
          v106 = v24;
        }
        goto LABEL_46;
      }
      v117 = v36;
      v50 = v29 & 1;
      if ( v50 )
        v51 = &v36[2 * v38];
      else
        v51 = &v36[2 * v38 - 2];
      v117 = v51;
      result = sub_18005BD90(v101, Handle, v102, v32, v107, v51, v20, &v108, v89);
      v89 = result;
      if ( (int)result < 0 )
        return result;
      if ( !v108 )
      {
        v65 = v51[1];
        v21 = v100;
        if ( (unsigned int)v65 < 0x80000000 )
        {
          v106 = 0LL;
          if ( !v100 )
          {
            v13 = v107;
            v25 = v65 + v107;
            v96 = (_BYTE *)(v65 + v107);
            goto LABEL_191;
          }
          if ( !v109 )
            goto LABEL_200;
          v13 = v107;
          v26 = -1LL;
          v25 = -1LL;
          if ( v65 + v107 >= v107 )
            v25 = v65 + v107;
          v93 = v25;
          if ( v65 + v107 < v107 )
            goto LABEL_200;
          v96 = (_BYTE *)v25;
LABEL_147:
          v14 = v102;
          v16 = v101;
        }
        else
        {
          if ( v100 )
          {
            if ( !v109 )
            {
              LODWORD(v65) = v65 & 0x7FFFFFFF;
              v13 = v107;
              v66 = v107 + v65;
              v26 = -1LL;
              v24 = -1LL;
              if ( v66 >= v107 )
                v24 = v66;
              v93 = v24;
              if ( v66 >= v107 )
              {
                v106 = v24;
                goto LABEL_147;
              }
            }
LABEL_200:
            v90 = -1073741701;
LABEL_53:
            Heap = BaseAddress;
LABEL_54:
            if ( Heap )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
            if ( RtlGetCurrentServiceSessionId() )
              v44 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
            else
              v44 = 2147353477LL;
            if ( (*(_BYTE *)v44 & 1) != 0 )
            {
              if ( RtlGetCurrentServiceSessionId() )
                v87 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
              else
                v87 = 2147353476LL;
              sub_1800E2008(&v126, *(unsigned __int8 *)v87);
            }
            return v90;
          }
          v13 = v107;
          v24 = v107 + (v65 & 0xFFFFFFFF7FFFFFFFuLL);
          v106 = v24;
LABEL_191:
          v16 = v101;
          v14 = v102;
LABEL_45:
          v26 = -1LL;
        }
LABEL_46:
        v20 = a12;
        if ( !v109 || v25 )
          goto LABEL_47;
        if ( (a12 & 4) == 0 )
        {
          HIWORD(v52) = HIWORD(v97);
          LOWORD(v52) = v97 + 1;
          v97 = v52;
          v94 = v52;
          if ( (unsigned __int16)v52 < v103 )
          {
            v32 = *(unsigned __int16 *)(v116 + 8LL * (unsigned __int16)v52 + 4);
            v104 = v32;
            v29 = v98;
            v31 = v112;
            goto LABEL_39;
          }
          if ( !*(_BYTE *)(v116 + 516) )
          {
            v20 = a12 | 0x20;
            a12 |= 0x20u;
            v29 = v98;
            v31 = v112;
            v32 = v104;
            goto LABEL_38;
          }
LABEL_47:
          v18 = (_QWORD *)(v113 + 8);
          v113 = (__int64)v18;
          v118 = v18;
          v19 = a8;
          v22 = v99;
          v23 = v105;
          goto LABEL_16;
        }
        v19 = a8;
LABEL_48:
        LOWORD(v41) = v104;
LABEL_49:
        if ( v25 && (v20 & 2) == 0 )
        {
          if ( v21 && (v25 <= v13 || v25 + 16 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL)) )
            goto LABEL_223;
          if ( v119 )
            *v119 = v41;
          v53 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (v16 & 1) == 0 && v99 != 34816 )
          {
            v54 = 0LL;
            goto LABEL_103;
          }
          v68 = v114;
          if ( *(_WORD *)(v114 + 24) == 267 )
          {
            v69 = *(_DWORD *)(v114 + 136);
          }
          else if ( *(_WORD *)(v114 + 24) == 523 )
          {
            v69 = *(_DWORD *)(v114 + 152);
          }
          else
          {
            v69 = 0;
          }
          if ( !v69 )
          {
            v96 = 0LL;
            v90 = -1073741687;
            goto LABEL_53;
          }
          if ( v21 )
          {
            v70 = v53 + v69;
            v71 = -1LL;
            if ( v70 >= v53 )
              v71 = v53 + v69;
            v93 = v71;
            if ( v70 < v53 || (int)sub_18005C0E0(v71, v13, &v93) < 0 )
              goto LABEL_200;
          }
          v54 = v53 + v69 - v13;
          v121 = v54;
          v73 = sub_18005CAB4(v53, v14, v68, v120, v69, v92);
          if ( !v73 )
            goto LABEL_223;
          if ( v99 == 34816 )
          {
            result = sub_1800E2D04(Handle);
            if ( (int)result < 0 )
              return result;
            v25 = (unsigned __int64)v130;
            v96 = v130;
            v72 = v120;
          }
          if ( *(_DWORD *)v25 <= *(_DWORD *)(v73 + 8) )
          {
            v21 = v100;
            goto LABEL_104;
          }
          v74 = *(unsigned int *)(v73 + 12);
          v75 = sub_18005CAB4(v53, v102, v114, v72, *(_DWORD *)v25, v92);
          if ( !v75 )
            goto LABEL_223;
          v77 = *(unsigned int *)(v75 + 12);
          v78 = sub_18005CAB4(v53, v102, v114, v76, v77, v92);
          v79 = v78;
          if ( v78 )
          {
            if ( v100 )
            {
              v80 = (unsigned int)v77 - (unsigned __int64)*(unsigned int *)(v78 + 12) + v53;
              v81 = -1LL;
              if ( v80 >= v53 )
                v81 = (unsigned int)v77 - (unsigned __int64)*(unsigned int *)(v78 + 12) + v53;
              v93 = v81;
              if ( v80 < v53 )
                goto LABEL_200;
              v82 = v81 + *(unsigned int *)(v78 + 20);
              v83 = -1LL;
              if ( v82 >= v81 )
                v83 = v82;
              v93 = v83;
              if ( v82 < v81 )
                goto LABEL_200;
            }
            v84 = v77 + v53 + *(unsigned int *)(v79 + 20) - (unsigned __int64)*(unsigned int *)(v79 + 12);
          }
          else
          {
            v84 = 0LL;
          }
          v21 = v100;
          if ( v100
            && ((int)sub_18005C0E0(*(unsigned int *)(v79 + 12), v74, &v93) < 0
             || (int)sub_18005C0E0(v93, v85 - v13, &v93) < 0) )
          {
            goto LABEL_200;
          }
          v54 += v13 + *(unsigned int *)(v79 + 12) - v74 - v84;
LABEL_103:
          v121 = v54;
LABEL_104:
          v55 = *(unsigned int *)(v25 + 4);
          if ( !v21 )
          {
            v56 = 0LL;
            v57 = v102;
            goto LABEL_111;
          }
          if ( (int)sub_18005C0E0(*(unsigned int *)v25, v54, &v93) < 0 )
            goto LABEL_200;
          v56 = v93;
          if ( v93 < v13 - v101
            || (v57 = v102, v93 > v102)
            || !(_DWORD)v55
            || v55 > v102
            || v93 + (unsigned int)v55 > v102 )
          {
LABEL_223:
            v96 = 0LL;
            goto LABEL_200;
          }
LABEL_111:
          v58 = v122;
          if ( v122 )
          {
            if ( v21 )
            {
              v59 = v56 + v53;
              v60 = -1LL;
              if ( v59 >= v53 )
                v60 = v59;
              v93 = v60;
              if ( v59 < v53 || v60 < v53 || v60 > v57 + (v53 & 0xFFFFFFFFFFFFFFFCuLL) )
                goto LABEL_200;
              *v122 = v59;
            }
            else
            {
              *v122 = v53 + *(unsigned int *)v25 - v54;
            }
          }
          if ( v125 )
          {
            if ( v21 && v58 )
            {
              v61 = *v58;
              v62 = *v58 + v55;
              v63 = v62 < *v58;
              if ( v62 >= *v58 )
                v26 = *v58 + v55;
              v93 = v26;
              if ( v63 || v61 + v55 > v57 + v53 )
                goto LABEL_200;
            }
            *v125 = v55;
          }
LABEL_127:
          v90 = 0;
          goto LABEL_53;
        }
        if ( v24 && (v20 & 2) != 0 )
        {
          if ( !v21 )
            goto LABEL_183;
          if ( v24 + 24 < v24 )
          {
            v93 = -1LL;
          }
          else
          {
            v93 = v24 + 24;
            if ( v24 + 24 <= v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
            {
LABEL_183:
              if ( v122 )
              {
                if ( v21 )
                {
                  v86 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( v24 < v86 || v24 > v14 + v86 )
                    goto LABEL_200;
                }
                *v122 = v24;
              }
              goto LABEL_127;
            }
          }
          v106 = 0LL;
          goto LABEL_200;
        }
LABEL_51:
        v42 = v19 - v105 - 1;
        if ( !v42 )
        {
          v90 = -1073741686;
          goto LABEL_53;
        }
        v67 = v42 - 1;
        if ( !v67 )
        {
          v90 = -1073741685;
          goto LABEL_53;
        }
        if ( v67 == 1 )
        {
          v90 = -1073741308;
          goto LABEL_53;
        }
LABEL_194:
        v90 = -1073741811;
        goto LABEL_53;
      }
      if ( v108 >= 0 )
        break;
      v37 = v51 - 2;
      v124 = v51 - 2;
      if ( v50 )
        goto LABEL_82;
      v29 = v38 - 1;
      v95 = v38 - 1;
LABEL_83:
      v21 = v100;
      v32 = v104;
      v20 = a12;
    }
    v36 = v51 + 2;
    v110 = (char *)(v51 + 2);
LABEL_82:
    v95 = v38;
    v29 = v38;
    goto LABEL_83;
  }
  return result;
}
