/*
 * XREFs of AcpiArblibReferenceArbiter @ 0x1C00113D0
 * Callers:
 *     AcpiArblibEjectInterface @ 0x1C009F9C8 (AcpiArblibEjectInterface.c)
 * Callees:
 *     <none>
 */

void __fastcall AcpiArblibReferenceArbiter(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 88));
}
