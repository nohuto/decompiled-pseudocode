/*
 * XREFs of HvcallInitInputControl @ 0x1402C0D94
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x140717C40 (HvlpCreateRootVirtualProcessor.c)
 *     HvlUpdateMicrocode @ 0x140717DD0 (HvlUpdateMicrocode.c)
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
