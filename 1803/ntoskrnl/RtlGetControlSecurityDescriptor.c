/*
 * XREFs of RtlGetControlSecurityDescriptor @ 0x14057A770
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1404D4B8C (ObpInsertOrLocateNamedObject.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1405F29E4 (PiDevCfgGetKeySecurityDescriptor.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1407964E0 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetControlSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_DESCRIPTOR_CONTROL Control,
        PULONG Revision)
{
  *Revision = *(unsigned __int8 *)SecurityDescriptor;
  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  *Control = *((_WORD *)SecurityDescriptor + 1);
  return 0;
}
