/*
 * XREFs of CmpInitializeKeyNodeStack @ 0x14066DA4C
 * Callers:
 *     CmQueryLayeredKey @ 0x1401DEC90 (CmQueryLayeredKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140661CD0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140662304 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x14067011C (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackInitialize @ 0x140670798 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x1406707E8 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x1406715E4 (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall CmpInitializeKeyNodeStack(void *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  memset(a1, 0, 0x50uLL);
  v2 = (__int64)a1 + 32;
  v3 = 2LL;
  do
  {
    memset((void *)(v2 - 24), 0, 0x20uLL);
    *(_DWORD *)(v2 - 16) = -1;
    result = HvpGetCellContextReinitialize(v2);
    v2 += 32LL;
    --v3;
  }
  while ( v3 );
  return result;
}
