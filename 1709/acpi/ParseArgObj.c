/*
 * XREFs of ParseArgObj @ 0x1C001A078
 * Callers:
 *     ParseOpcode @ 0x1C0019E50 (ParseOpcode.c)
 * Callees:
 *     CopyObjData @ 0x1C001A1A4 (CopyObjData.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 *     PrintObject @ 0x1C005E804 (PrintObject.c)
 */

__int64 __fastcall ParseArgObj(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  unsigned int v6; // esi
  __int64 v8; // rbx

  v5 = *(_QWORD *)(a1 + 96);
  v6 = 0;
  v8 = (unsigned int)**(unsigned __int8 **)(a1 + 120) - 104;
  if ( (unsigned int)v8 >= *(_DWORD *)(v5 + 60) )
  {
    LogError(3222536197LL);
    AcpiDiagTraceAmlError(a1, 3222536197LL);
    PrintDebugMessage(122, v8, 0, 0, 0LL);
    return (unsigned int)-1072431099;
  }
  else
  {
    CopyObjData(a2, *(_QWORD *)(v5 + 64) + 40 * v8, a3, a4);
    ++*(_QWORD *)(a1 + 120);
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("Arg%d=");
      PrintObject(a2);
    }
  }
  return v6;
}
