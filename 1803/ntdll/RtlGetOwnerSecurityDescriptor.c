/*
 * XREFs of RtlGetOwnerSecurityDescriptor @ 0x18007ADB0
 * Callers:
 *     sub_180086A98 @ 0x180086A98 (sub_180086A98.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800C8960 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlReplaceSidInSd @ 0x1800DFF60 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Owner,
        PBOOLEAN OwnerDefaulted)
{
  char *v3; // rax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v3 = 0LL;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v3 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else if ( *((_DWORD *)SecurityDescriptor + 1) )
  {
    v3 = (char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 1);
  }
  *Owner = v3;
  *OwnerDefaulted = *((_BYTE *)SecurityDescriptor + 2) & 1;
  return 0;
}
