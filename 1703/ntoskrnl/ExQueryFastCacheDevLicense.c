/*
 * XREFs of ExQueryFastCacheDevLicense @ 0x140456E40
 * Callers:
 *     SepIsLockedDown @ 0x1406F0554 (SepIsLockedDown.c)
 * Callees:
 *     KIsUnlockSettingEnabled @ 0x140456E90 (KIsUnlockSettingEnabled.c)
 */

__int64 ExQueryFastCacheDevLicense()
{
  __int64 result; // rax
  int v1; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v2; // [rsp+28h] [rbp-10h]
  int v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = 4456514;
  v2 = L"AllowDevelopmentWithoutDevLicense";
  v3 = 0xFFFF;
  if ( (int)KIsUnlockSettingEnabled(&v1, &v3) < 0 )
    return 0LL;
  result = 1LL;
  if ( v3 != 1 )
    return 0LL;
  return result;
}
