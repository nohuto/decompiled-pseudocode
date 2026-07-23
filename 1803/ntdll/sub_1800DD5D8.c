/*
 * XREFs of sub_1800DD5D8 @ 0x1800DD5D8
 * Callers:
 *     sub_180076270 @ 0x180076270 (sub_180076270.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x18006D930 (RtlStringFromGUIDEx.c)
 *     RtlRandomEx @ 0x18007AA80 (RtlRandomEx.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwCreateKey @ 0x18009AE60 (ZwCreateKey.c)
 */

__int64 __fastcall sub_1800DD5D8(HANDLE *a1, void *a2, ACCESS_MASK a3)
{
  HANDLE v4; // rcx
  GUID *p_Guid; // rbx
  __int64 v8; // rdi
  NTSTATUS v9; // ebx
  ULONG Disposition; // [rsp+40h] [rbp-49h] BYREF
  ULONG Seed; // [rsp+44h] [rbp-45h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-41h] BYREF
  _UNICODE_STRING GuidString; // [rsp+50h] [rbp-39h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-29h] BYREF
  GUID Guid; // [rsp+90h] [rbp+7h] BYREF

  Disposition = 1;
  v4 = 0LL;
  for ( KeyHandle = 0LL; ; v4 = KeyHandle )
  {
    if ( v4 )
      ZwClose(v4);
    p_Guid = &Guid;
    Seed = MEMORY[0x7FFE0014];
    v8 = 8LL;
    do
    {
      LOWORD(p_Guid->Data1) = RtlRandomEx(&Seed);
      p_Guid = (GUID *)((char *)p_Guid + 2);
      --v8;
    }
    while ( v8 );
    v9 = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
    if ( v9 < 0 )
      break;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &GuidString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwCreateKey(&KeyHandle, a3, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    RtlFreeUnicodeString(&GuidString);
    if ( v9 < 0 )
      break;
    if ( Disposition != 2 )
    {
      *a1 = KeyHandle;
      return (unsigned int)v9;
    }
  }
  return (unsigned int)v9;
}
