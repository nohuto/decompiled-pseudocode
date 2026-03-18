/*
 * XREFs of WdipSemLoadConfigInfo @ 0x1405AAF2C
 * Callers:
 *     WdipSemCleanStart @ 0x1405AB080 (WdipSemCleanStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     WdipSemQueryValueFromRegistry @ 0x1405AA880 (WdipSemQueryValueFromRegistry.c)
 *     WdipSemOpenRegistryKey @ 0x1405AA988 (WdipSemOpenRegistryKey.c)
 */

__int64 WdipSemLoadConfigInfo()
{
  int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v3; // [rsp+60h] [rbp+18h] BYREF
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF
  int v5; // [rsp+70h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  LODWORD(v4) = 0;
  v3 = 0;
  v5 = 0;
  v0 = WdipSemOpenRegistryKey(L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\Control\\WDI\\Config", 0LL, &KeyHandle);
  if ( v0 < 0 )
    goto LABEL_10;
  if ( (int)WdipSemQueryValueFromRegistry(KeyHandle, L"SEMEnabled", 4, 4u, &v3, (unsigned int *)&v4) >= 0 && !v3 )
  {
    v0 = -1073741823;
    goto LABEL_10;
  }
  v0 = WdipSemQueryValueFromRegistry(KeyHandle, L"SEMTimeOutValue", 4, 4u, &v5, (unsigned int *)&v4);
  if ( v0 < 0 )
  {
    v0 = 0;
    WdipSemTimeoutValue = 600;
  }
  else
  {
    if ( !v5 )
    {
      WdipSemTimeoutValue = 600;
      WdipSemTimeoutEnabled = 0;
      goto LABEL_8;
    }
    WdipSemTimeoutValue = 60 * v5;
  }
  WdipSemTimeoutEnabled = 1;
LABEL_8:
  if ( !KeyHandle )
    return (unsigned int)v0;
  RtlInitUnicodeString(&DestinationString, L"SEMUpdate");
  ZwDeleteValueKey(KeyHandle, &DestinationString);
LABEL_10:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v0;
}
