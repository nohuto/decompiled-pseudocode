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
        unsigned int a8,
        __int64 a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11,
        int a12,
        _WORD *a13)
{
  unsigned __int64 v13; // r13
  __int64 v14; // r15
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned int v20; // r8d
  int v21; // r11d
  int v22; // r14d
  int v23; // r9d
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rsi
  __int64 v27; // r12
  int v28; // eax
  unsigned int *v29; // r9
  unsigned __int64 v30; // r10
  int v31; // r11d
  unsigned __int64 v32; // rax
  unsigned int *v33; // r12
  unsigned int *v34; // r13
  int v35; // edi
  int v36; // r15d
  bool v37; // zf
  __int64 result; // rax
  int v39; // r8d
  __int64 Heap; // rbx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  char v47; // di
  unsigned int *v48; // r14
  int v49; // r8d
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // r8
  unsigned __int64 *v54; // r10
  bool v55; // cf
  int v56; // r8d
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // r10
  unsigned int v60; // r9d
  __int64 v61; // rax
  __int64 v62; // r9
  __int64 v63; // r14
  __int64 v64; // r15
  __int64 v65; // rax
  __int64 v66; // r9
  __int64 v67; // r14
  __int64 v68; // rax
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 v71; // r10
  __int64 v72; // r10
  unsigned __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rcx
  int v76; // [rsp+40h] [rbp-188h]
  unsigned int v77; // [rsp+40h] [rbp-188h]
  __int64 v78; // [rsp+48h] [rbp-180h]
  char v79; // [rsp+50h] [rbp-178h]
  unsigned __int64 v80; // [rsp+58h] [rbp-170h] BYREF
  unsigned __int16 v81; // [rsp+60h] [rbp-168h]
  unsigned int v82; // [rsp+64h] [rbp-164h]
  int v83; // [rsp+68h] [rbp-160h]
  int v84; // [rsp+6Ch] [rbp-15Ch]
  _BYTE *v85; // [rsp+70h] [rbp-158h]
  int v86; // [rsp+78h] [rbp-150h]
  int v87; // [rsp+7Ch] [rbp-14Ch]
  unsigned __int64 v88; // [rsp+80h] [rbp-148h]
  signed __int16 v89; // [rsp+88h] [rbp-140h]
  unsigned __int64 v90; // [rsp+90h] [rbp-138h]
  unsigned int v91; // [rsp+98h] [rbp-130h]
  __int64 v92; // [rsp+A0h] [rbp-128h]
  unsigned __int64 v93; // [rsp+A8h] [rbp-120h]
  unsigned __int64 v94; // [rsp+B0h] [rbp-118h]
  int v95; // [rsp+B8h] [rbp-110h] BYREF
  unsigned __int64 v96; // [rsp+C0h] [rbp-108h]
  unsigned int *v97; // [rsp+C8h] [rbp-100h]
  HANDLE Handle; // [rsp+D0h] [rbp-F8h]
  unsigned int *v99; // [rsp+D8h] [rbp-F0h]
  __int64 v100; // [rsp+E0h] [rbp-E8h]
  __int64 v101; // [rsp+E8h] [rbp-E0h]
  unsigned int v102; // [rsp+F0h] [rbp-D8h]
  __int64 v103; // [rsp+F8h] [rbp-D0h]
  unsigned int *v104; // [rsp+100h] [rbp-C8h]
  __int64 v105; // [rsp+108h] [rbp-C0h]
  _WORD *v106; // [rsp+110h] [rbp-B8h]
  __int64 v107; // [rsp+118h] [rbp-B0h]
  unsigned __int64 v108; // [rsp+120h] [rbp-A8h]
  unsigned __int64 *v109; // [rsp+128h] [rbp-A0h]
  _QWORD v110[2]; // [rsp+130h] [rbp-98h] BYREF
  unsigned int *v111; // [rsp+140h] [rbp-88h]
  unsigned __int64 *v112; // [rsp+148h] [rbp-80h]
  int v113; // [rsp+150h] [rbp-78h] BYREF
  const wchar_t *v114; // [rsp+158h] [rbp-70h]
  __int64 v115; // [rsp+160h] [rbp-68h]
  __int64 v116; // [rsp+168h] [rbp-60h]
  _BYTE v117[16]; // [rsp+170h] [rbp-58h] BYREF

  v13 = a4;
  v94 = a4;
  v14 = a3;
  v88 = a3;
  Handle = a2;
  v16 = a1;
  v92 = a1;
  v101 = a5;
  v107 = a6;
  v100 = a7;
  v103 = a9;
  v109 = a10;
  v112 = a11;
  v106 = a13;
  v115 = 0LL;
  v116 = 0LL;
  v89 = 0;
  v90 = 0LL;
  v78 = 0LL;
  v86 = 0;
  v81 = 0;
  LODWORD(v110[0]) = 5636180;
  v110[1] = L"LdrpResSearchResourceInsideDirectory Enter";
  v113 = 5505106;
  v114 = L"LdrpResSearchResourceInsideDirectory Exit";
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a10, a2) )
  {
    v18 = (__int64)NtCurrentPeb()->SharedData + 555;
    v86 = v81;
  }
  else
  {
    v18 = 2147353477LL;
  }
  if ( (*(_BYTE *)v18 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(1LL, v17) )
    {
      v75 = (__int64)NtCurrentPeb()->SharedData + 554;
      v86 = v81;
    }
    else
    {
      v75 = 2147353476LL;
    }
    LdrpTraceLoadMUIDll(v110, *(unsigned __int8 *)v75);
  }
  if ( !v13 )
    return 3221225485LL;
  if ( !v101 )
    return 3221225485LL;
  v19 = v100;
  if ( !v100 )
    return 3221225485LL;
  v20 = a8;
  if ( a8 - 1 > 3 )
    return 3221225485LL;
  LOBYTE(v21) = a12;
  if ( (a12 & 0x8000) != 0 && ((unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || !a6) )
    return 3221225485LL;
  v22 = a12 & 0x1000;
  v87 = v22;
  v79 = v22 != 0;
  v23 = a12 & 0x8800;
  v84 = v23;
  if ( (a12 & 0x1000) != 0 && !v14 )
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
  v105 = v100;
  v24 = a8;
  v91 = a8;
  v25 = v13;
  v26 = 0LL;
  v85 = 0LL;
  v96 = 0LL;
  if ( v106 )
    *v106 = 0;
  v27 = -1LL;
LABEL_16:
  if ( !v25 )
    goto LABEL_47;
  v28 = v24;
  v24 = (unsigned int)(v24 - 1);
  v91 = v24;
  v102 = v24;
  if ( !v28 )
    goto LABEL_47;
  v90 = *(_QWORD *)v19;
  if ( !(_DWORD)v24 && v20 == 3 )
  {
    v96 = v25;
    v24 = v103;
    if ( !v103 )
      goto LABEL_200;
    v89 = *(_WORD *)v103;
    v86 = 0;
    v81 = 0;
    if ( (~(_BYTE)v21 & 4) != 0 )
      v90 = *(unsigned __int16 *)(v103 + 4);
  }
  v19 = 34816LL;
  if ( v23 == 34816 )
  {
    result = LdrpResReadFile(Handle);
    v76 = result;
    if ( (int)result < 0 )
      return result;
    v20 = a8;
    v23 = v84;
    v19 = 34816LL;
    if ( v84 == 34816 )
      goto LABEL_208;
  }
  if ( v22 )
  {
    v24 = v25 + 24;
    if ( v25 + 24 < v25 )
      goto LABEL_207;
    v80 = v25 + 24;
    if ( v24 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
      goto LABEL_206;
  }
  if ( v23 == 34816 )
LABEL_208:
    v19 = WORD2(v116);
  else
    v19 = *(unsigned __int16 *)(v25 + 12);
  v82 = v19;
  v83 = v19;
  if ( (_DWORD)v19 && v22 )
  {
    v45 = 8LL * (unsigned int)v19;
    v99 = (unsigned int *)v45;
    if ( v45 > 0xFFFFFFFF )
      goto LABEL_206;
    v19 = (unsigned int)v45;
    v46 = (unsigned int)v45 + v25 + 16;
    if ( v46 < v25 )
      goto LABEL_207;
    v80 = v46;
    v24 = v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v19 + v25 + 16 > v24 )
      goto LABEL_206;
    v19 = v82;
  }
  v29 = (unsigned int *)(v25 + 16);
  v99 = (unsigned int *)(v25 + 16);
  v97 = (unsigned int *)(v25 + 16);
  v30 = v90;
  if ( (v90 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v31 = v84;
    goto LABEL_34;
  }
  if ( (_DWORD)v19 )
  {
    if ( v22 )
    {
      v24 = (unsigned __int64)v29 + (int)v19;
      if ( v24 < (unsigned __int64)v29 )
        goto LABEL_207;
      v80 = (unsigned __int64)v29 + (int)v19;
    }
    v29 += 2 * (int)v19;
    v99 = v29;
    v97 = v29;
  }
  v31 = v84;
  v19 = HIWORD(v116);
  if ( v84 != 34816 )
    v19 = *(unsigned __int16 *)(v25 + 14);
  v82 = v19;
  v83 = v19;
  if ( !v22 )
    goto LABEL_34;
  v32 = 8LL * (unsigned int)v19;
  v110[0] = v32;
  v24 = 0xFFFFFFFFLL;
  if ( v32 > 0xFFFFFFFF )
    goto LABEL_206;
  v24 = (unsigned __int64)v29 + (unsigned int)v32;
  if ( v24 < (unsigned __int64)v29 )
  {
LABEL_207:
    v80 = -1LL;
    goto LABEL_206;
  }
  v80 = (unsigned __int64)v29 + (unsigned int)v32;
  if ( v24 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
    goto LABEL_206;
LABEL_34:
  if ( !(_DWORD)v19 )
  {
    v93 = 0LL;
    goto LABEL_50;
  }
  if ( v31 != 34816 )
    goto LABEL_36;
  if ( v78 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v78);
    LODWORD(v19) = v83;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 8LL * (int)v19);
  v78 = Heap;
  if ( !Heap )
  {
    v77 = -1073741801;
    goto LABEL_53;
  }
  v82 = v83;
  result = LdrpResReadFile(Handle);
  v76 = result;
  if ( (int)result >= 0 )
  {
    v29 = (unsigned int *)Heap;
    v99 = (unsigned int *)Heap;
    v97 = (unsigned int *)Heap;
    v86 = v81;
    v100 = v105;
    v91 = v102;
    v26 = (unsigned __int64)v85;
    v19 = v82;
    v30 = v90;
LABEL_36:
    v21 = a12;
LABEL_37:
    if ( v96 && (v21 & 0x20) != 0 )
    {
      v25 = 0LL;
      v93 = 0LL;
      if ( v22 )
      {
        v24 = v13 + v29[1];
        v26 = -1LL;
        if ( v24 >= v13 )
          v26 = v13 + v29[1];
        v80 = v26;
        if ( v24 < v13 )
          goto LABEL_206;
      }
      else
      {
        v26 = v13 + v29[1];
      }
      v85 = (_BYTE *)v26;
      v19 = *v29;
      v90 = v19;
      v20 = a8;
      v23 = v84;
      goto LABEL_48;
    }
LABEL_38:
    v25 = 0LL;
    v93 = 0LL;
    v33 = v29;
    v97 = v29;
    v34 = &v29[2 * (int)v19 - 2];
    v111 = v34;
    v35 = v19;
    v83 = v19;
    while ( 1 )
    {
      if ( v33 > v34 )
      {
        v13 = v94;
        goto LABEL_189;
      }
      v36 = v35 >> 1;
      if ( !(v35 >> 1) )
      {
        v13 = v94;
        v14 = v88;
        v37 = v35 == 0;
        v16 = v92;
        if ( v37 )
          goto LABEL_44;
        result = LdrpResCompareResourceNames(v92, Handle, v88, v30, v94, v33, v21, &v95, v76);
        v76 = result;
        if ( (int)result < 0 )
          return result;
        if ( v95 )
          goto LABEL_44;
        v43 = v33[1];
        if ( (int)v43 >= 0 )
        {
          if ( !v22 )
          {
            v26 = v43 + v94;
            v85 = (_BYTE *)(v43 + v94);
            goto LABEL_44;
          }
          if ( !v96 )
            goto LABEL_206;
          v24 = v43 + v94;
          v27 = -1LL;
          v26 = -1LL;
          if ( v43 + v94 >= v94 )
            v26 = v43 + v94;
          v80 = v26;
          if ( v43 + v94 < v94 )
            goto LABEL_206;
          v85 = (_BYTE *)v26;
        }
        else
        {
          if ( !v22 )
          {
            v25 = v94 + (v43 & 0xFFFFFFFF7FFFFFFFuLL);
            v93 = v25;
            goto LABEL_44;
          }
          if ( v96 )
            goto LABEL_206;
          LODWORD(v43) = v43 & 0x7FFFFFFF;
          v44 = v94 + v43;
          v27 = -1LL;
          v25 = -1LL;
          if ( v44 >= v94 )
            v25 = v44;
          v80 = v25;
          if ( v44 < v94 )
            goto LABEL_206;
          v93 = v25;
        }
        goto LABEL_45;
      }
      v104 = v33;
      v47 = v35 & 1;
      if ( v47 )
        v48 = &v33[2 * v36];
      else
        v48 = &v33[2 * v36 - 2];
      v104 = v48;
      result = LdrpResCompareResourceNames(v92, Handle, v88, v30, v94, v48, v21, &v95, v76);
      v76 = result;
      if ( (int)result < 0 )
        return result;
      if ( !v95 )
      {
        v57 = v48[1];
        v22 = v87;
        if ( (int)v57 >= 0 )
        {
          v93 = 0LL;
          if ( !v87 )
          {
            v13 = v94;
            v26 = v57 + v94;
            v85 = (_BYTE *)(v57 + v94);
            goto LABEL_189;
          }
          if ( !v96 )
            goto LABEL_206;
          v13 = v94;
          v24 = v57 + v94;
          v27 = -1LL;
          v26 = -1LL;
          if ( v57 + v94 >= v94 )
            v26 = v57 + v94;
          v80 = v26;
          if ( v57 + v94 < v94 )
            goto LABEL_206;
          v85 = (_BYTE *)v26;
LABEL_150:
          v14 = v88;
          v16 = v92;
        }
        else
        {
          if ( v87 )
          {
            if ( !v96 )
            {
              LODWORD(v57) = v57 & 0x7FFFFFFF;
              v13 = v94;
              v58 = v94 + v57;
              v27 = -1LL;
              v25 = -1LL;
              if ( v58 >= v94 )
                v25 = v58;
              v80 = v25;
              if ( v58 >= v94 )
              {
                v93 = v25;
                goto LABEL_150;
              }
            }
LABEL_206:
            v77 = -1073741701;
LABEL_52:
            Heap = v78;
LABEL_53:
            if ( Heap )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v78);
            if ( (unsigned int)RtlGetCurrentServiceSessionId(v24, v19) )
              v42 = (__int64)NtCurrentPeb()->SharedData + 555;
            else
              v42 = 2147353477LL;
            if ( (*(_BYTE *)v42 & 1) != 0 )
            {
              if ( (unsigned int)RtlGetCurrentServiceSessionId(1LL, v41) )
                v74 = (__int64)NtCurrentPeb()->SharedData + 554;
              else
                v74 = 2147353476LL;
              LdrpTraceLoadMUIDll(&v113, *(unsigned __int8 *)v74);
            }
            return v77;
          }
          v13 = v94;
          v25 = v94 + (v57 & 0xFFFFFFFF7FFFFFFFuLL);
          v93 = v25;
LABEL_189:
          v16 = v92;
          v14 = v88;
LABEL_44:
          v27 = -1LL;
        }
LABEL_45:
        v21 = a12;
        if ( !v96 || v26 )
          goto LABEL_46;
        if ( (a12 & 4) == 0 )
        {
          HIWORD(v49) = HIWORD(v86);
          LOWORD(v49) = v86 + 1;
          v86 = v49;
          v81 = v49;
          v24 = v103;
          if ( (unsigned __int16)v49 < v89 )
          {
            v30 = *(unsigned __int16 *)(v103 + 8LL * (unsigned __int16)v49 + 4);
            v90 = v30;
            LODWORD(v19) = v82;
            v29 = v99;
            goto LABEL_38;
          }
          if ( !*(_BYTE *)(v103 + 516) )
          {
            v21 = a12 | 0x20;
            a12 |= 0x20u;
            v19 = v82;
            v29 = v99;
            v30 = v90;
            goto LABEL_37;
          }
LABEL_46:
          v19 = v100 + 8;
          v100 = v19;
          v105 = v19;
          v20 = a8;
          v23 = v84;
          v24 = v91;
          goto LABEL_16;
        }
        v20 = a8;
        v23 = v84;
LABEL_47:
        v19 = v90;
LABEL_48:
        if ( v26 && (v21 & 2) == 0 )
        {
          if ( v22 )
          {
            if ( v26 <= v13 )
              goto LABEL_223;
            v24 = v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL);
            if ( v26 + 16 > v24 )
              goto LABEL_223;
          }
          if ( v106 )
            *v106 = v19;
          v50 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (v16 & 1) == 0 && v23 != 34816 )
          {
            v51 = 0LL;
            goto LABEL_102;
          }
          v59 = v101;
          if ( *(_WORD *)(v101 + 24) == 267 )
          {
            v60 = *(_DWORD *)(v101 + 136);
          }
          else if ( *(_WORD *)(v101 + 24) == 523 )
          {
            v60 = *(_DWORD *)(v101 + 152);
          }
          else
          {
            v60 = 0;
          }
          if ( !v60 )
          {
            v85 = 0LL;
            v77 = -1073741687;
            goto LABEL_52;
          }
          if ( v22 )
          {
            v24 = v50 + v60;
            v61 = -1LL;
            if ( v24 >= v50 )
              v61 = v50 + v60;
            v80 = v61;
            if ( v24 < v50 || (int)RtlULongLongSub(v61, v13, &v80) < 0 )
              goto LABEL_206;
          }
          v51 = v50 + v60 - v13;
          v108 = v51;
          v63 = LdrpSectionTableFromVirtualAddress(v50, v14, v59, v107, v60, v79);
          if ( !v63 )
            goto LABEL_223;
          if ( v84 == 34816 )
          {
            result = LdrpResReadFile(Handle);
            if ( (int)result < 0 )
              return result;
            v26 = (unsigned __int64)v117;
            v85 = v117;
            v62 = v107;
          }
          if ( *(_DWORD *)v26 <= *(_DWORD *)(v63 + 8) )
          {
            v22 = v87;
            goto LABEL_103;
          }
          v64 = *(unsigned int *)(v63 + 12);
          v65 = LdrpSectionTableFromVirtualAddress(v50, v88, v101, v62, *(_DWORD *)v26, v79);
          if ( !v65 )
            goto LABEL_223;
          v67 = *(unsigned int *)(v65 + 12);
          v68 = LdrpSectionTableFromVirtualAddress(v50, v88, v101, v66, v67, v79);
          v69 = v68;
          if ( v68 )
          {
            if ( v87 )
            {
              v24 = (unsigned int)v67 - (unsigned __int64)*(unsigned int *)(v68 + 12) + v50;
              v19 = -1LL;
              if ( v24 >= v50 )
                v19 = (unsigned int)v67 - (unsigned __int64)*(unsigned int *)(v68 + 12) + v50;
              v80 = v19;
              if ( v24 < v50 )
                goto LABEL_206;
              v24 = v19 + *(unsigned int *)(v68 + 20);
              v70 = -1LL;
              if ( v24 >= v19 )
                v70 = v24;
              v80 = v70;
              if ( v24 < v19 )
                goto LABEL_206;
            }
            v71 = v67 + v50 + *(unsigned int *)(v69 + 20) - (unsigned __int64)*(unsigned int *)(v69 + 12);
          }
          else
          {
            v71 = 0LL;
          }
          v22 = v87;
          if ( v87
            && ((int)RtlULongLongSub(*(unsigned int *)(v69 + 12), v64, &v80) < 0
             || (int)RtlULongLongSub(v80, v72 - v13, &v80) < 0) )
          {
            goto LABEL_206;
          }
          v51 += v13 + *(unsigned int *)(v69 + 12) - v64 - v71;
LABEL_102:
          v108 = v51;
LABEL_103:
          v52 = *(unsigned int *)(v26 + 4);
          if ( !v22 )
          {
            v24 = 0LL;
            v53 = v88;
            goto LABEL_110;
          }
          if ( (int)RtlULongLongSub(*(unsigned int *)v26, v51, &v80) < 0 )
            goto LABEL_206;
          v24 = v80;
          if ( v80 < v13 - v92 || (v53 = v88, v80 > v88) || !(_DWORD)v52 || v52 > v88 || v80 + (unsigned int)v52 > v88 )
          {
LABEL_223:
            v85 = 0LL;
            goto LABEL_206;
          }
LABEL_110:
          v54 = v109;
          if ( v109 )
          {
            if ( v22 )
            {
              v19 = v24 + v50;
              v24 = -1LL;
              if ( v19 >= v50 )
                v24 = v19;
              v80 = v24;
              if ( v19 < v50 || v24 < v50 || v24 > v53 + (v50 & 0xFFFFFFFFFFFFFFFCuLL) )
                goto LABEL_206;
              *v109 = v19;
            }
            else
            {
              *v109 = v50 + *(unsigned int *)v26 - v51;
            }
          }
          if ( v112 )
          {
            if ( v22 && v54 )
            {
              v24 = *v54;
              v19 = *v54 + v52;
              v55 = v19 < *v54;
              if ( v19 >= *v54 )
                v27 = *v54 + v52;
              v80 = v27;
              if ( v55 || v19 > v53 + v50 )
                goto LABEL_206;
            }
            *v112 = v52;
          }
LABEL_126:
          v77 = 0;
          goto LABEL_52;
        }
        if ( v25 && (v21 & 2) != 0 )
        {
          if ( !v22 )
            goto LABEL_183;
          v24 = v25 + 24;
          if ( v25 + 24 < v25 )
          {
            v80 = -1LL;
          }
          else
          {
            v80 = v25 + 24;
            if ( v24 <= v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
            {
LABEL_183:
              v24 = (unsigned __int64)v109;
              if ( v109 )
              {
                if ( v22 )
                {
                  v73 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( v25 < v73 || v25 > v14 + v73 )
                    goto LABEL_206;
                }
                *v109 = v25;
              }
              goto LABEL_126;
            }
          }
          v93 = 0LL;
          goto LABEL_206;
        }
LABEL_50:
        v39 = v20 - v91 - 1;
        if ( !v39 )
        {
          v77 = -1073741686;
          goto LABEL_52;
        }
        v56 = v39 - 1;
        if ( !v56 )
        {
          v77 = -1073741685;
          goto LABEL_52;
        }
        if ( v56 == 1 )
        {
          v77 = -1073741308;
          goto LABEL_52;
        }
LABEL_200:
        v77 = -1073741811;
        goto LABEL_52;
      }
      if ( v95 >= 0 )
        break;
      v34 = v48 - 2;
      v111 = v48 - 2;
      if ( v47 )
        goto LABEL_81;
      v35 = v36 - 1;
      v83 = v36 - 1;
LABEL_82:
      v22 = v87;
      v30 = v90;
      v21 = a12;
    }
    v33 = v48 + 2;
    v97 = v48 + 2;
LABEL_81:
    v83 = v36;
    v35 = v36;
    goto LABEL_82;
  }
  return result;
}
