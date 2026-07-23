/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x18001E394
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x18001D76C (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E3210 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     LdrpSectionTableFromVirtualAddress @ 0x18001C270 (LdrpSectionTableFromVirtualAddress.c)
 *     LdrpResCompareResourceNames @ 0x18001F3D4 (LdrpResCompareResourceNames.c)
 *     RtlULongLongSub @ 0x18001F720 (RtlULongLongSub.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0D64 (LdrpTraceLoadMUIDll.c)
 *     LdrpResReadFile @ 0x1800E3164 (LdrpResReadFile.c)
 */

__int64 __fastcall LdrpResSearchResourceInsideDirectory(
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
  __int64 v14; // r15
  __int64 v16; // rdi
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  int v19; // r8d
  int v20; // r11d
  int v21; // r14d
  int v22; // r9d
  int v23; // ecx
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rsi
  __int64 v26; // r12
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  char *v30; // r9
  __int64 v31; // r10
  int v32; // r11d
  unsigned __int64 v33; // rax
  char *v34; // rcx
  unsigned int *v35; // r12
  unsigned int *v36; // r13
  int v37; // edi
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
  int v52; // r8d
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rdi
  unsigned __int64 v55; // r9
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // r8
  unsigned __int64 *v58; // r10
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rdx
  bool v62; // cf
  int v63; // r8d
  unsigned __int64 v64; // rcx
  __int64 v65; // rax
  unsigned __int64 v66; // rax
  __int64 v67; // r10
  unsigned int v68; // r9d
  unsigned __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // r9
  __int64 v72; // r14
  __int64 v73; // r15
  __int64 v74; // rax
  __int64 v75; // r9
  __int64 v76; // r14
  __int64 v77; // rax
  __int64 v78; // r9
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // r10
  __int64 v84; // r10
  unsigned __int64 v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rcx
  int v88; // [rsp+40h] [rbp-188h]
  unsigned int v89; // [rsp+40h] [rbp-188h]
  char *BaseAddress; // [rsp+48h] [rbp-180h]
  char v91; // [rsp+50h] [rbp-178h]
  unsigned __int64 v92; // [rsp+58h] [rbp-170h] BYREF
  unsigned __int16 v93; // [rsp+60h] [rbp-168h]
  int v94; // [rsp+64h] [rbp-164h]
  int v95; // [rsp+68h] [rbp-160h]
  int v96; // [rsp+6Ch] [rbp-15Ch]
  _BYTE *v97; // [rsp+70h] [rbp-158h]
  int v98; // [rsp+78h] [rbp-150h]
  int v99; // [rsp+7Ch] [rbp-14Ch]
  unsigned __int64 v100; // [rsp+80h] [rbp-148h]
  signed __int16 v101; // [rsp+88h] [rbp-140h]
  __int64 v102; // [rsp+90h] [rbp-138h]
  int v103; // [rsp+98h] [rbp-130h]
  __int64 v104; // [rsp+A0h] [rbp-128h]
  unsigned __int64 v105; // [rsp+A8h] [rbp-120h]
  unsigned __int64 v106; // [rsp+B0h] [rbp-118h]
  int v107; // [rsp+B8h] [rbp-110h] BYREF
  unsigned __int64 v108; // [rsp+C0h] [rbp-108h]
  char *v109; // [rsp+C8h] [rbp-100h]
  HANDLE Handle; // [rsp+D0h] [rbp-F8h]
  char *v111; // [rsp+D8h] [rbp-F0h]
  __int64 v112; // [rsp+E0h] [rbp-E8h]
  __int64 v113; // [rsp+E8h] [rbp-E0h]
  int v114; // [rsp+F0h] [rbp-D8h]
  __int64 v115; // [rsp+F8h] [rbp-D0h]
  unsigned int *v116; // [rsp+100h] [rbp-C8h]
  _QWORD *v117; // [rsp+108h] [rbp-C0h]
  _WORD *v118; // [rsp+110h] [rbp-B8h]
  __int64 v119; // [rsp+118h] [rbp-B0h]
  unsigned __int64 v120; // [rsp+120h] [rbp-A8h]
  unsigned __int64 *v121; // [rsp+128h] [rbp-A0h]
  _QWORD v122[2]; // [rsp+130h] [rbp-98h] BYREF
  unsigned int *v123; // [rsp+140h] [rbp-88h]
  unsigned __int64 *v124; // [rsp+148h] [rbp-80h]
  int v125; // [rsp+150h] [rbp-78h] BYREF
  const wchar_t *v126; // [rsp+158h] [rbp-70h]
  __int64 v127; // [rsp+160h] [rbp-68h]
  __int64 v128; // [rsp+168h] [rbp-60h]
  _BYTE v129[16]; // [rsp+170h] [rbp-58h] BYREF

  v13 = a4;
  v106 = a4;
  v14 = a3;
  v100 = a3;
  Handle = a2;
  v16 = a1;
  v104 = a1;
  v113 = a5;
  v119 = a6;
  v112 = a7;
  v115 = a9;
  v121 = a10;
  v124 = a11;
  v118 = a13;
  v127 = 0LL;
  v128 = 0LL;
  v101 = 0;
  v102 = 0LL;
  BaseAddress = 0LL;
  v98 = 0;
  v93 = 0;
  LODWORD(v122[0]) = 5636180;
  v122[1] = L"LdrpResSearchResourceInsideDirectory Enter";
  v125 = 5505106;
  v126 = L"LdrpResSearchResourceInsideDirectory Exit";
  if ( RtlGetCurrentServiceSessionId() )
  {
    v17 = (__int64)NtCurrentPeb()->SharedData + 555;
    v98 = v93;
  }
  else
  {
    v17 = 2147353477LL;
  }
  if ( (*(_BYTE *)v17 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v87 = (__int64)NtCurrentPeb()->SharedData + 554;
      v98 = v93;
    }
    else
    {
      v87 = 2147353476LL;
    }
    LdrpTraceLoadMUIDll(v122, *(unsigned __int8 *)v87);
  }
  if ( !v13 )
    return 3221225485LL;
  if ( !v113 )
    return 3221225485LL;
  v18 = (_QWORD *)v112;
  if ( !v112 )
    return 3221225485LL;
  v19 = a8;
  if ( (unsigned int)(a8 - 1) > 3 )
    return 3221225485LL;
  LOBYTE(v20) = a12;
  if ( (a12 & 0x8000) != 0 && ((unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || !a6) )
    return 3221225485LL;
  v21 = a12 & 0x1000;
  v99 = v21;
  v91 = v21 != 0;
  v22 = a12 & 0x8800;
  v96 = v22;
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
  v117 = (_QWORD *)v112;
  v23 = a8;
  v103 = a8;
  v24 = v13;
  v25 = 0LL;
  v97 = 0LL;
  v108 = 0LL;
  if ( v118 )
    *v118 = 0;
  v26 = -1LL;
LABEL_16:
  if ( !v24 )
    goto LABEL_47;
  v27 = v23;
  v28 = v23 - 1;
  v103 = v28;
  v114 = v28;
  if ( !v27 )
    goto LABEL_47;
  v102 = *v18;
  if ( !v28 && v19 == 3 )
  {
    v108 = v24;
    if ( !v115 )
      goto LABEL_200;
    v101 = *(_WORD *)v115;
    v98 = 0;
    v93 = 0;
    if ( (~(_BYTE)v20 & 4) != 0 )
      v102 = *(unsigned __int16 *)(v115 + 4);
  }
  if ( v22 == 34816 )
  {
    result = LdrpResReadFile(Handle);
    v88 = result;
    if ( (int)result < 0 )
      return result;
    v19 = a8;
    v22 = v96;
    if ( v96 == 34816 )
      goto LABEL_208;
  }
  if ( v21 )
  {
    if ( v24 + 24 < v24 )
      goto LABEL_207;
    v92 = v24 + 24;
    if ( v24 + 24 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
      goto LABEL_206;
  }
  if ( v22 == 34816 )
LABEL_208:
    v29 = WORD2(v128);
  else
    v29 = *(unsigned __int16 *)(v24 + 12);
  v94 = v29;
  v95 = v29;
  if ( v29 && v21 )
  {
    v47 = 8LL * (unsigned int)v29;
    v111 = (char *)v47;
    if ( v47 > 0xFFFFFFFF )
      goto LABEL_206;
    v48 = (unsigned int)v47;
    v49 = (unsigned int)v47 + v24 + 16;
    if ( v49 < v24 )
      goto LABEL_207;
    v92 = v49;
    if ( v48 + v24 + 16 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
      goto LABEL_206;
    v29 = v94;
  }
  v30 = (char *)(v24 + 16);
  v111 = (char *)(v24 + 16);
  v109 = (char *)(v24 + 16);
  v31 = v102;
  if ( (v102 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v32 = v96;
    goto LABEL_34;
  }
  if ( v29 )
  {
    if ( v21 )
    {
      if ( &v30[v29] < v30 )
        goto LABEL_207;
      v92 = (unsigned __int64)&v30[v29];
    }
    v30 += 8 * v29;
    v111 = v30;
    v109 = v30;
  }
  v32 = v96;
  v29 = HIWORD(v128);
  if ( v96 != 34816 )
    v29 = *(unsigned __int16 *)(v24 + 14);
  v94 = v29;
  v95 = v29;
  if ( !v21 )
    goto LABEL_34;
  v33 = 8LL * (unsigned int)v29;
  v122[0] = v33;
  if ( v33 > 0xFFFFFFFF )
    goto LABEL_206;
  v34 = &v30[(unsigned int)v33];
  if ( v34 < v30 )
  {
LABEL_207:
    v92 = -1LL;
    goto LABEL_206;
  }
  v92 = (unsigned __int64)&v30[(unsigned int)v33];
  if ( (unsigned __int64)v34 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
    goto LABEL_206;
LABEL_34:
  if ( !v29 )
  {
    v105 = 0LL;
    goto LABEL_50;
  }
  if ( v32 != 34816 )
    goto LABEL_36;
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v29 = v95;
  }
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v29);
  BaseAddress = Heap;
  if ( !Heap )
  {
    v89 = -1073741801;
    goto LABEL_53;
  }
  v94 = v95;
  result = LdrpResReadFile(Handle);
  v88 = result;
  if ( (int)result >= 0 )
  {
    v30 = Heap;
    v111 = Heap;
    v109 = Heap;
    v98 = v93;
    v112 = (__int64)v117;
    v103 = v114;
    v25 = (unsigned __int64)v97;
    v29 = v94;
    v31 = v102;
LABEL_36:
    v20 = a12;
LABEL_37:
    if ( v108 && (v20 & 0x20) != 0 )
    {
      v24 = 0LL;
      v105 = 0LL;
      if ( v21 )
      {
        v64 = v13 + *((unsigned int *)v30 + 1);
        v25 = -1LL;
        if ( v64 >= v13 )
          v25 = v13 + *((unsigned int *)v30 + 1);
        v92 = v25;
        if ( v64 < v13 )
          goto LABEL_206;
      }
      else
      {
        v25 = v13 + *((unsigned int *)v30 + 1);
      }
      v97 = (_BYTE *)v25;
      v41 = *(_DWORD *)v30;
      v102 = *(unsigned int *)v30;
      v19 = a8;
      v22 = v96;
      goto LABEL_48;
    }
LABEL_38:
    v24 = 0LL;
    v105 = 0LL;
    v35 = (unsigned int *)v30;
    v109 = v30;
    v36 = (unsigned int *)&v30[8 * v29 - 8];
    v123 = v36;
    v37 = v29;
    v95 = v29;
    while ( 1 )
    {
      if ( v35 > v36 )
      {
        v13 = v106;
        goto LABEL_189;
      }
      v38 = v37 >> 1;
      if ( !(v37 >> 1) )
      {
        v13 = v106;
        v14 = v100;
        v39 = v37 == 0;
        v16 = v104;
        if ( v39 )
          goto LABEL_44;
        result = LdrpResCompareResourceNames(v104, Handle, v100, v31, v106, v35, v20, &v107, v88);
        v88 = result;
        if ( (int)result < 0 )
          return result;
        if ( v107 )
          goto LABEL_44;
        v45 = v35[1];
        if ( (int)v45 >= 0 )
        {
          if ( !v21 )
          {
            v25 = v45 + v106;
            v97 = (_BYTE *)(v45 + v106);
            goto LABEL_44;
          }
          if ( !v108 )
            goto LABEL_206;
          v26 = -1LL;
          v25 = -1LL;
          if ( v45 + v106 >= v106 )
            v25 = v45 + v106;
          v92 = v25;
          if ( v45 + v106 < v106 )
            goto LABEL_206;
          v97 = (_BYTE *)v25;
        }
        else
        {
          if ( !v21 )
          {
            v24 = v106 + (v45 & 0xFFFFFFFF7FFFFFFFuLL);
            v105 = v24;
            goto LABEL_44;
          }
          if ( v108 )
            goto LABEL_206;
          LODWORD(v45) = v45 & 0x7FFFFFFF;
          v46 = v106 + v45;
          v26 = -1LL;
          v24 = -1LL;
          if ( v46 >= v106 )
            v24 = v46;
          v92 = v24;
          if ( v46 < v106 )
            goto LABEL_206;
          v105 = v24;
        }
        goto LABEL_45;
      }
      v116 = v35;
      v50 = v37 & 1;
      if ( v50 )
        v51 = &v35[2 * v38];
      else
        v51 = &v35[2 * v38 - 2];
      v116 = v51;
      result = LdrpResCompareResourceNames(v104, Handle, v100, v31, v106, v51, v20, &v107, v88);
      v88 = result;
      if ( (int)result < 0 )
        return result;
      if ( !v107 )
      {
        v65 = v51[1];
        v21 = v99;
        if ( (int)v65 >= 0 )
        {
          v105 = 0LL;
          if ( !v99 )
          {
            v13 = v106;
            v25 = v65 + v106;
            v97 = (_BYTE *)(v65 + v106);
            goto LABEL_189;
          }
          if ( !v108 )
            goto LABEL_206;
          v13 = v106;
          v26 = -1LL;
          v25 = -1LL;
          if ( v65 + v106 >= v106 )
            v25 = v65 + v106;
          v92 = v25;
          if ( v65 + v106 < v106 )
            goto LABEL_206;
          v97 = (_BYTE *)v25;
LABEL_150:
          v14 = v100;
          v16 = v104;
        }
        else
        {
          if ( v99 )
          {
            if ( !v108 )
            {
              LODWORD(v65) = v65 & 0x7FFFFFFF;
              v13 = v106;
              v66 = v106 + v65;
              v26 = -1LL;
              v24 = -1LL;
              if ( v66 >= v106 )
                v24 = v66;
              v92 = v24;
              if ( v66 >= v106 )
              {
                v105 = v24;
                goto LABEL_150;
              }
            }
LABEL_206:
            v89 = -1073741701;
LABEL_52:
            Heap = BaseAddress;
LABEL_53:
            if ( Heap )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
            if ( RtlGetCurrentServiceSessionId() )
              v44 = (__int64)NtCurrentPeb()->SharedData + 555;
            else
              v44 = 2147353477LL;
            if ( (*(_BYTE *)v44 & 1) != 0 )
            {
              if ( RtlGetCurrentServiceSessionId() )
                v86 = (__int64)NtCurrentPeb()->SharedData + 554;
              else
                v86 = 2147353476LL;
              LdrpTraceLoadMUIDll(&v125, *(unsigned __int8 *)v86);
            }
            return v89;
          }
          v13 = v106;
          v24 = v106 + (v65 & 0xFFFFFFFF7FFFFFFFuLL);
          v105 = v24;
LABEL_189:
          v16 = v104;
          v14 = v100;
LABEL_44:
          v26 = -1LL;
        }
LABEL_45:
        v20 = a12;
        if ( !v108 || v25 )
          goto LABEL_46;
        if ( (a12 & 4) == 0 )
        {
          HIWORD(v52) = HIWORD(v98);
          LOWORD(v52) = v98 + 1;
          v98 = v52;
          v93 = v52;
          if ( (unsigned __int16)v52 < v101 )
          {
            v31 = *(unsigned __int16 *)(v115 + 8LL * (unsigned __int16)v52 + 4);
            v102 = v31;
            v29 = v94;
            v30 = v111;
            goto LABEL_38;
          }
          if ( !*(_BYTE *)(v115 + 516) )
          {
            v20 = a12 | 0x20;
            a12 |= 0x20u;
            v29 = v94;
            v30 = v111;
            v31 = v102;
            goto LABEL_37;
          }
LABEL_46:
          v18 = (_QWORD *)(v112 + 8);
          v112 = (__int64)v18;
          v117 = v18;
          v19 = a8;
          v22 = v96;
          v23 = v103;
          goto LABEL_16;
        }
        v19 = a8;
        v22 = v96;
LABEL_47:
        LOWORD(v41) = v102;
LABEL_48:
        if ( v25 && (v20 & 2) == 0 )
        {
          if ( v21 && (v25 <= v13 || v25 + 16 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL)) )
            goto LABEL_223;
          if ( v118 )
            *v118 = v41;
          v53 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (v16 & 1) == 0 && v22 != 34816 )
          {
            v54 = 0LL;
            goto LABEL_102;
          }
          v67 = v113;
          if ( *(_WORD *)(v113 + 24) == 267 )
          {
            v68 = *(_DWORD *)(v113 + 136);
          }
          else if ( *(_WORD *)(v113 + 24) == 523 )
          {
            v68 = *(_DWORD *)(v113 + 152);
          }
          else
          {
            v68 = 0;
          }
          if ( !v68 )
          {
            v97 = 0LL;
            v89 = -1073741687;
            goto LABEL_52;
          }
          if ( v21 )
          {
            v69 = v53 + v68;
            v70 = -1LL;
            if ( v69 >= v53 )
              v70 = v53 + v68;
            v92 = v70;
            if ( v69 < v53 || (int)RtlULongLongSub(v70, v13, &v92) < 0 )
              goto LABEL_206;
          }
          v54 = v53 + v68 - v13;
          v120 = v54;
          v72 = LdrpSectionTableFromVirtualAddress(v53, v14, v67, v119, v68, v91);
          if ( !v72 )
            goto LABEL_223;
          if ( v96 == 34816 )
          {
            result = LdrpResReadFile(Handle);
            if ( (int)result < 0 )
              return result;
            v25 = (unsigned __int64)v129;
            v97 = v129;
            v71 = v119;
          }
          if ( *(_DWORD *)v25 <= *(_DWORD *)(v72 + 8) )
          {
            v21 = v99;
            goto LABEL_103;
          }
          v73 = *(unsigned int *)(v72 + 12);
          v74 = LdrpSectionTableFromVirtualAddress(v53, v100, v113, v71, *(_DWORD *)v25, v91);
          if ( !v74 )
            goto LABEL_223;
          v76 = *(unsigned int *)(v74 + 12);
          v77 = LdrpSectionTableFromVirtualAddress(v53, v100, v113, v75, v76, v91);
          v78 = v77;
          if ( v77 )
          {
            if ( v99 )
            {
              v79 = (unsigned int)v76 - (unsigned __int64)*(unsigned int *)(v77 + 12) + v53;
              v80 = -1LL;
              if ( v79 >= v53 )
                v80 = (unsigned int)v76 - (unsigned __int64)*(unsigned int *)(v77 + 12) + v53;
              v92 = v80;
              if ( v79 < v53 )
                goto LABEL_206;
              v81 = v80 + *(unsigned int *)(v77 + 20);
              v82 = -1LL;
              if ( v81 >= v80 )
                v82 = v81;
              v92 = v82;
              if ( v81 < v80 )
                goto LABEL_206;
            }
            v83 = v76 + v53 + *(unsigned int *)(v78 + 20) - (unsigned __int64)*(unsigned int *)(v78 + 12);
          }
          else
          {
            v83 = 0LL;
          }
          v21 = v99;
          if ( v99
            && ((int)RtlULongLongSub(*(unsigned int *)(v78 + 12), v73, &v92) < 0
             || (int)RtlULongLongSub(v92, v84 - v13, &v92) < 0) )
          {
            goto LABEL_206;
          }
          v54 += v13 + *(unsigned int *)(v78 + 12) - v73 - v83;
LABEL_102:
          v120 = v54;
LABEL_103:
          v55 = *(unsigned int *)(v25 + 4);
          if ( !v21 )
          {
            v56 = 0LL;
            v57 = v100;
            goto LABEL_110;
          }
          if ( (int)RtlULongLongSub(*(unsigned int *)v25, v54, &v92) < 0 )
            goto LABEL_206;
          v56 = v92;
          if ( v92 < v13 - v104
            || (v57 = v100, v92 > v100)
            || !(_DWORD)v55
            || v55 > v100
            || v92 + (unsigned int)v55 > v100 )
          {
LABEL_223:
            v97 = 0LL;
            goto LABEL_206;
          }
LABEL_110:
          v58 = v121;
          if ( v121 )
          {
            if ( v21 )
            {
              v59 = v56 + v53;
              v60 = -1LL;
              if ( v59 >= v53 )
                v60 = v59;
              v92 = v60;
              if ( v59 < v53 || v60 < v53 || v60 > v57 + (v53 & 0xFFFFFFFFFFFFFFFCuLL) )
                goto LABEL_206;
              *v121 = v59;
            }
            else
            {
              *v121 = v53 + *(unsigned int *)v25 - v54;
            }
          }
          if ( v124 )
          {
            if ( v21 && v58 )
            {
              v61 = *v58 + v55;
              v62 = v61 < *v58;
              if ( v61 >= *v58 )
                v26 = *v58 + v55;
              v92 = v26;
              if ( v62 || v61 > v57 + v53 )
                goto LABEL_206;
            }
            *v124 = v55;
          }
LABEL_126:
          v89 = 0;
          goto LABEL_52;
        }
        if ( v24 && (v20 & 2) != 0 )
        {
          if ( !v21 )
            goto LABEL_183;
          if ( v24 + 24 < v24 )
          {
            v92 = -1LL;
          }
          else
          {
            v92 = v24 + 24;
            if ( v24 + 24 <= v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
            {
LABEL_183:
              if ( v121 )
              {
                if ( v21 )
                {
                  v85 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( v24 < v85 || v24 > v14 + v85 )
                    goto LABEL_206;
                }
                *v121 = v24;
              }
              goto LABEL_126;
            }
          }
          v105 = 0LL;
          goto LABEL_206;
        }
LABEL_50:
        v42 = v19 - v103 - 1;
        if ( !v42 )
        {
          v89 = -1073741686;
          goto LABEL_52;
        }
        v63 = v42 - 1;
        if ( !v63 )
        {
          v89 = -1073741685;
          goto LABEL_52;
        }
        if ( v63 == 1 )
        {
          v89 = -1073741308;
          goto LABEL_52;
        }
LABEL_200:
        v89 = -1073741811;
        goto LABEL_52;
      }
      if ( v107 >= 0 )
        break;
      v36 = v51 - 2;
      v123 = v51 - 2;
      if ( v50 )
        goto LABEL_81;
      v37 = v38 - 1;
      v95 = v38 - 1;
LABEL_82:
      v21 = v99;
      v31 = v102;
      v20 = a12;
    }
    v35 = v51 + 2;
    v109 = (char *)(v51 + 2);
LABEL_81:
    v95 = v38;
    v37 = v38;
    goto LABEL_82;
  }
  return result;
}
