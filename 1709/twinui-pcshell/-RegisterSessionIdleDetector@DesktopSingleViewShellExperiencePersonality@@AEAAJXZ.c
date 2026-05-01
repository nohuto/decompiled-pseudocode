/*
 * XREFs of ?RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ @ 0x1801DD24C
 * Callers:
 *     ?EnableSessionIdleNotifications@DesktopSingleViewShellExperiencePersonality@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801DD1B0 (-EnableSessionIdleNotifications@DesktopSingleViewShellExperiencePersonality@@UEAAJPEAUIServicePr.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z @ 0x1801CFD88 (-OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DesktopSingleViewShellExperiencePersonality::RegisterSessionIdleDetector(
        DesktopSingleViewShellExperiencePersonality *this)
{
  __int64 v2; // rsi
  _DWORD *v3; // rdi
  _DWORD *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v10; // [rsp+60h] [rbp+8h] BYREF
  _DWORD *v11; // [rsp+70h] [rbp+18h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 1) + 96LL);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = 0LL;
  v11 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveSessionIdleNotification>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v4 = off_180213FC0;
    *((_QWORD *)v4 + 2) = v2;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)v4 + 3) = this;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    v3 = v4;
    v11 = v4;
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, char *))(**((_QWORD **)this + 3) + 32LL))(
         *((_QWORD *)this + 3),
         v3,
         (char *)this + 32);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), &v10);
    if ( v7 >= 0 )
      CSingleViewShellExperience::OnSessionIdleStateChanged(*((CSingleViewShellExperience **)this + 1), v10);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
        (const char *)(unsigned int)v7);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x58,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
      (const char *)(unsigned int)v5);
  }
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v11 + 40LL))(v11, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v6;
}
