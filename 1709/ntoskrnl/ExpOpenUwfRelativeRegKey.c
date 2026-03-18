/*
 * XREFs of ExpOpenUwfRelativeRegKey @ 0x140283854
 * Callers:
 *     ExpGetSystemWriteConstraintInformation @ 0x1407544A4 (ExpGetSystemWriteConstraintInformation.c)
 * Callees:
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 */

NTSTATUS __fastcall ExpOpenUwfRelativeRegKey(HANDLE *a1, void *a2, UNICODE_STRING *a3)
{
  OBJECT_ATTRIBUTES v4; // [rsp+20h] [rbp-38h] BYREF

  v4.RootDirectory = a2;
  v4.ObjectName = a3;
  v4.Length = 48;
  *(_OWORD *)&v4.SecurityDescriptor = 0LL;
  v4.Attributes = 576;
  return ZwOpenKey(a1, 1u, &v4);
}
