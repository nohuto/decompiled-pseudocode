/*
 * XREFs of ParseOpcode @ 0x1C0055E28
 * Callers:
 *     ParsePackage @ 0x1C0052430 (ParsePackage.c)
 *     ParseArg @ 0x1C00545E8 (ParseArg.c)
 *     ParseScope @ 0x1C0056300 (ParseScope.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     FindOpcodeTerm @ 0x1C00467B8 (FindOpcodeTerm.c)
 *     AMLIDebugger @ 0x1C0048460 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     PushTerm @ 0x1C004E810 (PushTerm.c)
 *     ParseArgObj @ 0x1C0054760 (ParseArgObj.c)
 *     ParseIntObj @ 0x1C00554A0 (ParseIntObj.c)
 *     ParseLocalObj @ 0x1C00558EC (ParseLocalObj.c)
 *     ParseNameObj @ 0x1C0055A68 (ParseNameObj.c)
 *     ParseString @ 0x1C005652C (ParseString.c)
 */

__int64 __fastcall ParseOpcode(__int64 a1, __int64 a2, __int64 a3)
{
  const void **v3; // rsi
  PVOID *v6; // rax
  PVOID v7; // rcx
  int v9; // edx
  _BYTE *v10; // r10
  unsigned __int8 v11; // al
  _BYTE *v12; // r8
  __int64 OpcodeTerm; // r9
  unsigned int v14; // ebx
  int v15; // eax

  v3 = (const void **)(a1 + 120);
  v6 = (PVOID *)&unk_1C00676F0;
  v7 = *(PVOID *)(a1 + 120);
  v9 = 0;
  do
  {
    if ( v7 == *v6 )
      break;
    ++v9;
    v6 += 2;
  }
  while ( (__int64)v6 < (__int64)&qword_1C0067790 );
  if ( v9 == 10 || (dword_1C00676E8[4 * v9] & 1) == 0 )
    v9 = -1;
  if ( v9 != -1 )
  {
    ConPrintf("\nHit Breakpoint %d.\n", v9);
    AMLIDebugger();
  }
  v10 = *v3;
  v11 = *(_BYTE *)*v3;
  if ( v11 == 91 )
  {
    *v3 = v10 + 1;
    OpcodeTerm = FindOpcodeTerm((unsigned __int8)v10[1]);
  }
  else
  {
    v12 = *v3;
    OpcodeTerm = (__int64)*(&OpcodeTable + v11);
  }
  if ( OpcodeTerm )
  {
    v15 = *(_DWORD *)(OpcodeTerm + 28);
    if ( (v15 & 8) != 0 )
    {
      return (unsigned int)ParseIntObj(a1, v3, a3, 0);
    }
    else if ( (v15 & 0x10) != 0 )
    {
      return (unsigned int)ParseString(a1, v3, a3, 0LL);
    }
    else if ( (v15 & 2) != 0 )
    {
      return (unsigned int)ParseArgObj(a1, a3);
    }
    else if ( (v15 & 4) != 0 )
    {
      return (unsigned int)ParseLocalObj(a1, a3);
    }
    else if ( (v15 & 0x20) != 0 )
    {
      return (unsigned int)ParseNameObj(a1, a3);
    }
    else
    {
      if ( (v15 & 0x40) != 0 )
      {
        v14 = -1072431098;
        LogError(-1072431098);
        AcpiDiagTraceAmlError(a1, -1072431098);
        PrintDebugMessage(133, 0LL, 0LL, 0LL, 0LL);
        return v14;
      }
      *v3 = v12 + 1;
      return (unsigned int)PushTerm(a1, (__int64)v10, a2, OpcodeTerm, a3);
    }
  }
  else
  {
    v14 = -1072431103;
    LogError(-1072431103);
    AcpiDiagTraceAmlError(a1, -1072431103);
    PrintDebugMessage(134, (const void *)*(unsigned __int8 *)*v3, *v3, 0LL, 0LL);
  }
  return v14;
}
