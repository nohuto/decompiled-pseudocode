/*
 * XREFs of RtlGuardIsValidStackPointer @ 0x180078858
 * Callers:
 *     RtlUnwindEx @ 0x180026F90 (RtlUnwindEx.c)
 *     RtlGuardRestoreContext @ 0x180078800 (RtlGuardRestoreContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlGuardIsValidStackPointer(void *a1)
{
  struct _TEB *v1; // rdx

  v1 = NtCurrentTeb();
  return a1 >= v1->NtTib.StackLimit && a1 <= v1->NtTib.StackBase;
}
