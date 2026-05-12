/*
 * XREFs of RaidCompleteMiniportRequestCallback @ 0x1C0039658
 * Callers:
 *     StorPurgeEventQueue @ 0x1C002D444 (StorPurgeEventQueue.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0003B44 (DbgLogRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     DbgGetAddressLongFromXrb @ 0x1C0023D90 (DbgGetAddressLongFromXrb.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0026B5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 */

__int64 __fastcall RaidCompleteMiniportRequestCallback(
        __int64 a1,
        char a2,
        unsigned int a3,
        __int64 a4,
        void (__fastcall *a5)(__int64, _QWORD, __int64))
{
  __int64 result; // rax
  unsigned int AddressLongFromXrb; // eax
  __int64 v11; // r8

  result = *(_BYTE *)(a4 - 32) & 0x1C;
  if ( (_BYTE)result == 12 )
  {
    if ( (qword_1C0056210 & 0x40) != 0 )
    {
      AddressLongFromXrb = DbgGetAddressLongFromXrb(a4 - 48);
      DbgLogRequest(
        *(_QWORD *)(a4 + 168),
        13,
        *(_QWORD *)(a4 + 112),
        AddressLongFromXrb,
        *(_QWORD *)(a4 + 120),
        v11,
        0LL);
    }
    if ( (*(_BYTE *)(a4 - 31) & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(*(_QWORD *)(a4 + 168), *(unsigned int *)(a4 + 700));
      *(_BYTE *)(a4 - 31) &= ~1u;
    }
    a5(a1, a3, a4);
    *(_BYTE *)(*(_QWORD *)(a4 + 120) + 3LL) = a2;
    return (*(__int64 (__fastcall **)(__int64))(a4 + 608))(a4 - 48);
  }
  return result;
}
