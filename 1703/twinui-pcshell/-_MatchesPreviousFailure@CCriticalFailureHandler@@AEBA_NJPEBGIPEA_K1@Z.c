/*
 * XREFs of ?_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z @ 0x1801782E8
 * Callers:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1801781F0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

bool __fastcall CCriticalFailureHandler::_MatchesPreviousFailure(
        CCriticalFailureHandler *this,
        int a2,
        const unsigned __int16 *a3,
        int a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  bool v9; // bl
  LSTATUS ValueW; // eax
  signed int v11; // ecx
  LSTATUS v12; // eax
  signed int v13; // ecx
  LSTATUS v14; // eax
  signed int v15; // edx
  LSTATUS v16; // eax
  signed int v17; // ecx
  LSTATUS v19; // eax
  signed int v20; // ecx
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  DWORD v22; // [rsp+44h] [rbp-BCh] BYREF
  HKEY hkey; // [rsp+48h] [rbp-B8h] BYREF
  int pvData; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v25[3]; // [rsp+54h] [rbp-ACh] BYREF
  WCHAR psz2[264]; // [rsp+60h] [rbp-A0h] BYREF

  v9 = 0;
  if ( !RegOpenKeyExW(HKEY_CURRENT_USER, lpSubKey, 0, 0x20019u, &hkey) )
  {
    pcbData = 4;
    ValueW = RegGetValueW(hkey, 0LL, L"PreviousFailure_Result", 0x10u, 0LL, &pvData, &pcbData);
    v11 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v11 = ValueW;
    if ( v11 < 0 || a2 != pvData )
      goto LABEL_21;
    pcbData = 4;
    v12 = RegGetValueW(hkey, 0LL, L"PreviousFailure_SourceLine", 0x10u, 0LL, v25, &pcbData);
    v13 = (unsigned __int16)v12 | 0x80070000;
    if ( v12 <= 0 )
      v13 = v12;
    if ( v13 < 0 || a4 != v25[0] )
      goto LABEL_21;
    pcbData = 520;
    v14 = RegGetValueW(hkey, 0LL, L"PreviousFailure_SourceFile", 2u, 0LL, psz2, &pcbData);
    if ( v14 )
      psz2[0] = 0;
    v15 = (unsigned __int16)v14 | 0x80070000;
    if ( v14 <= 0 )
      v15 = v14;
    if ( v15 < 0 || StrCmpIW(a3, psz2) )
      goto LABEL_21;
    pcbData = 4;
    v16 = RegGetValueW(hkey, 0LL, L"PreviousFailure_Arg1", 0x10u, 0LL, &v22, &pcbData);
    v17 = (unsigned __int16)v16 | 0x80070000;
    if ( v16 <= 0 )
      v17 = v16;
    if ( v17 < 0 )
    {
      v9 = a5 == 0LL;
      if ( a5 )
        goto LABEL_22;
    }
    else if ( !a5 || *a5 != v22 )
    {
LABEL_21:
      v9 = 0;
LABEL_22:
      RegCloseKey(hkey);
      return v9;
    }
    v22 = 4;
    v19 = RegGetValueW(hkey, 0LL, L"PreviousFailure_Arg2", 0x10u, 0LL, &pcbData, &v22);
    v20 = (unsigned __int16)v19 | 0x80070000;
    if ( v19 <= 0 )
      v20 = v19;
    if ( v20 < 0 )
    {
      v9 = a6 == 0LL;
      goto LABEL_22;
    }
    if ( a6 && *a6 == pcbData )
    {
      v9 = 1;
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  return v9;
}
