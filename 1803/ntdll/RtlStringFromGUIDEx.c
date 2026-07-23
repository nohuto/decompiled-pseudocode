/*
 * XREFs of RtlStringFromGUIDEx @ 0x18006D930
 * Callers:
 *     RtlStringFromGUID @ 0x18006D920 (RtlStringFromGUID.c)
 *     sub_1800DD5D8 @ 0x1800DD5D8 (sub_1800DD5D8.c)
 * Callees:
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     swprintf_s @ 0x180096900 (swprintf_s.c)
 */

NTSTATUS __cdecl RtlStringFromGUIDEx(PGUID Guid, PUNICODE_STRING GuidString, BOOLEAN AllocateGuidString)
{
  WCHAR *v5; // rax
  USHORT MaximumLength; // dx

  if ( AllocateGuidString )
  {
    GuidString->MaximumLength = 78;
    v5 = (WCHAR *)sub_18003B5E0(0x4EuLL);
    GuidString->Buffer = v5;
    if ( v5 )
    {
      MaximumLength = GuidString->MaximumLength;
LABEL_4:
      GuidString->Length = 76;
      swprintf_s(
        GuidString->Buffer,
        (unsigned __int64)MaximumLength >> 1,
        L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        Guid->Data1,
        Guid->Data2,
        Guid->Data3,
        Guid->Data4[0],
        Guid->Data4[1],
        Guid->Data4[2],
        Guid->Data4[3],
        Guid->Data4[4],
        Guid->Data4[5],
        Guid->Data4[6],
        Guid->Data4[7]);
      return 0;
    }
    return -1073741801;
  }
  else
  {
    MaximumLength = GuidString->MaximumLength;
    if ( MaximumLength >= 0x4Eu )
      goto LABEL_4;
    return -1073741789;
  }
}
