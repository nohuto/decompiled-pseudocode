/*
 * XREFs of ParseString @ 0x1C0016CB4
 * Callers:
 *     ParseScope @ 0x1C0012A00 (ParseScope.c)
 *     ParsePackage @ 0x1C00148B0 (ParsePackage.c)
 *     ParseArg @ 0x1C001681C (ParseArg.c)
 *     ParseOpcode @ 0x1C0016890 (ParseOpcode.c)
 *     ParseTerm @ 0x1C0018340 (ParseTerm.c)
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 */

__int64 __fastcall ParseString(__int64 a1, const void **a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rax
  _BYTE *v10; // rdx
  void *v11; // rax

  v4 = 0;
  if ( *(_BYTE *)*a2 == 13 )
  {
    *a2 = (char *)*a2 + 1;
    *(_WORD *)(a3 + 2) = 2;
    v9 = -1LL;
    v10 = *a2;
    do
      ++v9;
    while ( v10[v9] );
    *(_DWORD *)(a3 + 24) = v9 + 1;
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("\"%s\"");
    v11 = (void *)HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(a3 + 24));
    *(_QWORD *)(a3 + 32) = v11;
    if ( v11 )
    {
      memmove(v11, *a2, *(unsigned int *)(a3 + 24));
    }
    else
    {
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(139, 0, 0, 0, 0LL);
      v4 = -1073741670;
    }
    *a2 = (char *)*a2 + *(unsigned int *)(a3 + 24);
  }
  else
  {
    if ( !a4 )
    {
      LogError(3222536193LL);
      AcpiDiagTraceAmlError(a1, 3222536193LL);
      PrintDebugMessage(140, *(unsigned __int8 *)*a2, (unsigned int)*a2, 0, 0LL);
    }
    return (unsigned int)-1072431103;
  }
  return v4;
}
