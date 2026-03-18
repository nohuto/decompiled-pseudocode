/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0079F40
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C00141A0 (McGenControlCallbackV2.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkEtwEnableCallback()
{
  if ( (qword_1C003C050 & 0x188ED7) == 0 || (bTracingEnabled = 1, (qword_1C003C058 & 0xFFFFFFFFFFE77128uLL) != 0) )
    bTracingEnabled = 0;
}
