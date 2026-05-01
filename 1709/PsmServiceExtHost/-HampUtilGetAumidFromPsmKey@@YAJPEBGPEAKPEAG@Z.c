/*
 * XREFs of ?HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z @ 0x18004D16C
 * Callers:
 *     ?HampAppIssueStateChangeNotification@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18004631C (-HampAppIssueStateChangeNotification@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE.c)
 * Callees:
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall HampUtilGetAumidFromPsmKey(const unsigned __int16 *a1, unsigned int *a2, unsigned __int16 *a3)
{
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-E0h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+24h] [rbp-DCh] BYREF
  int v9; // [rsp+28h] [rbp-D8h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR packageFullName[128]; // [rsp+150h] [rbp+50h] BYREF

  v7 = 256;
  packageFamilyNameLength = 65;
  v9 = 130;
  result = PsmGetPackageFullNameFromKey(a1, packageFullName, &v7);
  if ( (int)result >= 0 )
  {
    if ( PackageFamilyNameFromFullName(packageFullName, &packageFamilyNameLength, packageFamilyName) )
    {
      return 3221225485LL;
    }
    else
    {
      result = PsmGetApplicationNameFromKey(a1, packageRelativeApplicationId, &v9);
      if ( (int)result >= 0 )
        return FormatApplicationUserModelId(packageFamilyName, packageRelativeApplicationId, a2, a3) != 0
             ? 0xC0000023
             : 0;
    }
  }
  return result;
}
