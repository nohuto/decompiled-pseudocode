/*
 * XREFs of ?IsAPOClsidRegistered@@YAHU_GUID@@@Z @ 0x180053D30
 * Callers:
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x1800536D0 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

__int64 __fastcall IsAPOClsidRegistered(GUID *rguid)
{
  WCHAR *v2; // rdx
  __int64 v3; // rax
  int v4; // r11d
  __int64 v5; // r8
  WCHAR v6; // cx
  int v7; // r10d
  OLECHAR *v8; // rdx
  HKEY hKey; // [rsp+30h] [rbp-C8h] BYREF
  WCHAR SubKey[80]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = SubKey;
  v3 = 75LL;
  v4 = 0;
  v5 = 0LL;
  while ( v3 != -2147483571 )
  {
    v6 = *(WCHAR *)((char *)v2 + (char *)L"AudioEngine\\AudioProcessingObjects\\" - (char *)SubKey);
    if ( !v6 )
      break;
    *v2 = v6;
    ++v5;
    ++v2;
    if ( !--v3 )
    {
      --v2;
      v4 = -2147024774;
      --v5;
      break;
    }
  }
  *v2 = 0;
  v7 = 75 - v5;
  v8 = &SubKey[v5];
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2147024774 )
  {
    v7 = (int)hKey;
    v8 = (OLECHAR *)hKey;
  }
  if ( v4 < 0 || StringFromGUID2(rguid, v8, v7) <= 0 || RegOpenKeyExW(HKEY_CLASSES_ROOT, SubKey, 0, 0x20019u, &hKey) )
    return 0LL;
  RegCloseKey(hKey);
  return 1LL;
}
