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

LOGICAL __fastcall RtlpDecRefWnfUserSubscription(volatile signed __int32 *BaseAddress, _QWORD *a2, _QWORD *a3)
{
  LOGICAL result; // eax
  volatile signed __int32 **v7; // rcx
  PVOID *v8; // rdx
  _DWORD *v9; // rdi
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  result = _InterlockedExchangeAdd(BaseAddress + 20, 0xFFFFFFFF);
  if ( result == 1 )
  {
    if ( *((_QWORD *)BaseAddress + 9) )
      RtlpDecrementWnfSerializationGroup();
    v7 = (volatile signed __int32 **)*((_QWORD *)BaseAddress + 1);
    if ( v7[1] != BaseAddress + 2 || (v8 = (PVOID *)*((_QWORD *)BaseAddress + 2), *v8 != BaseAddress + 2) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (volatile signed __int32 *)v8;
    v9 = (_DWORD *)*((_QWORD *)BaseAddress + 11);
    *a2 = *((_QWORD *)BaseAddress + 13);
    *a3 = *((_QWORD *)BaseAddress + 14);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)BaseAddress);
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
