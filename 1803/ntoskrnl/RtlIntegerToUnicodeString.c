/*
 * XREFs of RtlIntegerToUnicodeString @ 0x14053E930
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x140171744 (BapdpMarshallBootDataToRegistry.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1402C4B50 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1402C59A0 (AdtpFormatPrefix.c)
 *     RtlpInitNlsFileName @ 0x14053EAEC (RtlpInitNlsFileName.c)
 *     pIoQueryDeviceDescription @ 0x14060F7F0 (pIoQueryDeviceDescription.c)
 *     AdtpObjsInitialize @ 0x140632254 (AdtpObjsInitialize.c)
 *     ExpValidateLocale @ 0x1407BC5D4 (ExpValidateLocale.c)
 *     AdtpBuildAccessesString @ 0x1407E0E98 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x1407E151C (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1407E15B8 (AdtpBuildUserAccountControlString.c)
 *     ObCreateSiloRootDirectory @ 0x1407F63F0 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x1407F6710 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x14053E9C0 (RtlIntegerToChar.c)
 */

NTSTATUS __stdcall RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  ANSI_STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  CHAR Stringa[40]; // [rsp+30h] [rbp-38h] BYREF

  result = RtlIntegerToChar(Value, Base, 0x21u, Stringa);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = Stringa;
    v5 = -1LL;
    do
      ++v5;
    while ( Stringa[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(String, &SourceString, 0);
  }
  return result;
}
