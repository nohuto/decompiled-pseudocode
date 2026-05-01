/*
 * XREFs of ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@AEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801A5230
 * Callers:
 *     ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x1801A2E80 (-OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1801A50C4 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_ @ 0x1800C0724 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_1800C0724.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801A9804 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::GetDefaultInputAppId(__int64 a1, _QWORD *a2)
{
  unsigned int ValueW; // eax
  __int64 v4; // r8
  const char *v5; // r9
  _WORD *v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned int pdwType; // [rsp+20h] [rbp-258h]
  DWORD pcbData; // [rsp+40h] [rbp-238h] BYREF
  __int64 v13; // [rsp+48h] [rbp-230h]
  _WORD Src[264]; // [rsp+50h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  v13 = -2LL;
  try
  {
    memset(Src, 0, 0x208uLL);
    pcbData = 520;
    ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Input", L"SIPAppId", 2u, 0LL, Src, &pcbData);
    if ( ValueW )
    {
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0x36F,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)ValueW,
        pdwType);
    }
    else
    {
      a2[2] = 0LL;
      v6 = a2;
      if ( a2[3] >= 8uLL )
        v6 = (_WORD *)*a2;
      *v6 = 0;
      v7 = -1LL;
      do
        ++v7;
      while ( Src[v7] );
      v8 = a2[2];
      if ( v7 > a2[3] - v8 )
      {
        std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_(
          a2,
          v7,
          v4,
          Src,
          v7);
      }
      else
      {
        v9 = v8 + v7;
        a2[2] = v8 + v7;
        if ( a2[3] >= 8uLL )
          a2 = (_QWORD *)*a2;
        memmove((char *)a2 + 2 * v8, Src, 2 * v7);
        *((_WORD *)a2 + v9) = 0;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x376,
                           (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
                           v5);
  }
  return 0LL;
}
