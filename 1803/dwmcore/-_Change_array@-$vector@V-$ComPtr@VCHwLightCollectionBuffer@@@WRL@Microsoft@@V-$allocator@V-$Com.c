/*
 * XREFs of ?_Change_array@?$vector@V?$ComPtr@VCHwLightCollectionBuffer@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCHwLightCollectionBuffer@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCHwLightCollectionBuffer@@@WRL@Microsoft@@_K1@Z @ 0x180017F78
 * Callers:
 *     ??$emplace_back@V?$ComPtr@VCHwLightCollectionBuffer@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCHwLightCollectionBuffer@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCHwLightCollectionBuffer@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@VCHwLightCollectionBuffer@@@WRL@Microsoft@@@Z @ 0x18001800C (--$emplace_back@V-$ComPtr@VCHwLightCollectionBuffer@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCHwLig.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<CHwLightCollectionBuffer>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rbx
  __int64 *v9; // rbp
  __int64 v10; // rcx
  __int64 result; // rax

  v4 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(__int64 **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        v10 = *v4;
        if ( *v4 )
        {
          *v4 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        }
        ++v4;
      }
      while ( v4 != v9 );
      v4 = *(__int64 **)a1;
    }
    std::_Deallocate(v4, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v4) >> 3, 8uLL);
  }
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
