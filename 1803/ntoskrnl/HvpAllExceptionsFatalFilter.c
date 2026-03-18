/*
 * XREFs of HvpAllExceptionsFatalFilter @ 0x140706C30
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x140706D20 (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiBugCheck @ 0x140223454 (CmSiBugCheck.c)
 */

void __fastcall __noreturn HvpAllExceptionsFatalFilter(ULONG_PTR *a1)
{
  CmSiBugCheck((__int64)a1, *(int *)*a1, *a1, a1[1]);
}
