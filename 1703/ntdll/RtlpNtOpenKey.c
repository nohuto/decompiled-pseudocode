/*
 * XREFs of RtlpNtOpenKey @ 0x180082600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RtlpNtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  if ( ObjectAttributes )
    ObjectAttributes->Attributes &= 0xFFFFFFCF;
  return ZwOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
