/*
 * XREFs of WdipSemLoadConfigInfo @ 0x1406393B0
 * Callers:
 *     WdipSemCleanStart @ 0x1406391C0 (WdipSemCleanStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1401A8EC0 (ZwDeleteValueKey.c)
 *     WdipSemQueryValueFromRegistry @ 0x14063A3AC (WdipSemQueryValueFromRegistry.c)
 *     WdipSemOpenRegistryKey @ 0x14063A4B4 (WdipSemOpenRegistryKey.c)
 */

__int64 WdipSemLoadConfigInfo()
{
  int v0; // ebx
  int v1; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v4; // [rsp+60h] [rbp+18h] BYREF
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF
  int v6; // [rsp+70h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+30h]

  KeyHandle = 0LL;
  LODWORD(v5) = 0;
  v4 = 0;
  v6 = 0;
  v0 = WdipSemOpenRegistryKey(L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\Control\\WDI\\Config");
  if ( v0 < 0 )
    goto LABEL_10;
  if ( (int)WdipSemQueryValueFromRegistry(KeyHandle, &v4, (__int64)&v5) >= 0 && !v4 )
  {
    v0 = -1073741823;
    goto LABEL_10;
  }
  v0 = WdipSemQueryValueFromRegistry(KeyHandle, &v6, (__int64)&v5);
  if ( v0 < 0 )
  {
    v0 = 0;
    v1 = 600;
  }
  else
  {
    if ( !v6 )
    {
      WdipSemTimeoutEnabled = 0;
      v1 = 600;
      goto LABEL_8;
    }
    v1 = 60 * v6;
  }
  WdipSemTimeoutEnabled = 1;
LABEL_8:
  WdipSemTimeoutValue = v1;
  if ( !KeyHandle )
    return (unsigned int)v0;
  RtlInitUnicodeString(&DestinationString, L"SEMUpdate");
  ZwDeleteValueKey(KeyHandle, &DestinationString);
LABEL_10:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v0;
}
