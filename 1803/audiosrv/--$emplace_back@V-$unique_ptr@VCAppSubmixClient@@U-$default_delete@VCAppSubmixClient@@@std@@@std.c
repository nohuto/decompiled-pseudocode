/*
 * XREFs of ??$emplace_back@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@QEAAX$$QEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@1@@Z @ 0x1800D5F10
 * Callers:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800D68F4 (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@PEAV12@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@0@PEAV10@00AEAV?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1800D5DD4 (--$_Uninitialized_move_al_unchecked@PEAV-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppS.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@2@_K1@Z @ 0x1800D7098 (-_Change_array@-$vector@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@@s.c)
 */

__int64 __fastcall std::vector<std::unique_ptr<CAppSubmixClient>>::emplace_back<std::unique_ptr<CAppSubmixClient>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 **v11; // rax
  __int64 **v12; // r12
  __int64 *v13; // rcx
  __int64 v14; // rcx
  __int64 **v15; // [rsp+80h] [rbp+18h]

  v4 = *(__int64 **)(a1 + 16);
  v5 = *(__int64 **)(a1 + 8);
  if ( v4 == v5 )
  {
    v7 = ((__int64)v5 - *(_QWORD *)a1) >> 3;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v8 = ((__int64)v4 - *(_QWORD *)a1) >> 3;
    v9 = v8 >> 1;
    if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 + 1 )
        v10 = v7 + 1;
    }
    else
    {
      v10 = v7 + 1;
    }
    v11 = (__int64 **)std::_Allocate<std::_Default_allocate_traits<1>>(v10, 8uLL);
    v12 = v11;
    v15 = v11;
    try
    {
      v13 = (__int64 *)*a2;
      *a2 = 0LL;
      v11[v7] = v13;
      std::_Uninitialized_move_al_unchecked<std::unique_ptr<CAppSubmixClient> *,std::unique_ptr<CAppSubmixClient> *,std::allocator<std::unique_ptr<CAppSubmixClient>>>(
        *(__int64 ***)a1,
        *(_QWORD *)(a1 + 8),
        v11);
    }
    catch ( ... )
    {
      std::_Default_allocator_traits<std::allocator<std::unique_ptr<CAppSubmixClient>>>::destroy<std::unique_ptr<CAppSubmixClient>>(
        v14,
        &v15[v7]);
      std::_Deallocate(v15, v10, 8uLL);
      throw;
    }
    return std::vector<std::unique_ptr<CAppSubmixClient>>::_Change_array(a1, v12, v7 + 1, v10);
  }
  else
  {
    result = *a2;
    *a2 = 0LL;
    *v5 = result;
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return result;
}
