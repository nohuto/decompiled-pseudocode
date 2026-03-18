/*
 * XREFs of ParseOpcode @ 0x1C0016890
 * Callers:
 *     ParsePackage @ 0x1C00148B0 (ParsePackage.c)
 *     ParseArg @ 0x1C001681C (ParseArg.c)
 * Callees:
 *     ParseArgObj @ 0x1C0014144 (ParseArgObj.c)
 *     ParseNameObj @ 0x1C00147FC (ParseNameObj.c)
 *     PushTerm @ 0x1C00169B8 (PushTerm.c)
 *     ParseString @ 0x1C0016CB4 (ParseString.c)
 *     ParseIntObj @ 0x1C001B1D0 (ParseIntObj.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     FindOpcodeTerm @ 0x1C00286A8 (FindOpcodeTerm.c)
 *     ParseLocalObj @ 0x1C0029AD8 (ParseLocalObj.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     AMLIDebugger @ 0x1C005BEF8 (AMLIDebugger.c)
 */

__int64 __fastcall ParseOpcode(__int64 a1, int a2, __int64 a3)
{
  PVOID *v3; // rax
  int v6; // edx
  unsigned __int8 *v8; // r10
  __int64 OpcodeTerm; // r9
  int v10; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  v3 = (PVOID *)&unk_1C0077630;
  v6 = 0;
  do
  {
    if ( *(PVOID *)(a1 + 120) == *v3 )
      break;
    ++v6;
    v3 += 2;
  }
  while ( (__int64)v3 < (__int64)&qword_1C00776D0 );
  if ( v6 != 10 && (dword_1C0077628[4 * v6] & 1) != 0 && v6 != -1 )
  {
    ConPrintf("\nHit Breakpoint %d.\n");
    AMLIDebugger(v13, v12, v14, v15);
  }
  v8 = *(unsigned __int8 **)(a1 + 120);
  if ( *v8 == 91 )
  {
    *(_QWORD *)(a1 + 120) = v8 + 1;
    OpcodeTerm = FindOpcodeTerm(v8[1]);
  }
  else
  {
    OpcodeTerm = (__int64)*(&OpcodeTable + *v8);
  }
  if ( OpcodeTerm )
  {
    v10 = *(_DWORD *)(OpcodeTerm + 28);
    if ( (v10 & 8) != 0 )
    {
      return ParseIntObj(a1, a1 + 120, a3, 0LL);
    }
    else if ( (v10 & 0x10) != 0 )
    {
      return ParseString(a1, a1 + 120, a3, 0LL);
    }
    else if ( (v10 & 2) != 0 )
    {
      return ParseArgObj(a1, a3, a3, OpcodeTerm);
    }
    else if ( (v10 & 4) != 0 )
    {
      return ParseLocalObj(a1, a3);
    }
    else if ( (v10 & 0x20) != 0 )
    {
      return ParseNameObj(a1, a3);
    }
    else if ( (v10 & 0x40) != 0 )
    {
      LogError(3222536198LL);
      AcpiDiagTraceAmlError(a1, 3222536198LL);
      PrintDebugMessage(133, 0, 0, 0, 0LL);
      return 3222536198LL;
    }
    else
    {
      ++*(_QWORD *)(a1 + 120);
      return PushTerm(a1, (_DWORD)v8, a2, OpcodeTerm, a3);
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
