/*
 * XREFs of DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C003CEE8
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C003EE7C (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C01FF524 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C0040120 (McTemplateK0xq.c)
 */

__int64 __fastcall DpiMiracastEtwLogStartMiracastSessionStage(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
    return McTemplateK0xq(a1, &EventMiracastStartMiracastSessionStage, a3, *(_QWORD *)(a1 + 96), a2);
  return result;
}
