/*
 * XREFs of ParseString @ 0x1C005652C
 * Callers:
 *     ParsePackage @ 0x1C0052430 (ParsePackage.c)
 *     ParseArg @ 0x1C00545E8 (ParseArg.c)
 *     ParseOpcode @ 0x1C0055E28 (ParseOpcode.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003394 (HeapAlloc.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseString(__int64 a1, const char **a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rax
  const char *v9; // rdx
  unsigned int v10; // r8d
  void *v11; // rax

  v4 = 0;
  if ( **a2 == 13 )
  {
    ++*a2;
    *(_WORD *)(a3 + 2) = 2;
    v8 = -1LL;
    v9 = *a2;
    do
      ++v8;
    while ( v9[v8] );
    v10 = v8 + 1;
    *(_DWORD *)(a3 + 24) = v8 + 1;
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("\"%s\"", *a2);
      v10 = *(_DWORD *)(a3 + 24);
    }
    v11 = (void *)HeapAlloc(gpheapGlobal, 1381258056, v10);
    *(_QWORD *)(a3 + 32) = v11;
    if ( v11 )
    {
      memmove(v11, *a2, *(unsigned int *)(a3 + 24));
    }
    else
    {
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      PrintDebugMessage(139, 0LL, 0LL, 0LL, 0LL);
      v4 = -1073741670;
    }
    *a2 += *(unsigned int *)(a3 + 24);
  }
  else
  {
    if ( !a4 )
    {
      LogError(-1072431103);
      AcpiDiagTraceAmlError(a1, -1072431103);
      PrintDebugMessage(140, (const void *)*(unsigned __int8 *)*a2, *a2, 0LL, 0LL);
    }
    return (unsigned int)-1072431103;
  }
  return v4;
}
