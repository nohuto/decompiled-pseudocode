/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C00567A0
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0003CA0 (McGenControlCallbackV2.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkEtwEnableCallback()
{
  bool v0; // al

  v0 = (qword_1C0047010 & 0x21C8ED7) != 0 && (qword_1C0047018 & 0xFFFFFFFFFDE37128uLL) == 0;
  bTracingEnabled = v0;
}
