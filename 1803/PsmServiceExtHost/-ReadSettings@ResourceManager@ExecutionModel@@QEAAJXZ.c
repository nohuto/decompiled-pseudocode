/*
 * XREFs of ?ReadSettings@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18003A71C
 * Callers:
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@@Z @ 0x18003A918 (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnfo.c)
 * Callees:
 *     ?ReadRedirectedEstimationKey@ResourceManager@ExecutionModel@@QEAAXPEAUHKEY__@@@Z @ 0x18003A7F0 (-ReadRedirectedEstimationKey@ResourceManager@ExecutionModel@@QEAAXPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ReadSettings(const WCHAR **this)
{
  const WCHAR *v2; // rdx
  double v4; // xmm1_8
  HKEY hkey; // [rsp+40h] [rbp-18h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-10h] BYREF
  DWORD Type; // [rsp+80h] [rbp+28h] BYREF
  DWORD cbData; // [rsp+88h] [rbp+30h] BYREF
  int Data; // [rsp+90h] [rbp+38h] BYREF
  HKEY hKey; // [rsp+98h] [rbp+40h] BYREF

  phkResult = 0LL;
  if ( !RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", &phkResult) )
    ExecutionModel::ResourceManager::ReadRedirectedEstimationKey((ExecutionModel::ResourceManager *)this, phkResult);
  hkey = 0LL;
  *((_DWORD *)this + 26) = 10000;
  if ( !RegOpenKeyW(HKEY_LOCAL_MACHINE, L"SYSTEM\\WatchdogTimers", &hkey) )
  {
    Type = 4;
    RegGetValueW(hkey, 0LL, L"EmAckTimeout", 0x10u, 0LL, this + 13, &Type);
  }
  v2 = this[2];
  hKey = 0LL;
  this[3] = (const WCHAR *)0x3FD0000000000000LL;
  if ( !RegOpenKeyW(HKEY_LOCAL_MACHINE, v2, &hKey) )
  {
    Data = 0;
    Type = 4;
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"HistoryWeightPct", 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 && cbData == 4 )
    {
      v4 = (double)Data / 100.0;
      *((double *)this + 3) = v4;
      if ( v4 <= 0.0 || v4 > 1.0 )
        this[3] = (const WCHAR *)0x3FD0000000000000LL;
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( hkey )
    RegCloseKey(hkey);
  if ( phkResult )
    RegCloseKey(phkResult);
  return 0LL;
}
