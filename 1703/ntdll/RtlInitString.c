/*
 * XREFs of RtlInitString @ 0x18003AB50
 * Callers:
 *     sub_18003AAAC @ 0x18003AAAC (sub_18003AAAC.c)
 *     sub_18003AB88 @ 0x18003AB88 (sub_18003AB88.c)
 *     sub_18003C49C @ 0x18003C49C (sub_18003C49C.c)
 *     sub_18006F46C @ 0x18006F46C (sub_18006F46C.c)
 *     sub_18007D2A4 @ 0x18007D2A4 (sub_18007D2A4.c)
 *     sub_1800DB44C @ 0x1800DB44C (sub_1800DB44C.c)
 *     sub_1800DC28C @ 0x1800DC28C (sub_1800DC28C.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitString(PSTRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  DestinationString->Buffer = (PCHAR)SourceString;
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
