/*
 * XREFs of MiIncrementCombinedPte @ 0x140142678
 * Callers:
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 * Callees:
 *     MiGetCrossPartitionCombineCharges @ 0x14026BCF0 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x14026BE44 (MiReturnCrossPartitionCombineCharges.c)
 */

__int64 __fastcall MiIncrementCombinedPte(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  volatile signed __int32 *v3; // rdi
  __int64 result; // rax

  v2 = a2 - 48;
  v3 = *(volatile signed __int32 **)(((a2 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 174)) == *(_QWORD *)v3 )
    goto LABEL_2;
  result = MiGetCrossPartitionCombineCharges(*(_QWORD *)v3, 1LL, *(_QWORD *)v3);
  if ( (_DWORD)result )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 + 56)) != 1 )
      MiReturnCrossPartitionCombineCharges(*(_QWORD *)v3, 1LL);
LABEL_2:
    _InterlockedAdd64((volatile signed __int64 *)(v2 + 32), 1uLL);
    _InterlockedExchangeAdd(v3 + 96, 1u);
    return 1LL;
  }
  return result;
}
