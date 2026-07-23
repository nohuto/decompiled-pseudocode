/*
 * XREFs of RtlInitUnicodeStringEx @ 0x18003F6D0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlGetFullPathName_UEx @ 0x18003C1A0 (RtlGetFullPathName_UEx.c)
 *     sub_18003C228 @ 0x18003C228 (sub_18003C228.c)
 *     RtlIsDosDeviceName_U @ 0x18003FA40 (RtlIsDosDeviceName_U.c)
 *     sub_18003FCF8 @ 0x18003FCF8 (sub_18003FCF8.c)
 *     sub_18003FF10 @ 0x18003FF10 (sub_18003FF10.c)
 *     sub_18003FFC8 @ 0x18003FFC8 (sub_18003FFC8.c)
 *     sub_180040650 @ 0x180040650 (sub_180040650.c)
 *     sub_180048A50 @ 0x180048A50 (sub_180048A50.c)
 *     LdrQueryImageFileKeyOption @ 0x18004B060 (LdrQueryImageFileKeyOption.c)
 *     sub_18004F794 @ 0x18004F794 (sub_18004F794.c)
 *     sub_180076270 @ 0x180076270 (sub_180076270.c)
 *     sub_180076488 @ 0x180076488 (sub_180076488.c)
 *     LdrGetKnownDllSectionHandle @ 0x180082C40 (LdrGetKnownDllSectionHandle.c)
 *     RtlDosSearchPath_U @ 0x180087400 (RtlDosSearchPath_U.c)
 *     sub_1800CCC9C @ 0x1800CCC9C (sub_1800CCC9C.c)
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D0488 @ 0x1800D0488 (sub_1800D0488.c)
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800DBF00 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800DC7A0 (RtlSetImageMitigationPolicy.c)
 *     sub_180109668 @ 0x180109668 (sub_180109668.c)
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
