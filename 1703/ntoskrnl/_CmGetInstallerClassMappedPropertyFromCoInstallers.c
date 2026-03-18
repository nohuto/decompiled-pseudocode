/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14059A2E0
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x1405A97C0 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x1407402A8 (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x14017F900 (ZwDeleteValueKey.c)
 *     _RegRtlQueryValue @ 0x140483F04 (_RegRtlQueryValue.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromCoInstallers(
        _QWORD *a1,
        const WCHAR *a2,
        __int64 a3,
        _DWORD *a4,
        unsigned __int64 a5,
        int a6,
        _DWORD *a7)
{
  _DWORD *v7; // r15
  unsigned int v8; // ebx
  unsigned __int64 v9; // rsi
  int v12; // edi
  int CachedContextBaseKey; // eax
  unsigned int v14; // ecx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+20h] BYREF

  v17 = a3;
  v7 = a7;
  v8 = 0;
  v9 = a5;
  KeyHandle = 0LL;
  *a4 = 0;
  *v7 = 0;
  if ( v9 )
  {
    v12 = a6;
    v9 &= -(__int64)(a6 != 0);
  }
  else
  {
    v12 = 0;
  }
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 11, &KeyHandle);
  if ( CachedContextBaseKey < 0 )
  {
    return (unsigned int)CachedContextBaseKey;
  }
  else
  {
    LODWORD(v17) = v12;
    v14 = RegRtlQueryValue(KeyHandle, a2, &a7, (void *)v9, (unsigned int *)&v17);
    if ( v14 == -1073741772 || v14 == -1073741444 )
    {
      return (unsigned int)-1073741275;
    }
    else if ( !v14 || v14 == -1073741789 )
    {
      if ( (_DWORD)a7 == 7 )
      {
        *v7 = v17;
        *a4 = 8210;
        if ( v14 || !v12 )
          return (unsigned int)-1073741789;
      }
      else if ( RtlInitUnicodeStringEx(&DestinationString, a2) >= 0 )
      {
        ZwDeleteValueKey(KeyHandle, &DestinationString);
      }
    }
    else
    {
      return v14;
    }
  }
  return v8;
}
