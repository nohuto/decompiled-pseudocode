/*
 * XREFs of NVMeDirectiveStreamsGetStatus @ 0x1C000F6A8
 * Callers:
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C000C2BC (IoctlStorageStreamsGetOpenStreams.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002610 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C000718C (SrbAssignQueueId.c)
 *     SetPrpFromBuffer @ 0x1C000CDE8 (SetPrpFromBuffer.c)
 *     ProcessCommand @ 0x1C000F8C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00102C8 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall NVMeDirectiveStreamsGetStatus(__int64 a1, __int64 a2, int a3, _DWORD *a4, __int64 a5)
{
  void *v7; // rcx

  if ( !a4 || !a3 || !a5 )
    return 3238002694LL;
  *(_BYTE *)(a1 + 571) = 0;
  v7 = *(void **)(a1 + 656);
  *a4 = 0;
  memset(v7, 0, 0x1098uLL);
  *(_QWORD *)(a1 + 624) = *(_QWORD *)(a1 + 656);
  *(_DWORD *)(a1 + 560) = 1;
  NVMeAllocateDmaBuffer(a1, 2 * a3 + 2);
  return 3238002691LL;
}
