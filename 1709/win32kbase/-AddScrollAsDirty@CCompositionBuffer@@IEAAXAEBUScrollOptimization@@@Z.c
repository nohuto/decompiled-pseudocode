/*
 * XREFs of ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C01528F0
 * Callers:
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1C003A3F4 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 * Callees:
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C003A5C4 (-Release@CRegion@@QEBAJXZ.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003A688 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?SetFullRegion@CRegion@@QEAAXXZ @ 0x1C003A804 (-SetFullRegion@CRegion@@QEAAXXZ.c)
 *     ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1C015687C (-Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 */

void __fastcall CCompositionBuffer::AddScrollAsDirty(CCompositionBuffer *this, const struct ScrollOptimization *a2)
{
  int v3; // eax
  CRegion *v4; // rcx
  CRegion *v5; // [rsp+38h] [rbp+10h] BYREF

  v3 = CRegion::Create((const struct tagRECT *)((char *)a2 + 4), &v5);
  v4 = (CRegion *)*((_QWORD *)this + 31);
  if ( v3 < 0 )
  {
    CRegion::SetFullRegion(v4);
  }
  else
  {
    CRegion::Combine((__int64)v4, (__int64)v5, 2);
    CRegion::Release(v5);
  }
}
