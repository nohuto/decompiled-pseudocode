/*
 * XREFs of MiSetPfnSlist @ 0x14022A9D4
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReplenishPageSlist @ 0x1400C53D0 (MiReplenishPageSlist.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
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
