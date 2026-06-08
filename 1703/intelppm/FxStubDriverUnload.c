/*
 * XREFs of FxStubDriverUnload @ 0x1C0003CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void FxStubDriverUnload()
{
  if ( qword_1C0013198 && qword_1C0013198 != FxStubDriverUnload )
    qword_1C0013198();
  FxStubDriverUnloadCommon();
}
