/*
 * XREFs of RtlInitString @ 0x1800404B0
 * Callers:
 *     sub_18003F7F8 @ 0x18003F7F8 (sub_18003F7F8.c)
 *     sub_180041814 @ 0x180041814 (sub_180041814.c)
 *     sub_1800420A8 @ 0x1800420A8 (sub_1800420A8.c)
 *     sub_180042450 @ 0x180042450 (sub_180042450.c)
 *     sub_180055D80 @ 0x180055D80 (sub_180055D80.c)
 *     sub_1800D4C00 @ 0x1800D4C00 (sub_1800D4C00.c)
 *     sub_1800D5A4C @ 0x1800D5A4C (sub_1800D5A4C.c)
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
