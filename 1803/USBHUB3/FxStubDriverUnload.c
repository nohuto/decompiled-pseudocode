/*
 * XREFs of FxStubDriverUnload @ 0x1C00398B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_GetPortStatusForDebuggingComplete @ 0x1C000B710 (HUBFDO_GetPortStatusForDebuggingComplete.c)
 */

void __fastcall FxStubDriverUnload(__int64 a1)
{
  if ( qword_1C005E6F8 && (char *)qword_1C005E6F8 != (char *)FxStubDriverUnload )
    qword_1C005E6F8(a1);
  FxStubDriverUnloadCommon();
}
