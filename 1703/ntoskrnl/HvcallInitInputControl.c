/*
 * XREFs of HvcallInitInputControl @ 0x140261AAC
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x1406876B8 (HvlpCreateRootVirtualProcessor.c)
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
