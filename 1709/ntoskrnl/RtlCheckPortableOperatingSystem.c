/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x14012AD80
 * Callers:
 *     ExpCheckPortableOperatingSystem @ 0x140590B7C (ExpCheckPortableOperatingSystem.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x140590C10 (RtlQueryRegistryValuesEx.c)
 *     RtlCheckRegistryKey @ 0x140590C30 (RtlCheckRegistryKey.c)
 */

__int64 __fastcall RtlCheckPortableOperatingSystem(bool *a1)
{
  int RegistryValues; // ebx
  _QWORD v4[15]; // [rsp+30h] [rbp-78h] BYREF
  int v5; // [rsp+B8h] [rbp+10h] BYREF

  RegistryValues = 0;
  v5 = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 )
    goto LABEL_6;
  memset(v4, 0, 0x70uLL);
  v4[2] = L"PortableOperatingSystem";
  LODWORD(v4[1]) = 292;
  v4[3] = &v5;
  LODWORD(v4[4]) = 0x4000000;
  RegistryValues = RtlQueryRegistryValuesEx(2LL, 0LL, v4, 0LL, 0LL);
  if ( RegistryValues == -1073741772 )
    RegistryValues = -1073741275;
  if ( RegistryValues >= 0 )
LABEL_6:
    *a1 = v5 != 0;
  return (unsigned int)RegistryValues;
}
