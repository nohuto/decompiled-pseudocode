/*
 * XREFs of CmpInitializeKeyNodeStack @ 0x140697F6C
 * Callers:
 *     CmQueryLayeredKey @ 0x1401E318C (CmQueryLayeredKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14068AFCC (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14068B750 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x14069A7EC (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackInitialize @ 0x14069B20C (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x14069B25C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14069C654 (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     memset @ 0x140192F40 (memset.c)
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
