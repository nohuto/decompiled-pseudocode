/*
 * XREFs of sub_18010B774 @ 0x18010B774
 * Callers:
 *     sub_18010B5E8 @ 0x18010B5E8 (sub_18010B5E8.c)
 * Callees:
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1800A56A0 (ZwCreateKey.c)
 */

int __fastcall sub_18010B774(ACCESS_MASK DesiredAccess, char a2, _UNICODE_STRING *a3, HANDLE *a4, PULONG Disposition)
{
  int result; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  if ( !a3 || !Disposition )
    return -1073741811;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a3;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *Disposition = 2;
  result = ZwOpenKey(a4, DesiredAccess, &ObjectAttributes);
  if ( result < 0 && (a2 & 2) != 0 )
    return ZwCreateKey(a4, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, Disposition);
  return result;
}
