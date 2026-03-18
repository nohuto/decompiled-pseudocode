/*
 * XREFs of CmpTryAcquireIXLockExclusive @ 0x1404BF0F4
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpTryAcquireIXLockExclusive(_DWORD *a1)
{
  return *a1 == 0;
}
