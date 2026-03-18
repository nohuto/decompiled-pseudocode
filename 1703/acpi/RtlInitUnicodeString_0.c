/*
 * XREFs of RtlInitUnicodeString_0 @ 0x1C002BF66
 * Callers:
 *     ArbpGetRegistryValue @ 0x1C0084C58 (ArbpGetRegistryValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlInitUnicodeString_0(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  RtlInitUnicodeString(DestinationString, SourceString);
}
