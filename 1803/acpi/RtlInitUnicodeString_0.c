/*
 * XREFs of RtlInitUnicodeString_0 @ 0x1C0003F6D
 * Callers:
 *     ArbpGetRegistryValue @ 0x1C0095638 (ArbpGetRegistryValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlInitUnicodeString_0(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  RtlInitUnicodeString(DestinationString, SourceString);
}
