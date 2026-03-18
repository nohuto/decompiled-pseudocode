/*
 * XREFs of NVMeDirectiveStreamsGetStatus @ 0x1C000FE48
 * Callers:
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C000CA48 (IoctlStorageStreamsGetOpenStreams.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00028B0 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C00075C0 (SrbAssignQueueId.c)
 *     SetPrpFromBuffer @ 0x1C000D554 (SetPrpFromBuffer.c)
 *     ProcessCommand @ 0x1C0010058 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011A4C (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

__int64 __fastcall NVMeDirectiveStreamsGetStatus(__int64 a1, __int64 a2, int a3, _DWORD *a4, __int64 a5)
{
  if ( !a3 || !a5 )
    return 3238002694LL;
  *a4 = 0;
  *(_BYTE *)(a1 + 571) = 0;
  memset(*(void **)(a1 + 656), 0, 0x1098uLL);
  *(_QWORD *)(a1 + 624) = *(_QWORD *)(a1 + 656);
  *(_DWORD *)(a1 + 560) = 1;
  NVMeAllocateDmaBuffer(a1, 2 * a3 + 2);
  return 3238002691LL;
}
