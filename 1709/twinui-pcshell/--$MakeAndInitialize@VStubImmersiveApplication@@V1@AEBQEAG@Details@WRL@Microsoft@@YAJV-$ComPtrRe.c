/*
 * XREFs of ??$MakeAndInitialize@VStubImmersiveApplication@@V1@AEBQEAG@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VStubImmersiveApplication@@@WRL@Microsoft@@@012@AEBQEAG@Z @ 0x1801B2784
 * Callers:
 *     ?_TerminateApp@AccessibilityExperienceManager@@AEAAJXZ @ 0x1801B1464 (-_TerminateApp@AccessibilityExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<StubImmersiveApplication,StubImmersiveApplication,unsigned short * const &>(
        __int64 *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  unsigned int v5; // esi
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *a1 = 0LL;
  v3 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 3) = 1;
    *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplication>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v4 = &StubImmersiveApplication::`vftable';
    v4[2] = 0LL;
    v4[3] = 0LL;
    v4[4] = 0LL;
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (__int64)(v4 + 2),
           (__int64)L"Microsoft.ECApp_8wekyb3d8bbwe!App",
           0xFFFFFFFFFFFFFFFFuLL);
    v5 = v6;
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
      *a1 = (__int64)v4;
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      return 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE,
        (__int64)"internal\\shell\\private\\inc\\stubimmersiveapplication.h",
        (const char *)(unsigned int)v6);
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
