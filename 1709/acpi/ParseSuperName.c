/*
 * XREFs of ParseSuperName @ 0x1C0018D90
 * Callers:
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     ParseArg @ 0x1C0019DE4 (ParseArg.c)
 * Callees:
 *     GetNameSpaceObjectNoLock @ 0x1C000BEE0 (GetNameSpaceObjectNoLock.c)
 *     ParseNameTail @ 0x1C000D0C0 (ParseNameTail.c)
 *     RtlStringCchCopyA @ 0x1C000EEC4 (RtlStringCchCopyA.c)
 *     PushTerm @ 0x1C0019F78 (PushTerm.c)
 *     GetBaseData @ 0x1C001A170 (GetBaseData.c)
 *     FreeNameSpaceObjects @ 0x1C001AE60 (FreeNameSpaceObjects.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 */

__int64 __fastcall ParseSuperName(__int64 a1, __int64 a2, char a3, int a4)
{
  unsigned int v4; // edi
  unsigned __int8 *v6; // rdx
  __int64 v9; // rsi
  unsigned __int8 v10; // cl
  __int64 v11; // r9
  int v12; // eax
  int NameSpaceObjectNoLock; // r14d
  __int64 v14; // rcx
  unsigned __int8 v15; // al
  int v16; // r11d
  char *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // r9
  char v21; // al
  bool v23; // zf
  size_t v24; // rbx
  _BYTE *PoolWithTag; // rsi
  KIRQL v26; // bl
  __int64 v27; // rcx
  char v28; // al
  __int64 v29; // rcx
  __int64 v30; // rsi
  unsigned int v31; // eax
  char *v32; // rcx
  _BYTE *v33; // rax
  unsigned int i; // edx
  __int64 v35; // rsi
  int v36; // r15d
  __int64 v37; // rcx
  int v39; // [rsp+34h] [rbp-CCh]
  __int64 v40; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+40h] [rbp-C0h]
  char Src; // [rsp+50h] [rbp-B0h] BYREF
  char v43; // [rsp+51h] [rbp-AFh] BYREF
  _BYTE P[128]; // [rsp+150h] [rbp+50h] BYREF

  v4 = 0;
  v40 = 0LL;
  v6 = *(unsigned __int8 **)(a1 + 120);
  v9 = 0LL;
  v10 = *v6;
  if ( !*v6 )
  {
    *(_QWORD *)(a1 + 120) = v6 + 1;
    return v4;
  }
  if ( v10 == 91 && v6[1] == 49 )
  {
    *(_QWORD *)(a1 + 120) = v6 + 2;
    *(_WORD *)(a2 + 2) = 16;
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("Debug");
    return v4;
  }
  v11 = (__int64)*(&OpcodeTable + v10);
  if ( !v11 )
    goto LABEL_89;
  v12 = *(_DWORD *)(v11 + 28);
  if ( (v12 & 0x20) != 0 )
  {
    v41 = *(_QWORD *)(a1 + 80);
    if ( *v6 == 92 )
    {
      RtlStringCchCopyA(&Src, 0x100uLL, "\\");
      ++*(_QWORD *)(a1 + 120);
    }
    else
    {
      if ( *v6 != 94 )
      {
        Src = 0;
        NameSpaceObjectNoLock = 0;
        v14 = -1LL;
        do
          ++v14;
        while ( *(&Src + v14) );
        v15 = *v6;
        if ( !*v6 )
        {
          *(_QWORD *)(a1 + 120) = v6 + 1;
          goto LABEL_25;
        }
        if ( v15 != 47 )
        {
          if ( v15 == 46 )
          {
            v16 = 2;
            *(_QWORD *)(a1 + 120) = v6 + 1;
          }
          else
          {
            v16 = 1;
          }
          while ( 1 )
          {
LABEL_13:
            if ( (unsigned __int64)(unsigned int)v14 + 4 >= 0x100 )
            {
              NameSpaceObjectNoLock = -1073741562;
              LogError(3221225734LL);
              AcpiDiagTraceAmlError(a1, 3221225734LL);
              PrintDebugMessage(130, (unsigned int)&Src, 0, 0, 0LL);
              goto LABEL_25;
            }
            v17 = &Src + (unsigned int)v14;
            v18 = (unsigned int)(256 - v14);
            if ( (unsigned __int64)(v18 - 1) <= 0x7FFFFFFE )
              break;
            if ( 256 != (_DWORD)v14 )
              goto LABEL_23;
LABEL_24:
            *(_QWORD *)(a1 + 120) += 4LL;
            LODWORD(v14) = v14 + 4;
            v23 = v16-- == 1;
            v39 = v16;
            if ( v23 )
              goto LABEL_25;
            v36 = v14 + 1;
            if ( (unsigned int)(v14 + 1) < 0x100 )
            {
              RtlStringCchCopyA(&Src + (unsigned int)v14, (unsigned int)(256 - v14), ".");
              v16 = v39;
              LODWORD(v14) = v36;
            }
          }
          v19 = 4 - v18;
          v20 = *(_QWORD *)(a1 + 120) - (_QWORD)v17;
          while ( v19 + v18 )
          {
            v21 = v17[v20];
            if ( !v21 )
              break;
            *v17++ = v21;
            if ( !--v18 )
              goto LABEL_72;
          }
          if ( v18 )
            goto LABEL_23;
LABEL_72:
          --v17;
LABEL_23:
          *v17 = 0;
          goto LABEL_24;
        }
        *(_QWORD *)(a1 + 120) = v6 + 1;
        v16 = v6[1];
        *(_QWORD *)(a1 + 120) = v6 + 2;
        if ( v16 )
          goto LABEL_13;
LABEL_25:
        if ( !NameSpaceObjectNoLock )
        {
          if ( (gDebugger & 0xD0) != 0 )
            ConPrintf("%s");
          v24 = -1LL;
          do
            ++v24;
          while ( *(&Src + v24) );
          if ( v24 + 1 >= 0x80 )
          {
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v24 + 1, 0x69706341u);
            if ( !PoolWithTag )
              return (unsigned int)-1073741670;
          }
          else
          {
            PoolWithTag = P;
          }
          memmove(PoolWithTag, &Src, v24);
          PoolWithTag[v24] = 0;
          v26 = ExAcquireSpinLockShared(&ACPINamespaceLock);
          NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(PoolWithTag, v41, (__int64)&v40, 0);
          ExReleaseSpinLockShared(&ACPINamespaceLock, v26);
          if ( P != PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          if ( NameSpaceObjectNoLock == -1073741772 )
          {
            if ( a3 )
              return v4;
            LogError(3221225524LL);
            AcpiDiagTraceAmlError(a1, 3221225524LL);
            PrintDebugMessage(120, (unsigned int)&Src, 0, 0, 0LL);
          }
          v9 = v40;
        }
        goto LABEL_36;
      }
      RtlStringCchCopyA(&Src, 0x100uLL, "^");
      ++*(_QWORD *)(a1 + 120);
      v32 = &v43;
      v33 = *(_BYTE **)(a1 + 120);
      for ( i = 1; i < 0xFF; ++i )
      {
        if ( *v33 != 94 )
          break;
        ++v33;
        *v32++ = 94;
        *(_QWORD *)(a1 + 120) = v33;
      }
      *(&Src + i) = 0;
      if ( **(_BYTE **)(a1 + 120) == 94 )
      {
        NameSpaceObjectNoLock = -1073741562;
        LogError(3221225734LL);
        AcpiDiagTraceAmlError(a1, 3221225734LL);
        PrintDebugMessage(129, (unsigned int)&Src, 0, 0, 0LL);
LABEL_36:
        v4 = NameSpaceObjectNoLock;
        if ( !NameSpaceObjectNoLock && v9 )
        {
          v27 = v9;
          for ( *(_WORD *)(a2 + 2) = 128; *(_WORD *)(v27 + 66) == 128; v27 = *(_QWORD *)(v27 + 80) )
            ;
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v27 + 112));
            v9 = v40;
          }
          v28 = gdwfAMLI;
          *(_QWORD *)(a2 + 16) = v27;
          if ( (v28 & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 112), 0xFFFFFFFF) == 1 )
          {
            v37 = v40;
            *(_WORD *)(v40 + 64) |= 4u;
            if ( (*(_WORD *)(v37 + 64) & 0x40) == 0 )
              FreeNameSpaceObjects(v37);
          }
          v29 = *(_QWORD *)(a2 + 16);
          if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 112), 0xFFFFFFFF) == 1 )
          {
            *(_WORD *)(v29 + 64) |= 4u;
            if ( (*(_WORD *)(v29 + 64) & 0x40) == 0 )
              FreeNameSpaceObjects(v29);
          }
        }
        return v4;
      }
    }
    NameSpaceObjectNoLock = ParseNameTail(a1, (char **)(a1 + 120), (__int64)&Src);
    goto LABEL_25;
  }
  if ( (v12 & 2) == 0 )
  {
    if ( (v12 & 4) != 0 )
    {
      v30 = (unsigned int)v10 - 96;
      *(_QWORD *)(a1 + 120) = v6 + 1;
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("Local%d");
      *(_WORD *)(a2 + 2) = 129;
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 96) + 8 * (v30 + 4 * v30 + 9);
      return v4;
    }
    if ( (v12 & 0x80u) != 0 )
    {
      v31 = PushTerm(a1, (_DWORD)v6, a4, v11, a2);
      ++*(_QWORD *)(a1 + 120);
      return v31;
    }
LABEL_89:
    LogError(3222536199LL);
    AcpiDiagTraceAmlError(a1, 3222536199LL);
    PrintDebugMessage(141, **(unsigned __int8 **)(a1 + 120), *(_QWORD *)(a1 + 120), 0, 0LL);
    return (unsigned int)-1072431097;
  }
  *(_QWORD *)(a1 + 120) = v6 + 1;
  v35 = (unsigned int)v10 - 104;
  if ( (unsigned int)v35 >= *(_DWORD *)(*(_QWORD *)(a1 + 96) + 60LL) )
  {
    LogError(3222536197LL);
    AcpiDiagTraceAmlError(a1, 3222536197LL);
    PrintDebugMessage(142, v35, 0, 0, 0LL);
    return (unsigned int)-1072431099;
  }
  else
  {
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("Arg%d");
    *(_WORD *)(a2 + 2) = 129;
    *(_QWORD *)(a2 + 16) = GetBaseData(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 64LL) + 40 * v35);
  }
  return v4;
}
