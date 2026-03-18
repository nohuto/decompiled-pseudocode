/*
 * XREFs of NVMeDirectiveStreamsGetStatus @ 0x1C0010328
 * Callers:
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C000CE78 (IoctlStorageStreamsGetOpenStreams.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002820 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     SetPrpFromBuffer @ 0x1C000DA08 (SetPrpFromBuffer.c)
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011F28 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall NVMeDirectiveStreamsGetStatus(__int64 a1, __int64 a2, int a3, _DWORD *a4, __int64 a5)
{
  void *v7; // rcx

  if ( !a3 || !a5 )
    return 3238002694LL;
  *(_BYTE *)(a1 + 603) = 0;
  v7 = *(void **)(a1 + 688);
  *a4 = 0;
  memset(v7, 0, 0x10A0uLL);
  *(_QWORD *)(a1 + 656) = *(_QWORD *)(a1 + 688);
  *(_DWORD *)(a1 + 592) = 1;
  NVMeAllocateDmaBuffer(a1, 2 * a3 + 2);
  return 3238002691LL;
}
