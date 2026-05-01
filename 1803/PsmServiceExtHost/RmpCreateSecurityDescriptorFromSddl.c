/*
 * XREFs of RmpCreateSecurityDescriptorFromSddl @ 0x18003DDC8
 * Callers:
 *     RmpLaunchAllRpcServers @ 0x180037774 (RmpLaunchAllRpcServers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCreateSecurityDescriptorFromSddl(const WCHAR *a1, PSECURITY_DESCRIPTOR *a2)
{
  BOOL v3; // eax
  unsigned int v4; // ecx
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp+18h] BYREF

  v3 = ConvertStringSecurityDescriptorToSecurityDescriptorW(a1, 1u, &SecurityDescriptor, 0LL);
  v4 = 0;
  if ( v3 )
  {
    *a2 = SecurityDescriptor;
  }
  else
  {
    *a2 = 0LL;
    return (unsigned int)-1073741823;
  }
  return v4;
}
