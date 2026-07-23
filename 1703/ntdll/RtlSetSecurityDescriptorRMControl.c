/*
 * XREFs of RtlSetSecurityDescriptorRMControl @ 0x180089780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlSetSecurityDescriptorRMControl(PSECURITY_DESCRIPTOR SecurityDescriptor, PUCHAR RMControl)
{
  if ( RMControl )
  {
    *((_WORD *)SecurityDescriptor + 1) |= 0x4000u;
    *((_BYTE *)SecurityDescriptor + 1) = *RMControl;
  }
  else
  {
    *((_BYTE *)SecurityDescriptor + 1) = 0;
    *((_WORD *)SecurityDescriptor + 1) &= ~0x4000u;
  }
}
