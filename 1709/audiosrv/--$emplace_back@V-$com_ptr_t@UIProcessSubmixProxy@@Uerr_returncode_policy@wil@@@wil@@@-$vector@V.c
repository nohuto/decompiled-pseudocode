/*
 * XREFs of ??$emplace_back@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180095F88
 * Callers:
 *     ?GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$$QEAV?$function@$$A6A_NAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z@3@@Z @ 0x1800970C8 (-GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV-$vector@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_re.c)
 *     _lambda_43698c41cf4338565ce00927154dde27_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x18009E6F0 (_lambda_43698c41cf4338565ce00927154dde27_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x18002FA90 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x18005BA5C (-_Change_array@-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$alloca.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00AEAU?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18006E400 (--$_Uninitialized_move_al_unchecked@PEAV-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>(
        __int64 **a1,
        __int64 **a2)
{
  __int64 *result; // rax
  __int64 *v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 *v11; // r15
  __int64 **v12; // rax
  __int64 *v13; // rcx
  __int64 *v14; // [rsp+80h] [rbp+18h]

  result = a1[2];
  v5 = a1[1];
  if ( result == v5 )
  {
    v6 = v5 - *a1;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v7 = result - *a1;
    v8 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v9 = v8 + v7;
      if ( v8 + v7 < v6 + 1 )
        v9 = v6 + 1;
    }
    else
    {
      v9 = v6 + 1;
    }
    v10 = std::_Allocate(v9, 8uLL);
    v11 = v10;
    v14 = v10;
    try
    {
      v12 = (__int64 **)&v10[v6];
      if ( v12 )
      {
        v13 = *a2;
        *a2 = 0LL;
        *v12 = v13;
      }
      std::_Uninitialized_move_al_unchecked<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy> *,wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>>(
        *a1,
        a1[1],
        v11);
    }
    catch ( ... )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14[v6]);
      std::_Deallocate(v14, v9, 8uLL);
      throw;
    }
    return std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Change_array(a1, v11, v6 + 1, v9);
  }
  else
  {
    if ( v5 )
    {
      result = *a2;
      *a2 = 0LL;
      *v5 = (__int64)result;
    }
    ++a1[1];
  }
  return result;
}
