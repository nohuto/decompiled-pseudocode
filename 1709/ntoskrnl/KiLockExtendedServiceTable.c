/*
 * XREFs of KiLockExtendedServiceTable @ 0x1401687E8
 * Callers:
 *     KiLockServiceTable @ 0x14013A410 (KiLockServiceTable.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140083FA0 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     RtlpConvertFunctionEntry @ 0x14011D3F0 (RtlpConvertFunctionEntry.c)
 *     RtlLookupFunctionTable @ 0x14012B9A0 (RtlLookupFunctionTable.c)
 *     RtlCaptureImageExceptionValues @ 0x14015BE00 (RtlCaptureImageExceptionValues.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall KiLockExtendedServiceTable(ULONG_PTR BugCheckParameter1, ULONG_PTR a2, unsigned int a3, int a4)
{
  ULONG_PTR v4; // rbx
  char v5; // r12
  ULONG_PTR v6; // r13
  signed __int32 SessionId; // r8d
  unsigned __int128 v8; // rax
  unsigned int v9; // r9d
  unsigned __int64 v10; // r11
  ULONG_PTR v11; // rcx
  _QWORD *v12; // r10
  const char *v13; // rax
  unsigned int v14; // r14d
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 *v18; // r10
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  char v21; // al
  int v22; // eax
  unsigned int v23; // r9d
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r14
  _QWORD *v27; // r9
  char v28; // r10
  __int64 v29; // r8
  unsigned int v30; // r11d
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 *v33; // r9
  __int64 v34; // r8
  unsigned __int64 v35; // rcx
  char v36; // al
  unsigned int v37; // ebx
  unsigned __int64 v38; // rdx
  ULONG_PTR v39; // rbx
  __int64 v40; // rax
  void *v41; // rcx
  char v42; // r12
  PIMAGE_NT_HEADERS v43; // rax
  __int64 NumberOfSections; // rcx
  __int64 v45; // r13
  char *v46; // r10
  int v47; // r11d
  int v48; // ecx
  __int16 v49; // ax
  int v50; // r9d
  char *v51; // rdx
  char v52; // cl
  char v53; // al
  char *v54; // r8
  unsigned int v55; // edx
  char *v56; // r9
  __int64 v57; // rcx
  __int64 v58; // rax
  char v59; // cl
  char v60; // al
  char *v61; // rdx
  int v62; // r9d
  char v63; // cl
  char v64; // al
  char *v65; // rdx
  int v66; // r9d
  char v67; // cl
  char v68; // al
  unsigned int v69; // r9d
  _QWORD *v70; // r14
  unsigned __int64 v71; // rcx
  _QWORD *v72; // r11
  const char *v73; // rax
  ULONG_PTR v74; // r8
  unsigned int v75; // r15d
  __int64 v76; // rax
  ULONG_PTR v77; // r8
  _QWORD *v78; // r11
  __int64 v79; // r8
  ULONG_PTR v80; // rcx
  char v81; // al
  int v82; // eax
  unsigned int v83; // r9d
  unsigned __int64 v84; // rax
  __int64 v85; // rax
  int v86; // edx
  __int64 Size; // rcx
  __int64 VirtualAddress; // rax
  __int64 v89; // r15
  __int64 v90; // r14
  __int64 v91; // rax
  unsigned __int64 v92; // r12
  __int64 *v93; // rax
  __int64 v94; // rcx
  unsigned __int64 v95; // r14
  unsigned __int64 v96; // r13
  __int64 v97; // rbx
  unsigned __int64 v98; // r8
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rcx
  unsigned int v102; // r9d
  _QWORD *v103; // r12
  unsigned __int64 v104; // rcx
  char v105; // r15
  _QWORD *v106; // r10
  const char *v107; // rax
  __int64 *v108; // r8
  unsigned int v109; // r11d
  __int64 v110; // rax
  unsigned __int64 v111; // r8
  _QWORD *v112; // r10
  __int64 v113; // r8
  unsigned __int64 v114; // rcx
  char v115; // al
  int v116; // eax
  unsigned int v117; // r9d
  unsigned __int64 v118; // rax
  __int64 v119; // rax
  unsigned __int64 v120; // rax
  signed __int32 v122[6]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v123; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v124; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v125; // [rsp+48h] [rbp-C0h]
  char *v126; // [rsp+50h] [rbp-B8h]
  __int64 v127; // [rsp+58h] [rbp-B0h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A8h]
  __int64 v129; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v130; // [rsp+70h] [rbp-98h] BYREF
  char *v131; // [rsp+78h] [rbp-90h]
  PIMAGE_NT_HEADERS v132; // [rsp+80h] [rbp-88h]
  unsigned int *v133; // [rsp+88h] [rbp-80h] BYREF
  __int128 v134; // [rsp+90h] [rbp-78h]
  __int128 v135; // [rsp+A0h] [rbp-68h]
  __int64 v136; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v137; // [rsp+D0h] [rbp-38h]
  __int64 v138; // [rsp+D8h] [rbp-30h]
  __int64 *v139; // [rsp+E0h] [rbp-28h]
  __int64 v140; // [rsp+108h] [rbp+0h]
  __int64 v141; // [rsp+110h] [rbp+8h]
  __int64 v142; // [rsp+118h] [rbp+10h]
  char v145; // [rsp+180h] [rbp+78h]
  int v146; // [rsp+180h] [rbp+78h]

  v145 = a4;
  v4 = a3;
  v5 = a4;
  v6 = BugCheckParameter1;
  if ( a4 )
  {
    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    if ( dword_1403566D8 == SessionId
      || (*(_QWORD *)&v8 = (unsigned int)_InterlockedCompareExchange(&dword_1403566D8, SessionId, -1), (_DWORD)v8 == -1) )
    {
      v9 = 4 * v4;
      v10 = ((unsigned __int64)&qword_140359D38 ^ qword_140359D40) & 0x3F;
      v11 = v6 + (unsigned int)(4 * v4);
      v12 = (_QWORD *)v6;
      v13 = (const char *)v6;
      if ( v6 < v11 )
      {
        do
        {
          _mm_prefetch(v13, 0);
          v13 += 64;
        }
        while ( (unsigned __int64)v13 < v11 );
      }
      v14 = v9 >> 7;
      v15 = (unsigned __int64)&qword_140359D38 ^ qword_140359D40;
      if ( v9 >> 7 )
      {
        do
        {
          v16 = 8LL;
          do
          {
            v17 = v15 ^ *v12;
            v18 = v12 + 1;
            v19 = *v18;
            v12 = v18 + 1;
            v15 = __ROL8__(__ROL8__(v17, v10) ^ v19, v10);
            --v16;
          }
          while ( v16 );
          v20 = __ROL8__((unsigned __int64)&qword_140359D38 ^ qword_140359D40 ^ ((unsigned __int64)v12 - v6), 17) ^ (unsigned __int64)&qword_140359D38 ^ qword_140359D40 ^ ((unsigned __int64)v12 - v6);
          v140 = (v20 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v21 = v10 ^ v140 ^ v20;
          LOBYTE(v10) = 1;
          v22 = v21 & 0x3F;
          if ( v22 )
            LOBYTE(v10) = v22;
          --v14;
        }
        while ( v14 );
        v5 = v145;
      }
      v23 = v9 & 0x7F;
      if ( v23 >= 8 )
      {
        v24 = (unsigned __int64)v23 >> 3;
        do
        {
          v15 = __ROL8__(*v12++ ^ v15, v10);
          v23 -= 8;
          --v24;
        }
        while ( v24 );
      }
      for ( ; v23; --v23 )
      {
        v25 = *(unsigned __int8 *)v12;
        v12 = (_QWORD *)((char *)v12 + 1);
        v15 = __ROL8__(v25 ^ v15, v10);
      }
      v26 = v15 ^ qword_140359D38;
      BugCheckParameter3 = v4;
      v27 = (_QWORD *)a2;
      v28 = (v15 ^ qword_140359D38) & 0x3F;
      *(_QWORD *)&v8 = a2;
      if ( a2 < a2 + v4 )
      {
        do
        {
          _mm_prefetch((const char *)v8, 0);
          *(_QWORD *)&v8 = v8 + 64;
        }
        while ( (unsigned __int64)v8 < a2 + v4 );
      }
      v29 = v15 ^ qword_140359D38;
      v30 = (unsigned int)v4 >> 7;
      if ( (unsigned int)v4 >> 7 )
      {
        do
        {
          v31 = 8LL;
          do
          {
            v32 = v29 ^ *v27;
            v33 = v27 + 1;
            v34 = *v33;
            v27 = v33 + 1;
            v29 = __ROL8__(__ROL8__(v32, v28) ^ v34, v28);
            --v31;
          }
          while ( v31 );
          v35 = __ROL8__(v26 ^ ((unsigned __int64)v27 - a2), 17) ^ v26 ^ ((unsigned __int64)v27 - a2);
          v141 = (v35 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v36 = v28 ^ v141 ^ v35;
          v28 = 1;
          *(_QWORD *)&v8 = v36 & 0x3F;
          if ( (_DWORD)v8 )
            v28 = v8;
          --v30;
        }
        while ( v30 );
        v5 = v145;
        v6 = BugCheckParameter1;
      }
      v37 = v4 & 0x7F;
      if ( v37 >= 8 )
      {
        v38 = (unsigned __int64)v37 >> 3;
        do
        {
          v29 = __ROL8__(*v27++ ^ v29, v28);
          v37 -= 8;
          --v38;
        }
        while ( v38 );
      }
      for ( ; v37; --v37 )
      {
        *(_QWORD *)&v8 = *(unsigned __int8 *)v27;
        v27 = (_QWORD *)((char *)v27 + 1);
        v29 = __ROL8__(v8 ^ v29, v28);
      }
      v39 = v6 ^ v29 ^ BugCheckParameter3;
      if ( (v5 & 2) != 0 )
      {
        qword_140359D40 = v6 ^ v29 ^ BugCheckParameter3;
      }
      else
      {
        if ( !RtlLookupFunctionTable(v6, &v130, &v129) )
          KeBugCheckEx(0x43u, v6, a2, BugCheckParameter3, 0LL);
        v146 = 0;
        qword_140359E40[0] = v130;
        v40 = 0LL;
        v127 = 0LL;
        do
        {
          v41 = (void *)qword_140359E40[v40];
          v124 = (__int64)v41;
          if ( !v41 )
            break;
          v42 = v39 & 0x3F;
          LODWORD(v125) = v39 & 0x3F;
          v43 = RtlImageNtHeader(v41);
          v132 = v43;
          if ( !v43 )
            KeBugCheckEx(0x43u, BugCheckParameter1, a2, BugCheckParameter3, 1uLL);
          NumberOfSections = v43->FileHeader.NumberOfSections;
          v45 = v124;
          v46 = (char *)&v43->OptionalHeader + v43->FileHeader.SizeOfOptionalHeader;
          v126 = v46;
          v131 = &v46[40 * NumberOfSections];
          do
          {
            v47 = 0;
            if ( (*((_DWORD *)v46 + 9) & 0x2000000) != 0
              || (v48 = *(_DWORD *)v46, *(_DWORD *)v46 == 1414090313) && *((_DWORD *)v46 + 1) == 1195525195
              || v48 == 1162297680 && ((v49 = *((_WORD *)v46 + 2), v49 == 30583) || v49 == 29303 || v49 == 30839)
              || v48 == 1095914053 && *((_WORD *)v46 + 2) == 16724 )
            {
LABEL_68:
              v47 = 1;
            }
            else
            {
              v50 = 7;
              v51 = VfExcludeSections[0];
              v134 = *(_OWORD *)VfExcludeSections;
              v135 = *(_OWORD *)off_140356590;
              while ( 1 )
              {
                v52 = v51[v46 - VfExcludeSections[0]];
                v53 = *v51++;
                if ( v52 != v53 )
                  break;
                if ( !--v50 )
                {
LABEL_67:
                  v45 = v124;
                  goto LABEL_68;
                }
              }
              v54 = (char *)*((_QWORD *)&v134 + 1);
              v55 = 8;
              v56 = v46;
              while ( 1 )
              {
                v57 = *(_QWORD *)v56;
                v56 += 8;
                v58 = *(_QWORD *)v54;
                v54 += 8;
                if ( v57 != v58 )
                  break;
                v55 -= 8;
                if ( v55 < 8 )
                {
                  if ( !v55 )
                    goto LABEL_67;
                  while ( 1 )
                  {
                    v59 = *v56++;
                    v60 = *v54++;
                    if ( v59 != v60 )
                      goto LABEL_60;
                    if ( !--v55 )
                      goto LABEL_67;
                  }
                }
              }
LABEL_60:
              v61 = (char *)v135;
              v62 = 4;
              while ( 1 )
              {
                v63 = v46[(_QWORD)v61 - v135];
                v64 = *v61++;
                if ( v63 != v64 )
                  break;
                if ( !--v62 )
                  goto LABEL_67;
              }
              v65 = (char *)*((_QWORD *)&v135 + 1);
              v66 = 6;
              while ( 1 )
              {
                v67 = v46[(_QWORD)v65 - *((_QWORD *)&v135 + 1)];
                v68 = *v65++;
                if ( v67 != v68 )
                  break;
                if ( !--v66 )
                  goto LABEL_67;
              }
              v45 = v124;
            }
            v69 = *((_DWORD *)v46 + 2);
            if ( *((int *)v46 + 9) < 0 )
              v47 = 1;
            if ( *((_DWORD *)v46 + 4) > v69 )
              v69 = *((_DWORD *)v46 + 4);
            if ( !v47 )
            {
              v70 = (_QWORD *)(v45 + *((unsigned int *)v46 + 3));
              v71 = (unsigned __int64)v70 + v69;
              v72 = v70;
              v73 = (const char *)v70;
              if ( (unsigned __int64)v70 < v71 )
              {
                do
                {
                  _mm_prefetch(v73, 0);
                  v73 += 64;
                }
                while ( (unsigned __int64)v73 < v71 );
              }
              v74 = v39;
              v75 = v69 >> 7;
              if ( v69 >> 7 )
              {
                do
                {
                  v76 = 8LL;
                  do
                  {
                    v77 = *v72 ^ v74;
                    v78 = v72 + 1;
                    v79 = *v78 ^ __ROL8__(v77, v42);
                    v72 = v78 + 1;
                    v74 = __ROL8__(v79, v42);
                    --v76;
                  }
                  while ( v76 );
                  v80 = __ROL8__(v39 ^ ((char *)v72 - (char *)v70), 17) ^ v39 ^ ((char *)v72 - (char *)v70);
                  v142 = (v80 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v81 = v42 ^ v142 ^ v80;
                  v42 = 1;
                  v82 = v81 & 0x3F;
                  if ( v82 )
                    v42 = v82;
                  --v75;
                }
                while ( v75 );
                v46 = v126;
              }
              v83 = v69 & 0x7F;
              if ( v83 >= 8 )
              {
                v84 = (unsigned __int64)v83 >> 3;
                do
                {
                  v74 = __ROL8__(*v72++ ^ v74, v42);
                  v83 -= 8;
                  --v84;
                }
                while ( v84 );
              }
              for ( ; v83; --v83 )
              {
                v85 = *(unsigned __int8 *)v72;
                v72 = (_QWORD *)((char *)v72 + 1);
                v74 = __ROL8__(v85 ^ v74, v42);
              }
              v42 = v125;
              v39 = v74;
            }
            v46 += 40;
            v126 = v46;
          }
          while ( v46 != v131 );
          v86 = v146;
          if ( !v146 )
          {
            Size = v132->OptionalHeader.DataDirectory[1].Size;
            if ( (unsigned int)Size >= 0x14 )
            {
              VirtualAddress = v132->OptionalHeader.DataDirectory[1].VirtualAddress;
              v89 = v45 + VirtualAddress + Size;
              v90 = VirtualAddress + v45;
              if ( VirtualAddress + v45 != v89 )
              {
                do
                {
                  if ( !*(_DWORD *)(v90 + 12) )
                    break;
                  v91 = *(unsigned int *)(v90 + 16);
                  if ( !(_DWORD)v91 )
                    break;
                  v92 = *(_QWORD *)(v91 + v45);
                  if ( v92
                    && MmIsSessionAddress(*(_QWORD *)(v91 + v45))
                    && RtlLookupFunctionTable(v92, &v124, (_DWORD *)&v129 + 1) )
                  {
                    v93 = qword_140359E40;
                    v94 = 0LL;
                    while ( *v93 != v124 )
                    {
                      if ( !*v93 )
                      {
                        qword_140359E40[v94] = v124;
                        break;
                      }
                      v94 = (unsigned int)(v94 + 1);
                      ++v93;
                      if ( (unsigned int)v94 >= 0x10 )
                        break;
                    }
                    if ( (_DWORD)v94 == 16 )
                      goto LABEL_109;
                  }
                  v90 += 20LL;
                }
                while ( v90 != v89 );
                v86 = 0;
              }
            }
          }
          v40 = v127 + 1;
          v146 = v86 + 1;
          ++v127;
        }
        while ( (unsigned int)(v86 + 1) < 0x10 );
LABEL_109:
        *(_QWORD *)&v8 = memset(qword_140359E40, 0, sizeof(qword_140359E40));
        if ( v39 == qword_140359D38 || !v39 )
        {
          *(_QWORD *)&v8 = 0x95EA5DE843D5D824uLL;
          v39 ^= 0x95EA5DE843D5D824uLL;
        }
        _InterlockedOr(v122, 0);
        qword_140359D38 = v39;
      }
    }
  }
  else
  {
    v95 = (unsigned __int64)&qword_140359D48;
    v96 = (unsigned __int64)&qword_140359D48 & 0x3F;
    RtlImageNtHeader((PVOID)0x140000000LL);
    RtlCaptureImageExceptionValues(0x140000000uLL, (__int64)&v136, (__int64)&v123);
    v97 = v136;
    v98 = 0x140000000uLL;
    v137 = 0x140000000uLL;
    LODWORD(v123) = (unsigned int)v123 / 0xC;
    v99 = v136 + 12LL * (unsigned int)v123;
    v138 = v99;
    v139 = (__int64 *)&v133;
    while ( v97 && v97 != v99 )
    {
      v100 = RtlpConvertFunctionEntry(v97, v98);
      *v139 = v100;
      v97 = v136 + 12;
      v136 += 12LL;
      v101 = *v133;
      v102 = v133[1] - v101;
      v103 = (_QWORD *)(0x140000000LL + v101);
      v104 = 0x140000000LL + v101 + v102;
      v105 = v96;
      v106 = v103;
      v107 = (const char *)v103;
      if ( (unsigned __int64)v103 < v104 )
      {
        do
        {
          _mm_prefetch(v107, 0);
          v107 += 64;
        }
        while ( (unsigned __int64)v107 < v104 );
      }
      v108 = (__int64 *)v95;
      v109 = v102 >> 7;
      if ( v102 >> 7 )
      {
        do
        {
          v110 = 8LL;
          do
          {
            v111 = *v106 ^ (unsigned __int64)v108;
            v112 = v106 + 1;
            v113 = *v112 ^ __ROL8__(v111, v105);
            v106 = v112 + 1;
            v108 = (__int64 *)__ROL8__(v113, v105);
            --v110;
          }
          while ( v110 );
          v114 = __ROL8__(v95 ^ ((char *)v106 - (char *)v103), 17) ^ v95 ^ ((char *)v106 - (char *)v103);
          v115 = v105 ^ ((v114 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v114;
          v105 = 1;
          v116 = v115 & 0x3F;
          if ( v116 )
            v105 = v116;
          --v109;
        }
        while ( v109 );
        LODWORD(v96) = (unsigned __int64)&qword_140359D48 & 0x3F;
      }
      v117 = v102 & 0x7F;
      if ( v117 >= 8 )
      {
        v118 = (unsigned __int64)v117 >> 3;
        do
        {
          v108 = (__int64 *)__ROL8__(*v106++ ^ (unsigned __int64)v108, v105);
          v117 -= 8;
          --v118;
        }
        while ( v118 );
      }
      for ( ; v117; --v117 )
      {
        v119 = *(unsigned __int8 *)v106;
        v106 = (_QWORD *)((char *)v106 + 1);
        v108 = (__int64 *)__ROL8__(v119 ^ (unsigned __int64)v108, v105);
      }
      v99 = v138;
      v95 = (unsigned __int64)v108;
      v98 = v137;
    }
    qword_140359D48 = v95;
    if ( qword_140359D38 )
      KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, 0LL);
    v120 = __rdtsc();
    v8 = (__ROR8__(v120, 3) ^ v120) * (unsigned __int128)0x7010008004002001uLL;
    qword_140359D38 = v8 ^ *((_QWORD *)&v8 + 1);
    if ( (unsigned __int64)v8 == *((_QWORD *)&v8 + 1) )
    {
      *(_QWORD *)&v8 = 0x95EA5DE843D5D824uLL;
      qword_140359D38 = 0x95EA5DE843D5D824uLL;
    }
  }
  return v8;
}
