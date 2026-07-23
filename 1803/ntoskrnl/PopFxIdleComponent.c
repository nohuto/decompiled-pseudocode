/*
 * XREFs of PopFxIdleComponent @ 0x1400786EC
 * Callers:
 *     PopFxResidentTimeoutRoutine @ 0x140077910 (PopFxResidentTimeoutRoutine.c)
 *     PopFxCompleteComponentActivation @ 0x140078628 (PopFxCompleteComponentActivation.c)
 *     PoFxIdleComponent @ 0x1400786D0 (PoFxIdleComponent.c)
 *     PoFxIdleDevice @ 0x140146A58 (PoFxIdleDevice.c)
 *     PoFxReportDevicePoweredOn @ 0x140165D00 (PoFxReportDevicePoweredOn.c)
 *     PoFxStartDevicePowerManagement @ 0x140181020 (PoFxStartDevicePowerManagement.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140035880 (RtlGetInterruptTimePrecise.c)
 *     PopFxIdleWorker @ 0x140078330 (PopFxIdleWorker.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x140078860 (PpmInterlockedUpdateTimeNoFence.c)
 *     PopFxArmResidentTimer @ 0x140079CB0 (PopFxArmResidentTimer.c)
 *     PopFxQueueWorkOrder @ 0x140079DC0 (PopFxQueueWorkOrder.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxIdleComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  unsigned int v3; // esi
  LARGE_INTEGER v6; // r11
  ULONG_PTR v7; // rbx
  __int64 result; // rax
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v3 = BugCheckParameter3;
  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 708) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  _mm_lfence();
  v6.QuadPart = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 712) + 8LL * (unsigned int)BugCheckParameter3);
  if ( PopFxActiveIdleLevel == 2 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))PpmInterlockedUpdateTimeNoFence)(
      v7 + 144,
      (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
      &v11);
  }
  else
  {
    v11 = *(_QWORD *)(v7 + 144);
  }
  if ( (*(_DWORD *)(v7 + 88) & 0x3FFFFFFF) == 0 )
    PopFxBugCheck(0x608uLL, v7, *(int *)(v7 + 88), 0LL);
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 88));
  if ( (_DWORD)result == 0x80000000 )
  {
    if ( !v6.QuadPart )
      v6 = RtlGetInterruptTimePrecise(&PerformanceCounter);
    if ( (*(_DWORD *)(v7 + 92) & 2) == 0
      && !PopFxLowPowerEpoch
      && v6.QuadPart - v11 < (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
    {
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 88), -2147483647, 0x80000000);
      if ( (_DWORD)result != 0x80000000 )
        return result;
      if ( _InterlockedIncrement((volatile signed __int32 *)(v7 + 96)) == 1 )
      {
        result = (unsigned int)_InterlockedIncrement(&PopFxResidentComponentCount);
        if ( (_DWORD)result == 1 )
          return PopFxArmResidentTimer(0LL);
        return result;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 96));
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 88));
    }
    if ( PopFxActiveIdleLevel == 1 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))PpmInterlockedUpdateTimeNoFence)(
        v7 + 144,
        (LARGE_INTEGER)v6.QuadPart,
        0LL);
    if ( (a3 & 2) != 0 )
      return PopFxQueueWorkOrder(&PopFxSystemWorkQueue, (PLIST_ENTRY)(v7 + 24), BugCheckParameter2);
    else
      return PopFxIdleWorker((__int64 *)BugCheckParameter2, v3);
  }
  return result;
}
