/*
 * XREFs of WriteBuffField @ 0x1C0018688
 * Callers:
 *     WriteFieldObj @ 0x1C00168F0 (WriteFieldObj.c)
 * Callees:
 *     WriteSystemMem @ 0x1C0018728 (WriteSystemMem.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
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
    LogError(3222536196LL);
    AcpiDiagTraceAmlError(a1, 3222536196LL);
    PrintDebugMessage(211, *a3, *(_DWORD *)(a2 + 8), v8, 0LL);
    return (unsigned int)-1072431100;
  }
  else
  {
    WriteSystemMem((void *)(*(_QWORD *)a2 + v9), v8);
  }
  return v4;
}
