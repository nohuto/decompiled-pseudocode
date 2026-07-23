/*
 * XREFs of sub_18010D4D4 @ 0x18010D4D4
 * Callers:
 *     sub_18010C2FC @ 0x18010C2FC (sub_18010C2FC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwOpenSection @ 0x1800A59E0 (ZwOpenSection.c)
 *     sub_18010B930 @ 0x18010B930 (sub_18010B930.c)
 */

HANDLE __fastcall sub_18010D4D4(ACCESS_MASK a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS v4; // ecx
  LONG v5; // eax
  NTSTATUS v7; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE v10; // [rsp+80h] [rbp+20h] BYREF
  HANDLE SectionHandle; // [rsp+88h] [rbp+28h] BYREF

  if ( !a3 )
  {
    v4 = -1073741811;
LABEL_3:
    v5 = RtlNtStatusToDosError(v4);
    RtlSetLastWin32Error(v5);
    return 0LL;
  }
  RtlInitUnicodeString(&DestinationString, a3);
  v7 = sub_18010B930(&v10);
  if ( v7 < 0 )
    goto LABEL_5;
  ObjectAttributes.RootDirectory = v10;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( a1 == 1 )
  {
    a1 = 4;
  }
  else if ( (a1 & 0x20) != 0 )
  {
    a1 = a1 & 0xFFFFFFD7 | 8;
  }
  v7 = ZwOpenSection(&SectionHandle, a1, &ObjectAttributes);
  if ( v7 < 0 )
  {
LABEL_5:
    v4 = v7;
    goto LABEL_3;
  }
  return SectionHandle;
}
