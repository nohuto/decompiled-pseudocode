/*
 * XREFs of ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x1801C2290
 * Callers:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@@Z @ 0x180052794 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?v_Initialize@CImmersiveWindowFactory@@EEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z @ 0x1801DFFD0 (-v_Initialize@CImmersiveWindowFactory@@EEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ??0CMarshaledInterface@@QEAA@XZ @ 0x1800059B0 (--0CMarshaledInterface@@QEAA@XZ.c)
 *     ??1?$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ @ 0x180079428 (--1-$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ.c)
 *     ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z @ 0x1801C20AC (-GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z.c)
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x1801C20F8 (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1801E12A4 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 */

__int64 __fastcall CallerIdentity::GetManifestedOrientationPreference(
        LPCWSTR lpSubKey,
        unsigned __int16 *a2,
        enum ORIENTATION_PREFERENCE *a3)
{
  signed int StateHandle; // ebx
  void **v6; // r8
  const WCHAR *v7; // rdx
  const unsigned __int16 *v8; // r8
  LSTATUS v9; // eax
  LSTATUS v10; // eax
  HKEY phkResult; // [rsp+30h] [rbp-30h] BYREF
  CallerIdentity *v13; // [rsp+38h] [rbp-28h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-20h] BYREF
  LPVOID pv[3]; // [rsp+48h] [rbp-18h] BYREF
  DWORD cbData; // [rsp+88h] [rbp+28h] BYREF
  DWORD Type; // [rsp+90h] [rbp+30h] BYREF
  int Data; // [rsp+98h] [rbp+38h] BYREF

  *(_DWORD *)a2 = 0;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  StateHandle = ParseAppUserModelId(lpSubKey, (unsigned __int16 **)pv, 0LL);
  if ( StateHandle >= 0 )
  {
    v13 = 0LL;
    StateHandle = CallerIdentity::GetStateHandle((CallerIdentity *)pv[0], (unsigned __int16 *)&v13, v6);
    if ( StateHandle >= 0 )
    {
      CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&hKey);
      StateHandle = CallerIdentity::GetStateRegKey(v13, v7, v8, &hKey);
      if ( StateHandle >= 0 )
      {
        CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&phkResult);
        v9 = RegOpenKeyExW(hKey, lpSubKey, 0, 0x20019u, &phkResult);
        StateHandle = (unsigned __int16)v9 | 0x80070000;
        if ( v9 <= 0 )
          StateHandle = v9;
        if ( StateHandle >= 0 )
        {
          cbData = 4;
          v10 = RegQueryValueExW(phkResult, L"Orientation", 0LL, &Type, (LPBYTE)&Data, &cbData);
          StateHandle = (unsigned __int16)v10 | 0x80070000;
          if ( v10 <= 0 )
            StateHandle = v10;
          if ( StateHandle >= 0 )
          {
            StateHandle = Type != 4 ? 0x80004005 : 0;
            if ( Type == 4 )
              *(_DWORD *)a2 = Data;
          }
        }
        CAutoHandle<HKEY__ *>::~CAutoHandle<HKEY__ *>(&phkResult);
      }
      CloseState(v13);
      CAutoHandle<HKEY__ *>::~CAutoHandle<HKEY__ *>(&hKey);
    }
  }
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return (unsigned int)StateHandle;
}
