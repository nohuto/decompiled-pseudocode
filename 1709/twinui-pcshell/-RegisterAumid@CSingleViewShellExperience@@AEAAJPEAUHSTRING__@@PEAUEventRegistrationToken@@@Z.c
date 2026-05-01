/*
 * XREFs of ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z @ 0x1801CFB48
 * Callers:
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1801CF740 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801CFEC4 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSingleViewShellExperience::RegisterAumid(
        CSingleViewShellExperience *this,
        HSTRING a2,
        struct EventRegistrationToken *a3)
{
  _QWORD *v4; // rsi
  char v5; // di
  __int64 v6; // rbx
  HRESULT v7; // eax
  HSTRING v8; // rax
  HSTRING v9; // r12
  __int64 v10; // r13
  __int64 v11; // r14
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  int v14; // edi
  int v16; // [rsp+48h] [rbp-49h]
  _QWORD v19[6]; // [rsp+60h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-1h] BYREF
  HSTRING string; // [rsp+A8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v19[2] = -2LL;
  v4 = 0LL;
  v5 = 0;
  v6 = *((_QWORD *)this + 12);
  v19[3] = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  if ( (*((_BYTE *)this + 132) & 2) != 0 )
  {
    string = 0LL;
    v7 = WindowsCreateStringReference(L"ShellExperience", 0xFu, &hstringHeader, &string);
    if ( v7 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
      __debugbreak();
    }
    v5 = 1;
    v8 = string;
    v9 = string;
  }
  else
  {
    v9 = 0LL;
    v8 = string;
  }
  if ( (v5 & 1) != 0 )
    v8 = 0LL;
  string = v8;
  v16 = (*((_DWORD *)this + 33) >> 3) & 1;
  if ( (~(*((_DWORD *)this + 33) >> 4) & 1) == 0 )
    goto LABEL_25;
  v10 = *((_QWORD *)this + 13);
  v11 = v6;
  v19[0] = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v19[1] = this;
  v19[4] = 0LL;
  v12 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  if ( v12 )
  {
    *v12 = &IAppViewDataSourceAdapter::`vftable';
    *((_DWORD *)v12 + 3) = 1;
    *v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ShellExperienceDispatcher *,Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v13[2] = 0LL;
    if ( v13 + 2 != v19 )
    {
      v13[2] = v6;
      v11 = 0LL;
      v19[0] = 0LL;
    }
    v13[3] = this;
    *v13 = off_180213DA0;
    v4 = v13;
  }
  v19[5] = v4;
  v14 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, _QWORD, int, _QWORD *, struct EventRegistrationToken *))(*(_QWORD *)v10 + 48LL))(
          v10,
          a2,
          v9,
          *((_QWORD *)this + 2),
          v16,
          v4,
          a3);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x82,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v14);
  else
LABEL_25:
    v14 = 0;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v14;
}
