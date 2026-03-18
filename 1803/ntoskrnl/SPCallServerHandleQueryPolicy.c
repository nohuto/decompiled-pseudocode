/*
 * XREFs of SPCallServerHandleQueryPolicy @ 0x1404AFD24
 * Callers:
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     StringCbLengthW @ 0x14007A3C8 (StringCbLengthW.c)
 *     KeQueryTimeIncrement @ 0x1400A18E0 (KeQueryTimeIncrement.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleQueryPolicy(__int64 a1, void *a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned int i; // r10d
  unsigned __int64 v9; // r9
  signed int v10; // ebx
  unsigned __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // r9
  __int64 *v14; // rax
  void *v15; // rsi
  unsigned int j; // r9d
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned int v19; // ecx
  __int64 v20; // rdx
  const wchar_t *v21; // r11
  __int64 v22; // r14
  void *v23; // r11
  unsigned int v24; // eax
  size_t v25; // r14
  PVOID PoolWithTag; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r8
  unsigned int k; // r10d
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // r9
  int *v34; // rax
  unsigned int m; // r9d
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rcx
  int v38; // ecx
  __int64 v39; // r8
  unsigned int *v40; // rax
  unsigned int v41; // esi
  int v42; // ebx
  int v43; // eax
  int v44; // r11d
  int v45; // r13d
  int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // eax
  unsigned int v50; // edx
  unsigned int v51; // r8d
  unsigned int v52; // ecx
  int v53; // eax
  unsigned int v54; // ecx
  unsigned int v55; // r8d
  unsigned int v56; // edx
  unsigned int v57; // eax
  int v58; // ecx
  unsigned int v59; // ecx
  int v60; // r10d
  int v61; // r9d
  unsigned int v62; // eax
  unsigned int v63; // edx
  unsigned int v64; // eax
  unsigned int v65; // ecx
  unsigned int v66; // eax
  unsigned int v67; // edx
  int v68; // r8d
  unsigned int v69; // ecx
  int v70; // eax
  unsigned int v71; // eax
  int v72; // r13d
  __int64 v73; // rbx
  __int64 v74; // r12
  unsigned int v75; // eax
  char *v76; // rax
  char *v77; // rdx
  int v78; // r10d
  char *v79; // rax
  __int64 v80; // r8
  unsigned int v81; // r9d
  char *v82; // r11
  char *v83; // r8
  int v84; // r10d
  int v85; // eax
  unsigned int v86; // r14d
  __int64 v87; // rax
  char *v88; // rdx
  char *v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // xmm0_8
  __int64 v92; // r9
  int v93; // r12d
  int v94; // r10d
  char *v95; // r8
  int v96; // eax
  unsigned int v97; // r11d
  __int64 v98; // rax
  char *v99; // rdx
  char *v100; // rcx
  __int64 v101; // rdx
  PVOID v102; // r10
  __int64 v103; // r11
  int v104; // r9d
  char *v105; // r8
  int v106; // eax
  unsigned int v107; // r10d
  __int64 v108; // rax
  char *v109; // rdx
  char *v110; // rcx
  __int64 v111; // r9
  __int64 v112; // r9
  unsigned int v113; // r14d
  char *v114; // r8
  int v115; // r10d
  int v116; // eax
  unsigned int v117; // r11d
  __int64 v118; // rax
  char *v119; // rdx
  char *v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // r9
  unsigned int v123; // r14d
  char *v124; // r8
  int v125; // r10d
  int v126; // eax
  unsigned int v127; // r11d
  __int64 v128; // rax
  char *v129; // rdx
  char *v130; // rcx
  __int64 v131; // rdx
  int v133; // eax
  unsigned int v134; // eax
  NTSTATUS v135; // eax
  int v136; // r14d
  int v137; // eax
  unsigned __int64 v138; // r12
  __int64 v139; // rbx
  int v140; // ebx
  NTSTATUS v141; // eax
  unsigned int v142; // r8d
  unsigned int *v143; // rdx
  unsigned int v144; // eax
  unsigned int v145; // edx
  int v146; // eax
  unsigned int v147; // ecx
  unsigned int v148; // edx
  int v149; // eax
  unsigned int v150; // ecx
  int v151; // eax
  int v152; // ecx
  unsigned int v153; // edx
  int v154; // eax
  unsigned int v155; // ecx
  unsigned int v156; // edx
  int v157; // eax
  unsigned int v158; // ecx
  unsigned int v159; // ecx
  unsigned int v160; // eax
  unsigned int Size; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int Size_4; // [rsp+3Ch] [rbp-CCh]
  unsigned int v163; // [rsp+40h] [rbp-C8h]
  int v164; // [rsp+44h] [rbp-C4h] BYREF
  int v165; // [rsp+48h] [rbp-C0h]
  _DWORD v166[2]; // [rsp+4Ch] [rbp-BCh] BYREF
  int v167; // [rsp+54h] [rbp-B4h] BYREF
  int v168; // [rsp+58h] [rbp-B0h] BYREF
  int v169; // [rsp+5Ch] [rbp-ACh] BYREF
  int v170; // [rsp+60h] [rbp-A8h]
  unsigned int NumberOfBytes; // [rsp+64h] [rbp-A4h]
  unsigned int NumberOfBytes_4; // [rsp+68h] [rbp-A0h]
  int v173; // [rsp+6Ch] [rbp-9Ch] BYREF
  PVOID P; // [rsp+70h] [rbp-98h]
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  int v176; // [rsp+80h] [rbp-88h] BYREF
  int v177; // [rsp+84h] [rbp-84h] BYREF
  int v178; // [rsp+88h] [rbp-80h] BYREF
  int v179; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v180; // [rsp+90h] [rbp-78h]
  unsigned int v181; // [rsp+94h] [rbp-74h]
  PCWSTR SourceString; // [rsp+A0h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v184; // [rsp+C8h] [rbp-40h]
  int v185; // [rsp+CCh] [rbp-3Ch]
  int v186; // [rsp+D0h] [rbp-38h]
  size_t pcbLength; // [rsp+D8h] [rbp-30h] BYREF
  void *Src; // [rsp+E0h] [rbp-28h]
  LARGE_INTEGER Timeout; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v190; // [rsp+F0h] [rbp-18h]
  __int64 v191; // [rsp+F8h] [rbp-10h]
  int v192; // [rsp+100h] [rbp-8h]
  const wchar_t *v193; // [rsp+108h] [rbp+0h]
  int *v194; // [rsp+110h] [rbp+8h]
  unsigned int *v195; // [rsp+118h] [rbp+10h]
  __int64 *v196; // [rsp+120h] [rbp+18h]
  UNICODE_STRING v197; // [rsp+128h] [rbp+20h] BYREF
  __int64 v198; // [rsp+138h] [rbp+30h] BYREF
  int v199; // [rsp+140h] [rbp+38h]

  v163 = a3;
  KeyHandle = a2;
  SourceString = 0LL;
  v166[0] = 0;
  Size = 0;
  P = 0LL;
  NumberOfBytes_4 = 0;
  Timeout.QuadPart = 0LL;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 || *(_DWORD *)a1 <= 3u )
  {
    v10 = -1073741811;
    goto LABEL_22;
  }
  v7 = *(_QWORD *)(a1 + 8);
  for ( i = 0; i < 3; ++i )
  {
    v9 = -1LL;
    if ( v7 + 4 >= v7 )
      v9 = v7 + 4;
    v10 = v7 + 4 < v7 ? 0xC0000095 : 0;
    if ( v7 + 4 < v7 )
      goto LABEL_268;
    v11 = v9 + *(unsigned int *)v7;
    v7 = -1LL;
    if ( v11 >= v9 )
      v7 = v11;
    v10 = v11 < v9 ? 0xC0000095 : 0;
    if ( v11 < v9 )
      goto LABEL_268;
  }
  v12 = *(_DWORD *)v7;
  v13 = -1LL;
  if ( v7 + 4 >= v7 )
    v13 = v7 + 4;
  v10 = v7 + 4 < v7 ? 0xC0000095 : 0;
  if ( v7 + 4 < v7 )
  {
LABEL_268:
    v12 = v192;
    v14 = v196;
    goto LABEL_19;
  }
  v14 = 0LL;
  if ( v12 )
    v14 = (__int64 *)v13;
LABEL_19:
  if ( v10 >= 0 )
  {
    if ( v12 != 8 )
      return (unsigned int)-1073741789;
    v190 = *v14;
LABEL_22:
    if ( v10 < 0 )
      return (unsigned int)v10;
    v15 = 0LL;
    if ( v6 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v17 = -1LL;
        if ( v6 + 4 >= v6 )
          v17 = v6 + 4;
        v10 = v6 + 4 < v6 ? 0xC0000095 : 0;
        if ( v6 + 4 < v6 )
          goto LABEL_271;
        v18 = v17 + *(unsigned int *)v6;
        v6 = -1LL;
        if ( v18 >= v17 )
          v6 = v18;
        v10 = v18 < v17 ? 0xC0000095 : 0;
        if ( v18 < v17 )
          goto LABEL_271;
      }
      v19 = *(_DWORD *)v6;
      v20 = -1LL;
      if ( v6 + 4 >= v6 )
        v20 = v6 + 4;
      v10 = v6 + 4 < v6 ? 0xC0000095 : 0;
      if ( v6 + 4 < v6 )
      {
LABEL_271:
        v19 = v184;
        v21 = v193;
        goto LABEL_38;
      }
      v21 = 0LL;
      if ( v19 )
        v21 = (const wchar_t *)v20;
LABEL_38:
      if ( v10 < 0 )
        goto LABEL_238;
      if ( !v19 || (v19 & 1) != 0 )
      {
        v10 = -1073741762;
        goto LABEL_53;
      }
      v22 = v19;
      if ( v21[((unsigned __int64)v19 >> 1) - 1] )
      {
        v10 = -1073741762;
        goto LABEL_53;
      }
      if ( StringCbLengthW(v21, v19, &pcbLength) < 0 || pcbLength + 2 != v22 )
      {
        v10 = -1073741762;
        goto LABEL_53;
      }
      Size_4 = pcbLength >> 1;
      Src = v23;
    }
    else
    {
      v10 = -1073741811;
    }
    if ( v10 < 0 )
      goto LABEL_238;
    v10 = 0;
    v24 = 2 * Size_4 + 2;
    v25 = v24;
    if ( 2 * Size_4 == -2 )
    {
      v10 = -1073741762;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v24, 0x20534C53u);
      if ( PoolWithTag )
        v15 = PoolWithTag;
      else
        v10 = -1073741801;
    }
    if ( v10 >= 0 )
    {
      memmove(v15, Src, v25);
      SourceString = (PCWSTR)v15;
      v15 = 0LL;
    }
    if ( v15 )
      ExFreePoolWithTag(v15, 0x20534C53u);
LABEL_53:
    if ( v10 < 0 )
      goto LABEL_238;
    v27 = *(_QWORD *)(a1 + 8);
    if ( v27 && *(_DWORD *)a1 > 5u )
    {
      v28 = *(_QWORD *)(a1 + 8);
      for ( k = 0; k < 5; ++k )
      {
        v30 = -1LL;
        if ( v28 + 4 >= v28 )
          v30 = v28 + 4;
        v10 = v28 + 4 < v28 ? 0xC0000095 : 0;
        if ( v28 + 4 < v28 )
          goto LABEL_279;
        v31 = v30 + *(unsigned int *)v28;
        v28 = -1LL;
        if ( v31 >= v30 )
          v28 = v31;
        v10 = v31 < v30 ? 0xC0000095 : 0;
        if ( v31 < v30 )
          goto LABEL_279;
      }
      v32 = *(_DWORD *)v28;
      v33 = -1LL;
      if ( v28 + 4 >= v28 )
        v33 = v28 + 4;
      v10 = v28 + 4 < v28 ? 0xC0000095 : 0;
      if ( v28 + 4 < v28 )
      {
LABEL_279:
        v32 = v185;
        v34 = v194;
        goto LABEL_69;
      }
      v34 = 0LL;
      if ( v32 )
        v34 = (int *)v33;
LABEL_69:
      if ( v10 < 0 )
        goto LABEL_238;
      if ( v32 != 4 )
        goto LABEL_280;
      v179 = *v34;
    }
    else
    {
      v10 = -1073741811;
    }
    if ( v10 < 0 )
      goto LABEL_238;
    if ( v27 && *(_DWORD *)a1 > 6u )
    {
      for ( m = 0; m < 6; ++m )
      {
        v36 = -1LL;
        if ( v27 + 4 >= v27 )
          v36 = v27 + 4;
        v10 = v27 + 4 < v27 ? 0xC0000095 : 0;
        if ( v27 + 4 < v27 )
          goto LABEL_283;
        v37 = v36 + *(unsigned int *)v27;
        v27 = -1LL;
        if ( v37 >= v36 )
          v27 = v37;
        v10 = v37 < v36 ? 0xC0000095 : 0;
        if ( v37 < v36 )
          goto LABEL_283;
      }
      v38 = *(_DWORD *)v27;
      v39 = -1LL;
      if ( v27 + 4 >= v27 )
        v39 = v27 + 4;
      v10 = v27 + 4 < v27 ? 0xC0000095 : 0;
      if ( v27 + 4 < v27 )
      {
LABEL_283:
        v38 = v186;
        v40 = v195;
        goto LABEL_88;
      }
      v40 = 0LL;
      if ( v38 )
        v40 = (unsigned int *)v39;
LABEL_88:
      if ( v10 >= 0 )
      {
        if ( v38 == 4 )
        {
          v41 = *v40;
          goto LABEL_91;
        }
LABEL_280:
        v10 = -1073741789;
        goto LABEL_238;
      }
    }
    else
    {
      v10 = -1073741811;
    }
    v41 = v166[1];
LABEL_91:
    if ( v10 < 0 )
      goto LABEL_238;
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( v41 )
    {
      v42 = 1;
      if ( v41 <= 0x100000 )
      {
LABEL_94:
        P = ExAllocatePoolWithTag(PagedPool, v41, 0x20534C53u);
        if ( !P )
          goto LABEL_288;
        v43 = ((__int64 (__fastcall *)(UNICODE_STRING *, _DWORD *, PVOID, _QWORD, unsigned int *))qword_140861460)(
                &DestinationString,
                v166,
                P,
                v41,
                &Size);
        v165 = v43;
        v44 = v43;
        if ( v43 != -1073741789 )
        {
          v10 = v43;
          if ( v43 < 0 )
            goto LABEL_238;
        }
        if ( v41 >= Size )
          v41 = Size;
LABEL_99:
        v45 = -1;
        v180 = v41 + 4;
        v46 = -1;
        if ( v41 < 0xFFFFFFFC )
          v46 = v41 + 4;
        v181 = v41 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        v10 = v181;
        if ( v41 + 4 < 4 )
          goto LABEL_289;
        v47 = v46 + 28;
        v48 = -1;
        if ( v47 >= 0x1C )
          v48 = v47;
        v10 = v47 < 0x1C ? 0xC0000095 : 0;
        if ( v47 < 0x1C )
          goto LABEL_289;
        v49 = v48 + 8;
        v50 = -1;
        if ( v48 + 8 >= v48 )
          v50 = v48 + 8;
        v10 = v49 < v48 ? 0xC0000095 : 0;
        if ( v49 < v48 )
        {
LABEL_289:
          v51 = Size_4;
        }
        else
        {
          v51 = Size_4;
          v52 = v50 + 8;
          v53 = -1;
          if ( v50 + 8 >= v50 )
            v53 = v50 + 8;
          v10 = v52 < v50 ? 0xC0000095 : 0;
          if ( v52 >= v50 )
            v51 = v53;
        }
        NumberOfBytes = v51;
        if ( v10 < 0 )
          goto LABEL_238;
        v54 = -1;
        if ( v51 + 8 >= 8 )
          v54 = v51 + 8;
        v10 = v51 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
        if ( v51 + 8 < 8 )
          goto LABEL_292;
        v55 = Size_4;
        v56 = (v54 + 7) & 0xFFFFFFF8;
        if ( v56 < v54 )
        {
          v10 = -1073741675;
        }
        else
        {
          v57 = v56 + 8;
          v58 = -1;
          if ( v56 + 8 >= v56 )
            v58 = v56 + 8;
          v10 = v57 < v56 ? 0xC0000095 : 0;
          if ( v57 >= v56 )
            v55 = v58;
        }
        if ( v10 < 0 )
        {
LABEL_292:
          v71 = v163;
        }
        else
        {
          v59 = -1;
          v60 = *((_DWORD *)KeyHandle + 8);
          v61 = *((_DWORD *)KeyHandle + 4);
          if ( v55 < 0xFFFFFFFC )
            v59 = v55 + 4;
          v10 = v55 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( v55 + 4 < 4 )
            goto LABEL_291;
          v62 = v59 + 4;
          v63 = -1;
          if ( v59 + 4 >= v59 )
            v63 = v59 + 4;
          v10 = v62 < v59 ? 0xC0000095 : 0;
          if ( v62 < v59 )
            goto LABEL_291;
          v64 = v63 + v61;
          v65 = -1;
          if ( v63 + v61 >= v63 )
            v65 = v63 + v61;
          v10 = v64 < v63 ? 0xC0000095 : 0;
          if ( v64 < v63 )
            goto LABEL_291;
          v66 = v65 + 4;
          v67 = -1;
          if ( v65 + 4 >= v65 )
            v67 = v65 + 4;
          v10 = v66 < v65 ? 0xC0000095 : 0;
          if ( v66 < v65 )
          {
LABEL_291:
            v68 = v163;
          }
          else
          {
            v68 = v163;
            v69 = v67 + v60;
            v70 = -1;
            if ( v67 + v60 >= v67 )
              v70 = v67 + v60;
            v10 = v69 < v67 ? 0xC0000095 : 0;
            if ( v69 >= v67 )
              v68 = v70;
          }
          v71 = v163;
          if ( v10 >= 0 )
            v71 = v68;
        }
        if ( v10 < 0 )
          goto LABEL_238;
        if ( v163 >= v71 && v44 >= 0 )
        {
          v170 = 0;
          if ( DestinationString.Length == stru_1408611F8.Length
            && !memcmp(DestinationString.Buffer, stru_1408611F8.Buffer, stru_1408611F8.Length) )
          {
            v170 = dword_140861100;
            v72 = 1;
          }
          else
          {
            v72 = 0;
          }
          v73 = MEMORY[0xFFFFF78000000320];
          v74 = v73 * KeQueryTimeIncrement() / 10000;
          if ( (unsigned __int64)(v74 - g_qwSystemInitTime) >= 0xA4CBFB || v72 )
          {
            v135 = KeWaitForSingleObject(&Mutex, UserRequest, 1, 0, &Timeout);
            if ( v135 >= 0 && v135 != 192 && v135 != 258 )
            {
              v136 = 1;
              RtlInitUnicodeString(&v197, L"Security-SPP-GenuineLocalStatus");
              v137 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, int *, __int64, int *))qword_140861460)(
                       &v197,
                       &v176,
                       &v177,
                       4LL,
                       &v173);
              if ( v137 == -1073741772 || v137 >= 0 && (v176 != 4 || !v177) )
                v136 = 0;
              if ( g_ulOldGenuineState != v136 )
              {
                if ( v136 )
                {
                  KeResetEvent(&stru_14039E160);
                }
                else
                {
                  v139 = MEMORY[0xFFFFF78000000320];
                  qword_140861130 = v139 * KeQueryTimeIncrement() / 10000;
                }
              }
              v138 = v74 - qword_140861130;
              g_ulOldGenuineState = v136;
              if ( v136 || v138 < 0xADF4FC && !v72 || !dword_140861198 )
                goto LABEL_260;
              KeSetEvent(&stru_14039E160, 1, 0);
              v140 = dword_1408610AC;
              if ( !dword_1408610AC )
              {
                v167 = 4;
                v178 = 0;
                KeyHandle = 0LL;
                v141 = ZwOpenKey(&KeyHandle, 1u, &stru_140861808);
                if ( v141 < 0 )
                {
                  v141 = ((__int64 (__fastcall *)(wchar_t *, int *, int *, __int64, int *))qword_140861460)(
                           aBd,
                           &v167,
                           &v164,
                           4LL,
                           &v178);
                  v140 = v164;
                }
                else
                {
                  v140 = 3;
                  v164 = 3;
                }
                if ( v141 < 0 || v167 != 4 || (unsigned int)(v140 - 1) > 2 )
                {
                  v140 = 1;
                  v164 = 1;
                }
                if ( KeyHandle )
                  ZwClose(KeyHandle);
              }
              v168 = 0;
              v198 = 0LL;
              v199 = 0;
              v169 = 0;
              if ( (int)((__int64 (__fastcall *)(wchar_t *, int *, __int64 *, __int64, int *))qword_140861460)(
                          aLn,
                          &v168,
                          &v198,
                          12LL,
                          &v169) >= 0
                && v168 == 3
                && v169 == 12 )
              {
                v142 = 0;
                v143 = (unsigned int *)&v198;
                while ( 1 )
                {
                  v144 = *v143;
                  if ( (*v143 & 0xF) == v140 )
                    break;
                  ++v142;
                  ++v143;
                  if ( v142 >= 3 )
                    goto LABEL_315;
                }
              }
              else
              {
LABEL_315:
                v144 = dword_14086105C & 0xFFFF0000 | 0x3211;
              }
              dword_14086105C = v144;
              if ( v179 || v170 )
                NumberOfBytes_4 = v144;
              else
LABEL_260:
                KeReleaseMutex(&Mutex, 0);
            }
          }
          v45 = -1;
        }
        v75 = NumberOfBytes;
        *(_DWORD *)(a4 + 4) = NumberOfBytes;
        if ( !v75 )
        {
          v10 = -1073741762;
          goto LABEL_238;
        }
        v76 = (char *)ExAllocatePoolWithTag(PagedPool, v75, 0x20534C53u);
        v77 = v76;
        if ( v76 )
        {
          *(_QWORD *)(a4 + 8) = v76;
          *(_DWORD *)a4 = 0;
          v78 = v165 | 0x10000000;
          v79 = v76 + 4;
          v80 = -1LL;
          v81 = 0;
          if ( v79 >= v77 )
            v80 = (__int64)v79;
          v10 = v79 < v77 ? 0xC0000095 : 0;
          if ( v79 >= v77 )
          {
            if ( v77 + 8 > &v77[*(unsigned int *)(a4 + 4)] )
              goto LABEL_320;
            *(_DWORD *)v77 = 4;
            *(_DWORD *)v80 = v78;
            v81 = ++*(_DWORD *)a4;
          }
          if ( v79 < v77 )
            goto LABEL_238;
          v82 = *(char **)(a4 + 8);
          v191 = v190;
          if ( v82 )
          {
            v83 = v82;
            v84 = 0;
            if ( v81 )
            {
              while ( 1 )
              {
                v85 = -1;
                if ( *(_DWORD *)v83 < 0xFFFFFFFC )
                  v85 = *(_DWORD *)v83 + 4;
                v10 = *(_DWORD *)v83 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v83 + 4) < 4 )
                  break;
                v86 = v85;
                v87 = -1LL;
                v88 = &v83[v86];
                v89 = v83;
                if ( v88 >= v83 )
                  v87 = (__int64)&v83[v86];
                v83 = (char *)v87;
                v10 = v88 < v89 ? 0xC0000095 : 0;
                if ( v88 < v89 )
                  break;
                if ( ++v84 >= v81 )
                  goto LABEL_165;
              }
            }
            else
            {
LABEL_165:
              v90 = -1LL;
              if ( v83 + 4 >= v83 )
                v90 = (__int64)(v83 + 4);
              v10 = v83 + 4 < v83 ? 0xC0000095 : 0;
              if ( v83 + 4 >= v83 )
              {
                if ( v83 + 12 > &v82[*(unsigned int *)(a4 + 4)] )
                  goto LABEL_320;
                v91 = v191;
                *(_DWORD *)v83 = 8;
                *(_QWORD *)v90 = v91;
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v145 = *(_DWORD *)(a4 + 4);
            v146 = -1;
            v147 = v145 + 12;
            if ( v145 + 12 >= v145 )
              v146 = v145 + 12;
            v10 = v147 < v145 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v146;
            if ( v147 >= v145 )
            {
              *(_DWORD *)a4 = v81 + 1;
              goto LABEL_171;
            }
          }
          if ( v10 < 0 )
            goto LABEL_238;
LABEL_171:
          v92 = *(_QWORD *)(a4 + 8);
          v93 = v166[0];
          if ( v92 )
          {
            v94 = 0;
            v95 = *(char **)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v96 = -1;
                if ( *(_DWORD *)v95 < 0xFFFFFFFC )
                  v96 = *(_DWORD *)v95 + 4;
                v10 = *(_DWORD *)v95 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v95 + 4) < 4 )
                  break;
                v97 = v96;
                v98 = -1LL;
                v99 = &v95[v97];
                v100 = v95;
                if ( v99 >= v95 )
                  v98 = (__int64)&v95[v97];
                v95 = (char *)v98;
                v10 = v99 < v100 ? 0xC0000095 : 0;
                if ( v99 < v100 )
                  break;
                if ( (unsigned int)++v94 >= *(_DWORD *)a4 )
                  goto LABEL_180;
              }
            }
            else
            {
LABEL_180:
              v101 = -1LL;
              if ( v95 + 4 >= v95 )
                v101 = (__int64)(v95 + 4);
              v10 = v95 + 4 < v95 ? 0xC0000095 : 0;
              if ( v95 + 4 >= v95 )
              {
                if ( (unsigned __int64)(v95 + 8) > v92 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_320;
                *(_DWORD *)v95 = 4;
                *(_DWORD *)v101 = v93;
                ++*(_DWORD *)a4;
              }
            }
            v45 = -1;
          }
          else
          {
            v148 = *(_DWORD *)(a4 + 4);
            v149 = -1;
            v150 = v148 + 8;
            if ( v148 + 8 >= v148 )
              v149 = v148 + 8;
            v10 = v150 < v148 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v149;
            if ( v150 >= v148 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_187;
            }
          }
          if ( v10 < 0 )
            goto LABEL_238;
LABEL_187:
          v102 = P;
          if ( P )
          {
            if ( v41 )
              goto LABEL_189;
          }
          else if ( !v41 )
          {
LABEL_189:
            v103 = *(_QWORD *)(a4 + 8);
            if ( v103 )
            {
              v104 = 0;
              v105 = *(char **)(a4 + 8);
              if ( *(_DWORD *)a4 )
              {
                while ( 1 )
                {
                  v106 = -1;
                  if ( *(_DWORD *)v105 < 0xFFFFFFFC )
                    v106 = *(_DWORD *)v105 + 4;
                  v10 = *(_DWORD *)v105 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( (unsigned int)(*(_DWORD *)v105 + 4) < 4 )
                    break;
                  v107 = v106;
                  v108 = -1LL;
                  v109 = &v105[v107];
                  v110 = v105;
                  if ( v109 >= v105 )
                    v108 = (__int64)&v105[v107];
                  v105 = (char *)v108;
                  v10 = v109 < v110 ? 0xC0000095 : 0;
                  if ( v109 < v110 )
                    break;
                  if ( (unsigned int)++v104 >= *(_DWORD *)a4 )
                  {
                    v102 = P;
                    goto LABEL_199;
                  }
                }
              }
              else
              {
LABEL_199:
                v111 = -1LL;
                if ( v105 + 4 >= v105 )
                  v111 = (__int64)(v105 + 4);
                v10 = v105 + 4 < v105 ? 0xC0000095 : 0;
                if ( v105 + 4 >= v105 )
                {
                  if ( (unsigned __int64)&v105[v41 + 4] > v103 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_320;
                  *(_DWORD *)v105 = v41;
                  if ( v102 )
                    memmove((void *)v111, v102, v41);
                  ++*(_DWORD *)a4;
                }
              }
            }
            else
            {
              v151 = -1;
              if ( v180 >= 4 )
                v151 = v180;
              v10 = v181;
              if ( v180 >= 4 )
              {
                v152 = v151;
                v153 = *(_DWORD *)(a4 + 4);
                v154 = -1;
                v155 = v153 + v152;
                if ( v155 >= v153 )
                  v154 = v155;
                v10 = v155 < v153 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v154;
                if ( v155 >= v153 )
                {
                  ++*(_DWORD *)a4;
                  goto LABEL_207;
                }
              }
            }
LABEL_206:
            if ( v10 < 0 )
              goto LABEL_238;
LABEL_207:
            v112 = *(_QWORD *)(a4 + 8);
            v113 = Size;
            if ( v112 )
            {
              v114 = *(char **)(a4 + 8);
              v115 = 0;
              if ( *(_DWORD *)a4 )
              {
                while ( 1 )
                {
                  v116 = -1;
                  if ( *(_DWORD *)v114 < 0xFFFFFFFC )
                    v116 = *(_DWORD *)v114 + 4;
                  v10 = *(_DWORD *)v114 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( (unsigned int)(*(_DWORD *)v114 + 4) < 4 )
                    break;
                  v117 = v116;
                  v118 = -1LL;
                  v119 = &v114[v117];
                  v120 = v114;
                  if ( v119 >= v114 )
                    v118 = (__int64)&v114[v117];
                  v114 = (char *)v118;
                  v10 = v119 < v120 ? 0xC0000095 : 0;
                  if ( v119 < v120 )
                    break;
                  if ( (unsigned int)++v115 >= *(_DWORD *)a4 )
                    goto LABEL_216;
                }
              }
              else
              {
LABEL_216:
                v121 = -1LL;
                if ( v114 + 4 >= v114 )
                  v121 = (__int64)(v114 + 4);
                v10 = v114 + 4 < v114 ? 0xC0000095 : 0;
                if ( v114 + 4 >= v114 )
                {
                  if ( (unsigned __int64)(v114 + 8) > v112 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_320;
                  *(_DWORD *)v114 = 4;
                  *(_DWORD *)v121 = v113;
                  ++*(_DWORD *)a4;
                }
              }
            }
            else
            {
              v156 = *(_DWORD *)(a4 + 4);
              v157 = -1;
              v158 = v156 + 8;
              if ( v156 + 8 >= v156 )
                v157 = v156 + 8;
              v10 = v158 < v156 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v157;
              if ( v158 >= v156 )
              {
                ++*(_DWORD *)a4;
LABEL_222:
                v122 = *(_QWORD *)(a4 + 8);
                v123 = NumberOfBytes_4;
                if ( !v122 )
                {
                  v159 = *(_DWORD *)(a4 + 4);
                  v160 = v159 + 8;
                  if ( v159 + 8 >= v159 )
                    v45 = v159 + 8;
                  v10 = v160 < v159 ? 0xC0000095 : 0;
                  *(_DWORD *)(a4 + 4) = v45;
                  if ( v160 >= v159 )
                  {
                    ++*(_DWORD *)a4;
                    goto LABEL_237;
                  }
                  goto LABEL_236;
                }
                v124 = *(char **)(a4 + 8);
                v125 = 0;
                if ( *(_DWORD *)a4 )
                {
                  while ( 1 )
                  {
                    v126 = -1;
                    if ( *(_DWORD *)v124 < 0xFFFFFFFC )
                      v126 = *(_DWORD *)v124 + 4;
                    v10 = *(_DWORD *)v124 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                    if ( (unsigned int)(*(_DWORD *)v124 + 4) < 4 )
                      break;
                    v127 = v126;
                    v128 = -1LL;
                    v129 = &v124[v127];
                    v130 = v124;
                    if ( v129 >= v124 )
                      v128 = (__int64)&v124[v127];
                    v124 = (char *)v128;
                    v10 = v129 < v130 ? 0xC0000095 : 0;
                    if ( v129 < v130 )
                      break;
                    if ( (unsigned int)++v125 >= *(_DWORD *)a4 )
                      goto LABEL_231;
                  }
LABEL_236:
                  if ( v10 >= 0 )
LABEL_237:
                    v10 = 0;
LABEL_238:
                  if ( SourceString )
                    ExFreePoolWithTag((PVOID)SourceString, 0x20534C53u);
                  if ( P )
                    ExFreePoolWithTag(P, 0x20534C53u);
                  return (unsigned int)v10;
                }
LABEL_231:
                v131 = -1LL;
                if ( v124 + 4 >= v124 )
                  v131 = (__int64)(v124 + 4);
                v10 = v124 + 4 < v124 ? 0xC0000095 : 0;
                if ( v124 + 4 < v124 )
                  goto LABEL_236;
                if ( (unsigned __int64)(v124 + 8) <= v122 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *(_DWORD *)v124 = 4;
                  *(_DWORD *)v131 = v123;
                  ++*(_DWORD *)a4;
                  goto LABEL_236;
                }
LABEL_320:
                v10 = -1073741789;
                goto LABEL_238;
              }
            }
            if ( v10 < 0 )
              goto LABEL_238;
            goto LABEL_222;
          }
          v10 = -1073741811;
          goto LABEL_206;
        }
LABEL_288:
        v10 = -1073741801;
        goto LABEL_238;
      }
    }
    else
    {
      v42 = 0;
    }
    v133 = ((__int64 (__fastcall *)(UNICODE_STRING *, _DWORD *, _QWORD, _QWORD, unsigned int *))qword_140861460)(
             &DestinationString,
             v166,
             0LL,
             0LL,
             &Size);
    v165 = v133;
    v44 = v133;
    if ( v133 == -1073741789 )
    {
      v134 = Size;
      if ( v41 < Size )
      {
        v42 = 0;
        if ( v41 )
          goto LABEL_99;
LABEL_247:
        v165 = 0;
        v44 = 0;
        if ( !v42 )
          goto LABEL_99;
        goto LABEL_94;
      }
    }
    else
    {
      if ( v133 < 0 )
      {
        v10 = v133;
        goto LABEL_238;
      }
      v134 = Size;
      if ( Size )
      {
        v10 = -2147418113;
        goto LABEL_238;
      }
      v42 = 0;
    }
    v41 = v134;
    goto LABEL_247;
  }
  return (unsigned int)v10;
}
