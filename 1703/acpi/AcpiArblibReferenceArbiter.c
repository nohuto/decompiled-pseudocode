/*
 * XREFs of AcpiArblibReferenceArbiter @ 0x1C0005270
 * Callers:
 *     AcpiArblibEjectInterface @ 0x1C009C9F8 (AcpiArblibEjectInterface.c)
 * Callees:
 *     <none>
 */

void __fastcall AcpiArblibReferenceArbiter(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 88));
}
