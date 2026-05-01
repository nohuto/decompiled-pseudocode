/*
 * XREFs of ?_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z @ 0x1801C45F0
 * Callers:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1801C4250 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
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
  HKEY hKey; // [rsp+50h] [rbp-10h] BYREF
  HKEY v12; // [rsp+58h] [rbp-8h]
  HKEY v13; // [rsp+80h] [rbp+20h] BYREF

  v13 = (HKEY)this;
  if ( !RegCreateKeyExW(HKEY_CURRENT_USER, lpSubKey, 0, 0LL, 1u, 0x20006u, 0LL, &hKey, 0LL) )
  {
    v9 = hKey;
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)&a3[2 * v10] );
    if ( v10 < 0x7FFFFFFF )
    {
      v13 = hKey;
      RegSetValueExW(hKey, L"PreviousFailure_SourceFile", 0, 1u, a3, 2 * v10 + 2);
      if ( v13 != v9 )
        RegCloseKey(v13);
      v9 = hKey;
    }
    LODWORD(v13) = a4;
    v12 = v9;
    RegSetValueExW(v9, L"PreviousFailure_SourceLine", 0, 4u, (const BYTE *)&v13, 4u);
    v12 = hKey;
    LODWORD(v13) = a2;
    RegSetValueExW(hKey, L"PreviousFailure_Result", 0, 4u, (const BYTE *)&v13, 4u);
    if ( a5 )
    {
      LODWORD(v13) = *(_DWORD *)a5;
      v12 = hKey;
      RegSetValueExW(hKey, L"PreviousFailure_Arg1", 0, 4u, (const BYTE *)&v13, 4u);
    }
    if ( a6 )
    {
      LODWORD(v13) = *(_DWORD *)a6;
      v12 = hKey;
      RegSetValueExW(hKey, L"PreviousFailure_Arg2", 0, 4u, (const BYTE *)&v13, 4u);
    }
    RegCloseKey(hKey);
  }
}
