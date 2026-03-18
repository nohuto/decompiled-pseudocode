/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0073418
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0013C00 (McGenControlCallbackV2.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkEtwEnableCallback()
{
  if ( (qword_1C0040010 & 0x21C8ED7) == 0 || (bTracingEnabled = 1, (qword_1C0040018 & 0xFFFFFFFFFDE37128uLL) != 0) )
    bTracingEnabled = 0;
}
