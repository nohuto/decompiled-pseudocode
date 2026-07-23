/*
 * XREFs of sub_18003ADA8 @ 0x18003ADA8
 * Callers:
 *     sub_18003AC90 @ 0x18003AC90 (sub_18003AC90.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x18003C260 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeToString @ 0x180044AB0 (RtlAppendUnicodeToString.c)
 *     sub_1800473D0 @ 0x1800473D0 (sub_1800473D0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenSection @ 0x1800A59E0 (ZwOpenSection.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall sub_18003ADA8(
        UNICODE_STRING *Source,
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING Destination,
        PHANDLE SectionHandle)
{
  NTSTATUS v8; // eax
  int v9; // ebx
  const WCHAR *v10; // rbx
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-48h] BYREF

  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1309,
      (unsigned int)"LdrpFindKnownDll",
      3,
      "DLL name: %wZ\n",
      Source);
  if ( !qword_18015AED8 )
  {
LABEL_11:
    v9 = -1073741515;
    goto LABEL_7;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = qword_18015AED8;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = Source;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenSection(SectionHandle, 0xFu, &ObjectAttributes);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( v8 != -1073741772 )
      goto LABEL_7;
    goto LABEL_11;
  }
  v9 = sub_1800473D0(Destination, Source->Length + (unsigned int)LinkTarget.Length + 2);
  if ( v9 < 0 )
  {
    ZwClose(*SectionHandle);
  }
  else
  {
    RtlAppendUnicodeStringToString(Destination, &LinkTarget);
    RtlAppendUnicodeToString(Destination, L"\\");
    v10 = (PWCH)((char *)Destination->Buffer + Destination->Length);
    RtlAppendUnicodeStringToString(Destination, Source);
    RtlInitUnicodeStringEx(DestinationString, v10);
    v9 = 0;
  }
LABEL_7:
  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1381,
      (unsigned int)"LdrpFindKnownDll",
      4,
      "Status: 0x%08lx\n",
      v9);
  return (unsigned int)v9;
}
