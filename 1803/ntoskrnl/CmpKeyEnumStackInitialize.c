/*
 * XREFs of CmpKeyEnumStackInitialize @ 0x1406FFDF4
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1406EEF30 (CmpPartialPromoteSubkeys.c)
 *     CmpEnumerateLayeredKey @ 0x1406F2910 (CmpEnumerateLayeredKey.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1406FF458 (CmpGetSubKeyCountForKeyNodeStack.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x1406FB048 (CmpInitializeKeyNodeStack.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x1406FFAAC (CmpKeyEnumStackEntryInitialize.c)
 */

_DWORD *__fastcall CmpKeyEnumStackInitialize(char *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  _DWORD *result; // rax

  memset(a1, 0, 0x160uLL);
  CmpInitializeKeyNodeStack(a1 + 8);
  v2 = (__int64)(a1 + 88);
  v3 = 2LL;
  do
  {
    result = CmpKeyEnumStackEntryInitialize(v2);
    v2 += 128LL;
    --v3;
  }
  while ( v3 );
  return result;
}
