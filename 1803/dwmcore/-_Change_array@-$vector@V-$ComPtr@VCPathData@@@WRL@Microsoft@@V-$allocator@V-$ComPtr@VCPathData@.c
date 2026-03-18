/*
 * XREFs of ?_Change_array@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@_K1@Z @ 0x1801A0FD0
 * Callers:
 *     ??$emplace_back@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@@Z @ 0x180197550 (--$emplace_back@V-$ComPtr@VCPathData@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCPathData@@@WRL@Micro.c)
 *     ?_Reallocate_exactly@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x180197EA0 (-_Reallocate_exactly@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPat.c)
 *     ??$emplace_back@AEBV?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@Z @ 0x18019F7F4 (--$emplace_back@AEBV-$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCProjectedS.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rbx
  char *v9; // rbp
  __int64 v10; // rcx
  __int64 result; // rax

  v4 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(char **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        v10 = *(_QWORD *)v4;
        if ( *(_QWORD *)v4 )
        {
          *(_QWORD *)v4 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        v4 += 8;
      }
      while ( v4 != v9 );
      v4 = *(char **)a1;
    }
    std::_Deallocate(v4, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v4) >> 3, 8uLL);
  }
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
