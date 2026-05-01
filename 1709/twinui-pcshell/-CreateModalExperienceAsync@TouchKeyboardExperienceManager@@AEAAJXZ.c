/*
 * XREFs of ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18019C124
 * Callers:
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x1801990C8 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7b06266c645e87ea8bded8a7a75fbbc2___::Run @ 0x18019F350 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7b06266c645e87ea8bded8a7a75fbbc2___--Run.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800277DC (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800ECE0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::CreateModalExperienceAsync(TouchKeyboardExperienceManager *this)
{
  IUnknown *v2; // rdi
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  int v6; // ebx
  __int128 v8; // [rsp+50h] [rbp-11h] BYREF
  __m128i si128; // [rsp+60h] [rbp-1h]
  TouchKeyboardExperienceManager *v10; // [rsp+70h] [rbp+Fh]
  unsigned __int64 v11[4]; // [rsp+78h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  std::wstring::wstring(v11, (__int64)this + 448);
  std::wstring::wstring(&v8, (__int64)v11);
  v10 = this;
  v2 = 0LL;
  v3 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    *(_QWORD *)v3 = &IAppViewDataSourceAdapter::`vftable';
    v3[3] = 1;
    *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v4 = off_18020FD70;
    *((_OWORD *)v4 + 1) = v8;
    *((__m128i *)v4 + 2) = si128;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v8) = 0;
    *((_QWORD *)v4 + 6) = this;
    v2 = (IUnknown *)v4;
  }
  CurrentThreadId = GetCurrentThreadId();
  v6 = Windows::Internal::ComTaskPool::RunTask(0, 0, CurrentThreadId, 0, v2, 0LL);
  if ( v2 )
    ((void (__fastcall *)(IUnknown *))v2->lpVtbl->Release)(v2);
  std::wstring::~wstring((unsigned __int64 *)&v8);
  if ( v6 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x406,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  std::wstring::~wstring(v11);
  return (unsigned int)v6;
}
