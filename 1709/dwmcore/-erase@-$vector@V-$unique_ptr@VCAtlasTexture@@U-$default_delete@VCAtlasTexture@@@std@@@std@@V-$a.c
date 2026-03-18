/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801AE848
 * Callers:
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x1801AE740 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x1801B3A14 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

void ***__fastcall std::vector<std::unique_ptr<CAtlasTexture>>::erase(__int64 a1, void ***a2, void **a3)
{
  void **v3; // r13
  void **v4; // rdi
  void ***v6; // r12
  void **v8; // rsi
  void *v9; // rbp
  void *v10; // r14
  CAtlasTexture *v11; // rcx
  void **v12; // rbp
  void **i; // rdi
  void *v14; // rsi
  CAtlasTexture *v15; // rcx
  void ***result; // rax

  v3 = *(void ***)(a1 + 8);
  v4 = a3 + 1;
  v6 = a2;
  v8 = a3;
  if ( a3 + 1 != v3 )
  {
    do
    {
      if ( v8 != v4 )
      {
        v9 = *v4;
        *v4 = 0LL;
        v10 = *v8;
        if ( v9 != *v8 )
        {
          if ( v10 )
          {
            v11 = (CAtlasTexture *)*v8;
            *(_QWORD *)v10 = &CAtlasTexture::`vftable';
            CAtlasTexture::DestroyResources(v11);
            WPF::ProcessHeapImpl::Free(*((void **)v10 + 2));
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v10 + 1);
            WPF::ProcessHeapImpl::Free(v10);
          }
          *v8 = v9;
        }
      }
      v8 = v4++;
    }
    while ( v4 != v3 );
    v6 = a2;
  }
  v12 = *(void ***)(a1 + 8);
  for ( i = v12 - 1; i != v12; ++i )
  {
    v14 = *i;
    if ( *i )
    {
      v15 = (CAtlasTexture *)*i;
      *(_QWORD *)v14 = &CAtlasTexture::`vftable';
      CAtlasTexture::DestroyResources(v15);
      WPF::ProcessHeapImpl::Free(*((void **)v14 + 2));
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v14 + 1);
      WPF::ProcessHeapImpl::Free(v14);
    }
  }
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = v6;
  *v6 = a3;
  return result;
}
