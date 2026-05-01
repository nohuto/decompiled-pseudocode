/*
 * XREFs of ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1801BCB50
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipAppInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1801BBF18 (-RuntimeClassInitialize@TrayInfoTipAppInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::GetBitmapStreamFromHICON @ 0x1801BC51C (_anonymous_namespace_--GetBitmapStreamFromHICON.c)
 *     _anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases @ 0x1801BC710 (_anonymous_namespace_--GetFriendlyNameForTaskbarSpecialCases.c)
 *     _anonymous_namespace_::GetFriendlyNameForExe @ 0x1801BC888 (_anonymous_namespace_--GetFriendlyNameForExe.c)
 *     ?InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z @ 0x1801BD02C (-InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z.c)
 *     ?RuntimeClassInitialize@TrayNotifyCallback@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1801BD6E8 (-RuntimeClassInitialize@TrayNotifyCallback@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemTray::TrayInfoTipDisplayInfo::RuntimeClassInitialize(HSTRING *this, HSTRING a2)
{
  _DWORD *v4; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  int v7; // r14d
  const char *v8; // r9
  __int64 result; // rax
  _QWORD *v10; // rdx
  UINT v11; // edx
  HSTRING *BitmapStreamFromHICON; // rax
  HSTRING v13; // rdx
  HSTRING v14; // rcx
  HSTRING string; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v16[8]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  _DWORD *v18; // [rsp+88h] [rbp+20h]

  v16[1] = -2LL;
  try
  {
    v4 = 0LL;
    v18 = 0LL;
    v5 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( !v5 )
    {
      v7 = -2147024882;
      goto LABEL_16;
    }
    v5[3] = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,INotificationCB>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v6 = &SystemTray::TrayNotifyCallback::`vftable';
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_QWORD *)v6 + 6) = 7LL;
    *((_WORD *)v6 + 12) = 0;
    *((_QWORD *)v6 + 7) = 0LL;
    *((_QWORD *)v6 + 8) = 0LL;
    *((_QWORD *)v6 + 9) = 0LL;
    *((_BYTE *)v6 + 80) = 0;
    v7 = SystemTray::TrayNotifyCallback::RuntimeClassInitialize((SystemTray::TrayNotifyCallback *)v6, a2);
    if ( v7 >= 0 )
    {
      _InterlockedIncrement(v6 + 3);
      v18 = v6;
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v6 + 32LL))(v6, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      v7 = 0;
    }
    else if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v6 + 32LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    if ( v7 < 0 )
    {
      v4 = v18;
LABEL_16:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x81,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)v7);
      if ( v4 )
      {
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v18 + 32LL))(v18, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      return (unsigned int)v7;
    }
    v10 = v18 + 6;
    if ( *((_QWORD *)v18 + 6) >= 8uLL )
      v10 = (_QWORD *)*v10;
    if ( *((_QWORD *)v18 + 8) == SCAID_Volume && *((_QWORD *)v18 + 9) == 0x9C5B7DB61CE4C182uLL )
    {
      v11 = 404;
    }
    else if ( *((_QWORD *)v18 + 8) == SCAID_Network && *((_QWORD *)v18 + 9) == 0x9C5B7DB61CE4C182uLL )
    {
      v11 = 405;
    }
    else if ( *((_QWORD *)v18 + 8) == SCAID_Power && *((_QWORD *)v18 + 9) == 0x9C5B7DB61CE4C182uLL )
    {
      v11 = 406;
    }
    else
    {
      if ( *((_QWORD *)v18 + 8) != SCAID_WindowsUpdate || *((_QWORD *)v18 + 9) != 0x9C5B7DB61CE4C182uLL )
      {
        anonymous_namespace_::GetFriendlyNameForExe(&string, (__int64)v10);
        goto LABEL_37;
      }
      v11 = 423;
    }
    anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases(&string, v11);
LABEL_37:
    WindowsDeleteString(this[10]);
    this[10] = string;
    string = 0LL;
    WindowsDeleteString(0LL);
    BitmapStreamFromHICON = (HSTRING *)anonymous_namespace_::GetBitmapStreamFromHICON(v16, *((_QWORD *)v18 + 7));
    v13 = *BitmapStreamFromHICON;
    *BitmapStreamFromHICON = 0LL;
    v14 = this[11];
    this[11] = v13;
    if ( v14 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v16[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16[0] + 16LL))(v16[0]);
    SystemTray::TrayInfoTipDisplayInfo::InitProperties(
      (SystemTray::TrayInfoTipDisplayInfo *)this,
      a2,
      *((_BYTE *)v18 + 80));
    if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v18 + 32LL))(v18, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8A,
                           (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
                           v8);
  }
  return result;
}
