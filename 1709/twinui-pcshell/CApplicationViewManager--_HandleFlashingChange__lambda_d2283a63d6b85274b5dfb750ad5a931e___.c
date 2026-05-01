/*
 * XREFs of CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___ @ 0x180078094
 * Callers:
 *     ?HandleFlashingChangeForWindow@CApplicationViewManager@@UEAAXPEAUHWND__@@H@Z @ 0x180076D80 (-HandleFlashingChangeForWindow@CApplicationViewManager@@UEAAXPEAUHWND__@@H@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___(
        __int64 a1,
        __int128 *a2,
        int a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  int v8; // eax
  char *v9; // rax
  char *v10; // rbx
  _QWORD *v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  char *v15; // [rsp+20h] [rbp-50h]
  __int64 v16; // [rsp+28h] [rbp-48h]
  __int128 v17; // [rsp+48h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v19; // [rsp+B8h] [rbp+48h] BYREF

  v6 = *(_QWORD *)(a1 + 592);
  v16 = v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v19 = 0LL;
    v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v6)(
           v6,
           &GUID_41146a36_84a5_4c5a_b7d9_df28c9576c6b,
           &v19);
    v7 = v8;
    if ( v8 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
      v17 = *a2;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
      v15 = 0LL;
      v9 = (char *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
      v10 = v9;
      if ( v9 )
      {
        v11 = v9 + 8;
        Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 8));
        *((_DWORD *)v10 + 13) = 1;
        *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncCallback'};
        *v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *(_QWORD *)v10 = off_1801FF758;
        *v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
        *(_OWORD *)(v10 + 56) = v17;
        *((_DWORD *)v10 + 18) = a3;
        *((_QWORD *)v10 + 10) = a1;
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
        *((_QWORD *)v10 + 11) = a1;
        v15 = v10;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 228), 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 80) + 64LL))(a1 + 80, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      v12 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v19 + 24LL))(v19, v15);
      v7 = v12;
      if ( v12 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B2,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v12);
      if ( v15 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v15 + 16LL))(v15);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 228), 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 80) + 64LL))(a1 + 80, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      v6 = v16;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2A3,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v8);
    }
    v13 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  else
  {
    v7 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A0,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)0x8007000CLL);
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
