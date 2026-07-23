/*
 * XREFs of sub_1800EF700 @ 0x1800EF700
 * Callers:
 *     RtlSetHeapInformation @ 0x18007EF50 (RtlSetHeapInformation.c)
 *     RtlHeapTrkInitialize @ 0x1800F5D20 (RtlHeapTrkInitialize.c)
 * Callees:
 *     sub_1800059EC @ 0x1800059EC (sub_1800059EC.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_1800F0CC0 @ 0x1800F0CC0 (sub_1800F0CC0.c)
 */

__int64 __fastcall sub_1800EF700(_DWORD *HeapHandle, __int64 a2)
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
      RtlEnterCriticalSection(&stru_180159A80);
      v4 = 52LL;
      if ( HeapHandle[4] == -571548178 )
        v4 = 9LL;
      if ( LOWORD(HeapHandle[v4]) == 0xFFFF )
        v5 = -1073741811;
      else
        v5 = sub_1800F0CC0(HeapHandle);
      RtlLeaveCriticalSection(&stru_180159A80);
      return v5;
    }
  }
  else
  {
    dword_180159B6C = *(_DWORD *)(a2 + 12);
    qword_180159B88 = *(_QWORD *)(a2 + 40);
    qword_180159B80 = *(_QWORD *)(a2 + 32);
    qword_180159B78 = *(_QWORD *)(a2 + 24);
    dword_180159B70 = *(_DWORD *)(a2 + 16);
    sub_1800059EC((__int64)sub_1800F0CC0, a2, 0);
    return 0LL;
  }
}
