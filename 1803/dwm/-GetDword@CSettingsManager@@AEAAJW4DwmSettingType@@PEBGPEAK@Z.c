/*
 * XREFs of ?GetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGPEAK@Z @ 0x140002630
 * Callers:
 *     ?ReadRegistryBitfields@CSettingsManager@@AEAAXW4DwmSettingType@@PEAUBitfieldRegistrySetting@@IPEAK@Z @ 0x1400025A0 (-ReadRegistryBitfields@CSettingsManager@@AEAAXW4DwmSettingType@@PEAUBitfieldRegistrySetting@@IPE.c)
 *     ?ReadRegistryDwords@CSettingsManager@@UEAAJW4DwmSettingType@@PEAUDwordRegistrySetting@@I@Z @ 0x140002760 (-ReadRegistryDwords@CSettingsManager@@UEAAJW4DwmSettingType@@PEAUDwordRegistrySetting@@I@Z.c)
 *     ?GetPolicyDword@CSettingsManager@@UEAAJPEBGPEAK@Z @ 0x140007590 (-GetPolicyDword@CSettingsManager@@UEAAJPEBGPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSettingsManager::GetDword(__int64 a1, int a2, const WCHAR *a3, void *a4)
{
  LSTATUS ValueW; // ebx
  LSTATUS v9; // eax
  HKEY v10; // rcx
  DWORD cbData; // [rsp+68h] [rbp+10h] BYREF

  cbData = 4;
  AcquireSRWLockShared((PSRWLOCK)(a1 + 40));
  if ( a2 )
  {
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Policies\\Microsoft\\Windows\\DWM",
               a3,
               0x20000010u,
               0LL,
               a4,
               &cbData);
    if ( !ValueW )
      goto LABEL_7;
    v10 = *(HKEY *)(a1 + 16);
    cbData = 4;
    v9 = RegQueryValueExW(v10, a3, 0LL, 0LL, (LPBYTE)a4, &cbData);
  }
  else
  {
    ValueW = RegQueryValueExW(*(HKEY *)(a1 + 8), a3, 0LL, 0LL, (LPBYTE)a4, &cbData);
    if ( !ValueW )
      goto LABEL_7;
    cbData = 4;
    v9 = RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\DWM", a3, 0x20000010u, 0LL, a4, &cbData);
  }
  ValueW = v9;
LABEL_7:
  ReleaseSRWLockShared((PSRWLOCK)(a1 + 40));
  if ( ValueW <= 0 )
    return (unsigned int)ValueW;
  else
    return (unsigned __int16)ValueW | 0x80070000;
}
