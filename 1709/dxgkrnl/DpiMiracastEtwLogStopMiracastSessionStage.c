/*
 * XREFs of DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C002EE28
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0030410 (DpiMiracastTearDownAssociation.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C01E1FC0 (DpiMiracastHandleStopSessionDone.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C00205AC (McTemplateK0xq.c)
 */

NTSTATUS __fastcall DpiMiracastEtwLogStopMiracastSessionStage(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
    return McTemplateK0xq(a1, &EventMiracastStopMiracastSessionStage, a3, *(_QWORD *)(a1 + 96), a2);
  return result;
}
