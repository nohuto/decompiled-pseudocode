/*
 * XREFs of HvcallInitInputControl @ 0x14028B6F4
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x1406B30D4 (HvlpCreateRootVirtualProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvcallInitInputControl(int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = a1;
  *a2 = a1;
  return result;
}
