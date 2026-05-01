/*
 * XREFs of ?RuntimeClassInitialize@TrayNotifyCallback@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1802664E8
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x180265E54 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18001A298 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemTray::TrayNotifyCallback::RuntimeClassInitialize(HSTRING *this, HSTRING a2)
{
  int v3; // eax
  unsigned int v4; // esi
  char v5; // bl
  const char *v6; // r9
  __int64 result; // rax
  HRESULT v8; // eax
  unsigned int v9; // esi
  int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  unsigned int v13; // esi
  HSTRING v14; // rax
  unsigned int v15; // [rsp+30h] [rbp-28h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-20h] BYREF
  HSTRING v17[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v17[1] = (HSTRING)-2LL;
  v17[0] = a2;
  try
  {
    v3 = Microsoft::WRL::Wrappers::HString::Set(this + 2, v17);
    v4 = v3;
    v5 = 0;
    if ( v3 >= 0 )
    {
      ppv = 0LL;
      v8 = CoCreateInstance(
             &GUID_25dead04_1eac_4911_9e3a_ad0a4ab560fd,
             0LL,
             4u,
             &GUID_d133ce13_3537_48ba_93a7_afcd5d2053b4,
             &ppv);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v15 = 0;
        v10 = (*(__int64 (__fastcall **)(LPVOID, HSTRING *, unsigned int *))(*(_QWORD *)ppv + 24LL))(ppv, this, &v15);
        v11 = v10;
        if ( v10 >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 32LL))(ppv, v15);
          v13 = v12;
          if ( v12 >= 0 )
          {
            if ( this[5] || this[7] )
              goto LABEL_15;
            v14 = this[8];
            if ( !v14 )
              v14 = this[9];
            if ( v14 )
LABEL_15:
              v5 = 1;
            wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&ppv);
            result = v5 == 0 ? 0x80070490 : 0;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x15,
              (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
              (const char *)(unsigned int)v12);
            wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&ppv);
            result = v13;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x14,
            (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
            (const char *)(unsigned int)v10);
          wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&ppv);
          result = v11;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF,
          (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
          (const char *)(unsigned int)v8);
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&ppv);
        result = v9;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
        (const char *)(unsigned int)v3);
      result = v4;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1A,
                           (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
                           v6);
  }
  return result;
}
