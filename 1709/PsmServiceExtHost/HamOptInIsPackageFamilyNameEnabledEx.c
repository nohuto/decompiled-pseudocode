/*
 * XREFs of HamOptInIsPackageFamilyNameEnabledEx @ 0x18001EA90
 * Callers:
 *     HamOptInIsPsmKeyEnabledEx @ 0x18001E9E0 (HamOptInIsPsmKeyEnabledEx.c)
 * Callees:
 *     HampOptInIsVelocityPackageEnabled @ 0x18001EB4C (HampOptInIsVelocityPackageEnabled.c)
 *     HampOptInOpenPolicyKey @ 0x18001ED9C (HampOptInOpenPolicyKey.c)
 */

__int64 __fastcall HamOptInIsPackageFamilyNameEnabledEx(LPCWSTR lpValueName, unsigned int a2, _BYTE *a3)
{
  HKEY v3; // rdi
  unsigned int v7; // eax
  unsigned int v8; // ebx
  LSTATUS v9; // eax
  char IsVelocityPackageEnabled; // al
  LSTATUS v12; // eax
  HKEY hKey[2]; // [rsp+30h] [rbp-10h] BYREF
  DWORD cbData; // [rsp+78h] [rbp+38h] BYREF
  unsigned int Data; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0LL;
  hKey[0] = 0LL;
  if ( a2 > 2 )
  {
    v8 = 87;
  }
  else
  {
    v7 = HampOptInOpenPolicyKey(lpValueName, hKey);
    v8 = v7;
    if ( v7 == 2 )
    {
      if ( a2 == 2 )
        *a3 = 0;
      else
        *a3 = HampOptInIsVelocityPackageEnabled();
      v3 = hKey[0];
      v8 = 0;
      goto LABEL_9;
    }
    v3 = hKey[0];
    if ( !v7 )
    {
      if ( a2 != 1 )
        goto LABEL_18;
      cbData = 4;
      v9 = RegQueryValueExW(hKey[0], L"LocalTest", 0LL, 0LL, (LPBYTE)&Data, &cbData);
      v8 = v9;
      if ( v9 == 2 )
      {
        IsVelocityPackageEnabled = HampOptInIsVelocityPackageEnabled();
LABEL_7:
        *a3 = IsVelocityPackageEnabled;
LABEL_8:
        v8 = 0;
        goto LABEL_9;
      }
      if ( !v9 )
      {
LABEL_18:
        cbData = 4;
        v12 = RegQueryValueExW(v3, lpValueName, 0LL, 0LL, (LPBYTE)&Data, &cbData);
        v8 = v12;
        if ( v12 == 2 )
        {
          *a3 = 0;
          goto LABEL_8;
        }
        if ( !v12 )
        {
          if ( Data < 3 )
          {
            IsVelocityPackageEnabled = Data >= a2;
            goto LABEL_7;
          }
          v8 = 1004;
        }
      }
    }
  }
LABEL_9:
  if ( v3 )
    RegCloseKey(v3);
  return v8;
}
