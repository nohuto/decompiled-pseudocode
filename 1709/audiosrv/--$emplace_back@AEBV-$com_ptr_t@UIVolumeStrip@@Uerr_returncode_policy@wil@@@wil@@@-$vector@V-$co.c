/*
 * XREFs of ??$emplace_back@AEBV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18006E46C
 * Callers:
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x18006E7A4 (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x18002FA90 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x18005BA5C (-_Change_array@-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$alloca.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00AEAU?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18006E400 (--$_Uninitialized_move_al_unchecked@PEAV-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy> const &>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *result; // rax
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 *v12; // r14
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // [rsp+80h] [rbp+18h]

  result = a1[2];
  v5 = a1[1];
  if ( result == v5 )
  {
    v7 = v5 - *a1;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v8 = result - *a1;
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
    v11 = std::_Allocate(v10, 8uLL);
    v12 = v11;
    v15 = v11;
    try
    {
      v13 = &v11[v7];
      if ( v13 )
      {
        v14 = *a2;
        *v13 = *a2;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      }
      std::_Uninitialized_move_al_unchecked<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy> *,wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15[v7]);
      std::_Deallocate(v15, v10, 8uLL);
      throw;
    }
    return std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Change_array(a1, v12, v7 + 1, v10);
  }
  else
  {
    if ( v5 )
    {
      v6 = *a2;
      *v5 = *a2;
      if ( v6 )
        result = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    }
    ++a1[1];
  }
  return result;
}
