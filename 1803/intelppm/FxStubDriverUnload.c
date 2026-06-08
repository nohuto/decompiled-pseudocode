/*
 * XREFs of FxStubDriverUnload @ 0x1C0003E30
 * Callers:
 *     <none>
 * Callees:
 *     AcpiCStateIdleCancel @ 0x1C0001580 (AcpiCStateIdleCancel.c)
 */

void __fastcall FxStubDriverUnload(__int64 a1)
{
  if ( qword_1C0015198 && (char *)qword_1C0015198 != (char *)FxStubDriverUnload )
    qword_1C0015198(a1);
  FxStubDriverUnloadCommon();
}
