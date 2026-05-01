/*
 * XREFs of ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@AEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18024942C
 * Callers:
 *     ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x1800608A0 (-OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180248C98 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x18024AB14 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180178A08 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801AA0DC (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::GetDefaultInputAppId(__int64 a1, __int64 a2)
{
  unsigned int ValueW; // eax
  const char *v4; // r9
  _WORD *v5; // rax
  unsigned __int64 v6; // r8
  DWORD pcbData; // [rsp+40h] [rbp-238h] BYREF
  __int64 v9; // [rsp+48h] [rbp-230h]
  _WORD pvData[264]; // [rsp+50h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  v9 = -2LL;
  try
  {
    memset_0(pvData, 0, 0x208uLL);
    pcbData = 520;
    ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Input", L"SIPAppId", 2u, 0LL, pvData, &pcbData);
    if ( ValueW )
    {
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        1131LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)ValueW);
    }
    else
    {
      *(_QWORD *)(a2 + 16) = 0LL;
      v5 = (_WORD *)a2;
      if ( *(_QWORD *)(a2 + 24) >= 8uLL )
        v5 = *(_WORD **)a2;
      *v5 = 0;
      v6 = -1LL;
      do
        ++v6;
      while ( pvData[v6] );
      std::wstring::append((const void **)a2, pvData, v6);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x472,
                           (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
                           v4);
  }
  return 0LL;
}
