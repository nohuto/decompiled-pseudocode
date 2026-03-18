/*
 * XREFs of DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C003E2A8
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C003F900 (DpiMiracastTearDownAssociation.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C01C7E88 (DpiMiracastHandleStopSessionDone.c)
 * Callees:
 *     Template_xq @ 0x1C00414C4 (Template_xq.c)
 */

__int64 __fastcall DpiMiracastEtwLogStopMiracastSessionStage(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    return Template_xq(a1, &EventMiracastStopMiracastSessionStage, a3, *(_QWORD *)(a1 + 96), a2);
  return result;
}
