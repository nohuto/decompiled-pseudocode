/*
 * XREFs of ?_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z @ 0x180178594
 * Callers:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1801781F0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCriticalFailureHandler::_RecordFailure(
        CCriticalFailureHandler *this,
        int a2,
        const BYTE *a3,
        int a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  HKEY v9; // rbx
  unsigned __int64 v10; // rax
  HKEY v11; // rbx
  HKEY v12; // rbx
  HKEY v13; // rbx
  HKEY hKey; // [rsp+50h] [rbp-10h] BYREF
  HKEY v15; // [rsp+58h] [rbp-8h]
  HKEY v16; // [rsp+80h] [rbp+20h] BYREF

  v16 = (HKEY)this;
  if ( !RegCreateKeyExW(HKEY_CURRENT_USER, lpSubKey, 0, 0LL, 1u, 0x20006u, 0LL, &hKey, 0LL) )
  {
    v9 = hKey;
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)&a3[2 * v10] );
    if ( v10 < 0x7FFFFFFF )
    {
      v16 = hKey;
      RegSetValueExW(hKey, L"PreviousFailure_SourceFile", 0, 1u, a3, 2 * v10 + 2);
      if ( v16 != v9 )
        RegCloseKey(v16);
      v9 = hKey;
    }
    LODWORD(v16) = a4;
    v15 = v9;
    RegSetValueExW(v9, L"PreviousFailure_SourceLine", 0, 4u, (const BYTE *)&v16, 4u);
    if ( v15 != v9 )
      RegCloseKey(v15);
    v11 = hKey;
    LODWORD(v16) = a2;
    v15 = hKey;
    RegSetValueExW(hKey, L"PreviousFailure_Result", 0, 4u, (const BYTE *)&v16, 4u);
    if ( v15 != v11 )
      RegCloseKey(v15);
    if ( a5 )
    {
      v12 = hKey;
      LODWORD(v16) = *(_DWORD *)a5;
      v15 = hKey;
      RegSetValueExW(hKey, L"PreviousFailure_Arg1", 0, 4u, (const BYTE *)&v16, 4u);
      if ( v15 != v12 )
        RegCloseKey(v15);
    }
    if ( a6 )
    {
      v13 = hKey;
      LODWORD(v16) = *(_DWORD *)a6;
      v15 = hKey;
      RegSetValueExW(hKey, L"PreviousFailure_Arg2", 0, 4u, (const BYTE *)&v16, 4u);
      if ( v15 != v13 )
        RegCloseKey(v15);
    }
    RegCloseKey(hKey);
  }
}
