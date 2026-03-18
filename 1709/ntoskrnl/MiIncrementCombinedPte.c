/*
 * XREFs of MiIncrementCombinedPte @ 0x140231960
 * Callers:
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 * Callees:
 *     MiGetCrossPartitionCombineCharges @ 0x140231884 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x140231B2C (MiReturnCrossPartitionCombineCharges.c)
 */

__int64 __fastcall MiIncrementCombinedPte(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  __int64 result; // rax

  v4 = a2 - 48;
  v5 = *(_QWORD **)(((a2 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 172)) != *v5 )
  {
    result = MiGetCrossPartitionCombineCharges(*v5, 1, *v5, a4);
    if ( !(_DWORD)result )
      return result;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 56)) != 1 )
      MiReturnCrossPartitionCombineCharges(*v5, 1LL);
  }
  _InterlockedAdd64((volatile signed __int64 *)(v4 + 32), 1uLL);
  _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 96, 1u);
  return 1LL;
}
