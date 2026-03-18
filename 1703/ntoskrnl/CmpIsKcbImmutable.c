/*
 * XREFs of CmpIsKcbImmutable @ 0x14048FCEC
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbImmutable(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 144LL) & 0x100000) != 0;
}
