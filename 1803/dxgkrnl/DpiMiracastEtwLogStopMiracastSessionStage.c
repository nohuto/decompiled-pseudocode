/*
 * XREFs of DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C003CF18
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C003E500 (DpiMiracastTearDownAssociation.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C01FF984 (DpiMiracastHandleStopSessionDone.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C0040120 (McTemplateK0xq.c)
 */

__int64 __fastcall DpiMiracastEtwLogStopMiracastSessionStage(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
    return McTemplateK0xq(a1, &EventMiracastStopMiracastSessionStage, a3, *(_QWORD *)(a1 + 96), a2);
  return result;
}
