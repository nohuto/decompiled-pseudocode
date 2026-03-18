/*
 * XREFs of ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x1400027D0
 * Callers:
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1400022F0 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z @ 0x140002980 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z.c)
 * Callees:
 *     ?ReadRegistryBitfields@CSettingsManager@@AEAAXW4DwmSettingType@@PEAUBitfieldRegistrySetting@@IPEAK@Z @ 0x1400025A0 (-ReadRegistryBitfields@CSettingsManager@@AEAAXW4DwmSettingType@@PEAUBitfieldRegistrySetting@@IPE.c)
 *     __security_check_cookie @ 0x140003040 (__security_check_cookie.c)
 */

void __fastcall CSettingsManager::RefreshPreferencesAndPolicies(CSettingsManager *this)
{
  const wchar_t *v2; // [rsp+30h] [rbp-49h] BYREF
  int v3; // [rsp+38h] [rbp-41h]
  int v4; // [rsp+3Ch] [rbp-3Dh]
  const wchar_t *v5; // [rsp+40h] [rbp-39h]
  __int64 v6; // [rsp+48h] [rbp-31h]
  const wchar_t *v7; // [rsp+50h] [rbp-29h]
  __int64 v8; // [rsp+58h] [rbp-21h]
  _QWORD v9[12]; // [rsp+60h] [rbp-19h] BYREF

  v3 = 1;
  v2 = L"UseDPIScaling";
  v4 = 1;
  v5 = L"AnimationsShiftKey";
  v6 = 2LL;
  v7 = L"DisableLockingMemory";
  v8 = 64LL;
  v9[0] = L"DisallowAnimations";
  v9[1] = 1LL;
  v9[2] = L"DisallowColorizationColorChanges";
  v9[4] = L"DefaultColorizationColorState";
  v9[6] = L"UseHardwareRenderingForBitmapRemoting";
  v9[8] = L"AllowAutoBitmapRemoting";
  v9[10] = L"RemoteAppRemoting";
  v9[3] = 2LL;
  v9[5] = 4LL;
  v9[7] = 8LL;
  v9[9] = 16LL;
  v9[11] = 32LL;
  CSettingsManager::ReadRegistryBitfields((__int64)this, 0, (__int64)&v2, 3u, (_DWORD *)this + 16);
  CSettingsManager::ReadRegistryBitfields((__int64)this, 1u, (__int64)v9, 6u, (_DWORD *)this + 17);
}
