/*
 * XREFs of ?SetLightingCollection@CHWCallbackRenderer@@QEAAXPEAVCHwLightCollectionBuffer@@I@Z @ 0x18013DCAC
 * Callers:
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18013E050 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@.c)
 * Callees:
 *     ??$emplace_back@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAXAEBI@Z @ 0x180017030 (--$emplace_back@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAXAEBI@Z.c)
 *     ??$emplace_back@V?$ComPtr@VCHwLightCollectionBuffer@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCHwLightCollectionBuffer@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCHwLightCollectionBuffer@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@VCHwLightCollectionBuffer@@@WRL@Microsoft@@@Z @ 0x18001800C (--$emplace_back@V-$ComPtr@VCHwLightCollectionBuffer@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCHwLig.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHWCallbackRenderer::SetLightingCollection(
        CHWCallbackRenderer *this,
        struct CHwLightCollectionBuffer *a2,
        int a3)
{
  _QWORD *v3; // rdi
  __int64 v5; // rax
  struct CHwLightCollectionBuffer *v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v3 = (_QWORD *)((char *)this + 32);
  v5 = *((_QWORD *)this + 5);
  if ( *((_QWORD *)this + 4) == v5 )
  {
    if ( !a2 )
      return;
    if ( *v3 == v5 )
      goto LABEL_5;
  }
  if ( *(struct CHwLightCollectionBuffer **)(*((_QWORD *)this + 5) - 8LL) != a2 )
  {
LABEL_5:
    v6 = a2;
    if ( a2 )
      (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))a2)(a2);
    std::vector<Microsoft::WRL::ComPtr<CHwLightCollectionBuffer>>::emplace_back<Microsoft::WRL::ComPtr<CHwLightCollectionBuffer>>(
      v3,
      (__int64 *)&v6);
    if ( v6 )
      (*(void (__fastcall **)(struct CHwLightCollectionBuffer *))(*(_QWORD *)v6 + 8LL))(v6);
    std::vector<unsigned int>::emplace_back<unsigned int const &>((const void **)this + 7, &v7);
  }
}
