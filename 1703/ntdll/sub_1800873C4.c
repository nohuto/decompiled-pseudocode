/*
 * XREFs of sub_1800873C4 @ 0x1800873C4
 * Callers:
 *     sub_180055274 @ 0x180055274 (sub_180055274.c)
 *     sub_180087358 @ 0x180087358 (sub_180087358.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

_UNKNOWN **__fastcall sub_1800873C4(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int i; // edi
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = &retaddr;
    for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
    {
      result = *(_UNKNOWN ***)(a1 + 8);
      v4 = (unsigned __int64)result[i];
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 24);
        *(_DWORD *)(v4 + 8) = 0;
        *(_QWORD *)(v4 + 16) = 0LL;
        if ( v5 )
        {
          ZwClose(v5);
          *(_QWORD *)(v4 + 24) = 0LL;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * i) = 0LL;
        result = (_UNKNOWN **)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
      }
    }
    if ( (*(_BYTE *)a1 & 1) != 0 )
      result = (_UNKNOWN **)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 0LL;
  }
  return result;
}
