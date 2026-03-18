/*
 * XREFs of xxxRemoveQueueCompletion @ 0x1C00A3A98
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C0048A94 (xxxDesktopThreadWaiter.c)
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3440 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C010F654 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C0115708 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x1C0143E0C (xxxMsgWaitForMultipleObjectsEx.c)
 *     _RemoveQueueCompletion @ 0x1C0144110 (_RemoveQueueCompletion.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0086A48 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 */

__int64 xxxRemoveQueueCompletion()
{
  unsigned int v0; // ebx
  int v1; // eax
  __int64 v2; // r9
  int v3; // edi
  ULONG64 v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF
  __int64 v8; // [rsp+78h] [rbp+10h] BYREF

  v0 = 0;
  v8 = 0LL;
  v1 = ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1384LL), &v5, 1LL, &v7, &v8, 0);
  v3 = 0;
  if ( v1 )
  {
    v3 = v1 == 258;
  }
  else if ( v6 == 1 )
  {
    v3 = 3;
    ZwAssociateWaitCompletionPacket(
      *(_QWORD *)(gptiCurrent + 1408LL),
      *(_QWORD *)(gptiCurrent + 1384LL),
      *(_QWORD *)(gptiCurrent + 1400LL),
      0LL,
      1LL,
      0,
      0LL,
      0LL);
  }
  else if ( v6 == 2 )
  {
    v3 = 2;
  }
  else if ( !v6 && *(_QWORD *)(gptiCurrent + 1424LL) )
  {
    v3 = v6 + 4;
    xxxHandleCoreMessagingQueueCompletion(gptiCurrent, &v5, (unsigned int)(v6 + 1), v2);
  }
  LOBYTE(v0) = v3 == 4;
  return v0;
}
