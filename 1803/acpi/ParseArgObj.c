/*
 * XREFs of ParseArgObj @ 0x1C0054760
 * Callers:
 *     ParseOpcode @ 0x1C0055E28 (ParseOpcode.c)
 * Callees:
 *     CopyObjData @ 0x1C000324C (CopyObjData.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintObject @ 0x1C00491C0 (PrintObject.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseArgObj(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v4; // esi
  __int64 v6; // rbx

  v3 = *(_QWORD *)(a1 + 96);
  v4 = 0;
  v6 = (unsigned int)**(unsigned __int8 **)(a1 + 120) - 104;
  if ( (unsigned int)v6 < *(_DWORD *)(v3 + 60) )
  {
    CopyObjData(a2, *(_QWORD *)(v3 + 64) + 40 * v6);
    ++*(_QWORD *)(a1 + 120);
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("Arg%d=", v6);
      PrintObject(a2);
    }
  }
  else
  {
    LogError(-1072431099);
    AcpiDiagTraceAmlError(a1, -1072431099);
    PrintDebugMessage(122, (const void *)(unsigned int)v6, 0LL, 0LL, 0LL);
    return (unsigned int)-1072431099;
  }
  return v4;
}
