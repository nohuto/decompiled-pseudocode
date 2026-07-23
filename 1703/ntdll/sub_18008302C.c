/*
 * XREFs of sub_18008302C @ 0x18008302C
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall sub_18008302C(__int64 a1)
{
  __int64 v1; // r8
  LOGICAL result; // eax

  v1 = *(_QWORD *)(a1 + 336);
  if ( v1 )
  {
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 8), 0xFFFFFFFF);
    if ( result == 1 )
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 3145728, *(PVOID *)v1);
  }
  return result;
}
