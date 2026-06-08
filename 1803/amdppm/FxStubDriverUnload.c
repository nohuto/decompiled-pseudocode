/*
 * XREFs of FxStubDriverUnload @ 0x1C000C5F0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiCStateIdleCancel @ 0x1C0001630 (AcpiCStateIdleCancel.c)
 */

void __fastcall FxStubDriverUnload(__int64 a1)
{
  if ( qword_1C0011198 && (char *)qword_1C0011198 != (char *)FxStubDriverUnload )
    qword_1C0011198(a1);
  FxStubDriverUnloadCommon();
}
