/*
 * XREFs of sub_18007E200 @ 0x18007E200
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall sub_18007E200(__int64 a1)
{
  __int64 v1; // r8
  LOGICAL result; // eax

  v1 = *(_QWORD *)(a1 + 336);
  if ( v1 )
  {
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 8), 0xFFFFFFFF);
    if ( result == 1 )
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 3145728, *(PVOID *)v1);
  }
  return result;
}
