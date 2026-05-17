/*
 * XREFs of sub_180055720 @ 0x180055720
 * Callers:
 *     sub_180025ACC @ 0x180025ACC (sub_180025ACC.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     sub_180108770 @ 0x180108770 (sub_180108770.c)
 */

unsigned __int64 __fastcall sub_180055720(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  int v6; // ett
  unsigned int v7; // edi
  __int64 v8; // rcx

  _m_prefetchw((const void *)(a1 + 232));
  result = *(unsigned int *)(a1 + 232);
  if ( (unsigned int)result >= 2 )
  {
    _m_prefetchw((const void *)(a1 + 232));
    LODWORD(result) = *(_DWORD *)(a1 + 232);
    do
    {
      v6 = result;
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 232), result & 1, result);
    }
    while ( v6 != (_DWORD)result );
    v7 = (unsigned int)result >> 1;
    if ( (unsigned int)result >> 1 )
    {
      sub_180055584((volatile signed __int64 *)(a1 + 56), -v7, 0LL, a4);
      result = (unsigned __int64)RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned __int64)NtCurrentPeb();
        v8 = *(_QWORD *)(result + 144) + 556LL;
      }
      else
      {
        v8 = 2147353478LL;
      }
      if ( *(_BYTE *)v8 )
        return sub_180108770(
                 *(_QWORD *)(a1 + 144),
                 (int)a1 + 200,
                 *(_QWORD *)(a1 + 80),
                 *(_QWORD *)(a1 + 88),
                 *(_QWORD *)(a1 + 104),
                 v7);
    }
  }
  return result;
}
