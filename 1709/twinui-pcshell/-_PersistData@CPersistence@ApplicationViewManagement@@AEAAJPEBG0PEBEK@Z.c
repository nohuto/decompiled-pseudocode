/*
 * XREFs of ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x180084534
 * Callers:
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18007E8B0 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 *     ?SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z @ 0x1800832D0 (-SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z.c)
 *     ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x180084BF0 (-SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180084890 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall ApplicationViewManagement::CPersistence::_PersistData(
        HKEY *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int8 *a4,
        DWORD cbData)
{
  HKEY v5; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // rdx
  HKEY v11; // rcx
  unsigned int dwOptions; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  v5 = *this;
  if ( !v5 )
  {
    v8 = -2144927145;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
      (const char *)0x80270257LL);
    return v8;
  }
  hKey = 0LL;
  v9 = RegCreateKeyExW(v5, a2, 0, 0LL, 1u, 0x20006u, 0LL, &hKey, 0LL);
  if ( v9 )
  {
    v10 = 89LL;
LABEL_7:
    v8 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)v10,
           (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
           (const char *)v9,
           dwOptions);
    goto LABEL_9;
  }
  v9 = RegSetValueExW(hKey, a3, 0, 3u, a4, cbData);
  if ( v9 )
  {
    v10 = 97LL;
    goto LABEL_7;
  }
  v8 = 0;
LABEL_9:
  v11 = hKey;
  hKey = 0LL;
  if ( v11 )
    RegCloseKey(v11);
  return v8;
}
