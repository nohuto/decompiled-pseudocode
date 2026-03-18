/*
 * XREFs of ?_Reallocate@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800C044C
 * Callers:
 *     ?_Reserve@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800C0518 (-_Reserve@-$vector@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@V.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x1801B3A14 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

char *__fastcall std::vector<std::unique_ptr<CAtlasTexture>>::_Reallocate(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v4; // rsi
  void **v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // r9
  unsigned __int64 v8; // r8
  void **v9; // rbx
  void **v10; // r12
  __int64 v11; // r14
  char *result; // rax
  void *v13; // rax
  void *v14; // r15
  CAtlasTexture *v15; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL || (v4 = operator new(8 * a2)) == 0LL )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  v5 = *(void ***)a1;
  v6 = v4;
  v7 = 0LL;
  v8 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + 7LL) >> 3;
  if ( *(_QWORD *)a1 > *(_QWORD *)(a1 + 8) )
    v8 = 0LL;
  if ( v8 )
  {
    do
    {
      if ( v6 )
      {
        v13 = *v5;
        *v5 = 0LL;
        *v6 = v13;
      }
      ++v6;
      ++v5;
      ++v7;
    }
    while ( v7 != v8 );
  }
  v9 = *(void ***)a1;
  v10 = *(void ***)(a1 + 8);
  v11 = ((__int64)v10 - *(_QWORD *)a1) >> 3;
  if ( *(_QWORD *)a1 )
  {
    while ( v9 != v10 )
    {
      v14 = *v9;
      if ( *v9 )
      {
        v15 = (CAtlasTexture *)*v9;
        *(_QWORD *)v14 = &CAtlasTexture::`vftable';
        CAtlasTexture::DestroyResources(v15);
        WPF::ProcessHeapImpl::Free(*((void **)v14 + 2));
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v14 + 1);
        WPF::ProcessHeapImpl::Free(v14);
      }
      ++v9;
    }
    WPF::ProcessHeapImpl::Free(*(void **)a1);
  }
  *(_QWORD *)(a1 + 16) = &v4[a2];
  result = (char *)&v4[v11];
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
