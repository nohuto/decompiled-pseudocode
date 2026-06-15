/*
 * XREFs of ?IsAPOClsidRegistered@@YAHU_GUID@@@Z @ 0x1800DFE44
 * Callers:
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x1800D9D48 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     StringCopyWorkerW_2 @ 0x1800DFF30 (StringCopyWorkerW_2.c)
 */

__int64 __fastcall IsAPOClsidRegistered(GUID *rguid, size_t a2)
{
  unsigned int v3; // ebx
  HRESULT v4; // r8d
  int v5; // ecx
  OLECHAR *v6; // rdx
  PHKEY phkResult; // [rsp+20h] [rbp-D8h]
  LPOLESTR lpsz; // [rsp+30h] [rbp-C8h] BYREF
  size_t pcchNewDestLength; // [rsp+38h] [rbp-C0h] BYREF
  wchar_t pszDest[80]; // [rsp+40h] [rbp-B8h] BYREF

  v3 = 0;
  pcchNewDestLength = 0LL;
  v4 = StringCopyWorkerW_2(pszDest, a2, &pcchNewDestLength, L"AudioEngine\\AudioProcessingObjects\\", (size_t)phkResult);
  v5 = 75 - pcchNewDestLength;
  v6 = &pszDest[pcchNewDestLength];
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2147024774 )
  {
    v5 = (int)lpsz;
    v6 = lpsz;
  }
  if ( v4 >= 0
    && StringFromGUID2(rguid, v6, v5) > 0
    && !RegOpenKeyExW(HKEY_CLASSES_ROOT, pszDest, 0, 0x20019u, (PHKEY)&lpsz) )
  {
    RegCloseKey((HKEY)lpsz);
    return 1;
  }
  return v3;
}
