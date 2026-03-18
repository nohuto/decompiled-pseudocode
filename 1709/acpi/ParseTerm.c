/*
 * XREFs of ParseTerm @ 0x1C0009B50
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     GetNameSpaceObjectNoLock @ 0x1C000BEE0 (GetNameSpaceObjectNoLock.c)
 *     PushCall @ 0x1C000CB4C (PushCall.c)
 *     FreeData @ 0x1C000CC84 (FreeData.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     ParseNameTail @ 0x1C000D0C0 (ParseNameTail.c)
 *     HeapFree @ 0x1C000D8A0 (HeapFree.c)
 *     RtlStringCchCopyA @ 0x1C000EEC4 (RtlStringCchCopyA.c)
 *     PerformMutexDriverCallbacks @ 0x1C0011AC8 (PerformMutexDriverCallbacks.c)
 *     ParseSuperName @ 0x1C0018D90 (ParseSuperName.c)
 *     PushTerm @ 0x1C0019F78 (PushTerm.c)
 *     ParseIntObj @ 0x1C001A1F4 (ParseIntObj.c)
 *     ParseString @ 0x1C001A300 (ParseString.c)
 *     FreeNameSpaceObjects @ 0x1C001AE60 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     IsCompatableDSDTRevision @ 0x1C001F658 (IsCompatableDSDTRevision.c)
 *     ReadField @ 0x1C001FD00 (ReadField.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     FindOpcodeTerm @ 0x1C00291B4 (FindOpcodeTerm.c)
 *     ParseInteger @ 0x1C00295FC (ParseInteger.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     GetObjectTypeName @ 0x1C005D4E0 (GetObjectTypeName.c)
 *     AMLIDebugger @ 0x1C005DC30 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 *     PrintIndent @ 0x1C005E7C0 (PrintIndent.c)
 *     PrintObject @ 0x1C005E804 (PrintObject.c)
 */

__int64 __fastcall ParseTerm(__int64 a1, __int64 a2, unsigned int NameSpaceObjectNoLock)
{
  unsigned int v3; // esi
  unsigned __int64 v5; // r8
  __int64 v6; // rdi
  _QWORD *v7; // r12
  __int64 v8; // r9
  int v9; // eax
  __int64 **v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // r10
  int v14; // ebx
  PVOID *v15; // rax
  __int64 v16; // rdx
  unsigned __int8 *v17; // r14
  __int64 *v18; // r11
  __int64 OpcodeTerm; // rbx
  int v20; // eax
  char *v21; // rdx
  char v22; // al
  char v23; // al
  int v24; // esi
  char *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r10
  char v28; // al
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  size_t v33; // rbx
  _BYTE *PoolWithTag; // rsi
  KIRQL v35; // bl
  __int64 v36; // rsi
  __int64 j; // rbx
  unsigned __int16 v38; // ax
  __int64 (__fastcall *v39)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v40; // r10
  __int64 (__fastcall *v41)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // r11
  __int64 v42; // r14
  unsigned int v43; // r15d
  __int64 v44; // rbx
  __int64 v45; // rbx
  __int64 v46; // r9
  _QWORD *v47; // rax
  _QWORD *n; // r8
  __int64 *v49; // rcx
  __int64 v50; // rdx
  _QWORD *v51; // rax
  _QWORD *v52; // rbx
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 *v57; // rbx
  __int64 v58; // r9
  __int64 *v59; // rax
  __int64 *ii; // r8
  __int64 **v61; // rcx
  __int64 *v62; // rdx
  __int64 *v63; // rax
  _QWORD *v64; // rbx
  __int64 v65; // rcx
  _QWORD *v66; // rax
  unsigned __int8 *v68; // rax
  unsigned __int64 *v69; // rbx
  unsigned __int8 *v70; // rax
  unsigned int v71; // r8d
  unsigned __int8 *v72; // r9
  unsigned int v73; // edx
  unsigned __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rsi
  void *v77; // rax
  __int64 v78; // r12
  __int64 v79; // r9
  _QWORD *v80; // rax
  _QWORD *m; // r8
  __int64 *v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r10
  _QWORD *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // r8
  char v90; // al
  int v91; // esi
  __int64 v92; // rdx
  __int64 v93; // r10
  char v94; // al
  __int64 v95; // rax
  __int64 v97; // r8
  void *v98; // rax
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rcx
  __int64 v102; // r10
  int v103; // ecx
  _QWORD *v104; // r10
  __int64 v105; // rcx
  _QWORD *v106; // rax
  __int64 v107; // rcx
  __int64 v108; // r10
  _QWORD *v109; // rax
  __int64 v110; // r10
  _QWORD *v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rcx
  unsigned int v114; // eax
  unsigned __int8 v115; // r10
  int v116; // eax
  int v117; // ecx
  __int64 v118; // rdx
  __int64 v119; // rbx
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 *v124; // r8
  _QWORD *v125; // r12
  __int64 v126; // rcx
  _QWORD *v127; // rax
  int v128; // ecx
  _QWORD *v129; // r10
  __int64 v130; // rcx
  _QWORD *v131; // rax
  int v132; // ebx
  char *v133; // rdx
  _BYTE *v134; // rax
  unsigned int i; // ecx
  __int64 v136; // rax
  __int64 v137; // rcx
  __int64 v138; // r8
  char *v139; // rdx
  __int64 *v140; // rcx
  unsigned int k; // eax
  int v142; // ebx
  __int64 (__fastcall *v143)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  __int64 v144; // rcx
  __int64 v145; // rcx
  int ObjectTypeName; // eax
  _QWORD *v147; // rcx
  _QWORD *v148; // rax
  _QWORD *v149; // rcx
  _QWORD *v150; // rax
  __int64 *v151; // rcx
  __int64 **v152; // rax
  __int64 v153; // [rsp+40h] [rbp-C0h]
  _QWORD *v154; // [rsp+50h] [rbp-B0h]
  char pszDest; // [rsp+60h] [rbp-A0h] BYREF
  char v156; // [rsp+61h] [rbp-9Fh] BYREF
  char Src; // [rsp+160h] [rbp+60h] BYREF
  char v158; // [rsp+161h] [rbp+61h] BYREF
  _BYTE P[128]; // [rsp+260h] [rbp+160h] BYREF

  v3 = 0;
  v154 = (_QWORD *)a1;
  v5 = 0x1C0000000uLL;
  v6 = a2;
  v7 = (_QWORD *)a1;
  v8 = 2LL;
  if ( NameSpaceObjectNoLock )
  {
    v9 = 5;
  }
  else
  {
    a1 = *(unsigned int *)(a2 + 16);
    v9 = *(_DWORD *)(a2 + 16) & 0xF;
    if ( !v9 )
    {
      *(_DWORD *)(a2 + 16) = a1 + 1;
      if ( (gDebugger & 0xD0) != 0 )
      {
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL) - 18) <= 1 )
        {
          ++dword_1C00796B4;
          PrintIndent(v7, a2, 0x1C0000000uLL, 2LL);
        }
        ConPrintf("%s");
        if ( *(_DWORD *)(v6 + 76) )
          ConPrintf("(");
        v5 = 0x1C0000000uLL;
        v8 = 2LL;
      }
      a1 = *(unsigned int *)(*(_QWORD *)(v6 + 56) + 28LL);
      if ( (a1 & 1) != 0 )
      {
        v69 = (unsigned __int64 *)(v6 + 40);
        if ( v6 != -40 )
          *v69 = v7[15];
        v70 = (unsigned __int8 *)v7[15];
        v71 = *v70;
        v72 = v70 + 1;
        v7[15] = v70 + 1;
        v73 = v71 >> 6;
        if ( (unsigned __int8)(v71 >> 6) )
        {
          v71 &= 0xFu;
          v115 = 0;
          do
          {
            v116 = *v72++;
            v117 = v115++;
            v7[15] = v72;
            a1 = (unsigned int)(8 * v117 + 4);
            v71 |= v116 << a1;
          }
          while ( v115 < (unsigned __int8)v73 );
        }
        if ( v6 != -40 )
          *v69 += v71;
        if ( (gOverrideFlags & 4) == 0 )
        {
          v74 = *(_QWORD *)(v6 + 48);
          if ( v74 )
          {
            if ( *v69 > v74 )
            {
              NameSpaceObjectNoLock = -1072431089;
              LogError(3222536207LL);
              AcpiDiagTraceAmlError(v7, 3222536207LL);
              PrintDebugMessage(143, *v69, *(_QWORD *)(v6 + 48), 0, 0LL);
              return NameSpaceObjectNoLock;
            }
          }
        }
        v8 = 2LL;
        v5 = 0x1C0000000uLL;
      }
LABEL_5:
      v10 = (__int64 **)(v7 + 15);
      while ( *(_DWORD *)(v6 + 72) >= *(_DWORD *)(v6 + 76) )
      {
        if ( NameSpaceObjectNoLock )
          return NameSpaceObjectNoLock;
LABEL_83:
        if ( v6 != v7[52] )
          return NameSpaceObjectNoLock;
        if ( *(_DWORD *)(v6 + 72) >= *(_DWORD *)(v6 + 76) )
        {
          ++*(_DWORD *)(v6 + 16);
LABEL_86:
          a2 = *(_QWORD *)(v6 + 56);
          ++*(_DWORD *)(v6 + 16);
          if ( *(int *)(a2 + 28) < 0 )
          {
            v143 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(a2 + 32);
            if ( v143 )
            {
              NameSpaceObjectNoLock = v143(
                                        12LL,
                                        1LL,
                                        *(unsigned int *)(a2 + 8),
                                        *(_QWORD *)(v6 + 64) + 120LL,
                                        *(_DWORD *)(a2 + 40),
                                        v7);
              if ( NameSpaceObjectNoLock == 259 )
                return 32772;
            }
          }
LABEL_87:
          ++*(_DWORD *)(v6 + 16);
          if ( (gDebugger & 0xD0) != 0 && *(_DWORD *)(v6 + 76) )
            ConPrintf(")");
          v39 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(v6 + 56) + 48LL);
          if ( !v39 )
            goto LABEL_91;
          NameSpaceObjectNoLock = v39(v7, v6, v5);
          if ( !NameSpaceObjectNoLock && v6 == v7[52] )
            goto LABEL_91;
          return NameSpaceObjectNoLock;
        }
        v8 = 2LL;
      }
      while ( 1 )
      {
        v11 = *(unsigned int *)(v6 + 72);
        *(_DWORD *)(v6 + 72) = v11 + 1;
        if ( (gDebugger & 0xD0) != 0 && (_DWORD)v11 )
        {
          ConPrintf(",");
          v8 = 2LL;
          v5 = 0x1C0000000uLL;
        }
        v12 = *(_QWORD *)(v6 + 48);
        v13 = *(_QWORD *)(v6 + 80) + 40 * v11;
        v153 = v13;
        a1 = *(_QWORD *)(*(_QWORD *)(v6 + 56) + 16LL);
        v14 = *(char *)(v11 + a1);
        if ( v14 != 67 )
          break;
        v15 = (PVOID *)&unk_1C00796F0;
        v16 = 0LL;
        a1 = 0LL;
        do
        {
          if ( *v10 == *v15 )
            break;
          v16 = (unsigned int)(v16 + 1);
          ++a1;
          v15 += 2;
        }
        while ( (__int64)v15 < (__int64)&::P );
        if ( (_DWORD)v16 != 10 )
        {
          a1 *= 2LL;
          if ( (dword_1C00796E8[2 * a1] & 1) != 0 && (_DWORD)v16 != -1 )
          {
            ConPrintf("\nHit Breakpoint %d.\n");
            ((void (*)(void))AMLIDebugger)();
            v13 = v153;
            v8 = 2LL;
          }
        }
        v17 = (unsigned __int8 *)*v10;
        v18 = v7 + 15;
        if ( *v17 == 91 )
        {
          *v18 = (__int64)(v17 + 1);
          OpcodeTerm = FindOpcodeTerm(v17[1], v16, 0x1C0000000uLL, 2LL);
        }
        else
        {
          OpcodeTerm = (__int64)*(&OpcodeTable + *v17);
        }
        if ( !OpcodeTerm )
        {
          LogError(3222536193LL);
          AcpiDiagTraceAmlError(v7, 3222536193LL);
          v10 = (__int64 **)(v7 + 15);
          PrintDebugMessage(134, *(unsigned __int8 *)v7[15], v7[15], 0, 0LL);
          NameSpaceObjectNoLock = -1072431103;
          goto LABEL_79;
        }
        v20 = *(_DWORD *)(OpcodeTerm + 28);
        if ( (v20 & 8) == 0 )
        {
          if ( (v20 & 0x10) != 0 )
          {
            v10 = (__int64 **)(v7 + 15);
            NameSpaceObjectNoLock = ParseString(v7, v7 + 15, v13, 0LL);
            goto LABEL_79;
          }
          if ( (v20 & 2) != 0 )
          {
            v10 = (__int64 **)(v7 + 15);
            v118 = v7[12];
            NameSpaceObjectNoLock = 0;
            v119 = (unsigned int)*(unsigned __int8 *)v7[15] - 104;
            if ( (unsigned int)v119 >= *(_DWORD *)(v118 + 60) )
            {
              LogError(3222536197LL);
              AcpiDiagTraceAmlError(v7, 3222536197LL);
              PrintDebugMessage(122, v119, 0, 0, 0LL);
              NameSpaceObjectNoLock = -1072431099;
            }
            else
            {
              a1 = 5 * v119;
              v120 = *(_QWORD *)(v118 + 64) + 40 * v119;
              if ( v13 != v120 )
              {
                *(_OWORD *)v13 = *(_OWORD *)v120;
                *(_OWORD *)(v13 + 16) = *(_OWORD *)(v120 + 16);
                *(_QWORD *)(v13 + 32) = *(_QWORD *)(v120 + 32);
                if ( (*(_BYTE *)v120 & 1) != 0 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v120 + 8) + 8LL));
                }
                else if ( *(_QWORD *)(v120 + 32) )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v120 + 8));
                  *(_WORD *)v13 |= 1u;
                  *(_QWORD *)(v13 + 8) = v120;
                }
              }
              *v10 = (__int64 *)((char *)*v10 + 1);
              if ( (gDebugger & 0xD0) != 0 )
              {
                ConPrintf("Arg%d=");
                PrintObject(v153);
              }
            }
            goto LABEL_79;
          }
          if ( (v20 & 4) != 0 )
          {
            v10 = (__int64 **)(v7 + 15);
            v121 = (unsigned int)*(unsigned __int8 *)v7[15] - 96;
            v122 = v7[12] + 8 * (v121 + 4 * v121 + 9);
            if ( v13 != v122 )
            {
              *(_OWORD *)v13 = *(_OWORD *)v122;
              *(_OWORD *)(v13 + 16) = *(_OWORD *)(v122 + 16);
              *(_QWORD *)(v13 + 32) = *(_QWORD *)(v122 + 32);
              if ( (*(_BYTE *)v122 & 1) != 0 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v122 + 8) + 8LL));
              }
              else if ( *(_QWORD *)(v122 + 32) )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v122 + 8));
                *(_WORD *)v13 |= 1u;
                *(_QWORD *)(v13 + 8) = v122;
              }
            }
            if ( (gDebugger & 0xD0) != 0 )
            {
              ConPrintf("Local%d=");
              PrintObject(v153);
            }
            *v10 = (__int64 *)((char *)*v10 + 1);
            NameSpaceObjectNoLock = 0;
            goto LABEL_79;
          }
          if ( (v20 & 0x20) != 0 )
          {
            v21 = (char *)*v18;
            v22 = *(_BYTE *)*v18;
            if ( v22 == 92 )
            {
              RtlStringCchCopyA(&Src, 0x100uLL, "\\");
              ++v7[15];
LABEL_259:
              NameSpaceObjectNoLock = ParseNameTail(v7, v7 + 15, &Src);
              goto LABEL_48;
            }
            if ( v22 == 94 )
            {
              RtlStringCchCopyA(&Src, 0x100uLL, "^");
              ++v7[15];
              v133 = &v158;
              v134 = (_BYTE *)v7[15];
              for ( i = 1; i < 0xFF; ++i )
              {
                if ( *v134 != 94 )
                  break;
                ++v134;
                *v133++ = 94;
                v7[15] = v134;
              }
              *(&Src + i) = 0;
              if ( *(_BYTE *)v7[15] != 94 )
                goto LABEL_259;
              LogError(3221225734LL);
              AcpiDiagTraceAmlError(v7, 3221225734LL);
              PrintDebugMessage(129, (unsigned int)&Src, 0, 0, 0LL);
              NameSpaceObjectNoLock = -1073741562;
            }
            else
            {
              Src = 0;
              a1 = -1LL;
              NameSpaceObjectNoLock = 0;
              do
                ++a1;
              while ( *(&Src + a1) );
              v23 = *v21;
              if ( !*v21 )
              {
                *v18 = (__int64)(v21 + 1);
                goto LABEL_48;
              }
              if ( v23 != 47 )
              {
                if ( v23 == 46 )
                {
                  v24 = v8;
                  *v18 = (__int64)(v21 + 1);
                }
                else
                {
                  v24 = 1;
                }
                while ( 1 )
                {
LABEL_29:
                  if ( (unsigned __int64)(unsigned int)a1 + 4 >= 0x100 )
                  {
                    LogError(3221225734LL);
                    AcpiDiagTraceAmlError(v7, 3221225734LL);
                    PrintDebugMessage(130, (unsigned int)&Src, 0, 0, 0LL);
                    NameSpaceObjectNoLock = -1073741562;
                    goto LABEL_48;
                  }
                  v8 = *v18;
                  v25 = &Src + (unsigned int)a1;
                  v26 = (unsigned int)(256 - a1);
                  if ( (unsigned __int64)(v26 - 1) <= 0x7FFFFFFE )
                    break;
                  if ( 256 != (_DWORD)a1 )
                    goto LABEL_46;
LABEL_47:
                  *v18 += 4LL;
                  a1 = (unsigned int)(a1 + 4);
                  if ( !--v24 )
                    goto LABEL_48;
                  v142 = a1 + 1;
                  if ( (unsigned int)(a1 + 1) < 0x100 )
                  {
                    RtlStringCchCopyA(&Src + (unsigned int)a1, (unsigned int)(256 - a1), ".");
                    LODWORD(a1) = v142;
                    v18 = v7 + 15;
                  }
                }
                v27 = 4 - v26;
                v8 -= (__int64)v25;
                while ( v26 + v27 )
                {
                  v28 = v25[v8];
                  if ( !v28 )
                    break;
                  *v25++ = v28;
                  if ( !--v26 )
                    goto LABEL_324;
                }
                if ( v26 )
                  goto LABEL_46;
LABEL_324:
                --v25;
LABEL_46:
                *v25 = 0;
                goto LABEL_47;
              }
              *v18 = (__int64)(v21 + 1);
              v24 = (unsigned __int8)v21[1];
              *v18 = (__int64)(v21 + 2);
              if ( v24 )
                goto LABEL_29;
LABEL_48:
              if ( !NameSpaceObjectNoLock )
              {
                if ( (gDebugger & 0xD0) != 0 )
                  ConPrintf("%s");
                v33 = -1LL;
                do
                  ++v33;
                while ( *(&Src + v33) );
                if ( v33 + 1 < 0x80 )
                {
                  PoolWithTag = P;
                  goto LABEL_55;
                }
                PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v33 + 1, 0x69706341u);
                if ( !PoolWithTag )
                {
                  NameSpaceObjectNoLock = -1073741670;
                  goto LABEL_77;
                }
LABEL_55:
                memmove(PoolWithTag, &Src, v33);
                PoolWithTag[v33] = 0;
                v35 = ExAcquireSpinLockShared(&ACPINamespaceLock);
                NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(PoolWithTag);
                ExReleaseSpinLockShared(&ACPINamespaceLock, v35);
                if ( P != PoolWithTag )
                  ExFreePoolWithTag(PoolWithTag, 0);
                if ( NameSpaceObjectNoLock == -1073741772 )
                {
                  LogError(3221225524LL);
                  AcpiDiagTraceAmlError(v7, 3221225524LL);
                  PrintDebugMessage(120, (unsigned int)&Src, 0, 0, 0LL);
                }
              }
            }
            if ( !NameSpaceObjectNoLock )
            {
              v36 = 0LL;
              if ( MEMORY[0x42] == 128 )
              {
                do
                  v36 = *(_QWORD *)(v36 + 80);
                while ( *(_WORD *)(v36 + 66) == 128 );
              }
              if ( (gdwfAMLI & 4) != 0 )
                _InterlockedIncrement((volatile signed __int32 *)(v36 + 112));
              if ( *(_WORD *)(v36 + 66) == 8 )
              {
                NameSpaceObjectNoLock = PushCall(v7, v36, v153, v8);
              }
              else
              {
                NameSpaceObjectNoLock = 0;
                for ( j = v36 + 64; ; j = *(_QWORD *)(j + 16) )
                {
                  while ( 1 )
                  {
                    v38 = *(_WORD *)(j + 2);
                    if ( v38 != 128 )
                      break;
                    j = *(_QWORD *)(j + 16) + 64LL;
                  }
                  if ( v38 != 129 )
                    break;
                }
                a1 = v38;
                if ( v38 == 5 )
                {
                  v112 = HeapAlloc(v7 + 60, 1297237576LL, 48LL);
                  if ( v112 )
                  {
                    *(_QWORD *)(v112 + 8) = v7[52];
                    v7[52] = v112;
                    *(_QWORD *)(v112 + 24) = AccFieldUnit;
                    a1 = v153;
                    *(_DWORD *)v112 = 1430668097;
                    *(_QWORD *)(v112 + 32) = j;
                    *(_DWORD *)(v112 + 16) = 0x10000;
                    *(_QWORD *)(v112 + 40) = v153;
                  }
                  else
                  {
                    LogError(3222536194LL);
                    AcpiDiagTraceAmlError(v7, 3222536194LL);
                    PrintDebugMessage(153, 0, 0, 0, 0LL);
                    NameSpaceObjectNoLock = -1072431102;
                  }
                }
                else if ( v38 == 14 )
                {
                  NameSpaceObjectNoLock = ReadField(v7, j, *(_QWORD *)(j + 32) + 12LL, v153);
                }
                else
                {
                  if ( v153 != j )
                  {
                    *(_OWORD *)v153 = *(_OWORD *)j;
                    *(_OWORD *)(v153 + 16) = *(_OWORD *)(j + 16);
                    *(_QWORD *)(v153 + 32) = *(_QWORD *)(j + 32);
                    if ( (*(_BYTE *)j & 1) != 0 )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(j + 8) + 8LL));
                    }
                    else if ( *(_QWORD *)(j + 32) )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(j + 8));
                      *(_WORD *)v153 |= 1u;
                      *(_QWORD *)(v153 + 8) = j;
                    }
                  }
                  if ( (gDebugger & 0xD0) != 0 )
                  {
                    ConPrintf("=");
                    PrintObject(v153);
                  }
                }
              }
              if ( (gdwfAMLI & 4) != 0
                && _InterlockedExchangeAdd((volatile signed __int32 *)(v36 + 112), 0xFFFFFFFF) == 1 )
              {
                *(_WORD *)(v36 + 64) |= 4u;
                if ( (*(_WORD *)(v36 + 64) & 0x40) == 0 )
                  FreeNameSpaceObjects(v36);
              }
              if ( (gdwfAMLI & 4) != 0 )
              {
                a1 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)0x70, 0xFFFFFFFF);
                if ( (_DWORD)a1 == 1 )
                {
                  a1 = 0LL;
                  MEMORY[0x40] |= 4u;
                  if ( (MEMORY[0x40] & 0x40) == 0 )
                    FreeNameSpaceObjects(0LL);
                }
              }
            }
LABEL_77:
            v3 = 0;
          }
          else if ( (v20 & 0x40) != 0 )
          {
            LogError(3222536198LL);
            AcpiDiagTraceAmlError(v7, 3222536198LL);
            PrintDebugMessage(133, 0, 0, 0, 0LL);
            NameSpaceObjectNoLock = -1072431098;
          }
          else
          {
            ++*v18;
            v75 = HeapAlloc(v7 + 60, 1297237576LL, 96LL);
            v76 = v75;
            if ( v75 )
            {
              *(_QWORD *)(v75 + 8) = v7[52];
              v7[52] = v75;
              *(_DWORD *)v75 = 1297237332;
              *(_QWORD *)(v75 + 24) = ParseTerm;
              LODWORD(v75) = 0;
              *(_QWORD *)(v76 + 32) = v17;
              NameSpaceObjectNoLock = 0;
              *(_QWORD *)(v76 + 48) = v12;
              *(_QWORD *)(v76 + 56) = OpcodeTerm;
              *(_QWORD *)(v76 + 88) = v153;
              a1 = *(_QWORD *)(OpcodeTerm + 16);
              if ( a1 )
              {
                v75 = -1LL;
                do
                  ++v75;
                while ( *(_BYTE *)(a1 + v75) );
              }
              *(_DWORD *)(v76 + 76) = v75;
              if ( !(_DWORD)v75 )
                goto LABEL_77;
              v77 = (void *)HeapAlloc(v7[40], 1413563464LL, (unsigned int)(40 * v75));
              *(_QWORD *)(v76 + 80) = v77;
              if ( v77 )
              {
                memset(v77, 0, 40LL * *(unsigned int *)(v76 + 76));
                goto LABEL_77;
              }
              LogError(3221225626LL);
              AcpiDiagTraceAmlError(v7, 3221225626LL);
              v3 = 0;
              PrintDebugMessage(154, 0, 0, 0, 0LL);
              NameSpaceObjectNoLock = -1073741670;
            }
            else
            {
              LogError(3222536194LL);
              AcpiDiagTraceAmlError(v7, 3222536194LL);
              v3 = 0;
              PrintDebugMessage(153, 0, 0, 0, 0LL);
              NameSpaceObjectNoLock = -1072431102;
            }
          }
          v10 = (__int64 **)(v7 + 15);
          goto LABEL_79;
        }
        v68 = (unsigned __int8 *)v7[15];
        v10 = (__int64 **)(v7 + 15);
        NameSpaceObjectNoLock = 0;
        a1 = *v68;
        v7[15] = v68 + 1;
        *(_WORD *)(v13 + 2) = 1;
        *(_QWORD *)(v13 + 16) = 0LL;
        if ( (_DWORD)a1 == 10 )
        {
          a1 = *(unsigned __int8 *)*v10;
          *(_BYTE *)(v13 + 16) = a1;
          *v10 = (__int64 *)((char *)*v10 + 1);
          goto LABEL_153;
        }
        if ( (_DWORD)a1 == 12 )
        {
          a1 = *(unsigned int *)*v10;
          *(_DWORD *)(v13 + 16) = a1;
          *v10 = (__int64 *)((char *)*v10 + 4);
          goto LABEL_153;
        }
        if ( (unsigned int)a1 > 0xC )
        {
          if ( (_DWORD)a1 == 255 )
          {
            if ( (unsigned __int8)IsCompatableDSDTRevision(a1, (unsigned int)a1, 1LL, v8) )
              v136 = -1LL;
            else
              v136 = 0xFFFFFFFFLL;
            a1 = v153;
            *(_QWORD *)(v153 + 16) = v136;
            if ( (gDebugger & 0xD0) != 0 )
              ConPrintf("Ones");
            goto LABEL_79;
          }
          if ( (_DWORD)a1 == 14 )
          {
            a1 = **v10;
            *(_QWORD *)(v13 + 16) = a1;
            ++*v10;
LABEL_153:
            if ( (gDebugger & 0xD0) != 0 )
              ConPrintf("0x%I64x");
            goto LABEL_79;
          }
        }
        else
        {
          if ( !(_BYTE)a1 )
          {
            *(_QWORD *)(v13 + 16) = 0LL;
            if ( (gDebugger & 0xD0) != 0 )
              ConPrintf("Zero");
            goto LABEL_79;
          }
          if ( (_DWORD)a1 == 1 )
          {
            *(_QWORD *)(v13 + 16) = 1LL;
            if ( (gDebugger & 0xD0) != 0 )
              ConPrintf("One");
            goto LABEL_79;
          }
          if ( (_DWORD)a1 == 11 )
          {
            a1 = *(unsigned __int16 *)*v10;
            *(_WORD *)(v13 + 16) = a1;
            *v10 = (__int64 *)((char *)*v10 + 2);
            goto LABEL_153;
          }
        }
        *v10 = (__int64 *)((char *)*v10 - 1);
        LogError(3222536193LL);
        AcpiDiagTraceAmlError(v7, 3222536193LL);
        PrintDebugMessage(128, *(unsigned __int8 *)*v10, (unsigned int)*v10, 0, 0LL);
        NameSpaceObjectNoLock = -1072431103;
LABEL_79:
        if ( NameSpaceObjectNoLock )
          return NameSpaceObjectNoLock;
        v5 = 0x1C0000000uLL;
LABEL_81:
        if ( v6 != v7[52] )
          return NameSpaceObjectNoLock;
        if ( *(_DWORD *)(v6 + 72) >= *(_DWORD *)(v6 + 76) )
          goto LABEL_83;
        v8 = 2LL;
      }
      switch ( v14 )
      {
        case 'B':
          *(_QWORD *)(v13 + 16) = 0LL;
          *(_WORD *)(v13 + 2) = 1;
          *(_BYTE *)(v13 + 16) = *(_BYTE *)*v10;
          *v10 = (__int64 *)((char *)*v10 + 1);
          if ( (gDebugger & 0xD0) != 0 )
          {
            ConPrintf("0x%I64x");
            v5 = 0x1C0000000uLL;
          }
          NameSpaceObjectNoLock = 0;
          goto LABEL_81;
        case 'D':
          NameSpaceObjectNoLock = ParseInteger(v10, v13, 4LL, 2LL);
          goto LABEL_79;
        case 'N':
          a1 = (__int64)*v10;
          v87 = *(unsigned __int8 *)*v10;
          v88 = (__int64)*(&OpcodeTable + v87);
          if ( !v88 || (*(_DWORD *)(v88 + 28) & 0x20) == 0 )
          {
            LogError(3222536193LL);
            AcpiDiagTraceAmlError(v7, 3222536193LL);
            PrintDebugMessage(132, *(unsigned __int8 *)*v10, (unsigned int)*v10, 0, 0LL);
            NameSpaceObjectNoLock = -1072431103;
            goto LABEL_79;
          }
          if ( (_BYTE)v87 == 92 )
          {
            RtlStringCchCopyA(&pszDest, 0x100uLL, "\\");
            *v10 = (__int64 *)((char *)*v10 + 1);
LABEL_261:
            NameSpaceObjectNoLock = ParseNameTail(v7, v10, &pszDest);
            goto LABEL_190;
          }
          if ( (_BYTE)v87 == 94 )
          {
            RtlStringCchCopyA(&pszDest, 0x100uLL, "^");
            *v10 = (__int64 *)((char *)*v10 + 1);
            v139 = &v156;
            v140 = *v10;
            for ( k = 1; k < 0xFF; ++k )
            {
              if ( *(_BYTE *)v140 != 94 )
                break;
              v140 = (__int64 *)((char *)v140 + 1);
              *v139++ = 94;
              *v10 = v140;
            }
            *(&pszDest + k) = 0;
            if ( *(_BYTE *)*v10 == 94 )
            {
              LogError(3221225734LL);
              AcpiDiagTraceAmlError(v7, 3221225734LL);
              PrintDebugMessage(129, (unsigned int)&pszDest, 0, 0, 0LL);
              NameSpaceObjectNoLock = -1073741562;
              goto LABEL_79;
            }
            goto LABEL_261;
          }
          pszDest = 0;
          NameSpaceObjectNoLock = 0;
          v89 = -1LL;
          do
            ++v89;
          while ( *(&pszDest + v89) );
          v90 = *(_BYTE *)a1;
          if ( *(_BYTE *)a1 )
          {
            if ( v90 != 47 )
            {
              if ( v90 == 46 )
              {
                v91 = 2;
                *v10 = (__int64 *)(a1 + 1);
              }
              else
              {
                v91 = 1;
              }
              while ( 1 )
              {
LABEL_179:
                if ( (unsigned __int64)(unsigned int)v89 + 4 >= 0x100 )
                {
                  LogError(3221225734LL);
                  AcpiDiagTraceAmlError(v7, 3221225734LL);
                  v3 = 0;
                  PrintDebugMessage(130, (unsigned int)&pszDest, 0, 0, 0LL);
                  NameSpaceObjectNoLock = -1073741562;
                  goto LABEL_190;
                }
                v8 = (__int64)*v10;
                a1 = (__int64)(&pszDest + (unsigned int)v89);
                v92 = (unsigned int)(256 - v89);
                if ( (unsigned __int64)(v92 - 1) <= 0x7FFFFFFE )
                  break;
                if ( 256 != (_DWORD)v89 )
                  goto LABEL_187;
LABEL_188:
                *v10 = (__int64 *)((char *)*v10 + 4);
                LODWORD(v89) = v89 + 4;
                if ( !--v91 )
                {
                  v3 = 0;
                  goto LABEL_190;
                }
                v132 = v89 + 1;
                if ( (unsigned int)(v89 + 1) < 0x100 )
                {
                  RtlStringCchCopyA(&pszDest + (unsigned int)v89, (unsigned int)(256 - v89), ".");
                  LODWORD(v89) = v132;
                }
              }
              v93 = 4 - v92;
              v8 -= a1;
              while ( v92 + v93 )
              {
                v94 = *(_BYTE *)(a1 + v8);
                if ( !v94 )
                  break;
                *(_BYTE *)a1++ = v94;
                if ( !--v92 )
                  goto LABEL_305;
              }
              if ( v92 )
                goto LABEL_187;
LABEL_305:
              --a1;
LABEL_187:
              *(_BYTE *)a1 = 0;
              goto LABEL_188;
            }
            *v10 = (__int64 *)(a1 + 1);
            v91 = *(unsigned __int8 *)(a1 + 1);
            *v10 = (__int64 *)(a1 + 2);
            if ( v91 )
              goto LABEL_179;
            v3 = 0;
          }
          else
          {
            *v10 = (__int64 *)(a1 + 1);
          }
LABEL_190:
          if ( !NameSpaceObjectNoLock )
          {
            if ( (gDebugger & 0xD0) != 0 )
              ConPrintf("%s");
            v95 = -1LL;
            *(_WORD *)(v153 + 2) = 2;
            while ( *(&pszDest + ++v95) != 0 )
              ;
            v97 = (unsigned int)(v95 + 1);
            *(_DWORD *)(v153 + 24) = v97;
            v98 = (void *)HeapAlloc(gpheapGlobal, 1381258056LL, v97);
            *(_QWORD *)(v153 + 32) = v98;
            if ( v98 )
            {
              memmove(v98, &pszDest, *(unsigned int *)(v153 + 24));
            }
            else
            {
              LogError(3221225626LL);
              AcpiDiagTraceAmlError(v7, 3221225626LL);
              PrintDebugMessage(131, (unsigned int)&pszDest, 0, 0, 0LL);
              NameSpaceObjectNoLock = -1073741670;
            }
          }
          goto LABEL_79;
        case 'O':
          LOBYTE(v8) = 1;
          NameSpaceObjectNoLock = ParseIntObj(v7, v10, v13, v8);
          if ( NameSpaceObjectNoLock == -1072431103 )
          {
            LOBYTE(v8) = 1;
            NameSpaceObjectNoLock = ParseString(v7, v10, v153, v8);
            if ( NameSpaceObjectNoLock == -1072431103 )
            {
              a1 = *(unsigned __int8 *)*v10;
              if ( (unsigned __int8)(a1 - 17) <= 2u )
              {
                v114 = PushTerm(
                         (_DWORD)v7,
                         (unsigned int)*v10,
                         v12,
                         (unsigned int)*(&OpcodeTable + (unsigned __int8)a1),
                         v153);
                *v10 = (__int64 *)((char *)*v10 + 1);
                NameSpaceObjectNoLock = v114;
              }
            }
          }
          goto LABEL_79;
        case 'S':
          NameSpaceObjectNoLock = ParseSuperName(v7, v13, 0LL, v12);
          goto LABEL_79;
        case 'W':
          NameSpaceObjectNoLock = ParseInteger(v10, v13, 2LL, 2LL);
          goto LABEL_79;
        case 's':
          LOBYTE(v5) = 1;
          NameSpaceObjectNoLock = ParseSuperName(v7, v13, v5, v12);
          goto LABEL_79;
        default:
          LogError(3222536195LL);
          AcpiDiagTraceAmlError(v7, 3222536195LL);
          PrintDebugMessage(121, (char)v14, 0, 0, 0LL);
          NameSpaceObjectNoLock = -1072431101;
          goto LABEL_79;
      }
    }
  }
  v29 = v9 - 1;
  if ( !v29 )
    goto LABEL_5;
  v30 = v29 - 1;
  if ( !v30 )
    goto LABEL_86;
  v31 = v30 - 1;
  if ( !v31 )
    goto LABEL_87;
  v32 = v31 - 1;
  if ( v32 )
  {
    if ( v32 != 1 )
      return NameSpaceObjectNoLock;
  }
  else
  {
LABEL_91:
    ++*(_DWORD *)(v6 + 16);
    if ( (gDebugger & 0xD0) != 0 )
    {
      a2 = *(_QWORD *)(v6 + 56);
      if ( (unsigned int)(*(_DWORD *)(a2 + 8) - 17) > 2 && *(_DWORD *)(a2 + 24) == 4 )
      {
        ConPrintf("=");
        PrintObject(*(_QWORD *)(v6 + 88));
      }
    }
    if ( (gDebugger & 0x40) != 0 )
    {
      _InterlockedAnd(&gDebugger, 0xFFFFFFBF);
      AMLIDebugger(a1, a2, v5);
    }
    else
    {
      v40 = *(_QWORD *)(v6 + 56);
      v41 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(v40 + 32);
      if ( v41 )
      {
        if ( *(int *)(v40 + 28) >= 0 )
        {
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(v40 + 32))(
            1LL,
            *(unsigned int *)(v40 + 8),
            *(_QWORD *)(v6 + 64) + 120LL,
            *(unsigned int *)(v40 + 40));
        }
        else
        {
          NameSpaceObjectNoLock = v41(
                                    12LL,
                                    2LL,
                                    *(unsigned int *)(v40 + 8),
                                    *(_QWORD *)(v6 + 64) + 120LL,
                                    *(_DWORD *)(v40 + 40),
                                    v7);
          if ( NameSpaceObjectNoLock == 259 )
            return 32772;
        }
      }
    }
  }
  if ( (gDebugger & 0xD0) != 0 && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v6 + 56) + 8LL) - 18) <= 1 )
    --dword_1C00796B4;
  v42 = *(_QWORD *)(v6 + 80);
  if ( v42 )
  {
    v43 = *(_DWORD *)(v6 + 76);
    if ( v43 )
    {
      do
      {
        v44 = v42 + 40LL * v3;
        if ( (*(_BYTE *)v44 & 1) != 0 )
        {
          v113 = *(_QWORD *)(v44 + 8);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v113 + 8), 0xFFFFFFFF) == 1
            && (*(_BYTE *)v113 & 8) != 0 )
          {
            FreeData(v113);
          }
        }
        else if ( *(_QWORD *)(v44 + 32) )
        {
          if ( *(int *)(v44 + 8) > 0 )
          {
            *(_WORD *)v44 |= 8u;
          }
          else
          {
            if ( *(_WORD *)(v44 + 2) == 4 )
              FreeDataBuffs(*(_QWORD *)(v44 + 32) + 8LL, **(unsigned int **)(v44 + 32));
            if ( *(_WORD *)(v44 + 2) == 2 )
            {
              v78 = *(_QWORD *)(v44 + 32) - 16LL;
              *(_DWORD *)v78 = 0;
              NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
              v79 = *(_QWORD *)(v78 + 8);
              v80 = *(_QWORD **)(v79 + 40);
              for ( m = (_QWORD *)(v79 + 40); v80 != m; v80 = (_QWORD *)*v80 )
              {
                if ( v78 + 16 < (unsigned __int64)v80 )
                  break;
              }
              v82 = (__int64 *)v80[1];
              v83 = v78 + 16;
              if ( (_QWORD *)*v82 != v80 )
                __fastfail(3u);
              *(_QWORD *)v83 = v80;
              *(_QWORD *)(v78 + 24) = v82;
              *v82 = v83;
              v80[1] = v83;
              if ( *(_QWORD **)v83 != m )
              {
                v84 = *(unsigned int *)(v78 + 4);
                v85 = *(_QWORD *)v83 - 16LL;
                if ( v85 == v78 + v84 )
                {
                  v128 = *(_DWORD *)(v85 + 4) + v84;
                  v129 = *(_QWORD **)v83;
                  *(_DWORD *)(v78 + 4) = v128;
                  v130 = *v129;
                  if ( *(_QWORD **)(*v129 + 8LL) != v129 || (v131 = (_QWORD *)v129[1], (_QWORD *)*v131 != v129) )
                    __fastfail(3u);
                  *v131 = v130;
                  *(_QWORD *)(v130 + 8) = v131;
                }
              }
              v86 = *(_QWORD **)(v78 + 24);
              if ( v86 != m )
              {
                v137 = *((unsigned int *)v86 - 3);
                v138 = (__int64)(v86 - 2);
                if ( (_QWORD *)v78 == (_QWORD *)((char *)v86 + v137 - 16) )
                {
                  *(_DWORD *)(v138 + 4) = *(_DWORD *)(v78 + 4) + v137;
                  v147 = *(_QWORD **)v83;
                  if ( *(_QWORD *)(*(_QWORD *)v83 + 8LL) != v83 || (v148 = *(_QWORD **)(v78 + 24), *v148 != v83) )
                    __fastfail(3u);
                  *v148 = v147;
                  v78 = v138;
                  v147[1] = v148;
                }
              }
              if ( *(_QWORD *)(v79 + 32) <= v78 + (unsigned __int64)*(unsigned int *)(v78 + 4) )
              {
                *(_QWORD *)(v79 + 32) = v78;
                v125 = (_QWORD *)(v78 + 16);
                v126 = *v125;
                if ( *(_QWORD **)(*v125 + 8LL) != v125 || (v127 = (_QWORD *)v125[1], (_QWORD *)*v127 != v125) )
                  __fastfail(3u);
                *v127 = v126;
                *(_QWORD *)(v126 + 8) = v127;
              }
              KeReleaseSpinLock(&gmutHeap, NewIrql);
            }
            else
            {
              switch ( *(_WORD *)(v44 + 2) )
              {
                case 3:
                case 4:
                case 7:
                case 8:
                case 0xA:
                case 0xB:
                case 0xC:
                case 0xE:
                  goto LABEL_252;
                case 5:
                  v144 = **(_QWORD **)(v44 + 32);
                  if ( v144 )
                    goto LABEL_366;
                  goto LABEL_252;
                case 9:
                  PerformMutexDriverCallbacks(1, *(_QWORD *)(v44 + 32), 0, 0, 0);
                  HeapFree(*(_QWORD *)(v44 + 32));
                  break;
                case 0x82:
                  v145 = **(_QWORD **)(v44 + 32);
                  if ( v145 )
                    goto LABEL_370;
                  goto LABEL_371;
                case 0x83:
                  v144 = **(_QWORD **)(v44 + 32);
                  if ( v144 )
                    goto LABEL_366;
                  goto LABEL_252;
                case 0x84:
                  v145 = **(_QWORD **)(v44 + 32);
                  if ( v145 )
LABEL_370:
                    DereferenceObjectEx(v145, 0LL, v5, v8);
LABEL_371:
                  v144 = *(_QWORD *)(*(_QWORD *)(v44 + 32) + 8LL);
                  if ( v144 )
LABEL_366:
                    DereferenceObjectEx(v144, 0LL, v5, v8);
LABEL_252:
                  HeapFree(*(_QWORD *)(v44 + 32));
                  break;
                default:
                  LogError(3222536195LL);
                  AcpiDiagTraceAmlError(0LL, 3222536195LL);
                  ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v44 + 2));
                  PrintDebugMessage(54, ObjectTypeName, 0, 0, 0LL);
                  break;
              }
            }
          }
        }
        ++v3;
        *(_QWORD *)v44 = 0LL;
        *(_QWORD *)(v44 + 8) = 0LL;
        *(_QWORD *)(v44 + 16) = 0LL;
        *(_QWORD *)(v44 + 24) = 0LL;
        *(_QWORD *)(v44 + 32) = 0LL;
      }
      while ( v3 < v43 );
      v7 = v154;
    }
    v45 = *(_QWORD *)(v6 + 80) - 16LL;
    *(_DWORD *)v45 = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v46 = *(_QWORD *)(v45 + 8);
    v47 = *(_QWORD **)(v46 + 40);
    for ( n = (_QWORD *)(v46 + 40); v47 != n; v47 = (_QWORD *)*v47 )
    {
      if ( v45 + 16 < (unsigned __int64)v47 )
        break;
    }
    v49 = (__int64 *)v47[1];
    v50 = v45 + 16;
    if ( (_QWORD *)*v49 != v47 )
      __fastfail(3u);
    *(_QWORD *)v50 = v47;
    *(_QWORD *)(v45 + 24) = v49;
    *v49 = v50;
    v47[1] = v50;
    if ( *(_QWORD **)v50 != n )
    {
      v101 = *(unsigned int *)(v45 + 4);
      v102 = *(_QWORD *)v50 - 16LL;
      if ( v102 == v45 + v101 )
      {
        v103 = *(_DWORD *)(v102 + 4) + v101;
        v104 = *(_QWORD **)v50;
        *(_DWORD *)(v45 + 4) = v103;
        v105 = *v104;
        if ( *(_QWORD **)(*v104 + 8LL) != v104 || (v106 = (_QWORD *)v104[1], (_QWORD *)*v106 != v104) )
          __fastfail(3u);
        *v106 = v105;
        *(_QWORD *)(v105 + 8) = v106;
      }
    }
    v51 = *(_QWORD **)(v45 + 24);
    if ( v51 != n )
    {
      v99 = *((unsigned int *)v51 - 3);
      v100 = (__int64)(v51 - 2);
      if ( (_QWORD *)v45 == (_QWORD *)((char *)v51 + v99 - 16) )
      {
        *(_DWORD *)(v100 + 4) = *(_DWORD *)(v45 + 4) + v99;
        v149 = *(_QWORD **)v50;
        if ( *(_QWORD *)(*(_QWORD *)v50 + 8LL) != v50 || (v150 = *(_QWORD **)(v45 + 24), *v150 != v50) )
          __fastfail(3u);
        *v150 = v149;
        v45 = v100;
        v149[1] = v150;
      }
    }
    if ( *(_QWORD *)(v46 + 32) <= v45 + (unsigned __int64)*(unsigned int *)(v45 + 4) )
    {
      *(_QWORD *)(v46 + 32) = v45;
      v52 = (_QWORD *)(v45 + 16);
      v53 = *v52;
      if ( *(_QWORD **)(*v52 + 8LL) != v52 || (v54 = (_QWORD *)v52[1], (_QWORD *)*v54 != v52) )
        __fastfail(3u);
      *v54 = v53;
      *(_QWORD *)(v53 + 8) = v54;
    }
    KeReleaseSpinLock(&gmutHeap, NewIrql);
  }
  v55 = *(_QWORD *)(v6 + 64);
  if ( v55 )
  {
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v55 + 112), 0xFFFFFFFF) == 1 )
    {
      *(_WORD *)(v55 + 64) |= 4u;
      if ( (*(_WORD *)(v55 + 64) & 0x40) == 0 )
        FreeNameSpaceObjects(v55);
    }
    *(_QWORD *)(v6 + 64) = 0LL;
  }
  v56 = v7[52];
  v57 = (_QWORD *)(v56 - 16);
  v7[52] = *(_QWORD *)(v56 + 8);
  *(_DWORD *)(v56 - 16) = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v58 = v57[1];
  v59 = *(__int64 **)(v58 + 40);
  for ( ii = (__int64 *)(v58 + 40); v59 != ii; v59 = (__int64 *)*v59 )
  {
    if ( v57 + 2 < v59 )
      break;
  }
  v61 = (__int64 **)v59[1];
  v62 = v57 + 2;
  if ( *v61 != v59 )
    __fastfail(3u);
  *v62 = (__int64)v59;
  v57[3] = v61;
  *v61 = v62;
  v59[1] = (__int64)v62;
  if ( (__int64 *)*v62 != ii )
  {
    v107 = *((unsigned int *)v57 + 1);
    v108 = *v62 - 16;
    if ( (_QWORD *)v108 == (_QWORD *)((char *)v57 + v107) )
    {
      v109 = (_QWORD *)*v62;
      *((_DWORD *)v57 + 1) = *(_DWORD *)(v108 + 4) + v107;
      v110 = *(_QWORD *)(v108 + 16);
      if ( *(_QWORD **)(v110 + 8) != v109 || (v111 = (_QWORD *)v109[1], (_QWORD *)*v111 != v109) )
        __fastfail(3u);
      *v111 = v110;
      *(_QWORD *)(v110 + 8) = v111;
    }
  }
  v63 = (__int64 *)v57[3];
  if ( v63 != ii )
  {
    v123 = *((unsigned int *)v63 - 3);
    v124 = v63 - 2;
    if ( v57 == (__int64 *)((char *)v63 + v123 - 16) )
    {
      *((_DWORD *)v124 + 1) = *((_DWORD *)v57 + 1) + v123;
      v151 = (__int64 *)*v62;
      if ( *(__int64 **)(*v62 + 8) != v62 || (v152 = (__int64 **)v57[3], *v152 != v62) )
        __fastfail(3u);
      *v152 = v151;
      v57 = v124;
      v151[1] = (__int64)v152;
    }
  }
  if ( *(_QWORD *)(v58 + 32) <= (unsigned __int64)v57 + *((unsigned int *)v57 + 1) )
  {
    *(_QWORD *)(v58 + 32) = v57;
    v64 = v57 + 2;
    v65 = *v64;
    if ( *(_QWORD **)(*v64 + 8LL) != v64 || (v66 = (_QWORD *)v64[1], (_QWORD *)*v66 != v64) )
      __fastfail(3u);
    *v66 = v65;
    *(_QWORD *)(v65 + 8) = v66;
  }
  KeReleaseSpinLock(&gmutHeap, NewIrql);
  return NameSpaceObjectNoLock;
}
