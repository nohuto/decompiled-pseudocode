/*
 * XREFs of SeAuditingHardLinkEvents @ 0x1406F45D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingHardLinkEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int64 v2; // rax
  char *v3; // rax

  if ( (~(unsigned __int8)*((_WORD *)SecurityDescriptor + 1) & 0x10) != 0 )
    return 0;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v3 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v2 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v2 )
      return 0;
    v3 = (char *)SecurityDescriptor + v2;
  }
  return v3 && *((_WORD *)v3 + 2) && (byte_140348624 && AccessGranted || byte_140348625 && !AccessGranted);
}
