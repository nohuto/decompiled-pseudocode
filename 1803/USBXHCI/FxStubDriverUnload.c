/*
 * XREFs of FxStubDriverUnload @ 0x1C0002010
 * Callers:
 *     <none>
 * Callees:
 *     Control_Cleanup @ 0x1C0001D40 (Control_Cleanup.c)
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0001E40 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 */

void __fastcall FxStubDriverUnload(__int64 a1)
{
  if ( qword_1C004C820 && (char *)qword_1C004C820 != (char *)FxStubDriverUnload )
    qword_1C004C820(a1);
  FxStubDriverUnloadCommon();
}
