/*
 * XREFs of FxStubDriverUnload @ 0x1C000C3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void FxStubDriverUnload()
{
  if ( qword_1C0011198 && qword_1C0011198 != FxStubDriverUnload )
    qword_1C0011198();
  FxStubDriverUnloadCommon();
}
