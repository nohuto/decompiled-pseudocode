/*
 * XREFs of RtlGetGroupSecurityDescriptor @ 0x1405C7C20
 * Callers:
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404E3894 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14059481C (PiDevCfgGetKeySecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x140668104 (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x1406E9BA0 (RtlReplaceSidInSd.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406FB220 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetGroupSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Group,
        PBOOLEAN GroupDefaulted)
{
  char *v4; // rax
  __int64 v5; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  else
  {
    v5 = *((unsigned int *)SecurityDescriptor + 2);
    if ( (_DWORD)v5 )
      v4 = (char *)SecurityDescriptor + v5;
  }
  *Group = v4;
  *GroupDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 2) != 0;
  return 0;
}
