/*
 * XREFs of CmpKeyEnumStackEntryInitialize @ 0x140670634
 * Callers:
 *     CmpKeyEnumStackInitialize @ 0x140670798 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140670878 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryInitialize(void *a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  _DWORD *v4; // rdx
  __int64 v5; // r8

  memset(a1, 0, 0x70uLL);
  v2 = (__int64)a1 + 80;
  do
  {
    HvpGetCellContextReinitialize(v2 - 40);
    result = HvpGetCellContextReinitialize(v2);
    *v4 = -1;
    v2 += 8LL;
  }
  while ( v5 != 1 );
  return result;
}
