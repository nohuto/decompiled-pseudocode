/*
 * XREFs of RtlGetControlSecurityDescriptor @ 0x1405949E0
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140486408 (ObpInsertOrLocateNamedObject.c)
 *     SepHasCriticalAcePresent @ 0x1405D5890 (SepHasCriticalAcePresent.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1405E6FC0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140732C08 (LocalConvertSDToStringSD_Rev1.c)
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
