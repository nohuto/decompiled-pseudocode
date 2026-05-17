/*
 * XREFs of RtlpDecRefWnfUserSubscription @ 0x18000C4E0
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18000A2F0 (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18000C060 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlpWakeByAddress @ 0x18006F6E8 (RtlpWakeByAddress.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180085D6C (RtlpDecrementWnfSerializationGroup.c)
 */

__int64 __fastcall RtlpDecRefWnfUserSubscription(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  _DWORD *v9; // rdi
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 80), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    if ( *(_QWORD *)(a1 + 72) )
      RtlpDecrementWnfSerializationGroup();
    v7 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v7 + 8) != a1 + 8 || (v8 = *(_QWORD **)(a1 + 16), *v8 != a1 + 8) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    v9 = *(_DWORD **)(a1 + 88);
    *a2 = *(_QWORD *)(a1 + 104);
    *a3 = *(_QWORD *)(a1 + 112);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
    if ( v9 )
    {
      *v9 = 1;
      _InterlockedOr(v10, 0);
      return RtlpWakeByAddress(v9, 0LL);
    }
  }
  else
  {
    *a2 = 0LL;
    *a3 = 0LL;
  }
  return result;
}
