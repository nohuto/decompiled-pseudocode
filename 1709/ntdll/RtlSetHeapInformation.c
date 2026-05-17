/*
 * XREFs of RtlSetHeapInformation @ 0x18007D960
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F02A0 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlHeapTrkInitialize @ 0x1800F6B90 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180012914 (RtlpEnumProcessHeaps.c)
 *     RtlpFlushHeap @ 0x180013DA4 (RtlpFlushHeap.c)
 *     RtlRunOnceExecuteOnce @ 0x1800367D0 (RtlRunOnceExecuteOnce.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18007DA20 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800EF510 (RtlSetHeapDebuggingInformation.c)
 *     RtlpHpStackTraceConfig @ 0x180100518 (RtlpHpStackTraceConfig.c)
 */

__int64 __fastcall RtlSetHeapInformation(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rax

  switch ( a2 )
  {
    case -2147483646:
      if ( a3 && a4 == 48 )
      {
        result = RtlSetHeapDebuggingInformation(a1, a3);
LABEL_9:
        if ( (int)result < 0 )
          return result;
        return 0LL;
      }
      return 3221225473LL;
    case 0:
      if ( a4 < 4 )
        return 3221225507LL;
      if ( *(_DWORD *)a3 == 2 )
      {
        if ( *(_DWORD *)(a1 + 16) != -571548178 )
        {
          if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
          {
            result = RtlpSetRequestedFrontEndHeap();
            goto LABEL_9;
          }
          return 3221225485LL;
        }
        return 0LL;
      }
      return 3221225473LL;
    case 1:
      RtlpDisableBreakOnFailureCookie = 0;
      return 0LL;
  }
  if ( a2 != 4 )
  {
    if ( a2 == 3 )
    {
      if ( !a3 || a4 < 4 || *(_DWORD *)a3 != 1 || a4 != 8 || *(_DWORD *)(a3 + 4) )
        return 3221225485LL;
      if ( a1 )
      {
        RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
        v6 = 60LL;
        if ( *(_DWORD *)(a1 + 16) != -571548178 )
          v6 = 208LL;
        if ( *(_WORD *)(v6 + a1) != 0xFFFF )
          RtlpFlushHeap(a1);
        RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock);
      }
      else
      {
        RtlpEnumProcessHeaps((__int64 (__fastcall *)(_QWORD, _QWORD))RtlpFlushHeapsCallback, 0LL, 0);
      }
    }
    else if ( a2 == 5 )
    {
      if ( !a3 || a4 < 0x10 || *(_WORD *)a3 != 1 || (*(_WORD *)(a3 + 2) & 0xFFFE) != 0 )
        return 3221225485LL;
      RtlpHpStackTraceConfig(a3);
    }
    return 0LL;
  }
  if ( (RtlpHpHeapFeatures & 1) == 0 )
    return 3221225485LL;
  result = RtlRunOnceExecuteOnce(
             &RtlpHpTagInitVar,
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpTagRunOnceInit,
             (__int64)&RtlpHpTagContext,
             0LL);
  if ( (int)result >= 0 )
  {
    RtlpHpHeapFeatures |= 2u;
    return 0LL;
  }
  return result;
}
