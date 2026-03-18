/*
 * XREFs of DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C003E278
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C004025C (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C01C7A04 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     Template_xq @ 0x1C00414C4 (Template_xq.c)
 */

__int64 __fastcall DpiMiracastEtwLogStartMiracastSessionStage(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    return Template_xq(a1, &EventMiracastStartMiracastSessionStage, a3, *(_QWORD *)(a1 + 96), a2);
  return result;
}
