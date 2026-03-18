/*
 * XREFs of NVMeIssueAsyncEventCommand @ 0x1C000F3C8
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C00048E4 (NVMeControllerInitPart2.c)
 *     NVMeGetLogPageCompletion @ 0x1C000EFB0 (NVMeGetLogPageCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000F110 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     ProcessCommand @ 0x1C0010058 (ProcessCommand.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

__int64 __fastcall NVMeIssueAsyncEventCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  *(_BYTE *)(a2 + 11) = 0;
  memset(*(void **)(a2 + 96), 0, 0x1098uLL);
  v4 = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 64) = v4;
  *(_DWORD *)a2 = 1;
  *(_BYTE *)(v4 + 4245) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a2 + 96) + 4245LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a2 + 96) + 4236LL) = 0;
  *(_BYTE *)(*(_QWORD *)(a2 + 96) + 4096LL) = 12;
  *(_QWORD *)(*(_QWORD *)(a2 + 96) + 4216LL) = NVMeAsyncEventRequestCompletion;
  return ProcessCommand(a1, a2 + 8);
}
