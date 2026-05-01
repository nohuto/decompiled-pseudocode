/*
 * XREFs of ?_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z @ 0x1802FF7C8
 * Callers:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1802FF2BC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x180149878 (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 *     ?SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z @ 0x1802FF49C (-SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z.c)
 */

void __fastcall CCriticalFailureHandler::_RecordFailure(
        CCriticalFailureHandler *this,
        int a2,
        BYTE *a3,
        int a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  const unsigned __int16 *v9; // rdx
  const unsigned __int16 *v10; // r8
  HKEY hKey; // [rsp+50h] [rbp-10h] BYREF
  CCriticalFailureHandler *v12; // [rsp+70h] [rbp+10h] BYREF

  v12 = this;
  if ( !RegCreateKeyExW(HKEY_CURRENT_USER, lpSubKey, 0, 0LL, 1u, 0x20006u, 0LL, &hKey, 0LL) )
  {
    SHRegSetString(hKey, v9, v10, a3);
    LODWORD(v12) = a4;
    _RegSetKeyValue(hKey, 0LL, L"PreviousFailure_SourceLine", 4u, (BYTE *)&v12, 4u);
    LODWORD(v12) = a2;
    _RegSetKeyValue(hKey, 0LL, L"PreviousFailure_Result", 4u, (BYTE *)&v12, 4u);
    if ( a5 )
    {
      LODWORD(v12) = *(_DWORD *)a5;
      _RegSetKeyValue(hKey, 0LL, L"PreviousFailure_Arg1", 4u, (BYTE *)&v12, 4u);
    }
    if ( a6 )
    {
      LODWORD(v12) = *(_DWORD *)a6;
      _RegSetKeyValue(hKey, 0LL, L"PreviousFailure_Arg2", 4u, (BYTE *)&v12, 4u);
    }
    RegCloseKey(hKey);
  }
}
