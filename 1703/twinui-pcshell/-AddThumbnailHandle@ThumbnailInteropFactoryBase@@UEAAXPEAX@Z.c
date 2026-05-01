/*
 * XREFs of ?AddThumbnailHandle@ThumbnailInteropFactoryBase@@UEAAXPEAX@Z @ 0x180167A70
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@AEBQEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@QEAAXAEBQEAX@Z @ 0x18008CCE8 (--$emplace_back@AEBQEAX@-$vector@PEAXV-$allocator@PEAX@std@@@std@@QEAAXAEBQEAX@Z.c)
 */

void __fastcall ThumbnailInteropFactoryBase::AddThumbnailHandle(ThumbnailInteropFactoryBase *this, void *a2)
{
  void *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  std::vector<void *>::emplace_back<void * const &>((__int64)this + 56, &v2);
}
