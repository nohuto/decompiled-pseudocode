/*
 * XREFs of RtlInitString @ 0x140120030
 * Callers:
 *     PopEmModuleAddressMatchCallback @ 0x14024BF30 (PopEmModuleAddressMatchCallback.c)
 *     PopAvlGetPowerRequestKey @ 0x1404E7C68 (PopAvlGetPowerRequestKey.c)
 *     SepInitializationPhase1 @ 0x1405D7CD4 (SepInitializationPhase1.c)
 *     NtQuerySystemEnvironmentValue @ 0x14075D2B0 (NtQuerySystemEnvironmentValue.c)
 *     AslStringAnsiToUnicode @ 0x140771F1C (AslStringAnsiToUnicode.c)
 *     KdInitSystem @ 0x140796140 (KdInitSystem.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitString(PSTRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  DestinationString->Buffer = (char *)SourceString;
  *(_DWORD *)&DestinationString->Length = 0;
  if ( SourceString )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( SourceString[v2] );
    if ( v2 >= 0xFFFF )
      LOWORD(v2) = -2;
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
  }
}
