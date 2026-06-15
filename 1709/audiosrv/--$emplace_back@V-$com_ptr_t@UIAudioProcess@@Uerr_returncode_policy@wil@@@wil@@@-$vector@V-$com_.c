/*
 * XREFs of ??$emplace_back@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18002FC84
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x18001A000 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x180074FC4 (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Calculate_growth@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEBA_K_K@Z @ 0x18002F79C (-_Calculate_growth@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x18002FA90 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00AEAU?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18002FD5C (--$_Uninitialized_move_al_unchecked@PEAV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r12
  unsigned __int64 v7; // r15
  __int64 *v8; // rax
  __int64 *v9; // r14
  __int64 *v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rdi
  __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 *v15; // [rsp+70h] [rbp+8h]

  v4 = a1[1];
  if ( a1[2] == v4 )
  {
    v5 = v4 - *a1;
    if ( v5 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v6 = v5 + 1;
    v7 = std::vector<Microsoft::WRL::WeakRef>::_Calculate_growth(a1, v5 + 1);
    v8 = std::_Allocate(v7, 8uLL);
    v9 = v8;
    v15 = v8;
    try
    {
      v10 = &v8[v5];
      if ( v10 )
      {
        v11 = *a2;
        *a2 = 0LL;
        *v10 = v11;
      }
      std::_Uninitialized_move_al_unchecked<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
        *a1,
        a1[1],
        v8);
    }
    catch ( ... )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15[v5]);
      std::_Deallocate(v15, v7, 8uLL);
      throw;
    }
    v12 = *a1;
    if ( *a1 )
    {
      v13 = a1[1];
      while ( v12 != v13 )
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v12++);
      std::_Deallocate(*a1, a1[2] - *a1, 8uLL);
    }
    *a1 = v9;
    a1[1] = &v9[v6];
    a1[2] = &v9[v7];
  }
  else
  {
    if ( v4 )
    {
      v14 = *a2;
      *a2 = 0LL;
      *v4 = v14;
    }
    ++a1[1];
  }
}
