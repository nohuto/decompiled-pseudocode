/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x1400CE5D0
 * Callers:
 *     ExpCheckPortableOperatingSystem @ 0x14057EC4C (ExpCheckPortableOperatingSystem.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x14057ECE0 (RtlQueryRegistryValuesEx.c)
 *     RtlCheckRegistryKey @ 0x14057ED00 (RtlCheckRegistryKey.c)
 */

NTSTATUS __cdecl RtlCheckPortableOperatingSystem(PBOOLEAN IsPortable)
{
  int RegistryValues; // ebx
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+30h] [rbp-78h] BYREF
  int v5; // [rsp+B8h] [rbp+10h] BYREF

  RegistryValues = 0;
  v5 = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 )
    goto LABEL_6;
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Name = (PWSTR)L"PortableOperatingSystem";
  QueryTable[0].Flags = 292;
  QueryTable[0].EntryContext = &v5;
  QueryTable[0].DefaultType = 0x4000000;
  RegistryValues = RtlQueryRegistryValuesEx(2u, 0LL, QueryTable, 0LL, 0LL);
  if ( RegistryValues == -1073741772 )
    RegistryValues = -1073741275;
  if ( RegistryValues >= 0 )
LABEL_6:
    *IsPortable = v5 != 0;
  return RegistryValues;
}
