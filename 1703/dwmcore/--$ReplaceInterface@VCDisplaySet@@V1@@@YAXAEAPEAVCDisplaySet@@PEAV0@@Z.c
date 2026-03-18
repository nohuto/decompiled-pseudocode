/*
 * XREFs of ??$ReplaceInterface@VCDisplaySet@@V1@@@YAXAEAPEAVCDisplaySet@@PEAV0@@Z @ 0x1800CB010
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18007EDA4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 */

void __fastcall ReplaceInterface<CDisplaySet,CDisplaySet>(CDisplaySet **a1, volatile signed __int32 *a2)
{
  CDisplaySet *v4; // rcx

  v4 = *a1;
  if ( v4 )
    CDisplaySet::Release(v4);
  *a1 = (CDisplaySet *)a2;
  if ( a2 )
    _InterlockedIncrement(a2);
}
