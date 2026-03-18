/*
 * XREFs of NVMeDirectiveStreamsReleaseId @ 0x1C0010240
 * Callers:
 *     IoctlStorageStreamsReleaseId @ 0x1C000CD78 (IoctlStorageStreamsReleaseId.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011F28 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall NVMeDirectiveStreamsReleaseId(__int64 a1, int a2, __int16 a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r8

  *(_BYTE *)(a1 + 603) = 0;
  memset(*(void **)(a1 + 688), 0, 0x10A0uLL);
  v6 = *(_QWORD *)(a1 + 688);
  *(_QWORD *)(a1 + 656) = v6;
  v7 = v6;
  *(_DWORD *)(a1 + 592) = 1;
  LOBYTE(v6) = *(_BYTE *)(v6 + 4253) & 0xFD;
  *(_DWORD *)(v7 + 4100) = a2;
  *(_BYTE *)(v7 + 4096) = 25;
  *(_BYTE *)(v7 + 4253) = v6 | 1;
  *(_WORD *)(v7 + 4140) = 257;
  *(_QWORD *)(v7 + 4224) = NVMeDirectiveCompletion;
  *(_WORD *)(v7 + 4142) = a3;
  SrbAssignQueueId(a1, a1 + 600);
  ProcessCommand(a1, a1 + 600);
  LOBYTE(v8) = 1;
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 600, v8, 10000LL);
  return *(_BYTE *)(a1 + 603) != 1 ? 0xC1000001 : 0;
}
