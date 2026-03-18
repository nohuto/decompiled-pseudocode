/*
 * XREFs of CmpKeyEnumStackInitialize @ 0x140670798
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x140661850 (CmpPartialPromoteSubkeys.c)
 *     CmpEnumerateLayeredKey @ 0x140664FCC (CmpEnumerateLayeredKey.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1406701AC (CmpGetSubKeyCountForKeyNodeStack.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x14066DA4C (CmpInitializeKeyNodeStack.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x140670634 (CmpKeyEnumStackEntryInitialize.c)
 */

__int64 __fastcall CmpKeyEnumStackInitialize(char *a1)
{
  char *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  memset(a1, 0, 0x140uLL);
  CmpInitializeKeyNodeStack(a1 + 8);
  v2 = a1 + 88;
  v3 = 2LL;
  do
  {
    result = CmpKeyEnumStackEntryInitialize(v2);
    v2 += 112;
    --v3;
  }
  while ( v3 );
  return result;
}
