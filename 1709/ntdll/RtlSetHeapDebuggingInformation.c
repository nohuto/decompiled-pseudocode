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

__int64 __fastcall RtlSetHeapDebuggingInformation(__int64 a1, __int64 a2)
{
  __int64 v5; // rax
  unsigned int v6; // ebx

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      return 3221225474LL;
    }
    else
    {
      RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
      v5 = 60LL;
      if ( *(_DWORD *)(a1 + 16) != -571548178 )
        v5 = 208LL;
      if ( *(_WORD *)(v5 + a1) == 0xFFFF )
        v6 = -1073741811;
      else
        v6 = RtlpSetHeapDebuggingInformation(a1, a2);
      RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock);
      return v6;
    }
  }
  else
  {
    dword_18015DBAC = *(_DWORD *)(a2 + 12);
    qword_18015DBC8 = *(_QWORD *)(a2 + 40);
    qword_18015DBC0 = *(_QWORD *)(a2 + 32);
    qword_18015DBB8 = *(_QWORD *)(a2 + 24);
    dword_18015DBB0 = *(_DWORD *)(a2 + 16);
    RtlpEnumProcessHeaps(RtlpSetHeapDebuggingInformation, a2, 0);
    return 0LL;
  }
}
