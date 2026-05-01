/*
 * XREFs of ?IsXAMLExperienceDisabled@TabTipAdapter@KeyboardHosting@@AEAA_NXZ @ 0x180249D08
 * Callers:
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@@Z @ 0x18024BDAC (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801AA0DC (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

char __fastcall KeyboardHosting::TabTipAdapter::IsXAMLExperienceDisabled(KeyboardHosting::TabTipAdapter *this)
{
  unsigned int ValueW; // eax
  unsigned int v2; // eax
  char v3; // al
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  KeyboardHosting::TabTipAdapter *pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  pvData = this;
  if ( !byte_180439891 )
  {
    LODWORD(pvData) = 0;
    pcbData = 4;
    ValueW = RegGetValueW(
               HKEY_CURRENT_USER,
               L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
               L"DisableNewKeyboardExperience",
               0x10u,
               0LL,
               &pvData,
               &pcbData);
    if ( ValueW )
    {
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        809LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)ValueW);
      goto LABEL_4;
    }
    if ( (_DWORD)pvData == 1 )
    {
      byte_180439890 = 1;
    }
    else
    {
      if ( (_DWORD)pvData )
      {
LABEL_4:
        pcbData = 4;
        v2 = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
               L"DisableNewKeyboardExperience",
               0x10u,
               0LL,
               &pvData,
               &pcbData);
        if ( v2 )
        {
          wil::details::in1diag3::_Log_Win32(
            retaddr,
            828LL,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            (const char *)v2);
        }
        else
        {
          v3 = byte_180439890;
          if ( (_DWORD)pvData == 1 )
            v3 = 1;
          byte_180439890 = v3;
        }
        goto LABEL_13;
      }
      byte_180439890 = 0;
    }
LABEL_13:
    byte_180439891 = 1;
  }
  return byte_180439890;
}
