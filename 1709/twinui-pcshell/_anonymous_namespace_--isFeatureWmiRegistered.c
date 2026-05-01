/*
 * XREFs of _anonymous_namespace_::isFeatureWmiRegistered @ 0x1801DEC1C
 * Callers:
 *     _anonymous_namespace_::queryLockdownMode @ 0x1801DEC80 (_anonymous_namespace_--queryLockdownMode.c)
 * Callees:
 *     <none>
 */

bool anonymous_namespace_::isFeatureWmiRegistered()
{
  HKEY v0; // rbx
  LSTATUS v1; // eax
  bool v2; // zf
  bool v3; // di
  HKEY v5; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0LL;
  v5 = 0LL;
  v1 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\CLASSES\\CLSID\\{ABB3FBAD-CFBB-41C6-8CD2-72F52EA60ADB}",
         0,
         0x20019u,
         &v5);
  v2 = v1 == 0;
  if ( !v1 )
  {
    v0 = v5;
    v2 = 1;
  }
  v3 = v2;
  if ( v0 )
    RegCloseKey(v0);
  return v3;
}
