/*
 * XREFs of TpReleaseCleanupGroup @ 0x180080240
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 */

__int64 __fastcall TpReleaseCleanupGroup(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( !a1 )
    return sub_1801086C8(a1, a2, a1, a4);
  result = (__int64)NtCurrentPeb();
  a2 = *(_QWORD *)(result + 24);
  if ( *(_BYTE *)(a2 + 72) )
    return result;
  if ( _InterlockedExchange(a1 + 1, 1) )
    return sub_1801086C8(a1, a2, a1, a4);
  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050, (unsigned __int64)a1);
  return result;
}
