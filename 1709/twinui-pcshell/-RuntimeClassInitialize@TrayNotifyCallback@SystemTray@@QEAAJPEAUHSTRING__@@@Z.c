/*
 * XREFs of ?RuntimeClassInitialize@TrayNotifyCallback@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1801BD6E8
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1801BCB50 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemTray::TrayNotifyCallback::RuntimeClassInitialize(
        SystemTray::TrayNotifyCallback *this,
        HSTRING a2)
{
  HSTRING *v4; // rdi
  HRESULT v5; // eax
  unsigned int v6; // edi
  const char *v7; // r9
  __int64 result; // rax
  HRESULT Instance; // eax
  unsigned int v10; // edi
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // edi
  char v15; // al
  unsigned int v16; // ebx
  unsigned int v17; // [rsp+30h] [rbp-28h] BYREF
  LPVOID ppv[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  ppv[1] = (LPVOID)-2LL;
  try
  {
    v4 = (HSTRING *)((char *)this + 16);
    if ( a2 && a2 == *v4 || (WindowsDeleteString(*v4), *v4 = 0LL, v5 = WindowsDuplicateString(a2, v4), v6 = v5, v5 >= 0) )
    {
      ppv[0] = 0LL;
      Instance = CoCreateInstance(
                   &GUID_25dead04_1eac_4911_9e3a_ad0a4ab560fd,
                   0LL,
                   4u,
                   &GUID_d133ce13_3537_48ba_93a7_afcd5d2053b4,
                   ppv);
      v10 = Instance;
      if ( Instance >= 0 )
      {
        v17 = 0;
        v11 = (*(__int64 (__fastcall **)(LPVOID, SystemTray::TrayNotifyCallback *, unsigned int *))(*(_QWORD *)ppv[0]
                                                                                                  + 24LL))(
                ppv[0],
                this,
                &v17);
        v12 = v11;
        if ( v11 >= 0 )
        {
          v13 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv[0] + 32LL))(ppv[0], v17);
          v14 = v13;
          if ( v13 >= 0 )
          {
            if ( *((_QWORD *)this + 5)
              || *((_QWORD *)this + 7)
              || (v15 = 0, *((_QWORD *)this + 8))
              || *((_QWORD *)this + 9) )
            {
              v15 = 1;
            }
            v16 = v15 == 0 ? 0x80070490 : 0;
            if ( ppv[0] )
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
            result = v16;
          }
          else
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x15,
              (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
              (const char *)(unsigned int)v13);
            if ( ppv[0] )
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
            result = v14;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x14,
            (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
            (const char *)(unsigned int)v11);
          if ( ppv[0] )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
          result = v12;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xF,
          (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
          (const char *)(unsigned int)Instance);
        if ( ppv[0] )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
        result = v10;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xC,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
        (const char *)(unsigned int)v5);
      result = v6;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1A,
                           (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
                           v7);
  }
  return result;
}
