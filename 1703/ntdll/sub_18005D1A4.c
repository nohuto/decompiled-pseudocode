/*
 * XREFs of sub_18005D1A4 @ 0x18005D1A4
 * Callers:
 *     sub_18005D0E0 @ 0x18005D0E0 (sub_18005D0E0.c)
 *     sub_18008A97C @ 0x18008A97C (sub_18008A97C.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     sub_18005DE38 @ 0x18005DE38 (sub_18005DE38.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18005D1A4(PHANDLE KeyHandle, _DWORD *a2, __int64 a3)
{
  unsigned int v6; // ebx
  NTSTATUS v7; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR SourceString[264]; // [rsp+60h] [rbp-A0h] BYREF

  wcscpy(SourceString, L"\\Registry\\Machine\\");
  v6 = 0;
  memset(&SourceString[19], 0, 0x1E4uLL);
  if ( KeyHandle
    && a2
    && a3
    && (int)sub_18005DE38(SourceString, 261LL, a3) >= 0
    && RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *KeyHandle = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(KeyHandle, 0x20019u, &ObjectAttributes);
    *a2 = 2;
    return v7 >= 0;
  }
  return v6;
}
