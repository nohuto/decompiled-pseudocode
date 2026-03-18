/*
 * XREFs of RtlInitString @ 0x140076840
 * Callers:
 *     PopEmModuleAddressMatchCallback @ 0x140281EB0 (PopEmModuleAddressMatchCallback.c)
 *     PopAvlGetPowerRequestKey @ 0x140524CD0 (PopAvlGetPowerRequestKey.c)
 *     SepInitializationPhase1 @ 0x140641CF0 (SepInitializationPhase1.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407C42D0 (NtQuerySystemEnvironmentValue.c)
 *     AslStringAnsiToUnicode @ 0x1407D8F74 (AslStringAnsiToUnicode.c)
 *     KdInitSystem @ 0x140803140 (KdInitSystem.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
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
