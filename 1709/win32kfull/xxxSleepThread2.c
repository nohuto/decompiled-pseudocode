/*
 * XREFs of xxxSleepThread2 @ 0x1C00A3308
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C00475C4 (xxxDCETrackCaptionButton.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     xxxRemoteDisconnect @ 0x1C00D63E0 (xxxRemoteDisconnect.c)
 *     NtUserWaitMessage @ 0x1C00F83C0 (NtUserWaitMessage.c)
 *     xxxIsDragging @ 0x1C0140348 (xxxIsDragging.c)
 *     xxxSleepThread @ 0x1C01B580C (xxxSleepThread.c)
 *     xxxWaitMessageEx @ 0x1C01C1328 (xxxWaitMessageEx.c)
 *     NtUserRealWaitMessageEx @ 0x1C01EA7E0 (NtUserRealWaitMessageEx.c)
 *     NtUserWaitAvailableMessageEx @ 0x1C01ED770 (NtUserWaitAvailableMessageEx.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C01F3C94 (xxxRequestOutOfFullScreenMode.c)
 *     xxxbFullscreenSwitch @ 0x1C01F3D7C (xxxbFullscreenSwitch.c)
 *     xxxTrackCaptionButton @ 0x1C02125C4 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02134AC (xxxDragObject.c)
 * Callees:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3440 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxHandleHealthyThread @ 0x1C01340D0 (xxxHandleHealthyThread.c)
 */

__int64 __fastcall xxxSleepThread2(unsigned int a1, unsigned int a2, int a3, int a4, enum SLEEP_STATUS *a5)
{
  int v5; // ebp
  unsigned int v10; // esi
  unsigned __int64 v11; // rbx
  int v12; // eax

  v5 = 0;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 104LL) )
  {
    v5 = 1;
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1128LL) = 0;
    if ( *(int *)(gptiCurrent + 464LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1184LL) &= ~0x80000000;
  }
  v10 = xxxRealSleepThread(a1, a2, a3, a4, a5);
  if ( v5 )
  {
    v11 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    EtwTraceMessageCheckDelay(gptiCurrent);
    v12 = -1;
    if ( (_DWORD)v11 )
      v12 = v11;
    *(_DWORD *)(gptiCurrent + 1128LL) = v12;
    if ( *(int *)(gptiCurrent + 464LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1184LL) &= ~0x80000000;
  }
  return v10;
}
