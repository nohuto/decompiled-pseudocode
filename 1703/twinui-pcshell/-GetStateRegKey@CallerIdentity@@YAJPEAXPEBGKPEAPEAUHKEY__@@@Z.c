/*
 * XREFs of ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x1801765C4
 * Callers:
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18017675C (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 * Callees:
 *     ??0CMarshaledInterface@@QEAA@XZ @ 0x1800056F0 (--0CMarshaledInterface@@QEAA@XZ.c)
 *     ??1?$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ @ 0x1800767F4 (--1-$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180175B80 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     CoTaskMemFree_0 @ 0x18019510C (CoTaskMemFree_0.c)
 */

__int64 __fastcall CallerIdentity::GetStateRegKey(
        CallerIdentity *this,
        const WCHAR *a2,
        const unsigned __int16 *a3,
        HKEY *a4)
{
  int v6; // edi
  signed int LastError; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  signed int v10; // eax
  LSTATUS v11; // eax
  LSTATUS Key; // eax
  PHKEY phkResult; // [rsp+20h] [rbp-40h]
  HKEY hKey[2]; // [rsp+50h] [rbp-10h] BYREF
  LPCWSTR lpSubKey; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v17; // [rsp+A0h] [rbp+40h] BYREF
  HKEY v18; // [rsp+A8h] [rbp+48h] BYREF

  lpSubKey = a2;
  *a4 = 0LL;
  v17 = 0;
  if ( (unsigned int)GetSystemAppDataKey(this, 0LL, 0LL, &v17) )
  {
    return (unsigned int)-2147418113;
  }
  else
  {
    LastError = GetLastError();
    v6 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v6 = LastError;
    if ( v6 >= 0 )
      v6 = -2147467259;
    if ( v6 == -2147024774 && v17 )
    {
      lpSubKey = 0LL;
      CoTaskMemFree_0(0LL);
      v6 = _AllocStringWorker<CTCoAllocPolicy>(v9, v8, 0LL, v17, (__int64)phkResult, (void **)&lpSubKey);
      if ( v6 >= 0 )
      {
        CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)hKey);
        if ( (unsigned int)GetSystemAppDataKey(this, hKey, lpSubKey, &v17) )
        {
          CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&v18);
          v11 = RegOpenKeyExW(hKey[0], lpSubKey, 0, 0x2001Fu, &v18);
          v6 = (unsigned __int16)v11 | 0x80070000;
          if ( v11 <= 0 )
            v6 = v11;
          if ( v6 >= 0 )
          {
            Key = RegCreateKeyExW(v18, L"SplashScreen", 0, 0LL, 0, 0x20019u, 0LL, a4, 0LL);
            v6 = (unsigned __int16)Key | 0x80070000;
            if ( Key <= 0 )
              v6 = Key;
          }
          CAutoHandle<HKEY__ *>::~CAutoHandle<HKEY__ *>(&v18);
        }
        else
        {
          v10 = GetLastError();
          v6 = (unsigned __int16)v10 | 0x80070000;
          if ( v10 <= 0 )
            v6 = v10;
          if ( v6 >= 0 )
            v6 = -2147467259;
        }
        CAutoHandle<HKEY__ *>::~CAutoHandle<HKEY__ *>(hKey);
      }
      CoTaskMemFree_0((LPVOID)lpSubKey);
    }
  }
  return (unsigned int)v6;
}
