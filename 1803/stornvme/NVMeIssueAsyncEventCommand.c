/*
 * XREFs of NVMeIssueAsyncEventCommand @ 0x1C000F8D8
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0004908 (NVMeControllerInitPart2.c)
 *     NVMeGetLogPageCompletion @ 0x1C000F4B0 (NVMeGetLogPageCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000F620 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall NVMeIssueAsyncEventCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  *(_BYTE *)(a2 + 11) = 0;
  memset(*(void **)(a2 + 96), 0, 0x10A0uLL);
  v4 = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 64) = v4;
  *(_DWORD *)a2 = 1;
  *(_BYTE *)(v4 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a2 + 96) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a2 + 96) + 4244LL) = 0;
  *(_BYTE *)(*(_QWORD *)(a2 + 96) + 4096LL) = 12;
  *(_QWORD *)(*(_QWORD *)(a2 + 96) + 4224LL) = NVMeAsyncEventRequestCompletion;
  return ProcessCommand(a1, a2 + 8);
}
