/*
 * XREFs of ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x1800478A4
 * Callers:
 *     ?StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180046980 (-StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy_________lambda_6837dda01e25c664e5779106e9e42f9f___ @ 0x180063540 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_IAudioPr.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180098458 (--1-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_p.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A8460 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSession::PruneTerminatedOwningProcesses(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r15
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 i; // rdi
  _QWORD *j; // rbx
  _QWORD *v8; // rdi
  const char *v9; // r9
  __int128 v10; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v13; // [rsp+68h] [rbp+10h] BYREF

  try
  {
    v10 = 0LL;
    v11 = 0LL;
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    v3 = *((_QWORD *)this + 98);
    v4 = *(_QWORD *)std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy_________lambda_6837dda01e25c664e5779106e9e42f9f___(
                      &v13,
                      *((_QWORD *)this + 97),
                      v3,
                      &v10,
                      -2LL);
    if ( v4 != v3 )
    {
      v5 = *((_QWORD *)this + 98);
      if ( v3 != v5 )
      {
        do
        {
          wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(v4, v3);
          v4 += 8LL;
          v3 += 8LL;
        }
        while ( v3 != v5 );
        v5 = *((_QWORD *)this + 98);
      }
      for ( i = v4; i != v5; i += 8LL )
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(i);
      *((_QWORD *)this + 98) = v4;
    }
    if ( v2 )
      LeaveCriticalSection(v2);
    v8 = (_QWORD *)*((_QWORD *)&v10 + 1);
    for ( j = (_QWORD *)v10; j != v8; ++j )
      (*(void (__fastcall **)(_QWORD, CAudioSession *))(*(_QWORD *)*j + 32LL))(*j, this);
    std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(&v10);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x7D8,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      v9);
  }
}
