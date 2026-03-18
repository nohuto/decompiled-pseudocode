/*
 * XREFs of FxStubDriverUnload @ 0x1C0038BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void FxStubDriverUnload()
{
  if ( qword_1C005E6F8 && qword_1C005E6F8 != FxStubDriverUnload )
    qword_1C005E6F8();
  FxStubDriverUnloadCommon();
}
