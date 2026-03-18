/*
 * XREFs of MiClearPfnSlist @ 0x14022A478
 * Callers:
 *     MiCoalesceFreePages @ 0x140050390 (MiCoalesceFreePages.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiClearPfnSlist(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8

  result = MiUpdatePageFileHighInPte(*(_QWORD *)(a1 + 16), 0LL);
  *(_QWORD *)(v2 + 16) = result;
  return result;
}
