/*
 * XREFs of NVMeDirectiveIdentifyEnableDirective @ 0x1C000FEBC
 * Callers:
 *     NVMeInitStreams @ 0x1C0006CF8 (NVMeInitStreams.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011F28 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall NVMeDirectiveIdentifyEnableDirective(__int64 a1)
{
  __int64 v2; // rdx
  char v3; // al
  __int64 v4; // r8

  *(_BYTE *)(a1 + 603) = 0;
  memset(*(void **)(a1 + 688), 0, 0x10A0uLL);
  v2 = *(_QWORD *)(a1 + 688);
  *(_QWORD *)(a1 + 656) = v2;
  *(_DWORD *)(a1 + 592) = 1;
  v3 = *(_BYTE *)(v2 + 4253);
  *(_DWORD *)(v2 + 4100) = -1;
  *(_BYTE *)(v2 + 4145) = 1;
  *(_DWORD *)(v2 + 4144) |= 1u;
  *(_BYTE *)(v2 + 4253) = v3 & 0xFC | 1;
  *(_QWORD *)(v2 + 4224) = NVMeDirectiveCompletion;
  *(_BYTE *)(v2 + 4096) = 25;
  *(_WORD *)(v2 + 4140) = 1;
  SrbAssignQueueId(a1, a1 + 600);
  ProcessCommand(a1, a1 + 600);
  LOBYTE(v4) = 1;
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 600, v4, 10000LL);
  return *(_BYTE *)(a1 + 603) != 1 ? 0xC1000001 : 0;
}
