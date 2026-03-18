/*
 * XREFs of MiSetPfnInPageError @ 0x1402654C8
 * Callers:
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnInPageError(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 35) ^= (*(_BYTE *)(a1 + 35) ^ (16 * a2)) & 0x10;
}
