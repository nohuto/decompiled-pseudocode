/*
 * XREFs of ?SetEmpty@CRegion@@QEAAXXZ @ 0x1C0012CB0
 * Callers:
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C0012A44 (-Release@CRegion@@QEBAJXZ.c)
 *     ?GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1C0012A84 (-GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C0012B08 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0037C7C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall CRegion::SetEmpty(CRegion *this)
{
  REGION *v2; // rcx

  v2 = (REGION *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    REGION::vDeleteREGION(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 1) = 0;
}
