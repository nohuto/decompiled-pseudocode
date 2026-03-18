/*
 * XREFs of xxxSleepThread2 @ 0x1C005AE2C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     xxxDCETrackCaptionButton @ 0x1C00C61FC (xxxDCETrackCaptionButton.c)
 *     NtUserWaitMessage @ 0x1C00E6280 (NtUserWaitMessage.c)
 *     xxxRemoteDisconnect @ 0x1C00FE0C0 (xxxRemoteDisconnect.c)
 *     xxxIsDragging @ 0x1C0139758 (xxxIsDragging.c)
 *     xxxSleepThread @ 0x1C01B27FC (xxxSleepThread.c)
 *     xxxWaitMessageEx @ 0x1C01BD408 (xxxWaitMessageEx.c)
 *     NtUserRealWaitMessageEx @ 0x1C01DE6C0 (NtUserRealWaitMessageEx.c)
 *     NtUserWaitAvailableMessageEx @ 0x1C01E15C0 (NtUserWaitAvailableMessageEx.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C01E7CA4 (xxxRequestOutOfFullScreenMode.c)
 *     xxxbFullscreenSwitch @ 0x1C01E7D70 (xxxbFullscreenSwitch.c)
 *     xxxTrackCaptionButton @ 0x1C02110AC (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C0211F88 (xxxDragObject.c)
 * Callees:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C005AF70 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxHandleHealthyThread @ 0x1C0131FD0 (xxxHandleHealthyThread.c)
 */

__int64 __fastcall xxxSleepThread2(unsigned int a1, unsigned int a2, int a3, int a4, enum SLEEP_STATUS *a5)
{
  int v5; // ebp
  unsigned int v10; // esi
  unsigned __int64 v11; // rbx
  int v12; // eax

  v5 = 0;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) )
  {
    v5 = 1;
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1040LL) = 0;
    if ( *(int *)(gptiCurrent + 440LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1096LL) &= ~0x80000000;
  }
  v10 = xxxRealSleepThread(a1, a2, a3, a4, a5);
  if ( v5 )
  {
    v11 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    EtwTraceMessageCheckDelay(gptiCurrent);
    v12 = -1;
    if ( (_DWORD)v11 )
      v12 = v11;
    *(_DWORD *)(gptiCurrent + 1040LL) = v12;
    if ( *(int *)(gptiCurrent + 440LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1096LL) &= ~0x80000000;
  }
  return v10;
}
