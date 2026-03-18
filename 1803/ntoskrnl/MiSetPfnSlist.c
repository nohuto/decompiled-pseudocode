/*
 * XREFs of MiSetPfnSlist @ 0x1402654E0
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReplenishPageSlist @ 0x1400D5110 (MiReplenishPageSlist.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiSetPfnSlist(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  *(_QWORD *)(a1 + 16) ^= (*(_DWORD *)(a1 + 16) ^ (a2 << 12)) & 0xF000;
  result = MiUpdatePageFileHighInPte(*(_QWORD *)(a1 + 16), 4294967294LL);
  *(_QWORD *)(v3 + 16) = result;
  return result;
}
