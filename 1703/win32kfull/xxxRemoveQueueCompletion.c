/*
 * XREFs of xxxRemoveQueueCompletion @ 0x1C00C8860
 * Callers:
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 *     ?xxxDesktopThreadWaiter@@YAKKPEAVLegacyInputDispatcher@@@Z @ 0x1C00C85A8 (-xxxDesktopThreadWaiter@@YAKKPEAVLegacyInputDispatcher@@@Z.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C01033A4 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C010C51C (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 * Callees:
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00C8914 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 */

__int64 xxxRemoveQueueCompletion()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax
  int v2; // esi
  _BYTE v4[32]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+70h] [rbp+8h] BYREF
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF

  v0 = 0;
  v6 = 0LL;
  v1 = ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1296LL), v4, 1LL, &v5, &v6, 0);
  v2 = xxxHandleQueueCompletion(gptiCurrent, v1, v4, 1LL);
  if ( v2 == 3 )
    ZwAssociateWaitCompletionPacket(
      *(_QWORD *)(gptiCurrent + 1320LL),
      *(_QWORD *)(gptiCurrent + 1296LL),
      *(_QWORD *)(gptiCurrent + 1312LL),
      0LL,
      0LL,
      0,
      0LL,
      0LL);
  LOBYTE(v0) = v2 == 4;
  return v0;
}
