/*
 * XREFs of ReadBuffField @ 0x1C004D3F8
 * Callers:
 *     AccessFieldData @ 0x1C004C4E0 (AccessFieldData.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     ReadSystemMem @ 0x1C004D91C (ReadSystemMem.c)
 */

__int64 __fastcall ReadBuffField(__int64 a1, __int64 a2, unsigned int *a3, _QWORD *a4)
{
  unsigned int v5; // esi
  unsigned int v7; // ecx
  unsigned int v9; // ebx
  __int64 v10; // rdx

  v5 = 0;
  v7 = (a3[3] & 0xF) - 1;
  v9 = 1;
  if ( v7 <= 3 )
    v9 = 1 << v7;
  v10 = *a3;
  if ( (unsigned int)v10 + v9 > *(_DWORD *)(a2 + 8) )
  {
    LogError(-1072431100);
    AcpiDiagTraceAmlError(a1, -1072431100);
    PrintDebugMessage(160, (const void *)*a3, (const void *)*(unsigned int *)(a2 + 8), (const void *)v9, 0LL);
    return (unsigned int)-1072431100;
  }
  else
  {
    *a4 = ReadSystemMem((void *)(*(_QWORD *)a2 + v10), v9);
  }
  return v5;
}
