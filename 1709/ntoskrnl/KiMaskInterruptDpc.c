/*
 * XREFs of KiMaskInterruptDpc @ 0x1402080C0
 * Callers:
 *     <none>
 * Callees:
 *     KiMaskInterruptInternal @ 0x140205188 (KiMaskInterruptInternal.c)
 */

__int64 __fastcall KiMaskInterruptDpc(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  KiMaskInterruptInternal(a3, a4);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
