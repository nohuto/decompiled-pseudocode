/*
 * XREFs of sub_18000B304 @ 0x18000B304
 * Callers:
 *     RtlRestoreContext @ 0x18000B1B0 (RtlRestoreContext.c)
 *     RtlUnwindEx @ 0x18000DEA0 (RtlUnwindEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_18000B304(PVOID a1)
{
  struct _TEB *v1; // rdx

  v1 = NtCurrentTeb();
  return a1 >= v1->NtTib.StackLimit && a1 <= v1->NtTib.StackBase;
}
