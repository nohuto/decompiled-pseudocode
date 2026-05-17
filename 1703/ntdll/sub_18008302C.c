/*
 * XREFs of sub_18008302C @ 0x18008302C
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_18008302C(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 336);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 8), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 3145728, *(_QWORD *)v1);
  }
  return result;
}
