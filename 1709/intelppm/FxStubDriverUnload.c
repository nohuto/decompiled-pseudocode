/*
 * XREFs of FxStubDriverUnload @ 0x1C0003DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void FxStubDriverUnload()
{
  if ( qword_1C0014198 && qword_1C0014198 != FxStubDriverUnload )
    qword_1C0014198();
  FxStubDriverUnloadCommon();
}
