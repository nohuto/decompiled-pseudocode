/*
 * XREFs of KIsSideloadingEnabled @ 0x140725434
 * Callers:
 *     SepIsLockedDown @ 0x1406F0554 (SepIsLockedDown.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x140180800 (ZwQueryLicenseValue.c)
 *     KIsUnlockSettingEnabled @ 0x140456E90 (KIsUnlockSettingEnabled.c)
 */

int __fastcall KIsSideloadingEnabled(_BYTE *a1)
{
  int result; // eax
  int v3; // [rsp+30h] [rbp-28h] BYREF
  const wchar_t *v4; // [rsp+38h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  int v6; // [rsp+70h] [rbp+18h] BYREF
  ULONG ResultDataSize; // [rsp+78h] [rbp+20h] BYREF
  int Data; // [rsp+80h] [rbp+28h] BYREF
  ULONG Type; // [rsp+88h] [rbp+30h] BYREF

  *a1 = 0;
  v3 = 2621478;
  v4 = L"AllowAllTrustedApps";
  v6 = 0xFFFF;
  result = KIsUnlockSettingEnabled((__int64)&v3, &v6);
  if ( result >= 0 )
  {
    if ( v6 == 1 )
      goto LABEL_7;
    if ( v6 != 0xFFFF )
      return result;
    RtlInitUnicodeString(&DestinationString, L"AppXDeploymentServer-License-AllowAllTrustedApps");
    result = ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize);
    if ( result >= 0 && ResultDataSize == 4 && Data == 1 )
LABEL_7:
      *a1 = 1;
    else
      return 0;
  }
  return result;
}
