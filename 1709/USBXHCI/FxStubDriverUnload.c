/*
 * XREFs of FxStubDriverUnload @ 0x1C00072B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void FxStubDriverUnload()
{
  if ( qword_1C004F5F8 && qword_1C004F5F8 != FxStubDriverUnload )
    qword_1C004F5F8();
  FxStubDriverUnloadCommon();
}
