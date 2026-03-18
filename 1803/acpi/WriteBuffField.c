/*
 * XREFs of WriteBuffField @ 0x1C004DA50
 * Callers:
 *     AccessFieldData @ 0x1C004C4E0 (AccessFieldData.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     WriteSystemMem @ 0x1C004E3B4 (WriteSystemMem.c)
 */

__int64 __fastcall WriteBuffField(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // esi
  unsigned int v6; // ecx
  unsigned int v8; // ebx
  __int64 v9; // rdx

  v4 = 0;
  v6 = (a3[3] & 0xF) - 1;
  v8 = 1;
  if ( v6 <= 3 )
    v8 = 1 << v6;
  v9 = *a3;
  if ( (unsigned int)v9 + v8 > *(_DWORD *)(a2 + 8) )
  {
    LogError(-1072431100);
    AcpiDiagTraceAmlError(a1, -1072431100);
    PrintDebugMessage(211, (const void *)*a3, (const void *)*(unsigned int *)(a2 + 8), (const void *)v8, 0LL);
    return (unsigned int)-1072431100;
  }
  else
  {
    WriteSystemMem((void *)(*(_QWORD *)a2 + v9), v8);
  }
  return v4;
}
