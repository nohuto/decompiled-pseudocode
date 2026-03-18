/*
 * XREFs of NVMeDirectiveStreamsAllocateResources @ 0x1C000F4D8
 * Callers:
 *     NVMeInitStreams @ 0x1C0006668 (NVMeInitStreams.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C000718C (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x1C000F8C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00102C8 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall NVMeDirectiveStreamsAllocateResources(__int64 a1, int a2, __int16 a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r8

  *(_BYTE *)(a1 + 571) = 0;
  memset(*(void **)(a1 + 656), 0, 0x1098uLL);
  v6 = *(_QWORD *)(a1 + 656);
  *(_QWORD *)(a1 + 624) = v6;
  v7 = v6;
  *(_DWORD *)(a1 + 560) = 1;
  LOBYTE(v6) = *(_BYTE *)(v6 + 4245) & 0xFD;
  *(_DWORD *)(v7 + 4100) = a2;
  *(_BYTE *)(v7 + 4096) = 26;
  *(_BYTE *)(v7 + 4245) = v6 | 1;
  *(_WORD *)(v7 + 4140) = 259;
  *(_QWORD *)(v7 + 4216) = NVMeDirectiveCompletion;
  *(_WORD *)(v7 + 4144) = a3;
  SrbAssignQueueId(a1, a1 + 568);
  ProcessCommand(a1, a1 + 568);
  LOBYTE(v8) = 1;
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v8, 10000LL);
  return *(_BYTE *)(a1 + 571) != 1 ? 0xC1000001 : 0;
}
