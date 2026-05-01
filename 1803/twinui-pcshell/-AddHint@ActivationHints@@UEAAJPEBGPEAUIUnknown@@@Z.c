/*
 * XREFs of ?AddHint@ActivationHints@@UEAAJPEBGPEAUIUnknown@@@Z @ 0x1802B0F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008C740 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18008C878 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ??0?$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802233CC (--0-$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_pol.c)
 *     ??$emplace_back@UHint@ActivationHints@@@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAAX$$QEAUHint@ActivationHints@@@Z @ 0x1802B0AD8 (--$emplace_back@UHint@ActivationHints@@@-$vector@UHint@ActivationHints@@V-$allocator@UHint@Activ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ActivationHints::AddHint(ActivationHints *this, unsigned __int16 *a2, struct IUnknown *a3)
{
  const char *v6; // r9
  __int64 result; // rax
  RTL_SRWLOCK *v8; // rbx
  struct _FILETIME SystemTimeAsFileTime; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+28h] [rbp-60h]
  RTL_SRWLOCK *v11; // [rsp+30h] [rbp-58h]
  _QWORD v12[5]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v13; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v10 = -2LL;
  try
  {
    if ( a2 )
    {
      v8 = (RTL_SRWLOCK *)((char *)this + 48);
      AcquireSRWLockExclusive((PSRWLOCK)this + 6);
      v11 = v8;
      std::wstring::wstring(v12, a2);
      GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
      v12[4] = SystemTimeAsFileTime;
      wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
        &v13,
        (__int64)a3);
      std::vector<ActivationHints::Hint>::emplace_back<ActivationHints::Hint>((__int64 *)this + 7, (__int64)v12);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v13);
      std::wstring::_Tidy_deallocate((__int64)v12);
      if ( v8 )
        ReleaseSRWLockExclusive(v8);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29,
        (__int64)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
        (const char *)0x80070057LL);
      result = 2147942487LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2F,
                           (__int64)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
                           v6);
  }
  return result;
}
