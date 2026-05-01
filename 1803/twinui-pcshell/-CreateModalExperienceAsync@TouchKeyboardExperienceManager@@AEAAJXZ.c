/*
 * XREFs of ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18023CC54
 * Callers:
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x18023F720 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18008C870 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18008C878 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_65c0f5c4ae095b6c4d2379132d65e3aa___ @ 0x1800A0E38 (Windows--Internal--ComTaskPool--QueueTask__lambda_65c0f5c4ae095b6c4d2379132d65e3aa___.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800F7430 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::CreateModalExperienceAsync(TouchKeyboardExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // ebx
  _QWORD v5[5]; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v6[4]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  std::wstring::wstring(v6, (__int64)this + 480);
  std::wstring::wstring(v5, (__int64)v6);
  v5[4] = this;
  v3 = Windows::Internal::ComTaskPool::QueueTask__lambda_65c0f5c4ae095b6c4d2379132d65e3aa___(v2, (__int64)v5);
  std::wstring::~wstring(v5);
  if ( v3 >= 0 )
    v3 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x633,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  std::wstring::_Tidy_deallocate((__int64)v6);
  return (unsigned int)v3;
}
