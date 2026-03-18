/*
 * XREFs of NVMeDirectiveIdentifyEnableDirective @ 0x1C000F9C4
 * Callers:
 *     NVMeInitStreams @ 0x1C0006A78 (NVMeInitStreams.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C00075C0 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x1C0010058 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011A4C (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

__int64 __fastcall NVMeDirectiveIdentifyEnableDirective(__int64 a1)
{
  __int64 v2; // rdx
  char v3; // al
  __int64 v4; // r8

  *(_BYTE *)(a1 + 571) = 0;
  memset(*(void **)(a1 + 656), 0, 0x1098uLL);
  v2 = *(_QWORD *)(a1 + 656);
  *(_QWORD *)(a1 + 624) = v2;
  *(_DWORD *)(a1 + 560) = 1;
  v3 = *(_BYTE *)(v2 + 4245);
  *(_DWORD *)(v2 + 4100) = -1;
  *(_BYTE *)(v2 + 4145) = 1;
  *(_DWORD *)(v2 + 4144) |= 1u;
  *(_BYTE *)(v2 + 4245) = v3 & 0xFC | 1;
  *(_QWORD *)(v2 + 4216) = NVMeDirectiveCompletion;
  *(_BYTE *)(v2 + 4096) = 25;
  *(_WORD *)(v2 + 4140) = 1;
  SrbAssignQueueId(a1, a1 + 568);
  ProcessCommand(a1, a1 + 568);
  LOBYTE(v4) = 1;
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v4, 10000LL);
  return *(_BYTE *)(a1 + 571) != 1 ? 0xC1000001 : 0;
}
