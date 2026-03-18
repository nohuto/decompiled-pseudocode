/*
 * XREFs of SPCallServerHandleQueryPolicy @ 0x140536700
 * Callers:
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     KeQueryTimeIncrement @ 0x1400B5AF0 (KeQueryTimeIncrement.c)
 *     StringCbLengthW @ 0x1400E3518 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleQueryPolicy(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int *v7; // rcx
  unsigned int *v8; // rax
  unsigned int m; // r8d
  __int64 v10; // r9
  unsigned int *v11; // rdx
  unsigned int v12; // edx
  __int64 *v13; // r8
  int v14; // r9d
  unsigned int i; // r8d
  __int64 v16; // rax
  unsigned int *v17; // rdx
  size_t v18; // rdx
  const wchar_t *v19; // r11
  signed int v20; // ebx
  __int64 v21; // rdi
  void *v22; // r11
  WCHAR *v23; // rax
  const WCHAR *v24; // rdi
  unsigned int *v25; // rcx
  unsigned int *v26; // rax
  unsigned int j; // r8d
  __int64 v28; // r9
  unsigned int *v29; // rdx
  unsigned int v30; // edx
  int *v31; // r8
  unsigned int k; // r8d
  __int64 v33; // rax
  unsigned int *v34; // rdx
  unsigned int v35; // eax
  unsigned int *v36; // rdx
  unsigned int v37; // r14d
  int v38; // ebx
  void *v39; // rdi
  int v40; // eax
  int v41; // edi
  int v42; // eax
  unsigned int v43; // r15d
  unsigned int v44; // eax
  unsigned int v45; // esi
  unsigned int v46; // eax
  unsigned int v47; // ecx
  int v48; // r9d
  int v49; // r8d
  unsigned int v50; // edx
  unsigned int v51; // ecx
  unsigned int v52; // eax
  int v53; // r13d
  int v54; // r12d
  __int64 v55; // rbx
  __int64 v56; // r15
  unsigned int v57; // r13d
  _DWORD *PoolWithTag; // rax
  __int64 v59; // rsi
  int v60; // edi
  unsigned int v61; // r11d
  unsigned __int64 v62; // r9
  int v63; // r12d
  unsigned int v64; // ecx
  unsigned __int64 v65; // rdx
  unsigned int v66; // r10d
  __int64 v67; // xmm0_8
  __int64 v68; // r11
  int v69; // edi
  unsigned int v70; // r8d
  _DWORD *v71; // rdx
  unsigned int v72; // r9d
  __int64 v73; // r11
  unsigned int *v74; // rdx
  unsigned int v75; // r8d
  unsigned int v76; // r9d
  __int64 v77; // r11
  int v78; // edi
  _DWORD *v79; // rdx
  unsigned int v80; // r8d
  unsigned int v81; // r9d
  __int64 v82; // r11
  _DWORD *v83; // rdx
  unsigned int v84; // r8d
  unsigned int v85; // r9d
  int v87; // eax
  unsigned int v88; // eax
  NTSTATUS v89; // eax
  int v90; // ebx
  int v91; // eax
  __int64 v92; // rbx
  __int64 v93; // rcx
  unsigned __int64 v94; // r15
  int v95; // ebx
  NTSTATUS v96; // eax
  unsigned int v97; // r8d
  unsigned int *v98; // rdx
  unsigned int v99; // eax
  unsigned int v100; // edx
  int v101; // eax
  unsigned int v102; // ecx
  unsigned int v103; // edx
  int v104; // eax
  unsigned int v105; // ecx
  int v106; // eax
  int v107; // ecx
  unsigned int v108; // edx
  int v109; // eax
  unsigned int v110; // ecx
  unsigned int v111; // edx
  int v112; // eax
  unsigned int v113; // ecx
  unsigned int v114; // ecx
  unsigned int v115; // eax
  PVOID P; // [rsp+30h] [rbp-D0h]
  _DWORD v117[2]; // [rsp+3Ch] [rbp-C4h] BYREF
  int v118; // [rsp+44h] [rbp-BCh]
  int v119; // [rsp+48h] [rbp-B8h] BYREF
  int v120; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v121; // [rsp+50h] [rbp-B0h]
  unsigned int v122; // [rsp+54h] [rbp-ACh]
  int v123; // [rsp+58h] [rbp-A8h] BYREF
  int v124; // [rsp+5Ch] [rbp-A4h] BYREF
  int v125; // [rsp+60h] [rbp-A0h] BYREF
  int v126; // [rsp+64h] [rbp-9Ch] BYREF
  int v127; // [rsp+68h] [rbp-98h] BYREF
  int v128; // [rsp+6Ch] [rbp-94h] BYREF
  int v129; // [rsp+70h] [rbp-90h]
  PCWSTR SourceString; // [rsp+78h] [rbp-88h]
  HANDLE KeyHandle; // [rsp+80h] [rbp-80h] BYREF
  __int64 v132; // [rsp+88h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  char v134[4]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v135; // [rsp+A4h] [rbp-5Ch]
  unsigned int v136; // [rsp+A8h] [rbp-58h]
  unsigned int v137; // [rsp+ACh] [rbp-54h]
  unsigned int v138; // [rsp+B0h] [rbp-50h]
  size_t pcbLength; // [rsp+B8h] [rbp-48h] BYREF
  void *Src; // [rsp+C0h] [rbp-40h]
  LARGE_INTEGER Timeout; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v142; // [rsp+D0h] [rbp-30h]
  __int64 v143; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING v144; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v145; // [rsp+F0h] [rbp-10h] BYREF
  int v146; // [rsp+F8h] [rbp-8h]

  SourceString = 0LL;
  v120 = 0;
  v132 = a4;
  v117[0] = 0;
  P = 0LL;
  Timeout.QuadPart = 0LL;
  if ( !a1 || !a2 || !a4 )
    return 3221225485LL;
  v7 = *(unsigned int **)(a1 + 8);
  if ( !v7 )
  {
    v14 = -1073741811;
    goto LABEL_15;
  }
  if ( *(_DWORD *)a1 <= 3u )
  {
    v14 = -1073741811;
LABEL_15:
    if ( v14 < 0 )
      return (unsigned int)v14;
    if ( v7 )
    {
      if ( *(_DWORD *)a1 > 4u )
      {
        for ( i = 0; i < 4; ++i )
        {
          v16 = *v7;
          v17 = v7 + 1;
          if ( v7 + 1 < v7 )
            goto LABEL_191;
          v7 = (unsigned int *)((char *)v17 + v16);
          if ( (unsigned int *)((char *)v17 + v16) < v17 )
            goto LABEL_191;
        }
        v18 = *v7;
        v19 = (const wchar_t *)(v7 + 1);
        if ( v7 + 1 < v7 )
        {
LABEL_191:
          v20 = -1073741675;
          goto LABEL_31;
        }
        if ( !(_DWORD)v18 )
          v19 = 0LL;
        v20 = 0;
        if ( (_DWORD)v18 )
        {
          if ( (v18 & 1) != 0 )
          {
            v20 = -1073741762;
          }
          else
          {
            v21 = *v7;
            if ( v19[(v18 >> 1) - 1] )
            {
              v20 = -1073741762;
            }
            else if ( StringCbLengthW(v19, v18, &pcbLength) < 0 )
            {
              v20 = -1073741762;
            }
            else
            {
              if ( pcbLength + 2 == v21 )
              {
                v121 = pcbLength >> 1;
                Src = v22;
                goto LABEL_31;
              }
              v20 = -1073741762;
            }
          }
        }
        else
        {
          v20 = -1073741762;
        }
LABEL_35:
        if ( v20 < 0 )
          goto LABEL_164;
        v25 = *(unsigned int **)(a1 + 8);
        if ( v25 )
        {
          if ( *(_DWORD *)a1 > 5u )
          {
            v26 = *(unsigned int **)(a1 + 8);
            for ( j = 0; j < 5; ++j )
            {
              v28 = *v26;
              v29 = v26 + 1;
              if ( v26 + 1 < v26 )
                goto LABEL_197;
              v26 = (unsigned int *)((char *)v29 + v28);
              if ( (unsigned int *)((char *)v29 + v28) < v29 )
                goto LABEL_197;
            }
            v30 = *v26;
            v31 = (int *)(v26 + 1);
            if ( v26 + 1 < v26 )
            {
LABEL_197:
              v20 = -1073741675;
              goto LABEL_47;
            }
            if ( !v30 )
              v31 = 0LL;
            v20 = 0;
            if ( v30 == 4 )
            {
              v129 = *v31;
              goto LABEL_47;
            }
            v20 = -1073741789;
            goto LABEL_164;
          }
          v20 = -1073741811;
        }
        else
        {
          v20 = -1073741811;
        }
LABEL_47:
        if ( v20 < 0 )
          goto LABEL_164;
        if ( v25 )
        {
          if ( *(_DWORD *)a1 > 6u )
          {
            for ( k = 0; k < 6; ++k )
            {
              v33 = *v25;
              v34 = v25 + 1;
              if ( v25 + 1 < v25 )
                goto LABEL_201;
              v25 = (unsigned int *)((char *)v34 + v33);
              if ( (unsigned int *)((char *)v34 + v33) < v34 )
                goto LABEL_201;
            }
            v35 = *v25;
            v36 = v25 + 1;
            if ( v25 + 1 < v25 )
            {
LABEL_201:
              v20 = -1073741675;
              goto LABEL_202;
            }
            if ( !v35 )
              v36 = 0LL;
            v20 = 0;
            if ( v35 == 4 )
            {
              v37 = *v36;
              goto LABEL_59;
            }
            v20 = -1073741789;
            goto LABEL_164;
          }
          v20 = -1073741811;
        }
        else
        {
          v20 = -1073741811;
        }
LABEL_202:
        v37 = v117[1];
LABEL_59:
        if ( v20 < 0 )
          goto LABEL_164;
        RtlInitUnicodeString(&DestinationString, SourceString);
        if ( v37 )
        {
          v38 = 1;
          if ( v37 <= 0x100000 )
            goto LABEL_62;
        }
        else
        {
          v38 = 0;
        }
        v87 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, _QWORD, _QWORD, _DWORD *))qword_1407F3448)(
                &DestinationString,
                &v120,
                0LL,
                0LL,
                v117);
        v41 = v87;
        if ( v87 == -1073741789 )
        {
          v88 = v117[0];
          if ( v37 < v117[0] )
          {
            if ( !v37 )
              v41 = 0;
            goto LABEL_67;
          }
        }
        else
        {
          if ( v87 < 0 )
          {
            v20 = v87;
            goto LABEL_164;
          }
          v88 = v117[0];
          if ( v117[0] )
          {
            v20 = -2147418113;
            goto LABEL_164;
          }
          v38 = 0;
        }
        v37 = v88;
        v41 = 0;
        if ( !v38 )
          goto LABEL_67;
LABEL_62:
        P = ExAllocatePoolWithTag(PagedPool, v37, 0x20534C53u);
        v39 = P;
        if ( !P )
        {
          v20 = -1073741801;
          goto LABEL_165;
        }
        v40 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, PVOID, _QWORD, _DWORD *))qword_1407F3448)(
                &DestinationString,
                &v120,
                P,
                v37,
                v117);
        v41 = v40;
        if ( v40 != -1073741789 )
        {
          v20 = v40;
          if ( v40 < 0 )
            goto LABEL_164;
        }
        if ( v37 >= v117[0] )
          v37 = v117[0];
LABEL_67:
        v42 = 8;
        v43 = v37 + 4;
        if ( v37 >= 0xFFFFFFFC )
        {
          v20 = -1073741675;
        }
        else
        {
          v42 = v37 + 4;
          v20 = 0;
        }
        if ( v20 < 0 )
        {
          v45 = v122;
        }
        else
        {
          v44 = v42 + 28;
          if ( v44 < 0x1C )
            goto LABEL_291;
          if ( v44 + 8 < v44 )
            goto LABEL_291;
          v45 = v44 + 16;
          if ( v44 + 16 < v44 + 8 )
            goto LABEL_291;
          v20 = 0;
        }
        if ( v20 < 0 )
          goto LABEL_164;
        if ( v45 >= 0xFFFFFFF8 )
        {
LABEL_291:
          v20 = -1073741675;
          goto LABEL_164;
        }
        v46 = (v45 + 15) & 0xFFFFFFF8;
        if ( v46 < v45 + 8 )
        {
          v47 = v122;
          v20 = -1073741675;
        }
        else
        {
          v47 = v46 + 8;
          if ( v46 + 8 < v46 )
            goto LABEL_212;
          v20 = 0;
        }
        if ( v20 < 0 )
          goto LABEL_164;
        v48 = *(_DWORD *)(a2 + 32);
        v49 = *(_DWORD *)(a2 + 16);
        if ( v47 < 0xFFFFFFFC )
        {
          v50 = v47 + 8;
          if ( v47 + 8 >= v47 + 4 )
          {
            v51 = v50 + v49;
            if ( v50 + v49 >= v50 )
            {
              v52 = v51 + 4;
              if ( v51 + 4 >= v51 && v52 + v48 >= v52 )
              {
                v20 = 0;
                v121 = v52 + v48;
                goto LABEL_86;
              }
            }
          }
        }
LABEL_212:
        v20 = -1073741675;
LABEL_86:
        if ( v20 < 0 )
          goto LABEL_164;
        if ( a3 >= v121 && v41 >= 0 )
        {
          v53 = 0;
          if ( DestinationString.Length == ::DestinationString.Length
            && !memcmp(DestinationString.Buffer, ::DestinationString.Buffer, ::DestinationString.Length) )
          {
            v53 = dword_1407F3100;
            v54 = 1;
          }
          else
          {
            v54 = 0;
          }
          v55 = MEMORY[0xFFFFF78000000320];
          v56 = v55 * KeQueryTimeIncrement() / 10000;
          if ( (unsigned __int64)(v56 - g_qwSystemInitTime) >= 0xA4CBFB || v54 )
          {
            v89 = KeWaitForSingleObject(&stru_14035AB40, UserRequest, 1, 0, &Timeout);
            if ( v89 >= 0 && v89 != 192 && v89 != 258 )
            {
              v90 = 1;
              v118 = 1;
              RtlInitUnicodeString(&v144, L"Security-SPP-GenuineLocalStatus");
              v91 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, int *, __int64, char *))qword_1407F3448)(
                      &v144,
                      &v126,
                      &v127,
                      4LL,
                      v134);
              if ( v91 == -1073741772 || v91 >= 0 && (v126 != 4 || !v127) )
              {
                v90 = 0;
                v118 = 0;
              }
              if ( g_ulOldGenuineState != v90 )
              {
                if ( v90 )
                {
                  KeResetEvent(&stru_14035AB20);
                }
                else
                {
                  v92 = MEMORY[0xFFFFF78000000320];
                  v93 = v92 * KeQueryTimeIncrement();
                  v90 = v118;
                  qword_1407F3130 = v93 / 10000;
                }
              }
              v94 = v56 - qword_1407F3130;
              g_ulOldGenuineState = v90;
              if ( !v90 && (v94 >= 0xADF4FC || v54) && dword_1407F3198 )
              {
                KeSetEvent(&stru_14035AB20, 1, 0);
                v95 = dword_1407F30AC;
                if ( !dword_1407F30AC )
                {
                  v123 = 4;
                  v128 = 0;
                  KeyHandle = 0LL;
                  v96 = ZwOpenKey(&KeyHandle, 1u, &stru_1407F3768);
                  if ( v96 < 0 )
                  {
                    v96 = ((__int64 (__fastcall *)(wchar_t *, int *, int *, __int64, int *))qword_1407F3448)(
                            aBd,
                            &v123,
                            &v119,
                            4LL,
                            &v128);
                    v95 = v119;
                  }
                  else
                  {
                    v95 = 3;
                    v119 = 3;
                  }
                  if ( v96 < 0 || v123 != 4 || (unsigned int)(v95 - 1) > 2 )
                  {
                    v95 = 1;
                    v119 = 1;
                  }
                  if ( KeyHandle )
                    ZwClose(KeyHandle);
                }
                v124 = 0;
                v145 = 0LL;
                v146 = 0;
                v125 = 0;
                if ( (int)((__int64 (__fastcall *)(wchar_t *, int *, __int64 *, __int64, int *))qword_1407F3448)(
                            aLn,
                            &v124,
                            &v145,
                            12LL,
                            &v125) >= 0
                  && v124 == 3
                  && v125 == 12 )
                {
                  v97 = 0;
                  v98 = (unsigned int *)&v145;
                  while ( 1 )
                  {
                    v99 = *v98;
                    if ( (*v98 & 0xF) == v95 )
                      break;
                    ++v97;
                    ++v98;
                    if ( v97 >= 3 )
                      goto LABEL_247;
                  }
                }
                else
                {
LABEL_247:
                  v99 = dword_1407F3060 & 0xFFFF0000 | 0x3211;
                }
                dword_1407F3060 = v99;
                if ( v129 || v53 )
                {
                  v57 = v99;
                  v43 = v37 + 4;
LABEL_95:
                  *(_DWORD *)(v132 + 4) = v45;
                  if ( !v45 )
                  {
                    v20 = -1073741762;
                    goto LABEL_164;
                  }
                  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v45, 0x20534C53u);
                  if ( !PoolWithTag )
                  {
                    v20 = -1073741801;
                    goto LABEL_164;
                  }
                  v59 = v132;
                  *(_QWORD *)(v132 + 8) = PoolWithTag;
                  *(_DWORD *)v59 = 0;
                  v60 = v41 | 0x10000000;
                  if ( PoolWithTag + 1 < PoolWithTag )
                    goto LABEL_291;
                  if ( PoolWithTag + 2 > (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(v59 + 4)) )
                  {
                    v20 = -1073741789;
                    goto LABEL_164;
                  }
                  *PoolWithTag = 4;
                  PoolWithTag[1] = v60;
                  v61 = ++*(_DWORD *)v59;
                  v62 = *(_QWORD *)(v59 + 8);
                  v63 = -1;
                  v143 = v142;
                  if ( v62 )
                  {
                    v64 = 0;
                    v65 = v62;
                    if ( v61 )
                    {
                      v66 = v135;
                      do
                      {
                        if ( *(_DWORD *)v65 >= 0xFFFFFFFC )
                        {
                          v20 = -1073741675;
                        }
                        else
                        {
                          v66 = *(_DWORD *)v65 + 4;
                          v20 = 0;
                        }
                        if ( v20 < 0 )
                          goto LABEL_164;
                        if ( v65 + v66 < v65 )
                          goto LABEL_291;
                        ++v64;
                        v65 += v66;
                      }
                      while ( v64 < v61 );
                    }
                    if ( v65 + 4 < v65 )
                      goto LABEL_291;
                    v20 = 0;
                    if ( v65 + 12 > v62 + *(unsigned int *)(v59 + 4) )
                    {
                      v20 = -1073741789;
                      goto LABEL_164;
                    }
                    v67 = v143;
                    *(_DWORD *)v65 = 8;
                    *(_QWORD *)(v65 + 4) = v67;
                    ++*(_DWORD *)v59;
                  }
                  else
                  {
                    v100 = *(_DWORD *)(v59 + 4);
                    v101 = -1;
                    v102 = v100 + 12;
                    if ( v100 + 12 >= v100 )
                      v101 = v100 + 12;
                    v20 = v102 < v100 ? 0xC0000095 : 0;
                    *(_DWORD *)(v59 + 4) = v101;
                    if ( v102 >= v100 )
                    {
                      ++*(_DWORD *)v59;
                      goto LABEL_111;
                    }
                  }
                  if ( v20 < 0 )
                    goto LABEL_164;
LABEL_111:
                  v68 = *(_QWORD *)(v59 + 8);
                  v69 = v120;
                  if ( v68 )
                  {
                    v70 = 0;
                    v71 = *(_DWORD **)(v59 + 8);
                    if ( *(_DWORD *)v59 )
                    {
                      v72 = v136;
                      do
                      {
                        if ( *v71 >= 0xFFFFFFFC )
                        {
                          v20 = -1073741675;
                        }
                        else
                        {
                          v72 = *v71 + 4;
                          v20 = 0;
                        }
                        if ( v20 < 0 )
                          goto LABEL_164;
                        if ( (_DWORD *)((char *)v71 + v72) < v71 )
                          goto LABEL_291;
                        ++v70;
                        v71 = (_DWORD *)((char *)v71 + v72);
                      }
                      while ( v70 < *(_DWORD *)v59 );
                    }
                    if ( v71 + 1 < v71 )
                      goto LABEL_291;
                    v20 = 0;
                    if ( (unsigned __int64)(v71 + 2) > v68 + (unsigned __int64)*(unsigned int *)(v59 + 4) )
                    {
                      v20 = -1073741789;
                      goto LABEL_164;
                    }
                    *v71 = 4;
                    v71[1] = v69;
                    ++*(_DWORD *)v59;
                  }
                  else
                  {
                    v103 = *(_DWORD *)(v59 + 4);
                    v104 = -1;
                    v105 = v103 + 8;
                    if ( v103 + 8 >= v103 )
                      v104 = v103 + 8;
                    v20 = v105 < v103 ? 0xC0000095 : 0;
                    *(_DWORD *)(v59 + 4) = v104;
                    if ( v105 >= v103 )
                    {
                      ++*(_DWORD *)v59;
                      goto LABEL_123;
                    }
                  }
                  if ( v20 < 0 )
                    goto LABEL_164;
LABEL_123:
                  v39 = P;
                  if ( P )
                  {
                    if ( v37 )
                      goto LABEL_125;
                  }
                  else if ( !v37 )
                  {
LABEL_125:
                    v73 = *(_QWORD *)(v59 + 8);
                    if ( v73 )
                    {
                      v74 = *(unsigned int **)(v59 + 8);
                      v75 = 0;
                      if ( *(_DWORD *)v59 )
                      {
                        v76 = v122;
                        do
                        {
                          if ( *v74 >= 0xFFFFFFFC )
                          {
                            v20 = -1073741675;
                          }
                          else
                          {
                            v76 = *v74 + 4;
                            v20 = 0;
                          }
                          if ( v20 < 0 )
                            goto LABEL_165;
                          if ( (unsigned int *)((char *)v74 + v76) < v74 )
                            goto LABEL_275;
                          ++v75;
                          v74 = (unsigned int *)((char *)v74 + v76);
                        }
                        while ( v75 < *(_DWORD *)v59 );
                      }
                      if ( v74 + 1 < v74 )
                      {
LABEL_275:
                        v20 = -1073741675;
                        goto LABEL_165;
                      }
                      v20 = 0;
                      if ( (unsigned __int64)v74 + v37 + 4 > v73 + (unsigned __int64)*(unsigned int *)(v59 + 4) )
                      {
                        v20 = -1073741789;
                        goto LABEL_165;
                      }
                      *v74 = v37;
                      if ( P )
                        memmove(v74 + 1, P, v37);
                      ++*(_DWORD *)v59;
                    }
                    else
                    {
                      v106 = -1;
                      if ( v43 >= 4 )
                        v106 = v43;
                      v20 = v43 < 4 ? 0xC0000095 : 0;
                      if ( v43 >= 4 )
                      {
                        v107 = v106;
                        v108 = *(_DWORD *)(v59 + 4);
                        v109 = -1;
                        v110 = v108 + v107;
                        if ( v110 >= v108 )
                          v109 = v110;
                        v20 = v110 < v108 ? 0xC0000095 : 0;
                        *(_DWORD *)(v59 + 4) = v109;
                        if ( v110 >= v108 )
                        {
                          ++*(_DWORD *)v59;
                          goto LABEL_139;
                        }
                      }
                    }
LABEL_138:
                    if ( v20 < 0 )
                    {
LABEL_165:
                      if ( SourceString )
                        ExFreePoolWithTag((PVOID)SourceString, 0x20534C53u);
                      if ( v39 )
                        ExFreePoolWithTag(v39, 0x20534C53u);
                      return (unsigned int)v20;
                    }
LABEL_139:
                    v77 = *(_QWORD *)(v59 + 8);
                    v78 = v117[0];
                    if ( v77 )
                    {
                      v79 = *(_DWORD **)(v59 + 8);
                      v80 = 0;
                      if ( *(_DWORD *)v59 )
                      {
                        v81 = v137;
                        do
                        {
                          if ( *v79 >= 0xFFFFFFFC )
                          {
                            v20 = -1073741675;
                          }
                          else
                          {
                            v81 = *v79 + 4;
                            v20 = 0;
                          }
                          if ( v20 < 0 )
                            goto LABEL_164;
                          if ( (_DWORD *)((char *)v79 + v81) < v79 )
                            goto LABEL_291;
                          ++v80;
                          v79 = (_DWORD *)((char *)v79 + v81);
                        }
                        while ( v80 < *(_DWORD *)v59 );
                      }
                      if ( v79 + 1 < v79 )
                        goto LABEL_291;
                      v20 = 0;
                      if ( (unsigned __int64)(v79 + 2) > v77 + (unsigned __int64)*(unsigned int *)(v59 + 4) )
                      {
                        v20 = -1073741789;
                        goto LABEL_164;
                      }
                      *v79 = 4;
                      v79[1] = v78;
                      ++*(_DWORD *)v59;
                    }
                    else
                    {
                      v111 = *(_DWORD *)(v59 + 4);
                      v112 = -1;
                      v113 = v111 + 8;
                      if ( v111 + 8 >= v111 )
                        v112 = v111 + 8;
                      v20 = v113 < v111 ? 0xC0000095 : 0;
                      *(_DWORD *)(v59 + 4) = v112;
                      if ( v113 >= v111 )
                      {
                        ++*(_DWORD *)v59;
LABEL_151:
                        v82 = *(_QWORD *)(v59 + 8);
                        if ( !v82 )
                        {
                          v114 = *(_DWORD *)(v59 + 4);
                          v115 = v114 + 8;
                          if ( v114 + 8 >= v114 )
                            v63 = v114 + 8;
                          v20 = v115 < v114 ? 0xC0000095 : 0;
                          *(_DWORD *)(v59 + 4) = v63;
                          if ( v115 >= v114 )
                          {
                            ++*(_DWORD *)v59;
                            goto LABEL_163;
                          }
                          goto LABEL_162;
                        }
                        v83 = *(_DWORD **)(v59 + 8);
                        v84 = 0;
                        if ( *(_DWORD *)v59 )
                        {
                          v85 = v138;
                          do
                          {
                            if ( *v83 >= 0xFFFFFFFC )
                            {
                              v20 = -1073741675;
                            }
                            else
                            {
                              v85 = *v83 + 4;
                              v20 = 0;
                            }
                            if ( v20 < 0 )
                              goto LABEL_164;
                            if ( (_DWORD *)((char *)v83 + v85) < v83 )
                              goto LABEL_291;
                            ++v84;
                            v83 = (_DWORD *)((char *)v83 + v85);
                          }
                          while ( v84 < *(_DWORD *)v59 );
                        }
                        if ( v83 + 1 >= v83 )
                        {
                          v20 = 0;
                          if ( (unsigned __int64)(v83 + 2) > v82 + (unsigned __int64)*(unsigned int *)(v59 + 4) )
                          {
                            v20 = -1073741789;
                            goto LABEL_164;
                          }
                          *v83 = 4;
                          v83[1] = v57;
                          ++*(_DWORD *)v59;
LABEL_162:
                          if ( v20 >= 0 )
LABEL_163:
                            v20 = 0;
LABEL_164:
                          v39 = P;
                          goto LABEL_165;
                        }
                        goto LABEL_291;
                      }
                    }
                    if ( v20 < 0 )
                      goto LABEL_164;
                    goto LABEL_151;
                  }
                  v20 = -1073741811;
                  goto LABEL_138;
                }
              }
              KeReleaseMutex(&stru_14035AB40, 0);
            }
          }
          v43 = v37 + 4;
        }
        v57 = 0;
        goto LABEL_95;
      }
      v20 = -1073741811;
    }
    else
    {
      v20 = -1073741811;
    }
LABEL_31:
    if ( v20 >= 0 )
    {
      if ( 2 * v121 == -2 )
      {
        v20 = -1073741762;
      }
      else
      {
        v23 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 2 * v121 + 2, 0x20534C53u);
        v24 = v23;
        if ( v23 )
        {
          v20 = 0;
          memmove(v23, Src, 2 * v121 + 2);
          SourceString = v24;
        }
        else
        {
          v20 = -1073741801;
        }
      }
    }
    goto LABEL_35;
  }
  v8 = *(unsigned int **)(a1 + 8);
  for ( m = 0; m < 3; ++m )
  {
    v10 = *v8;
    v11 = v8 + 1;
    if ( v8 + 1 < v8 )
      goto LABEL_183;
    v8 = (unsigned int *)((char *)v11 + v10);
    if ( (unsigned int *)((char *)v11 + v10) < v11 )
      goto LABEL_183;
  }
  v12 = *v8;
  v13 = (__int64 *)(v8 + 1);
  if ( v8 + 1 < v8 )
  {
LABEL_183:
    v14 = -1073741675;
    goto LABEL_15;
  }
  if ( !v12 )
    v13 = 0LL;
  v14 = 0;
  if ( v12 == 8 )
  {
    v142 = *v13;
    goto LABEL_15;
  }
  return 3221225507LL;
}
