/*
 * XREFs of PopFxIdleComponent @ 0x140069D5C
 * Callers:
 *     PoFxIdleDevice @ 0x140068444 (PoFxIdleDevice.c)
 *     PopFxResidentTimeoutRoutine @ 0x140068C50 (PopFxResidentTimeoutRoutine.c)
 *     PopFxCompleteComponentActivation @ 0x140069C9C (PopFxCompleteComponentActivation.c)
 *     PoFxIdleComponent @ 0x140069D40 (PoFxIdleComponent.c)
 *     PoFxReportDevicePoweredOn @ 0x140144960 (PoFxReportDevicePoweredOn.c)
 *     PoFxStartDevicePowerManagement @ 0x1401624F0 (PoFxStartDevicePowerManagement.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140044EC0 (RtlGetInterruptTimePrecise.c)
 *     PopFxQueueWorkOrder @ 0x14006882C (PopFxQueueWorkOrder.c)
 *     PopFxArmResidentTimer @ 0x140068BAC (PopFxArmResidentTimer.c)
 *     PopFxIdleWorker @ 0x140069984 (PopFxIdleWorker.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x140069EE0 (PpmInterlockedUpdateTimeNoFence.c)
 *     PopFxBugCheck @ 0x14022A7A4 (PopFxBugCheck.c)
 */

signed __int32 __fastcall PopFxIdleComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  unsigned int v3; // esi
  LARGE_INTEGER v6; // r11
  ULONG_PTR v7; // rbx
  ULONG_PTR v8; // r14
  signed __int32 result; // eax
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = BugCheckParameter3;
  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 628) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  _mm_lfence();
  v6.QuadPart = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 632) + 8LL * (unsigned int)BugCheckParameter3);
  if ( PopFxActiveIdleLevel == 2 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v8 = v7 + 144;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))PpmInterlockedUpdateTimeNoFence)(
      v7 + 144,
      (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
      &v12);
  }
  else
  {
    v8 = v7 + 144;
    v12 = *(_QWORD *)(v7 + 144);
  }
  if ( (*(_DWORD *)(v7 + 88) & 0x3FFFFFFF) == 0 )
    PopFxBugCheck(0x608uLL, v7, *(int *)(v7 + 88), 0LL);
  result = _InterlockedDecrement((volatile signed __int32 *)(v7 + 88));
  if ( result == 0x80000000 )
  {
    if ( !v6.QuadPart )
      v6 = RtlGetInterruptTimePrecise(&PerformanceCounter);
    if ( (*(_DWORD *)(v7 + 92) & 2) == 0
      && !PopFxLowPowerEpoch
      && v6.QuadPart - v12 < (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
    {
      result = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 88), -2147483647, 0x80000000);
      if ( result != 0x80000000 )
        return result;
      if ( _InterlockedIncrement((volatile signed __int32 *)(v7 + 96)) == 1 )
      {
        result = _InterlockedIncrement(&PopFxResidentComponentCount);
        if ( result == 1 )
          return PopFxArmResidentTimer(0);
        return result;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 96));
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 88));
    }
    if ( PopFxActiveIdleLevel == 1 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))PpmInterlockedUpdateTimeNoFence)(
        v8,
        (LARGE_INTEGER)v6.QuadPart,
        0LL);
    if ( (a3 & 2) != 0 )
      return PopFxQueueWorkOrder(&PopFxSystemWorkQueue, (PLIST_ENTRY)(v7 + 24), BugCheckParameter2, 0);
    else
      return PopFxIdleWorker((__int64 *)BugCheckParameter2, v3);
  }
  return result;
}
