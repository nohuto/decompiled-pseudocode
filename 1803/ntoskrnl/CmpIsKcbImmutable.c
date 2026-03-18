/*
 * XREFs of CmpIsKcbImmutable @ 0x1404A490C
 * Callers:
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbImmutable(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 160LL) & 0x100000) != 0;
}
