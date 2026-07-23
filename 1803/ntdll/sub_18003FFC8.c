/*
 * XREFs of sub_18003FFC8 @ 0x18003FFC8
 * Callers:
 *     sub_180040514 @ 0x180040514 (sub_180040514.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180034F00 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     sub_18003FEA8 @ 0x18003FEA8 (sub_18003FEA8.c)
 *     RtlAppendUnicodeStringToString @ 0x180040250 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenSection @ 0x18009B1A0 (ZwOpenSection.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

__int64 __fastcall sub_18003FFC8(
        UNICODE_STRING *Source,
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING Destination,
        PHANDLE SectionHandle)
{
  NTSTATUS v8; // eax
  int v9; // ebx
  const WCHAR *v10; // rbx
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1447,
      (unsigned int)"LdrpFindKnownDll",
      3,
      "DLL name: %wZ\n",
      Source);
  if ( !DirectoryHandle )
  {
LABEL_11:
    v9 = -1073741515;
    goto LABEL_7;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = DirectoryHandle;
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
  v9 = sub_18003FEA8((__int64)Destination, Source->Length + (unsigned int)LinkTarget.Length + 2);
  if ( v9 < 0 )
  {
    ZwClose(*SectionHandle);
  }
  else
  {
    RtlAppendUnicodeStringToString(Destination, &LinkTarget);
    RtlAppendUnicodeToString(Destination, "\\");
    v10 = (PWCH)((char *)Destination->Buffer + Destination->Length);
    RtlAppendUnicodeStringToString(Destination, Source);
    RtlInitUnicodeStringEx(DestinationString, v10);
    v9 = 0;
  }
LABEL_7:
  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1519,
      (unsigned int)"LdrpFindKnownDll",
      4,
      "Status: 0x%08lx\n",
      v9);
  return (unsigned int)v9;
}
