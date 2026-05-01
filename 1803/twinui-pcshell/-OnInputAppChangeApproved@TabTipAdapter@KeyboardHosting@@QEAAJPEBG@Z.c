/*
 * XREFs of ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x18024AB14
 * Callers:
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180248C98 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@UEAAJPEAUMsgString@@@Z @ 0x18024AD20 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@UEAAJPEAUMsgString@@@Z.c)
 *     ?OnInputAppChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppChangedEventArgs@45678@@Z @ 0x18024AD40 (-OnInputAppChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Intern.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008C740 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18008C878 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18008C8B4 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180098368 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800983C8 (_Init_thread_header.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x1800F74E8 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x18023F720 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 *     ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@AEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18024942C (-GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@AEAAJAEAV-$basic_string@GU-$char_traits@G@s.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved(
        KeyboardHosting::TabTipAdapter *this,
        unsigned __int16 *a2)
{
  __int64 v3; // rcx
  int DefaultInputAppId; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned __int16 *v7; // rbx
  unsigned __int16 *v8; // rax
  const char *v9; // r9
  unsigned __int64 v11[2]; // [rsp+30h] [rbp-58h] BYREF
  __m128i si128; // [rsp+40h] [rbp-48h]
  void *v13[4]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  std::wstring::wstring(v13, a2);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v11[0]) = 0;
  DefaultInputAppId = KeyboardHosting::TabTipAdapter::GetDefaultInputAppId(v3, (__int64)v11);
  v5 = DefaultInputAppId;
  if ( DefaultInputAppId >= 0 )
  {
    if ( dword_180439B1C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                     + 4LL) )
    {
      Init_thread_header(&dword_180439B1C);
      if ( dword_180439B1C == -1 )
      {
        std::wstring::wstring(qword_180438D30, L"977E9B0F-FB52-43BF-A680-05B2A126FF3D_db4vsckfp4qre!App");
        atexit(KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved_::_2_::_dynamic_atexit_destructor_for__overrideAppId__);
        Init_thread_footer(&dword_180439B1C);
      }
    }
    if ( !(unsigned int)std::wstring::compare(v11, qword_180438D30) )
      std::wstring::operator=(v13, v11);
    v7 = (unsigned __int16 *)((char *)this + 264);
    if ( !(unsigned int)std::wstring::compare((_QWORD *)this + 33, v13) )
      goto LABEL_18;
    try
    {
      *((_QWORD *)this + 35) = 0LL;
      v8 = (unsigned __int16 *)((char *)this + 264);
      if ( *((_QWORD *)this + 36) >= 8uLL )
        v8 = *(unsigned __int16 **)v7;
      *v8 = 0;
      std::wstring::operator=((void **)this + 33, (unsigned __int64 *)v13);
    }
    catch ( ... )
    {
      v5 = wil::details::in1diag3::Return_CaughtException(
             retaddr,
             (void *)0x3A3,
             (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
             v9);
      goto LABEL_19;
    }
    if ( *((_QWORD *)this + 36) >= 8uLL )
      v7 = *(unsigned __int16 **)v7;
    DefaultInputAppId = TouchKeyboardExperienceManager::OnInputAppChangeApproved(
                          *((TouchKeyboardExperienceManager **)this + 7),
                          v7);
    v5 = DefaultInputAppId;
    if ( DefaultInputAppId >= 0 )
    {
LABEL_18:
      v5 = 0;
      goto LABEL_19;
    }
    v6 = 932LL;
  }
  else
  {
    v6 = 915LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)DefaultInputAppId);
LABEL_19:
  std::wstring::_Tidy_deallocate((__int64)v11);
  std::wstring::_Tidy_deallocate((__int64)v13);
  return v5;
}
