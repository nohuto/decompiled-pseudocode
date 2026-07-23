/*
 * XREFs of LdrGetKnownDllSectionHandle @ 0x180085BC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     ZwOpenSection @ 0x1800A59E0 (ZwOpenSection.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

NTSTATUS __cdecl LdrGetKnownDllSectionHandle(PCWSTR DllName, BOOLEAN KnownDlls32, PHANDLE Section)
{
  HANDLE v6; // rdi
  int inited; // ebx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      3728,
      (unsigned int)"LdrGetKnownDllSectionHandle",
      3,
      "DLL name: %ws\n",
      DllName);
  if ( KnownDlls32 )
  {
    if ( !dword_18015B264 )
      goto LABEL_13;
    v6 = DirectoryHandle;
  }
  else
  {
    v6 = qword_18015AED8;
  }
  if ( !v6 )
  {
LABEL_13:
    inited = -1073741816;
    goto LABEL_8;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, DllName);
  if ( inited >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = v6;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    inited = ZwOpenSection(Section, 0xFu, &ObjectAttributes);
  }
LABEL_8:
  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      3781,
      (unsigned int)"LdrGetKnownDllSectionHandle",
      4,
      "Status: 0x%08lx\n",
      inited);
  return inited;
}
