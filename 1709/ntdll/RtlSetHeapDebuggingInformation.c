/*
 * XREFs of RtlSetHeapDebuggingInformation @ 0x1800EF510
 * Callers:
 *     RtlSetHeapInformation @ 0x18007D960 (RtlSetHeapInformation.c)
 *     RtlHeapTrkInitialize @ 0x1800F6B90 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180012914 (RtlpEnumProcessHeaps.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800F0CD0 (RtlpSetHeapDebuggingInformation.c)
 */

__int64 __fastcall RtlSetHeapDebuggingInformation(_DWORD *HeapHandle, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx

  if ( HeapHandle )
  {
    if ( (HeapHandle[29] & 0x1000000) != 0 )
    {
      return 3221225474LL;
    }
    else
    {
      RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
      v4 = 15LL;
      if ( HeapHandle[4] != -571548178 )
        v4 = 52LL;
      if ( LOWORD(HeapHandle[v4]) == 0xFFFF )
        v5 = -1073741811;
      else
        v5 = RtlpSetHeapDebuggingInformation(HeapHandle);
      RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
      return v5;
    }
  }
  else
  {
    dword_18015DBAC = *(_DWORD *)(a2 + 12);
    qword_18015DBC8 = *(_QWORD *)(a2 + 40);
    qword_18015DBC0 = *(_QWORD *)(a2 + 32);
    qword_18015DBB8 = *(_QWORD *)(a2 + 24);
    dword_18015DBB0 = *(_DWORD *)(a2 + 16);
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(_QWORD, _QWORD))RtlpSetHeapDebuggingInformation, a2, 0);
    return 0LL;
  }
}
