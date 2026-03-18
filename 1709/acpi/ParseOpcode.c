/*
 * XREFs of ParseOpcode @ 0x1C0019E50
 * Callers:
 *     ParsePackage @ 0x1C0019240 (ParsePackage.c)
 *     ParseArg @ 0x1C0019DE4 (ParseArg.c)
 * Callees:
 *     PushTerm @ 0x1C0019F78 (PushTerm.c)
 *     ParseArgObj @ 0x1C001A078 (ParseArgObj.c)
 *     ParseIntObj @ 0x1C001A1F4 (ParseIntObj.c)
 *     ParseString @ 0x1C001A300 (ParseString.c)
 *     ParseNameObj @ 0x1C001ADAC (ParseNameObj.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     FindOpcodeTerm @ 0x1C00291B4 (FindOpcodeTerm.c)
 *     ParseLocalObj @ 0x1C002A9E0 (ParseLocalObj.c)
 *     AMLIDebugger @ 0x1C005DC30 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 */

__int64 __fastcall ParseOpcode(__int64 a1, int a2, __int64 a3)
{
  PVOID v3; // r9
  PVOID *v4; // rax
  __int64 v7; // rdx
  unsigned __int8 *v9; // r10
  __int64 OpcodeTerm; // r9
  int v11; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8

  v3 = *(PVOID *)(a1 + 120);
  v4 = (PVOID *)&unk_1C00796F0;
  v7 = 0LL;
  do
  {
    if ( v3 == *v4 )
      break;
    v7 = (unsigned int)(v7 + 1);
    v4 += 2;
  }
  while ( (__int64)v4 < (__int64)&P );
  if ( (_DWORD)v7 != 10 && (dword_1C00796E8[4 * (int)v7] & 1) != 0 && (_DWORD)v7 != -1 )
  {
    ConPrintf("\nHit Breakpoint %d.\n");
    AMLIDebugger(v14, v13, v15);
  }
  v9 = *(unsigned __int8 **)(a1 + 120);
  if ( *v9 == 91 )
  {
    *(_QWORD *)(a1 + 120) = v9 + 1;
    OpcodeTerm = FindOpcodeTerm(v9[1], v7, a3, v3);
  }
  else
  {
    OpcodeTerm = (__int64)*(&OpcodeTable + *v9);
  }
  if ( OpcodeTerm )
  {
    v11 = *(_DWORD *)(OpcodeTerm + 28);
    if ( (v11 & 8) != 0 )
    {
      return ParseIntObj(a1, a1 + 120, a3, 0LL);
    }
    else if ( (v11 & 0x10) != 0 )
    {
      return ParseString(a1, a1 + 120, a3, 0LL);
    }
    else if ( (v11 & 2) != 0 )
    {
      return ParseArgObj(a1, a3);
    }
    else if ( (v11 & 4) != 0 )
    {
      return ParseLocalObj(a1, a3);
    }
    else if ( (v11 & 0x20) != 0 )
    {
      return ParseNameObj(a1, a3, a3, OpcodeTerm);
    }
    else if ( (v11 & 0x40) != 0 )
    {
      LogError(3222536198LL);
      AcpiDiagTraceAmlError(a1, 3222536198LL);
      PrintDebugMessage(133, 0, 0, 0, 0LL);
      return 3222536198LL;
    }
    else
    {
      ++*(_QWORD *)(a1 + 120);
      return PushTerm(a1, (_DWORD)v9, a2, OpcodeTerm, a3);
    }
  }
  else
  {
    LogError(3222536193LL);
    AcpiDiagTraceAmlError(a1, 3222536193LL);
    PrintDebugMessage(134, **(unsigned __int8 **)(a1 + 120), *(_QWORD *)(a1 + 120), 0, 0LL);
    return 3222536193LL;
  }
}
