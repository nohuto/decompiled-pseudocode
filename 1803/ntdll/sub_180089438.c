/*
 * XREFs of sub_180089438 @ 0x180089438
 * Callers:
 *     sub_1800800D0 @ 0x1800800D0 (sub_1800800D0.c)
 * Callees:
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x18009AE60 (ZwCreateKey.c)
 */

NTSTATUS __fastcall sub_180089438(void *a1, int a2, _UNICODE_STRING *a3, HANDLE *a4)
{
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+88h] [rbp+18h] BYREF

  if ( a2 == 1 )
  {
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.ObjectName = a3;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return ZwOpenKey(a4, 0x10000u, &ObjectAttributes);
  }
  else if ( a2 == 2 )
  {
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.ObjectName = a3;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 192;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return ZwCreateKey(a4, 0x20006u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  }
  else
  {
    return -1073741811;
  }
}
