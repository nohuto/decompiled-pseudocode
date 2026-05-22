/*
 * XREFs of ?IsTouchTestModeEnabled@RIMRawInputProvider@@AEAA_NXZ @ 0x180088804
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180087C18 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 */

bool __fastcall RIMRawInputProvider::IsTouchTestModeEnabled(RIMRawInputProvider *this)
{
  bool v1; // bl
  int v2; // eax
  __int64 v3; // rcx
  LSTATUS v4; // eax
  signed int v5; // ecx
  DWORD cbData; // [rsp+50h] [rbp+20h] BYREF
  int v8; // [rsp+54h] [rbp+24h]
  DWORD Type; // [rsp+58h] [rbp+28h] BYREF
  int Data; // [rsp+60h] [rbp+30h] BYREF
  HKEY hKey; // [rsp+68h] [rbp+38h] BYREF

  v8 = HIDWORD(this);
  hKey = 0LL;
  cbData = 0;
  Type = 0;
  Data = 0;
  v1 = 0;
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\Test\\Touch", 0, 0x20019u, &hKey) > 0 )
    v2 = (unsigned __int16)RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\Test\\Touch", 0, 0x20019u, &hKey) | 0x80070000;
  else
    v2 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\Test\\Touch", 0, 0x20019u, &hKey);
  if ( v2 >= 0 )
  {
    cbData = 4;
    v4 = RegQueryValueExW(hKey, L"DisableTouch", 0LL, &Type, (LPBYTE)&Data, &cbData);
    v5 = (unsigned __int16)v4 | 0x80070000;
    if ( v4 <= 0 )
      v5 = v4;
    if ( v5 >= 0 && Type == 4 )
      v1 = Data != 0;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v3, &MinInput_Warning_CheckResult, 0, 398, v2);
  }
  if ( hKey )
    RegCloseKey(hKey);
  return v1;
}
