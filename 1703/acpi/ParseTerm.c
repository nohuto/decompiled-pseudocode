/*
 * XREFs of ParseTerm @ 0x1C0018340
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     FreeData @ 0x1C0004EA8 (FreeData.c)
 *     ReadField @ 0x1C0013B20 (ReadField.c)
 *     ParseNameTail @ 0x1C0014650 (ParseNameTail.c)
 *     FreeNameSpaceObjects @ 0x1C0015460 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C0015C58 (HeapFree.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     PushTerm @ 0x1C00169B8 (PushTerm.c)
 *     ParseString @ 0x1C0016CB4 (ParseString.c)
 *     RtlStringCchCopyA @ 0x1C0016D78 (RtlStringCchCopyA.c)
 *     PushCall @ 0x1C0016E3C (PushCall.c)
 *     IsCompatableDSDTRevision @ 0x1C0017174 (IsCompatableDSDTRevision.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0019AF0 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0019CD0 (ParseSuperName.c)
 *     ParseIntObj @ 0x1C001B1D0 (ParseIntObj.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     PerformMutexDriverCallbacks @ 0x1C00234C8 (PerformMutexDriverCallbacks.c)
 *     FindOpcodeTerm @ 0x1C00286A8 (FindOpcodeTerm.c)
 *     ParseInteger @ 0x1C002887C (ParseInteger.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     AMLIDebugger @ 0x1C005BEF8 (AMLIDebugger.c)
 *     PrintIndent @ 0x1C005CA0C (PrintIndent.c)
 *     PrintObject @ 0x1C005CA50 (PrintObject.c)
 *     GetObjectTypeName @ 0x1C005D6E0 (GetObjectTypeName.c)
 */

__int64 __fastcall ParseTerm(__int64 j, __int64 a2, unsigned int NameSpaceObjectNoLock)
{
  unsigned int v3; // esi
  unsigned __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r9
  int v9; // eax
  __int64 **v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // r10
  int v14; // ebx
  __int64 **v15; // rax
  int v16; // edx
  __int64 *v17; // r14
  __int64 *v18; // r11
  __int64 OpcodeTerm; // rbx
  int v20; // eax
  char *v21; // rdx
  char v22; // al
  int v23; // esi
  char *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r10
  char v27; // al
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  size_t v32; // rbx
  _BYTE *PoolWithTag; // rsi
  KIRQL v34; // bl
  __int64 v35; // rsi
  __int64 k; // rbx
  __int16 v37; // ax
  __int64 (__fastcall *v38)(__int64, __int64, unsigned __int64); // rax
  __int64 v39; // r10
  __int64 (__fastcall *v40)(__int64, __int64, _QWORD, __int64, _DWORD, __int64); // r11
  __int64 v41; // rbx
  unsigned int v42; // r14d
  unsigned int **v43; // rbx
  __int64 v44; // rbx
  __int64 v45; // r9
  _QWORD *v46; // rax
  _QWORD *ii; // r8
  __int64 *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r10
  _QWORD *v51; // rax
  __int64 v52; // r10
  _QWORD *v53; // rbx
  __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  unsigned int *v58; // rbx
  __int64 v59; // r9
  unsigned int *v60; // rax
  unsigned int *jj; // r8
  __int64 **v62; // rcx
  __int64 *v63; // rdx
  __int64 v64; // r10
  unsigned int *v65; // rax
  unsigned int *v66; // r10
  _QWORD *v67; // rbx
  __int64 v68; // rcx
  _QWORD *v69; // rax
  unsigned __int8 *v71; // rax
  unsigned __int64 *v72; // rbx
  unsigned __int8 *v73; // rax
  unsigned int v74; // r8d
  unsigned __int8 *v75; // r9
  unsigned __int8 v76; // dl
  unsigned __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rax
  void *v81; // rax
  __int64 v82; // r15
  __int64 v83; // r9
  _QWORD *v84; // rax
  _QWORD *n; // r8
  __int64 *v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // r10
  __int64 v89; // rcx
  _QWORD *v90; // rax
  __int64 v91; // r10
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // r8
  char v95; // al
  int v96; // esi
  __int64 v97; // rdx
  __int64 v98; // r10
  char v99; // al
  __int64 v100; // rax
  void *v102; // rax
  __int64 v103; // rcx
  int v104; // ecx
  _QWORD *v105; // r10
  __int64 v106; // rcx
  _QWORD *v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rcx
  unsigned int v110; // ecx
  _QWORD *v111; // r10
  __int64 v112; // rcx
  _QWORD *v113; // rax
  __int64 v114; // rax
  __int64 v115; // rcx
  unsigned int v116; // eax
  unsigned __int8 v117; // r10
  int v118; // eax
  int v119; // ecx
  __int64 v120; // rdx
  __int64 v121; // rbx
  __int64 v122; // rdx
  __int64 v123; // r8
  __int64 v124; // rdx
  __int64 v125; // rcx
  _QWORD *v126; // r15
  __int64 v127; // rcx
  _QWORD *v128; // rax
  int v129; // ecx
  _QWORD *v130; // r10
  __int64 v131; // rcx
  _QWORD *v132; // rax
  int v133; // ebx
  char *v134; // rdx
  _BYTE *v135; // rax
  unsigned int i; // ecx
  __int64 v137; // rax
  __int64 v138; // rcx
  char *v139; // rdx
  char *v140; // rcx
  unsigned int m; // eax
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  int v146; // ebx
  __int64 (__fastcall *v147)(__int64, __int64, _QWORD, __int64, _DWORD, __int64); // rax
  _QWORD *v148; // rcx
  _QWORD *v149; // rcx
  int ObjectTypeName; // eax
  _QWORD *v151; // rcx
  _QWORD *v152; // rax
  _QWORD *v153; // rcx
  _QWORD *v154; // rax
  __int64 *v155; // rcx
  __int64 **v156; // rax
  __int64 v157; // [rsp+40h] [rbp-C0h]
  __int64 v158; // [rsp+48h] [rbp-B8h]
  char pszDest; // [rsp+50h] [rbp-B0h] BYREF
  char v160; // [rsp+51h] [rbp-AFh] BYREF
  char Src; // [rsp+150h] [rbp+50h] BYREF
  char v162; // [rsp+151h] [rbp+51h] BYREF
  _BYTE P[128]; // [rsp+250h] [rbp+150h] BYREF

  v3 = 0;
  v5 = 0x1C0000000uLL;
  v6 = a2;
  v7 = j;
  v8 = 2LL;
  if ( NameSpaceObjectNoLock )
  {
    v9 = 5;
  }
  else
  {
    j = *(unsigned int *)(a2 + 16);
    v9 = *(_DWORD *)(a2 + 16) & 0xF;
    if ( !v9 )
    {
      *(_DWORD *)(a2 + 16) = j + 1;
      if ( (gDebugger & 0xD0) != 0 )
      {
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL) - 18) <= 1 )
        {
          ++dword_1C00775F4;
          PrintIndent(v7, a2, 0x1C0000000uLL, 2LL);
        }
        ConPrintf("%s");
        if ( *(_DWORD *)(v6 + 76) )
          ConPrintf("(");
        v5 = 0x1C0000000uLL;
        v8 = 2LL;
      }
      j = *(unsigned int *)(*(_QWORD *)(v6 + 56) + 28LL);
      if ( (j & 1) != 0 )
      {
        v72 = (unsigned __int64 *)(v6 + 40);
        if ( v6 != -40 )
          *v72 = *(_QWORD *)(v7 + 120);
        v73 = *(unsigned __int8 **)(v7 + 120);
        v74 = *v73;
        v75 = v73 + 1;
        *(_QWORD *)(v7 + 120) = v73 + 1;
        v76 = (v74 >> 6) & 3;
        if ( v76 )
        {
          v74 &= 0xFu;
          v117 = 0;
          do
          {
            v118 = *v75++;
            v119 = v117++;
            *(_QWORD *)(v7 + 120) = v75;
            j = (unsigned int)(8 * v119 + 4);
            v74 |= v118 << j;
          }
          while ( v117 < v76 );
        }
        if ( v6 != -40 )
          *v72 += v74;
        if ( (gOverrideFlags & 4) == 0 )
        {
          v77 = *(_QWORD *)(v6 + 48);
          if ( v77 )
          {
            if ( *v72 > v77 )
            {
              NameSpaceObjectNoLock = -1072431089;
              LogError(3222536207LL);
              AcpiDiagTraceAmlError(v7, 3222536207LL);
              PrintDebugMessage(143, *v72, *(_QWORD *)(v6 + 48), 0, 0LL);
              return NameSpaceObjectNoLock;
            }
          }
        }
        v8 = 2LL;
        v5 = 0x1C0000000uLL;
      }
LABEL_5:
      v10 = (__int64 **)(v7 + 120);
      while ( *(_DWORD *)(v6 + 72) >= *(_DWORD *)(v6 + 76) )
      {
        if ( NameSpaceObjectNoLock )
          return NameSpaceObjectNoLock;
LABEL_83:
        if ( v6 != *(_QWORD *)(v7 + 416) )
          return NameSpaceObjectNoLock;
        if ( *(_DWORD *)(v6 + 72) >= *(_DWORD *)(v6 + 76) )
        {
          ++*(_DWORD *)(v6 + 16);
LABEL_86:
          a2 = *(_QWORD *)(v6 + 56);
          ++*(_DWORD *)(v6 + 16);
          if ( *(int *)(a2 + 28) < 0 )
          {
            v147 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, __int64))(a2 + 32);
            if ( v147 )
            {
              NameSpaceObjectNoLock = v147(
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
          v38 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)(v6 + 56) + 48LL);
          if ( !v38 )
            goto LABEL_91;
          NameSpaceObjectNoLock = v38(v7, v6, v5);
          if ( !NameSpaceObjectNoLock && v6 == *(_QWORD *)(v7 + 416) )
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
        v157 = v13;
        j = *(_QWORD *)(*(_QWORD *)(v6 + 56) + 16LL);
        v14 = *(char *)(v11 + j);
        if ( v14 != 67 )
          break;
        v15 = (__int64 **)&unk_1C0077630;
        v16 = 0;
        j = 0LL;
        do
        {
          if ( *v10 == *v15 )
            break;
          ++v16;
          ++j;
          v15 += 2;
        }
        while ( (__int64)v15 < (__int64)&qword_1C00776D0 );
        if ( v16 != 10 )
        {
          j *= 2LL;
          if ( (dword_1C0077628[2 * j] & 1) != 0 && v16 != -1 )
          {
            ConPrintf("\nHit Breakpoint %d.\n");
            AMLIDebugger(v143, v142, v144, v145);
            v13 = v157;
            v8 = 2LL;
          }
        }
        v17 = *v10;
        v18 = (__int64 *)(v7 + 120);
        if ( *(_BYTE *)v17 == 91 )
        {
          *v18 = (__int64)v17 + 1;
          OpcodeTerm = FindOpcodeTerm(*((unsigned __int8 *)v17 + 1));
        }
        else
        {
          OpcodeTerm = (__int64)*(&OpcodeTable + *(unsigned __int8 *)v17);
        }
        if ( !OpcodeTerm )
        {
          LogError(3222536193LL);
          AcpiDiagTraceAmlError(v7, 3222536193LL);
          v10 = (__int64 **)(v7 + 120);
          PrintDebugMessage(134, **(unsigned __int8 **)(v7 + 120), *(_QWORD *)(v7 + 120), 0, 0LL);
          NameSpaceObjectNoLock = -1072431103;
          goto LABEL_79;
        }
        v20 = *(_DWORD *)(OpcodeTerm + 28);
        if ( (v20 & 8) == 0 )
        {
          if ( (v20 & 0x10) != 0 )
          {
            v10 = (__int64 **)(v7 + 120);
            NameSpaceObjectNoLock = ParseString(v7, (const void **)(v7 + 120), v13, 0);
            goto LABEL_79;
          }
          if ( (v20 & 2) != 0 )
          {
            v10 = (__int64 **)(v7 + 120);
            v120 = *(_QWORD *)(v7 + 96);
            NameSpaceObjectNoLock = 0;
            v121 = (unsigned int)**(unsigned __int8 **)(v7 + 120) - 104;
            if ( (unsigned int)v121 >= *(_DWORD *)(v120 + 60) )
            {
              LogError(3222536197LL);
              AcpiDiagTraceAmlError(v7, 3222536197LL);
              PrintDebugMessage(122, v121, 0, 0, 0LL);
              NameSpaceObjectNoLock = -1072431099;
            }
            else
            {
              j = 5 * v121;
              v122 = *(_QWORD *)(v120 + 64) + 40 * v121;
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
              *v10 = (__int64 *)((char *)*v10 + 1);
              if ( (gDebugger & 0xD0) != 0 )
              {
                ConPrintf("Arg%d=");
                PrintObject(v157);
              }
            }
            goto LABEL_79;
          }
          if ( (v20 & 4) != 0 )
          {
            v10 = (__int64 **)(v7 + 120);
            v123 = (unsigned int)**(unsigned __int8 **)(v7 + 120) - 96;
            v124 = *(_QWORD *)(v7 + 96) + 8 * (v123 + 4 * v123 + 9);
            if ( v13 != v124 )
            {
              *(_OWORD *)v13 = *(_OWORD *)v124;
              *(_OWORD *)(v13 + 16) = *(_OWORD *)(v124 + 16);
              *(_QWORD *)(v13 + 32) = *(_QWORD *)(v124 + 32);
              if ( (*(_BYTE *)v124 & 1) != 0 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v124 + 8) + 8LL));
              }
              else if ( *(_QWORD *)(v124 + 32) )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v124 + 8));
                *(_WORD *)v13 |= 1u;
                *(_QWORD *)(v13 + 8) = v124;
              }
            }
            if ( (gDebugger & 0xD0) != 0 )
            {
              ConPrintf("Local%d=");
              PrintObject(v157);
            }
            *v10 = (__int64 *)((char *)*v10 + 1);
            NameSpaceObjectNoLock = 0;
            goto LABEL_79;
          }
          if ( (v20 & 0x20) != 0 )
          {
            v21 = (char *)*v18;
            v158 = 0LL;
            if ( *v21 == 92 )
            {
              RtlStringCchCopyA(&Src, 0x100uLL, "\\");
              ++*(_QWORD *)(v7 + 120);
LABEL_259:
              NameSpaceObjectNoLock = ParseNameTail(v7, (char **)(v7 + 120), (__int64)&Src);
              goto LABEL_48;
            }
            if ( *v21 == 94 )
            {
              RtlStringCchCopyA(&Src, 0x100uLL, "^");
              ++*(_QWORD *)(v7 + 120);
              v134 = &v162;
              v135 = *(_BYTE **)(v7 + 120);
              for ( i = 1; i < 0xFF; ++i )
              {
                if ( *v135 != 94 )
                  break;
                ++v135;
                *v134++ = 94;
                *(_QWORD *)(v7 + 120) = v135;
              }
              *(&Src + i) = 0;
              if ( **(_BYTE **)(v7 + 120) != 94 )
                goto LABEL_259;
              LogError(3221225734LL);
              AcpiDiagTraceAmlError(v7, 3221225734LL);
              PrintDebugMessage(129, (unsigned int)&Src, 0, 0, 0LL);
              NameSpaceObjectNoLock = -1073741562;
            }
            else
            {
              Src = 0;
              j = -1LL;
              NameSpaceObjectNoLock = 0;
              do
                ++j;
              while ( *(&Src + j) );
              v22 = *v21;
              if ( !*v21 )
              {
                *v18 = (__int64)(v21 + 1);
                goto LABEL_48;
              }
              if ( v22 != 47 )
              {
                if ( v22 == 46 )
                {
                  v23 = v8;
                  *v18 = (__int64)(v21 + 1);
                }
                else
                {
                  v23 = 1;
                }
                while ( 1 )
                {
LABEL_29:
                  if ( (unsigned __int64)(unsigned int)j + 4 >= 0x100 )
                  {
                    LogError(3221225734LL);
                    AcpiDiagTraceAmlError(v7, 3221225734LL);
                    PrintDebugMessage(130, (unsigned int)&Src, 0, 0, 0LL);
                    NameSpaceObjectNoLock = -1073741562;
                    goto LABEL_48;
                  }
                  v8 = *v18;
                  v24 = &Src + (unsigned int)j;
                  v25 = (unsigned int)(256 - j);
                  if ( (unsigned __int64)(v25 - 1) <= 0x7FFFFFFE )
                    break;
                  if ( 256 != (_DWORD)j )
                    goto LABEL_46;
LABEL_47:
                  *v18 += 4LL;
                  j = (unsigned int)(j + 4);
                  if ( !--v23 )
                    goto LABEL_48;
                  v146 = j + 1;
                  if ( (unsigned int)(j + 1) < 0x100 )
                  {
                    RtlStringCchCopyA(&Src + (unsigned int)j, (unsigned int)(256 - j), ".");
                    LODWORD(j) = v146;
                    v18 = (__int64 *)(v7 + 120);
                  }
                }
                v26 = 4 - v25;
                v8 -= (__int64)v24;
                while ( v26 + v25 )
                {
                  v27 = v24[v8];
                  if ( !v27 )
                    break;
                  *v24++ = v27;
                  if ( !--v25 )
                    goto LABEL_325;
                }
                if ( v25 )
                  goto LABEL_46;
LABEL_325:
                --v24;
LABEL_46:
                *v24 = 0;
                goto LABEL_47;
              }
              *v18 = (__int64)(v21 + 1);
              v23 = (unsigned __int8)v21[1];
              *v18 = (__int64)(v21 + 2);
              if ( v23 )
                goto LABEL_29;
LABEL_48:
              if ( !NameSpaceObjectNoLock )
              {
                if ( (gDebugger & 0xD0) != 0 )
                  ConPrintf("%s");
                v32 = -1LL;
                do
                  ++v32;
                while ( *(&Src + v32) );
                if ( v32 + 1 < 0x80 )
                {
                  PoolWithTag = P;
                  goto LABEL_55;
                }
                PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v32 + 1, 0x69706341u);
                if ( !PoolWithTag )
                {
                  NameSpaceObjectNoLock = -1073741670;
                  goto LABEL_77;
                }
LABEL_55:
                memmove(PoolWithTag, &Src, v32);
                PoolWithTag[v32] = 0;
                v34 = ExAcquireSpinLockShared(&ACPINamespaceLock);
                NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(PoolWithTag);
                ExReleaseSpinLockShared(&ACPINamespaceLock, v34);
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
              v35 = v158;
              for ( j = 128LL; *(_WORD *)(v35 + 66) == 128; v35 = *(_QWORD *)(v35 + 80) )
                ;
              if ( (gdwfAMLI & 4) != 0 )
                _InterlockedIncrement((volatile signed __int32 *)(v35 + 112));
              if ( *(_WORD *)(v35 + 66) == 8 )
              {
                NameSpaceObjectNoLock = PushCall((_QWORD *)v7, v35, v157);
              }
              else
              {
                NameSpaceObjectNoLock = 0;
                for ( k = v35 + 64; ; k = *(_QWORD *)(k + 16) )
                {
                  while ( 1 )
                  {
                    v37 = *(_WORD *)(k + 2);
                    if ( v37 != 128 )
                      break;
                    k = *(_QWORD *)(k + 16) + 64LL;
                  }
                  if ( v37 != 129 )
                    break;
                }
                if ( v37 == 5 )
                {
                  v114 = HeapAlloc(v7 + 440, 1297237576, 0x30u);
                  if ( v114 )
                  {
                    *(_QWORD *)(v114 + 8) = *(_QWORD *)(v7 + 416);
                    *(_QWORD *)(v7 + 416) = v114;
                    *(_QWORD *)(v114 + 24) = AccFieldUnit;
                    j = v157;
                    *(_DWORD *)v114 = 1430668097;
                    *(_QWORD *)(v114 + 32) = k;
                    *(_DWORD *)(v114 + 16) = 0x10000;
                    *(_QWORD *)(v114 + 40) = v157;
                  }
                  else
                  {
                    LogError(3222536194LL);
                    AcpiDiagTraceAmlError(v7, 3222536194LL);
                    PrintDebugMessage(153, 0, 0, 0, 0LL);
                    NameSpaceObjectNoLock = -1072431102;
                  }
                }
                else if ( v37 == 14 )
                {
                  NameSpaceObjectNoLock = ReadField(v7, k, *(_QWORD *)(k + 32) + 12LL, v157);
                }
                else
                {
                  if ( v157 != k )
                  {
                    *(_OWORD *)v157 = *(_OWORD *)k;
                    *(_OWORD *)(v157 + 16) = *(_OWORD *)(k + 16);
                    *(_QWORD *)(v157 + 32) = *(_QWORD *)(k + 32);
                    if ( (*(_BYTE *)k & 1) != 0 )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(k + 8) + 8LL));
                    }
                    else if ( *(_QWORD *)(k + 32) )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(k + 8));
                      *(_WORD *)v157 |= 1u;
                      *(_QWORD *)(v157 + 8) = k;
                    }
                  }
                  if ( (gDebugger & 0xD0) != 0 )
                  {
                    ConPrintf("=");
                    PrintObject(v157);
                  }
                }
              }
              if ( (gdwfAMLI & 4) != 0
                && _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 112), 0xFFFFFFFF) == 1 )
              {
                *(_WORD *)(v35 + 64) |= 4u;
                if ( (*(_WORD *)(v35 + 64) & 0x40) == 0 )
                  FreeNameSpaceObjects((_QWORD *)v35);
              }
              if ( (gdwfAMLI & 4) != 0 )
              {
                j = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v158 + 112), 0xFFFFFFFF);
                if ( (_DWORD)j == 1 )
                {
                  j = v158;
                  *(_WORD *)(v158 + 64) |= 4u;
                  if ( (*(_WORD *)(j + 64) & 0x40) == 0 )
                    FreeNameSpaceObjects((_QWORD *)j);
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
            NameSpaceObjectNoLock = 0;
            v78 = HeapAlloc(v7 + 440, 1297237576, 0x60u);
            v79 = v78;
            if ( v78 )
            {
              *(_QWORD *)(v78 + 8) = *(_QWORD *)(v7 + 416);
              *(_QWORD *)(v7 + 416) = v78;
              *(_DWORD *)v78 = 1297237332;
              *(_QWORD *)(v78 + 24) = ParseTerm;
              *(_QWORD *)(v78 + 32) = v17;
              *(_QWORD *)(v78 + 48) = v12;
              *(_QWORD *)(v78 + 56) = OpcodeTerm;
              *(_QWORD *)(v78 + 88) = v157;
              j = *(_QWORD *)(OpcodeTerm + 16);
              if ( j )
              {
                v80 = -1LL;
                do
                  ++v80;
                while ( *(_BYTE *)(j + v80) );
              }
              else
              {
                LODWORD(v80) = 0;
              }
              *(_DWORD *)(v79 + 76) = v80;
              if ( !(_DWORD)v80 )
                goto LABEL_77;
              v81 = (void *)HeapAlloc(*(_QWORD *)(v7 + 320), 1413563464, 40 * (int)v80);
              *(_QWORD *)(v79 + 80) = v81;
              if ( v81 )
              {
                memset(v81, 0, 40LL * *(unsigned int *)(v79 + 76));
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
          v10 = (__int64 **)(v7 + 120);
          goto LABEL_79;
        }
        v71 = *(unsigned __int8 **)(v7 + 120);
        v10 = (__int64 **)(v7 + 120);
        NameSpaceObjectNoLock = 0;
        j = *v71;
        *(_QWORD *)(v7 + 120) = v71 + 1;
        *(_WORD *)(v13 + 2) = 1;
        *(_QWORD *)(v13 + 16) = 0LL;
        if ( (_DWORD)j == 10 )
        {
          j = *(unsigned __int8 *)*v10;
          *(_BYTE *)(v13 + 16) = j;
          *v10 = (__int64 *)((char *)*v10 + 1);
          goto LABEL_153;
        }
        if ( (_DWORD)j == 12 )
        {
          j = *(unsigned int *)*v10;
          *(_DWORD *)(v13 + 16) = j;
          *v10 = (__int64 *)((char *)*v10 + 4);
          goto LABEL_153;
        }
        if ( (unsigned int)j > 0xC )
        {
          if ( (_DWORD)j == 255 )
          {
            if ( IsCompatableDSDTRevision() )
              v137 = -1LL;
            else
              v137 = 0xFFFFFFFFLL;
            j = v157;
            *(_QWORD *)(v157 + 16) = v137;
            if ( (gDebugger & 0xD0) != 0 )
              ConPrintf("Ones");
            goto LABEL_79;
          }
          if ( (_DWORD)j == 14 )
          {
            j = **v10;
            *(_QWORD *)(v13 + 16) = j;
            ++*v10;
LABEL_153:
            if ( (gDebugger & 0xD0) != 0 )
              ConPrintf("0x%I64x");
            goto LABEL_79;
          }
        }
        else
        {
          if ( !(_BYTE)j )
          {
            *(_QWORD *)(v13 + 16) = 0LL;
            if ( (gDebugger & 0xD0) != 0 )
              ConPrintf("Zero");
            goto LABEL_79;
          }
          if ( (_DWORD)j == 1 )
          {
            *(_QWORD *)(v13 + 16) = 1LL;
            if ( (gDebugger & 0xD0) != 0 )
              ConPrintf("One");
            goto LABEL_79;
          }
          if ( (_DWORD)j == 11 )
          {
            j = *(unsigned __int16 *)*v10;
            *(_WORD *)(v13 + 16) = j;
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
        if ( v6 != *(_QWORD *)(v7 + 416) )
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
          NameSpaceObjectNoLock = ParseInteger(v10, v13, 4LL);
          goto LABEL_79;
        case 'N':
          j = (__int64)*v10;
          v92 = *(unsigned __int8 *)*v10;
          v93 = (__int64)*(&OpcodeTable + v92);
          if ( !v93 || (*(_DWORD *)(v93 + 28) & 0x20) == 0 )
          {
            LogError(3222536193LL);
            AcpiDiagTraceAmlError(v7, 3222536193LL);
            PrintDebugMessage(132, *(unsigned __int8 *)*v10, (unsigned int)*v10, 0, 0LL);
            NameSpaceObjectNoLock = -1072431103;
            goto LABEL_79;
          }
          if ( (_BYTE)v92 == 92 )
          {
            RtlStringCchCopyA(&pszDest, 0x100uLL, "\\");
            *v10 = (__int64 *)((char *)*v10 + 1);
LABEL_261:
            NameSpaceObjectNoLock = ParseNameTail(v7, (char **)v10, (__int64)&pszDest);
            goto LABEL_193;
          }
          if ( (_BYTE)v92 == 94 )
          {
            RtlStringCchCopyA(&pszDest, 0x100uLL, "^");
            *v10 = (__int64 *)((char *)*v10 + 1);
            v139 = &v160;
            v140 = (char *)*v10;
            for ( m = 1; m < 0xFF; ++m )
            {
              if ( *v140 != 94 )
                break;
              ++v140;
              *v139++ = 94;
              *v10 = (__int64 *)v140;
            }
            *(&pszDest + m) = 0;
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
          v94 = -1LL;
          do
            ++v94;
          while ( *(&pszDest + v94) );
          v95 = *(_BYTE *)j;
          if ( *(_BYTE *)j )
          {
            if ( v95 != 47 )
            {
              if ( v95 == 46 )
              {
                v96 = 2;
                *v10 = (__int64 *)(j + 1);
              }
              else
              {
                v96 = 1;
              }
              while ( 1 )
              {
LABEL_182:
                if ( (unsigned __int64)(unsigned int)v94 + 4 >= 0x100 )
                {
                  LogError(3221225734LL);
                  AcpiDiagTraceAmlError(v7, 3221225734LL);
                  v3 = 0;
                  PrintDebugMessage(130, (unsigned int)&pszDest, 0, 0, 0LL);
                  NameSpaceObjectNoLock = -1073741562;
                  goto LABEL_193;
                }
                v8 = (__int64)*v10;
                j = (__int64)(&pszDest + (unsigned int)v94);
                v97 = (unsigned int)(256 - v94);
                if ( (unsigned __int64)(v97 - 1) <= 0x7FFFFFFE )
                  break;
                if ( 256 != (_DWORD)v94 )
                  goto LABEL_190;
LABEL_191:
                *v10 = (__int64 *)((char *)*v10 + 4);
                LODWORD(v94) = v94 + 4;
                if ( !--v96 )
                {
                  v3 = 0;
                  goto LABEL_193;
                }
                v133 = v94 + 1;
                if ( (unsigned int)(v94 + 1) < 0x100 )
                {
                  RtlStringCchCopyA(&pszDest + (unsigned int)v94, (unsigned int)(256 - v94), ".");
                  LODWORD(v94) = v133;
                }
              }
              v98 = 4 - v97;
              v8 -= j;
              while ( v98 + v97 )
              {
                v99 = *(_BYTE *)(v8 + j);
                if ( !v99 )
                  break;
                *(_BYTE *)j++ = v99;
                if ( !--v97 )
                  goto LABEL_306;
              }
              if ( v97 )
                goto LABEL_190;
LABEL_306:
              --j;
LABEL_190:
              *(_BYTE *)j = 0;
              goto LABEL_191;
            }
            *v10 = (__int64 *)(j + 1);
            v96 = *(unsigned __int8 *)(j + 1);
            *v10 = (__int64 *)(j + 2);
            if ( v96 )
              goto LABEL_182;
            v3 = 0;
          }
          else
          {
            *v10 = (__int64 *)(j + 1);
          }
LABEL_193:
          if ( !NameSpaceObjectNoLock )
          {
            if ( (gDebugger & 0xD0) != 0 )
              ConPrintf("%s");
            v100 = -1LL;
            *(_WORD *)(v157 + 2) = 2;
            while ( *(&pszDest + ++v100) != 0 )
              ;
            *(_DWORD *)(v157 + 24) = v100 + 1;
            v102 = (void *)HeapAlloc(gpheapGlobal, 1381258056, (int)v100 + 1);
            *(_QWORD *)(v157 + 32) = v102;
            if ( v102 )
            {
              memmove(v102, &pszDest, *(unsigned int *)(v157 + 24));
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
            NameSpaceObjectNoLock = ParseString(v7, (const void **)v10, v157, 1);
            if ( NameSpaceObjectNoLock == -1072431103 )
            {
              j = *(unsigned __int8 *)*v10;
              if ( (unsigned __int8)(j - 17) <= 2u )
              {
                v116 = PushTerm(v7, (__int64)*v10, v12, (__int64)*(&OpcodeTable + (unsigned __int8)j), v157);
                *v10 = (__int64 *)((char *)*v10 + 1);
                NameSpaceObjectNoLock = v116;
              }
            }
          }
          goto LABEL_79;
        case 'S':
          NameSpaceObjectNoLock = ParseSuperName(v7, v13, 0LL);
          goto LABEL_79;
        case 'W':
          NameSpaceObjectNoLock = ParseInteger(v10, v13, 2LL);
          goto LABEL_79;
        case 's':
          LOBYTE(v5) = 1;
          NameSpaceObjectNoLock = ParseSuperName(v7, v13, v5);
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
  v28 = v9 - 1;
  if ( !v28 )
    goto LABEL_5;
  v29 = v28 - 1;
  if ( !v29 )
    goto LABEL_86;
  v30 = v29 - 1;
  if ( !v30 )
    goto LABEL_87;
  v31 = v30 - 1;
  if ( v31 )
  {
    if ( v31 != 1 )
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
      AMLIDebugger(j, a2, v5, v8);
    }
    else
    {
      v39 = *(_QWORD *)(v6 + 56);
      v40 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, __int64))(v39 + 32);
      if ( v40 )
      {
        if ( *(int *)(v39 + 28) >= 0 )
        {
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(v39 + 32))(
            1LL,
            *(unsigned int *)(v39 + 8),
            *(_QWORD *)(v6 + 64) + 120LL,
            *(unsigned int *)(v39 + 40));
        }
        else
        {
          NameSpaceObjectNoLock = v40(
                                    12LL,
                                    2LL,
                                    *(unsigned int *)(v39 + 8),
                                    *(_QWORD *)(v6 + 64) + 120LL,
                                    *(_DWORD *)(v39 + 40),
                                    v7);
          if ( NameSpaceObjectNoLock == 259 )
            return 32772;
        }
      }
    }
  }
  if ( (gDebugger & 0xD0) != 0 && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v6 + 56) + 8LL) - 18) <= 1 )
    --dword_1C00775F4;
  v41 = *(_QWORD *)(v6 + 80);
  if ( v41 )
  {
    v42 = *(_DWORD *)(v6 + 76);
    if ( v42 )
    {
      v43 = (unsigned int **)(v41 + 32);
      do
      {
        if ( (*(_BYTE *)(v43 - 4) & 1) != 0 )
        {
          v115 = (__int64)*(v43 - 3);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v115 + 8), 0xFFFFFFFF) == 1
            && (*(_BYTE *)v115 & 8) != 0 )
          {
            FreeData((_QWORD *)v115);
          }
        }
        else if ( *v43 )
        {
          if ( *((int *)v43 - 6) > 0 )
          {
            *((_WORD *)v43 - 16) |= 8u;
          }
          else
          {
            if ( *((_WORD *)v43 - 15) == 4 )
              FreeDataBuffs((__int64)(*v43 + 2), **v43);
            if ( *((_WORD *)v43 - 15) == 2 )
            {
              v82 = (__int64)(*v43 - 4);
              *(_DWORD *)v82 = 0;
              NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
              v83 = *(_QWORD *)(v82 + 8);
              v84 = *(_QWORD **)(v83 + 40);
              for ( n = (_QWORD *)(v83 + 40); v84 != n; v84 = (_QWORD *)*v84 )
              {
                if ( v82 + 16 < (unsigned __int64)v84 )
                  break;
              }
              v86 = (__int64 *)v84[1];
              v87 = v82 + 16;
              if ( (_QWORD *)*v86 != v84 )
                __fastfail(3u);
              *(_QWORD *)v87 = v84;
              *(_QWORD *)(v82 + 24) = v86;
              *v86 = v87;
              v84[1] = v87;
              v88 = *(_QWORD *)v87 - 16LL;
              if ( *(_QWORD **)v87 != n )
              {
                v89 = *(unsigned int *)(v82 + 4);
                if ( v88 == v82 + v89 )
                {
                  v129 = *(_DWORD *)(v88 + 4) + v89;
                  v130 = *(_QWORD **)v87;
                  *(_DWORD *)(v82 + 4) = v129;
                  v131 = *v130;
                  v132 = (_QWORD *)v130[1];
                  if ( *(_QWORD **)(*v130 + 8LL) != v130 || (_QWORD *)*v132 != v130 )
                    __fastfail(3u);
                  *v132 = v131;
                  *(_QWORD *)(v131 + 8) = v132;
                }
              }
              v90 = *(_QWORD **)(v82 + 24);
              v91 = (__int64)(v90 - 2);
              if ( v90 != n )
              {
                v138 = *(unsigned int *)(v91 + 4);
                if ( v82 == v91 + v138 )
                {
                  *(_DWORD *)(v91 + 4) = *(_DWORD *)(v82 + 4) + v138;
                  v151 = *(_QWORD **)v87;
                  v152 = *(_QWORD **)(v82 + 24);
                  if ( *(_QWORD *)(*(_QWORD *)v87 + 8LL) != v87 || *v152 != v87 )
                    __fastfail(3u);
                  *v152 = v151;
                  v82 = v91;
                  v151[1] = v152;
                }
              }
              if ( *(_QWORD *)(v83 + 32) <= v82 + (unsigned __int64)*(unsigned int *)(v82 + 4) )
              {
                *(_QWORD *)(v83 + 32) = v82;
                v126 = (_QWORD *)(v82 + 16);
                v127 = *v126;
                v128 = (_QWORD *)v126[1];
                if ( *(_QWORD **)(*v126 + 8LL) != v126 || (_QWORD *)*v128 != v126 )
                  __fastfail(3u);
                *v128 = v127;
                *(_QWORD *)(v127 + 8) = v128;
              }
              KeReleaseSpinLock(&gmutHeap, NewIrql);
            }
            else
            {
              switch ( *((_WORD *)v43 - 15) )
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
                  v148 = *(_QWORD **)*v43;
                  if ( v148 )
                    goto LABEL_367;
                  goto LABEL_252;
                case 9:
                  PerformMutexDriverCallbacks(1, (unsigned int)*v43, 0, 0, 0);
                  HeapFree((__int64)*v43);
                  break;
                case 0x82:
                  v149 = *(_QWORD **)*v43;
                  if ( v149 )
                    goto LABEL_371;
                  goto LABEL_372;
                case 0x83:
                  v148 = *(_QWORD **)*v43;
                  if ( v148 )
                    goto LABEL_367;
                  goto LABEL_252;
                case 0x84:
                  v149 = *(_QWORD **)*v43;
                  if ( v149 )
LABEL_371:
                    DereferenceObjectEx(v149);
LABEL_372:
                  v148 = (_QWORD *)*((_QWORD *)*v43 + 1);
                  if ( v148 )
LABEL_367:
                    DereferenceObjectEx(v148);
LABEL_252:
                  HeapFree((__int64)*v43);
                  break;
                default:
                  LogError(3222536195LL);
                  AcpiDiagTraceAmlError(0LL, 3222536195LL);
                  ObjectTypeName = GetObjectTypeName(*((unsigned __int16 *)v43 - 15));
                  PrintDebugMessage(54, ObjectTypeName, 0, 0, 0LL);
                  break;
              }
            }
          }
        }
        ++v3;
        *(v43 - 4) = 0LL;
        *(v43 - 3) = 0LL;
        *(v43 - 2) = 0LL;
        *(v43 - 1) = 0LL;
        *v43 = 0LL;
        v43 += 5;
      }
      while ( v3 < v42 );
    }
    v44 = *(_QWORD *)(v6 + 80) - 16LL;
    *(_DWORD *)v44 = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v45 = *(_QWORD *)(v44 + 8);
    v46 = *(_QWORD **)(v45 + 40);
    for ( ii = (_QWORD *)(v45 + 40); v46 != ii; v46 = (_QWORD *)*v46 )
    {
      if ( v44 + 16 < (unsigned __int64)v46 )
        break;
    }
    v48 = (__int64 *)v46[1];
    v49 = v44 + 16;
    if ( (_QWORD *)*v48 != v46 )
      __fastfail(3u);
    *(_QWORD *)v49 = v46;
    *(_QWORD *)(v44 + 24) = v48;
    *v48 = v49;
    v46[1] = v49;
    v50 = *(_QWORD *)v49 - 16LL;
    if ( *(_QWORD **)v49 != ii )
    {
      v103 = *(unsigned int *)(v44 + 4);
      if ( v50 == v44 + v103 )
      {
        v104 = *(_DWORD *)(v50 + 4) + v103;
        v105 = *(_QWORD **)v49;
        *(_DWORD *)(v44 + 4) = v104;
        v106 = *v105;
        v107 = (_QWORD *)v105[1];
        if ( *(_QWORD **)(*v105 + 8LL) != v105 || (_QWORD *)*v107 != v105 )
          __fastfail(3u);
        *v107 = v106;
        *(_QWORD *)(v106 + 8) = v107;
      }
    }
    v51 = *(_QWORD **)(v44 + 24);
    v52 = (__int64)(v51 - 2);
    if ( v51 != ii )
    {
      v108 = *(unsigned int *)(v52 + 4);
      if ( v44 == v52 + v108 )
      {
        *(_DWORD *)(v52 + 4) = *(_DWORD *)(v44 + 4) + v108;
        v153 = *(_QWORD **)v49;
        v154 = *(_QWORD **)(v44 + 24);
        if ( *(_QWORD *)(*(_QWORD *)v49 + 8LL) != v49 || *v154 != v49 )
          __fastfail(3u);
        *v154 = v153;
        v44 = v52;
        v153[1] = v154;
      }
    }
    if ( *(_QWORD *)(v45 + 32) <= v44 + (unsigned __int64)*(unsigned int *)(v44 + 4) )
    {
      *(_QWORD *)(v45 + 32) = v44;
      v53 = (_QWORD *)(v44 + 16);
      v54 = *v53;
      v55 = (_QWORD *)v53[1];
      if ( *(_QWORD **)(*v53 + 8LL) != v53 || (_QWORD *)*v55 != v53 )
        __fastfail(3u);
      *v55 = v54;
      *(_QWORD *)(v54 + 8) = v55;
    }
    KeReleaseSpinLock(&gmutHeap, NewIrql);
  }
  v56 = *(_QWORD *)(v6 + 64);
  if ( v56 )
  {
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v56 + 112), 0xFFFFFFFF) == 1 )
    {
      *(_WORD *)(v56 + 64) |= 4u;
      if ( (*(_WORD *)(v56 + 64) & 0x40) == 0 )
        FreeNameSpaceObjects((_QWORD *)v56);
    }
    *(_QWORD *)(v6 + 64) = 0LL;
  }
  v57 = *(_QWORD *)(v7 + 416);
  v58 = (unsigned int *)(v57 - 16);
  *(_QWORD *)(v7 + 416) = *(_QWORD *)(v57 + 8);
  *(_DWORD *)(v57 - 16) = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v59 = *((_QWORD *)v58 + 1);
  v60 = *(unsigned int **)(v59 + 40);
  for ( jj = (unsigned int *)(v59 + 40); v60 != jj; v60 = *(unsigned int **)v60 )
  {
    if ( v58 + 4 < v60 )
      break;
  }
  v62 = (__int64 **)*((_QWORD *)v60 + 1);
  v63 = (__int64 *)(v58 + 4);
  if ( *v62 != (__int64 *)v60 )
    __fastfail(3u);
  *v63 = (__int64)v60;
  *((_QWORD *)v58 + 3) = v62;
  *v62 = v63;
  *((_QWORD *)v60 + 1) = v63;
  v64 = *v63 - 16;
  if ( (unsigned int *)*v63 != jj )
  {
    v109 = v58[1];
    if ( (unsigned int *)v64 == (unsigned int *)((char *)v58 + v109) )
    {
      v110 = *(_DWORD *)(v64 + 4) + v109;
      v111 = (_QWORD *)*v63;
      v58[1] = v110;
      v112 = *v111;
      v113 = (_QWORD *)v111[1];
      if ( *(_QWORD **)(*v111 + 8LL) != v111 || (_QWORD *)*v113 != v111 )
        __fastfail(3u);
      *v113 = v112;
      *(_QWORD *)(v112 + 8) = v113;
    }
  }
  v65 = (unsigned int *)*((_QWORD *)v58 + 3);
  v66 = v65 - 4;
  if ( v65 != jj )
  {
    v125 = v66[1];
    if ( v58 == (unsigned int *)((char *)v66 + v125) )
    {
      v66[1] = v58[1] + v125;
      v155 = (__int64 *)*v63;
      v156 = (__int64 **)*((_QWORD *)v58 + 3);
      if ( *(__int64 **)(*v63 + 8) != v63 || *v156 != v63 )
        __fastfail(3u);
      *v156 = v155;
      v58 = v66;
      v155[1] = (__int64)v156;
    }
  }
  if ( *(_QWORD *)(v59 + 32) <= (unsigned __int64)v58 + v58[1] )
  {
    *(_QWORD *)(v59 + 32) = v58;
    v67 = v58 + 4;
    v68 = *v67;
    v69 = (_QWORD *)v67[1];
    if ( *(_QWORD **)(*v67 + 8LL) != v67 || (_QWORD *)*v69 != v67 )
      __fastfail(3u);
    *v69 = v68;
    *(_QWORD *)(v68 + 8) = v69;
  }
  KeReleaseSpinLock(&gmutHeap, NewIrql);
  return NameSpaceObjectNoLock;
}
