/*
 * XREFs of MiClearPfnSlist @ 0x14021EFA0
 * Callers:
 *     MiCoalesceFreePages @ 0x1400C77B0 (MiCoalesceFreePages.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiClearPfnSlist(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8

  result = MiUpdatePageFileHighInPte(*(_QWORD *)(a1 + 16), 4294967293LL);
  *(_QWORD *)(v2 + 16) = result;
  return result;
}
