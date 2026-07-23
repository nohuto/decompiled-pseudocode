/*
 * XREFs of sub_180054094 @ 0x180054094
 * Callers:
 *     sub_180033EB8 @ 0x180033EB8 (sub_180033EB8.c)
 *     sub_1800515C0 @ 0x1800515C0 (sub_1800515C0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18003FAA0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     sub_180054338 @ 0x180054338 (sub_180054338.c)
 *     LdrFindEntryForAddress @ 0x180054400 (LdrFindEntryForAddress.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x18009B260 (ZwQueryAttributesFile.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_180054094(PVOID DllHandle)
{
  unsigned int v2; // ebx
  const WCHAR *Buffer; // rcx
  PWCH v4; // rdi
  unsigned __int64 ContainingDirectory; // rdx
  PLDR_DATA_TABLE_ENTRY Entry; // [rsp+28h] [rbp-79h] BYREF
  _UNICODE_STRING NtFileName; // [rsp+30h] [rbp-71h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+40h] [rbp-61h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-41h] BYREF
  PCWSTR v11[6]; // [rsp+90h] [rbp-11h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+C0h] [rbp+1Fh] BYREF

  Entry = 0LL;
  memset(v11, 0, sizeof(v11));
  v2 = -1073741823;
  if ( ((unsigned __int8)DllHandle & 3) != 0 )
  {
    if ( (int)sub_180054338(DllHandle, v11) < 0 )
      return v2;
    Buffer = v11[1];
  }
  else
  {
    if ( LdrFindEntryForAddress(DllHandle, &Entry) < 0 )
      return v2;
    Buffer = Entry->FullDllName.Buffer;
  }
  if ( RtlDosPathNameToRelativeNtPathName_U(Buffer, &NtFileName, 0LL, &RelativeName) )
  {
    v4 = NtFileName.Buffer;
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = (unsigned __int64)RelativeName.ContainingDirectory;
      NtFileName = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0LL;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = &NtFileName;
    ObjectAttributes.RootDirectory = (HANDLE)(ContainingDirectory & -(__int64)(v4 != 0LL));
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwQueryAttributesFile(&ObjectAttributes, &FileInformation) >= 0
      && (FileInformation.FileAttributes & 0x400) != 0 )
    {
      v2 = 0;
    }
    if ( v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return v2;
}
