/*
 * XREFs of ReadBuffField @ 0x1C0012594
 * Callers:
 *     ReadFieldObj @ 0x1C0010900 (ReadFieldObj.c)
 * Callees:
 *     ReadSystemMem @ 0x1C0012630 (ReadSystemMem.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 */

__int64 __fastcall ReadBuffField(__int64 a1, __int64 a2, unsigned int *a3, _QWORD *a4)
{
  unsigned int v5; // edi
  int v7; // ecx
  unsigned int v9; // ebx
  __int64 v10; // rdx

  v5 = 0;
  v7 = a3[3] & 0xF;
  v9 = 1;
  if ( (unsigned int)(v7 - 1) <= 3 )
    v9 = 1 << (v7 - 1);
  v10 = *a3;
  if ( (unsigned int)v10 + v9 > *(_DWORD *)(a2 + 8) )
  {
    LogError(3222536196LL);
    AcpiDiagTraceAmlError(a1, 3222536196LL);
    PrintDebugMessage(160, *a3, *(_DWORD *)(a2 + 8), v9, 0LL);
    return (unsigned int)-1072431100;
  }
  else
  {
    *a4 = ReadSystemMem((void *)(*(_QWORD *)a2 + v10), v9);
  }
  return v5;
}
