/*
 * XREFs of PopDirectedDripsNotify @ 0x140761720
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14027B24C (PopCaptureSleepStudyStatistics.c)
 *     PdcPoResiliencyClient @ 0x140764CE0 (PdcPoResiliencyClient.c)
 *     PopDripsCallbackTakeAction @ 0x14076DE64 (PopDripsCallbackTakeAction.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14076E360 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x140278830 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsPdcResiliencyNotification @ 0x140761BB8 (PopDirectedDripsPdcResiliencyNotification.c)
 */

signed __int32 __fastcall PopDirectedDripsNotify(int a1, __int64 a2)
{
  signed __int32 result; // eax
  signed __int32 v3; // ebx
  signed __int32 v4; // ett
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rcx
  int v8; // ecx

  _m_prefetchw(&PopDirectedDripsState);
  result = PopDirectedDripsState;
  v3 = 0;
  do
  {
    v4 = result;
    result = _InterlockedCompareExchange(&PopDirectedDripsState, result, result);
  }
  while ( v4 != result );
  if ( (result & 1) != 0 )
  {
    if ( !a1 )
    {
      result = _InterlockedExchangeAdd(&dword_1403AAFBC, 0xFFFFFFFF);
      if ( result != 1 )
        return result;
      result = _InterlockedExchange(&dword_1403AAFC4, 0);
      goto LABEL_19;
    }
    v5 = a1 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( !v6 )
        return _InterlockedExchange(&dword_1403AAFBC, dword_1403AAFB8);
      v7 = (unsigned int)(v6 - 1);
      if ( (_DWORD)v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 == 1 )
          {
            result = dword_1403AB044;
            *(_DWORD *)(*(_QWORD *)a2 + 188LL) = dword_1403AB044;
          }
        }
        else
        {
          dword_1403AB044 = 0;
        }
      }
      else
      {
        LOBYTE(a2) = *(_BYTE *)a2;
        return PopDirectedDripsPdcResiliencyNotification(v7, a2);
      }
      return result;
    }
    result = _InterlockedExchangeAdd(&dword_1403AAFBC, 0);
    if ( result <= 0 )
    {
      v3 = _InterlockedExchangeAdd(&dword_1403AAFC4, 0);
      result = dword_1403AAFC0;
      if ( v3 != dword_1403AAFC0 )
      {
        result = PopQueueDirectedDripsWork((__int64)&PopDirectedDripsState, dword_1403AAFC0 != 0 ? 1024LL : 256LL);
LABEL_19:
        dword_1403AAFC0 = v3;
      }
    }
  }
  return result;
}
