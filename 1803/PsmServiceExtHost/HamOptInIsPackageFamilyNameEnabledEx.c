/*
 * XREFs of HamOptInIsPackageFamilyNameEnabledEx @ 0x1800305D8
 * Callers:
 *     HamOptInIsPsmKeyEnabledEx @ 0x180030538 (HamOptInIsPsmKeyEnabledEx.c)
 * Callees:
 *     ?HampOptInIsVelocityPackageEnabled@@YAEPEBG@Z @ 0x180030674 (-HampOptInIsVelocityPackageEnabled@@YAEPEBG@Z.c)
 *     ?HampOptInOpenPolicyKey@@YAKEPEAPEAUHKEY__@@@Z @ 0x180030CEC (-HampOptInOpenPolicyKey@@YAKEPEAPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall HamOptInIsPackageFamilyNameEnabledEx(wchar_t *String1, DWORD a2, unsigned __int8 *a3)
{
  unsigned int v5; // eax
  HKEY v6; // rsi
  unsigned int v7; // ebx
  LSTATUS v8; // eax
  unsigned __int8 IsVelocityPackageEnabled; // al
  LSTATUS v11; // eax
  HKEY hKey; // [rsp+30h] [rbp-28h] BYREF
  DWORD cbData; // [rsp+68h] [rbp+10h] BYREF
  unsigned int Data; // [rsp+78h] [rbp+20h] BYREF

  cbData = a2;
  hKey = 0LL;
  v5 = HampOptInOpenPolicyKey((unsigned __int8)String1, &hKey);
  v6 = hKey;
  v7 = v5;
  if ( v5 == 2 )
    goto LABEL_4;
  if ( v5 )
    goto LABEL_7;
  cbData = 4;
  v8 = RegQueryValueExW(hKey, L"LocalTest", 0LL, 0LL, (LPBYTE)&Data, &cbData);
  v7 = v8;
  if ( v8 == 2 )
  {
LABEL_4:
    IsVelocityPackageEnabled = HampOptInIsVelocityPackageEnabled(String1);
LABEL_5:
    *a3 = IsVelocityPackageEnabled;
LABEL_6:
    v7 = 0;
    goto LABEL_7;
  }
  if ( !v8 )
  {
    cbData = 4;
    v11 = RegQueryValueExW(v6, String1, 0LL, 0LL, (LPBYTE)&Data, &cbData);
    v7 = v11;
    if ( v11 == 2 )
    {
      *a3 = 0;
      goto LABEL_6;
    }
    if ( !v11 )
    {
      if ( Data < 3 )
      {
        IsVelocityPackageEnabled = Data != 0;
        goto LABEL_5;
      }
      v7 = 1004;
    }
  }
LABEL_7:
  if ( v6 )
    RegCloseKey(v6);
  return v7;
}
