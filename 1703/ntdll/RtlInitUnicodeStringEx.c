/*
 * XREFs of RtlInitUnicodeStringEx @ 0x180040170
 * Callers:
 *     sub_18003ADA8 @ 0x18003ADA8 (sub_18003ADA8.c)
 *     RtlGetFullPathName_UEx @ 0x18003BAA0 (RtlGetFullPathName_UEx.c)
 *     RtlIsDosDeviceName_U @ 0x18003C300 (RtlIsDosDeviceName_U.c)
 *     sub_18003D6A4 @ 0x18003D6A4 (sub_18003D6A4.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x18003D9F0 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     sub_18004A3B4 @ 0x18004A3B4 (sub_18004A3B4.c)
 *     sub_18004A930 @ 0x18004A930 (sub_18004A930.c)
 *     sub_180058280 @ 0x180058280 (sub_180058280.c)
 *     sub_18005D0E0 @ 0x18005D0E0 (sub_18005D0E0.c)
 *     sub_18005D1A4 @ 0x18005D1A4 (sub_18005D1A4.c)
 *     sub_1800704C0 @ 0x1800704C0 (sub_1800704C0.c)
 *     sub_1800798B8 @ 0x1800798B8 (sub_1800798B8.c)
 *     sub_18007C110 @ 0x18007C110 (sub_18007C110.c)
 *     sub_18007C494 @ 0x18007C494 (sub_18007C494.c)
 *     LdrQueryImageFileKeyOption @ 0x18007C560 (LdrQueryImageFileKeyOption.c)
 *     LdrGetKnownDllSectionHandle @ 0x180085BC0 (LdrGetKnownDllSectionHandle.c)
 *     sub_18008A97C @ 0x18008A97C (sub_18008A97C.c)
 *     RtlDosSearchPath_U @ 0x18008DA50 (RtlDosSearchPath_U.c)
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800D7198 @ 0x1800D7198 (sub_1800D7198.c)
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 *     sub_180106674 @ 0x180106674 (sub_180106674.c)
 *     sub_18010BE1C @ 0x18010BE1C (sub_18010BE1C.c)
 *     sub_18010C428 @ 0x18010C428 (sub_18010C428.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlInitUnicodeStringEx(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  unsigned __int64 v2; // rax
  USHORT v3; // ax

  DestinationString->Buffer = (PWCH)SourceString;
  *(_DWORD *)&DestinationString->Length = 0;
  if ( !SourceString )
    return 0;
  v2 = -1LL;
  do
    ++v2;
  while ( SourceString[v2] );
  if ( v2 <= 0x7FFE )
  {
    v3 = 2 * v2;
    DestinationString->Length = v3;
    DestinationString->MaximumLength = v3 + 2;
    return 0;
  }
  return -1073741562;
}
