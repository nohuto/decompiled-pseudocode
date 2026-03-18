/*
 * XREFs of _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x140740F4C
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x140740D1C (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     _RegRtlSetValue @ 0x140456A24 (_RegRtlSetValue.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall CmSetInstallerClassMappedPropertyFromCoInstallers(
        _QWORD *a1,
        const WCHAR *a2,
        __int64 a3,
        int a4,
        void *a5,
        ULONG a6)
{
  __int64 result; // rax
  int v8; // ecx
  HANDLE KeyHandle; // [rsp+50h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  if ( a4 != 8210 )
    return 3221225485LL;
  result = PnpCtxGetCachedContextBaseKey(a1, 11, &KeyHandle);
  if ( (int)result >= 0 )
  {
    v8 = RegRtlSetValue(KeyHandle, a2, 7u, a5, a6);
    if ( v8 == -1073741444 )
    {
      return 3221225701LL;
    }
    else
    {
      result = 0LL;
      if ( v8 < 0 )
        return (unsigned int)v8;
    }
  }
  return result;
}
