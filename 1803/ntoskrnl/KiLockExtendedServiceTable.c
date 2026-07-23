/*
 * XREFs of KiLockExtendedServiceTable @ 0x1401928C8
 * Callers:
 *     KiLockServiceTable @ 0x140169E9C (KiLockServiceTable.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     RtlpConvertFunctionEntry @ 0x1400C1D40 (RtlpConvertFunctionEntry.c)
 *     RtlLookupFunctionTable @ 0x1400CF450 (RtlLookupFunctionTable.c)
 *     MmIsSessionAddress @ 0x140103610 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     RtlCaptureImageExceptionValues @ 0x140186514 (RtlCaptureImageExceptionValues.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
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
  unsigned int v14; // r15d
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
  __int64 v26; // r11
  _QWORD *v27; // r9
  char v28; // r10
  __int64 v29; // r8
  unsigned int v30; // r14d
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
  char v42; // r13
  PIMAGE_NT_HEADERS v43; // rax
  char *v44; // r9
  int v45; // r11d
  int v46; // ecx
  __int16 v47; // ax
  int v48; // r10d
  char *v49; // rdx
  char v50; // cl
  char v51; // al
  char *v52; // r8
  unsigned int v53; // edx
  char *v54; // r10
  __int64 v55; // rcx
  __int64 v56; // rax
  char v57; // cl
  char v58; // al
  char *v59; // rdx
  int v60; // r10d
  char v61; // cl
  char v62; // al
  char *v63; // rdx
  int v64; // r10d
  char v65; // cl
  char v66; // al
  unsigned int v67; // r10d
  char v68; // r14
  _QWORD *v69; // r12
  _QWORD *v70; // r11
  unsigned __int64 v71; // rcx
  const char *v72; // rax
  ULONG_PTR v73; // r8
  unsigned int v74; // r15d
  __int64 v75; // rax
  ULONG_PTR v76; // r8
  _QWORD *v77; // r11
  __int64 v78; // r8
  ULONG_PTR v79; // rcx
  char v80; // al
  int v81; // eax
  unsigned int v82; // r10d
  unsigned __int64 v83; // rax
  ULONG_PTR v84; // rax
  int v85; // edx
  __int64 v86; // r13
  __int64 Size; // rcx
  __int64 VirtualAddress; // rax
  __int64 v89; // r15
  __int64 v90; // r14
  __int64 v91; // rax
  ULONG_PTR v92; // r12
  int v93; // eax
  __int64 *v94; // rax
  __int64 v95; // rcx
  unsigned __int64 v96; // r14
  unsigned __int64 v97; // r13
  __int64 v98; // rbx
  unsigned __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  char v102; // r11
  __int64 v103; // rcx
  unsigned int v104; // r9d
  _QWORD *v105; // r12
  unsigned __int64 v106; // rcx
  _QWORD *v107; // r10
  const char *v108; // rax
  __int64 *v109; // r8
  unsigned int v110; // r15d
  __int64 v111; // rax
  unsigned __int64 v112; // r8
  _QWORD *v113; // r10
  __int64 v114; // r8
  unsigned __int64 v115; // rcx
  char v116; // al
  int v117; // eax
  unsigned int v118; // r9d
  unsigned __int64 v119; // rax
  __int64 v120; // rax
  unsigned __int64 v121; // rax
  signed __int32 v123[6]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v124; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v125; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v126; // [rsp+48h] [rbp-C0h]
  __int64 v127; // [rsp+50h] [rbp-B8h]
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-B0h]
  __int64 v129; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v130; // [rsp+68h] [rbp-A0h] BYREF
  char *v131; // [rsp+70h] [rbp-98h]
  PIMAGE_NT_HEADERS v132; // [rsp+78h] [rbp-90h]
  unsigned int *v133; // [rsp+80h] [rbp-88h] BYREF
  __int128 v134; // [rsp+88h] [rbp-80h]
  __int128 v135; // [rsp+98h] [rbp-70h]
  __int64 v136; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v137; // [rsp+C0h] [rbp-48h]
  __int64 v138; // [rsp+C8h] [rbp-40h]
  __int64 *v139; // [rsp+D0h] [rbp-38h]
  __int64 v140; // [rsp+F8h] [rbp-10h]
  __int64 v141; // [rsp+100h] [rbp-8h]
  __int64 v142; // [rsp+108h] [rbp+0h]
  char v145; // [rsp+170h] [rbp+68h]
  int v146; // [rsp+170h] [rbp+68h]

  v145 = a4;
  v4 = a3;
  v5 = a4;
  v6 = BugCheckParameter1;
  if ( a4 )
  {
    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    if ( dword_140399D08 == SessionId
      || (*(_QWORD *)&v8 = (unsigned int)_InterlockedCompareExchange(&dword_140399D08, SessionId, -1), (_DWORD)v8 == -1) )
    {
      v9 = 4 * v4;
      v10 = ((unsigned __int64)&qword_14039D378 ^ qword_14039D380) & 0x3F;
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
      v15 = (unsigned __int64)&qword_14039D378 ^ qword_14039D380;
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
          v20 = __ROL8__((unsigned __int64)&qword_14039D378 ^ qword_14039D380 ^ ((unsigned __int64)v12 - v6), 17) ^ (unsigned __int64)&qword_14039D378 ^ qword_14039D380 ^ ((unsigned __int64)v12 - v6);
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
      v26 = v15 ^ qword_14039D378;
      BugCheckParameter3 = v4;
      v27 = (_QWORD *)a2;
      v28 = (v15 ^ qword_14039D378) & 0x3F;
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
      v29 = v15 ^ qword_14039D378;
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
        qword_14039D380 = v6 ^ v29 ^ BugCheckParameter3;
      }
      else
      {
        if ( !RtlLookupFunctionTable(v6, &v130, &v129) )
          KeBugCheckEx(0x43u, v6, a2, BugCheckParameter3, 0LL);
        v146 = 0;
        qword_14039D480[0] = v130;
        v40 = 0LL;
        v127 = 0LL;
        do
        {
          v41 = (void *)qword_14039D480[v40];
          v125 = (__int64)v41;
          if ( !v41 )
            break;
          v42 = v39 & 0x3F;
          LODWORD(v126) = v39 & 0x3F;
          v43 = RtlImageNtHeader(v41);
          v132 = v43;
          if ( !v43 )
            KeBugCheckEx(0x43u, BugCheckParameter1, a2, BugCheckParameter3, 1uLL);
          v44 = (char *)&v43->OptionalHeader + v43->FileHeader.SizeOfOptionalHeader;
          v131 = &v44[40 * v43->FileHeader.NumberOfSections];
          do
          {
            v45 = 0;
            if ( (*((_DWORD *)v44 + 9) & 0x2000000) != 0
              || (v46 = *(_DWORD *)v44, *(_DWORD *)v44 == 1414090313) && *((_DWORD *)v44 + 1) == 1195525195
              || v46 == 1162297680 && ((v47 = *((_WORD *)v44 + 2), v47 == 30839) || v47 == 29303 || v47 == 30583)
              || v46 == 1095914053 && *((_WORD *)v44 + 2) == 16724 )
            {
LABEL_67:
              v45 = 1;
            }
            else
            {
              v48 = 7;
              v49 = VfExcludeSections[0];
              v134 = *(_OWORD *)VfExcludeSections;
              v135 = *(_OWORD *)off_140399BC0;
              while ( 1 )
              {
                v50 = v49[v44 - VfExcludeSections[0]];
                v51 = *v49++;
                if ( v50 != v51 )
                  break;
                if ( !--v48 )
                  goto LABEL_67;
              }
              v52 = (char *)*((_QWORD *)&v134 + 1);
              v53 = 8;
              v54 = v44;
              while ( 1 )
              {
                v55 = *(_QWORD *)v54;
                v54 += 8;
                v56 = *(_QWORD *)v52;
                v52 += 8;
                if ( v55 != v56 )
                  break;
                v53 -= 8;
                if ( v53 < 8 )
                {
                  if ( !v53 )
                    goto LABEL_67;
                  while ( 1 )
                  {
                    v57 = *v54++;
                    v58 = *v52++;
                    if ( v57 != v58 )
                      goto LABEL_60;
                    if ( !--v53 )
                      goto LABEL_67;
                  }
                }
              }
LABEL_60:
              v59 = (char *)v135;
              v60 = 4;
              while ( 1 )
              {
                v61 = v44[(_QWORD)v59 - v135];
                v62 = *v59++;
                if ( v61 != v62 )
                  break;
                if ( !--v60 )
                  goto LABEL_67;
              }
              v63 = (char *)*((_QWORD *)&v135 + 1);
              v64 = 6;
              while ( 1 )
              {
                v65 = v44[(_QWORD)v63 - *((_QWORD *)&v135 + 1)];
                v66 = *v63++;
                if ( v65 != v66 )
                  break;
                if ( !--v64 )
                  goto LABEL_67;
              }
            }
            v67 = *((_DWORD *)v44 + 4);
            if ( *((int *)v44 + 9) < 0 )
              v45 = 1;
            if ( !v45 )
            {
              v68 = v42;
              if ( v67 <= *((_DWORD *)v44 + 2) )
                v67 = *((_DWORD *)v44 + 2);
              v69 = (_QWORD *)(v125 + *((unsigned int *)v44 + 3));
              v70 = v69;
              v71 = (unsigned __int64)v69 + v67;
              v72 = (const char *)v69;
              if ( (unsigned __int64)v69 < v71 )
              {
                do
                {
                  _mm_prefetch(v72, 0);
                  v72 += 64;
                }
                while ( (unsigned __int64)v72 < v71 );
              }
              v73 = v39;
              v74 = v67 >> 7;
              if ( v67 >> 7 )
              {
                do
                {
                  v75 = 8LL;
                  do
                  {
                    v76 = *v70 ^ v73;
                    v77 = v70 + 1;
                    v78 = *v77 ^ __ROL8__(v76, v68);
                    v70 = v77 + 1;
                    v73 = __ROL8__(v78, v68);
                    --v75;
                  }
                  while ( v75 );
                  v79 = __ROL8__(v39 ^ ((char *)v70 - (char *)v69), 17) ^ v39 ^ ((char *)v70 - (char *)v69);
                  v142 = (v79 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v80 = v68 ^ v142 ^ v79;
                  v68 = 1;
                  v81 = v80 & 0x3F;
                  if ( v81 )
                    v68 = v81;
                  --v74;
                }
                while ( v74 );
                v42 = v126;
              }
              v82 = v67 & 0x7F;
              if ( v82 >= 8 )
              {
                v83 = (unsigned __int64)v82 >> 3;
                do
                {
                  v73 = __ROL8__(*v70++ ^ v73, v68);
                  v82 -= 8;
                  --v83;
                }
                while ( v83 );
              }
              for ( ; v82; --v82 )
              {
                v84 = v73 ^ *(unsigned __int8 *)v70;
                v70 = (_QWORD *)((char *)v70 + 1);
                v73 = __ROL8__(v84, v68);
              }
              v39 = v73;
            }
            v44 += 40;
          }
          while ( v44 != v131 );
          v85 = v146;
          if ( !v146 )
          {
            v86 = v125;
            Size = v132->OptionalHeader.DataDirectory[1].Size;
            if ( (unsigned int)Size >= 0x14 )
            {
              VirtualAddress = v132->OptionalHeader.DataDirectory[1].VirtualAddress;
              v89 = VirtualAddress + Size + v125;
              v90 = VirtualAddress + v125;
              if ( VirtualAddress + v125 != v89 )
              {
                do
                {
                  if ( !*(_DWORD *)(v90 + 12) )
                    break;
                  v91 = *(unsigned int *)(v90 + 16);
                  if ( !(_DWORD)v91 )
                    break;
                  v92 = *(_QWORD *)(v91 + v86);
                  if ( v92 )
                  {
                    LOBYTE(v93) = MmIsSessionAddress(*(_QWORD *)(v91 + v86));
                    if ( v93 )
                    {
                      if ( RtlLookupFunctionTable(v92, &v125, (_DWORD *)&v129 + 1) )
                      {
                        v94 = qword_14039D480;
                        v95 = 0LL;
                        while ( *v94 != v125 )
                        {
                          if ( !*v94 )
                          {
                            qword_14039D480[v95] = v125;
                            break;
                          }
                          v95 = (unsigned int)(v95 + 1);
                          ++v94;
                          if ( (unsigned int)v95 >= 0x10 )
                            break;
                        }
                        if ( (_DWORD)v95 == 16 )
                          goto LABEL_107;
                      }
                    }
                  }
                  v90 += 20LL;
                }
                while ( v90 != v89 );
                v85 = 0;
              }
            }
          }
          v40 = v127 + 1;
          v146 = v85 + 1;
          ++v127;
        }
        while ( (unsigned int)(v85 + 1) < 0x10 );
LABEL_107:
        *(_QWORD *)&v8 = memset(qword_14039D480, 0, 0x80uLL);
        if ( v39 == qword_14039D378 || !v39 )
        {
          *(_QWORD *)&v8 = 0x95EA5DE843D5D824uLL;
          v39 ^= 0x95EA5DE843D5D824uLL;
        }
        _InterlockedOr(v123, 0);
        qword_14039D378 = v39;
      }
    }
  }
  else
  {
    v96 = (unsigned __int64)&qword_14039D388;
    v97 = (unsigned __int64)&qword_14039D388 & 0x3F;
    RtlImageNtHeader((PVOID)0x140000000LL);
    RtlCaptureImageExceptionValues(0x140000000uLL, (__int64)&v136, (__int64)&v124);
    v98 = v136;
    v99 = 0x140000000uLL;
    LODWORD(v124) = (unsigned int)v124 / 0xC;
    v137 = 0x140000000uLL;
    v100 = v136 + 12LL * (unsigned int)v124;
    v138 = v100;
    v139 = (__int64 *)&v133;
    while ( v98 && v98 != v100 )
    {
      v101 = RtlpConvertFunctionEntry(v98, v99);
      v102 = v97;
      *v139 = v101;
      v98 = v136 + 12;
      v136 += 12LL;
      v103 = *v133;
      v104 = v133[1] - v103;
      v105 = (_QWORD *)(0x140000000LL + v103);
      v106 = 0x140000000LL + v103 + v104;
      v107 = v105;
      v108 = (const char *)v105;
      if ( (unsigned __int64)v105 < v106 )
      {
        do
        {
          _mm_prefetch(v108, 0);
          v108 += 64;
        }
        while ( (unsigned __int64)v108 < v106 );
      }
      v109 = (__int64 *)v96;
      v110 = v104 >> 7;
      if ( v104 >> 7 )
      {
        do
        {
          v111 = 8LL;
          do
          {
            v112 = *v107 ^ (unsigned __int64)v109;
            v113 = v107 + 1;
            v114 = *v113 ^ __ROL8__(v112, v102);
            v107 = v113 + 1;
            v109 = (__int64 *)__ROL8__(v114, v102);
            --v111;
          }
          while ( v111 );
          v115 = __ROL8__(v96 ^ ((char *)v107 - (char *)v105), 17) ^ v96 ^ ((char *)v107 - (char *)v105);
          v116 = v102 ^ ((v115 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v115;
          v102 = 1;
          v117 = v116 & 0x3F;
          if ( v117 )
            v102 = v117;
          --v110;
        }
        while ( v110 );
        LODWORD(v97) = (unsigned __int64)&qword_14039D388 & 0x3F;
      }
      v118 = v104 & 0x7F;
      if ( v118 >= 8 )
      {
        v119 = (unsigned __int64)v118 >> 3;
        do
        {
          v109 = (__int64 *)__ROL8__(*v107++ ^ (unsigned __int64)v109, v102);
          v118 -= 8;
          --v119;
        }
        while ( v119 );
      }
      for ( ; v118; --v118 )
      {
        v120 = *(unsigned __int8 *)v107;
        v107 = (_QWORD *)((char *)v107 + 1);
        v109 = (__int64 *)__ROL8__(v120 ^ (unsigned __int64)v109, v102);
      }
      v100 = v138;
      v99 = v137;
      v96 = (unsigned __int64)v109;
    }
    qword_14039D388 = v96;
    if ( qword_14039D378 )
      KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, 0LL);
    v121 = __rdtsc();
    v8 = (__ROR8__(v121, 3) ^ v121) * (unsigned __int128)0x7010008004002001uLL;
    qword_14039D378 = v8 ^ *((_QWORD *)&v8 + 1);
    if ( (unsigned __int64)v8 == *((_QWORD *)&v8 + 1) )
    {
      *(_QWORD *)&v8 = 0x95EA5DE843D5D824uLL;
      qword_14039D378 = 0x95EA5DE843D5D824uLL;
    }
  }
  return v8;
}
