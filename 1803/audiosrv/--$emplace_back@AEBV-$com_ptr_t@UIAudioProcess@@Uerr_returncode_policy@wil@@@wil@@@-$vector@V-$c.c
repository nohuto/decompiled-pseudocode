/*
 * XREFs of ??$emplace_back@AEBV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180043C84
 * Callers:
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180047A6C (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     _lambda_6837dda01e25c664e5779106e9e42f9f_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___ @ 0x1800634AC (_lambda_6837dda01e25c664e5779106e9e42f9f_--operator()_wil--com_ptr_t_IAudioProcess_wil--err_retu.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Calculate_growth@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEBA_K_K@Z @ 0x180017964 (-_Calculate_growth@-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x180017998 (-_Change_array@-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$alloca.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00AEAV?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180017AB0 (--$_Uninitialized_move_al_unchecked@PEAV-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180018120 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> const &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rax
  char *v8; // rsi
  char *result; // rax
  char *v10; // [rsp+70h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) == v4 )
  {
    v5 = (v4 - *(_QWORD *)a1) >> 3;
    if ( v5 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v6 = std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Calculate_growth((_QWORD *)a1, v5 + 1);
    v7 = std::_Allocate<std::_Default_allocate_traits<1>>(v6, 8uLL);
    v8 = (char *)v7;
    v10 = (char *)v7;
    try
    {
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
        (_QWORD *)(v7 + 8 * v5),
        *a2);
      std::_Uninitialized_move_al_unchecked<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy> *,wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>>(
        *(__int64 **)a1,
        *(__int64 **)(a1 + 8),
        v8);
    }
    catch ( ... )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10[8 * v5]);
      std::_Deallocate(v10, v6, 8uLL);
      throw;
    }
    return std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Change_array(
             (char **)a1,
             v8,
             v5 + 1,
             v6);
  }
  else
  {
    result = (char *)ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
                       *(_QWORD **)(a1 + 8),
                       *a2);
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return result;
}
