/*
 * XREFs of ObQuerySecurityDescriptorInfo @ 0x1404F3234
 * Callers:
 *     WmipSecurityMethod @ 0x1404575E0 (WmipSecurityMethod.c)
 *     SeDefaultObjectMethod @ 0x14050E3A0 (SeDefaultObjectMethod.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x1404F48A0 (ObDereferenceSecurityDescriptor.c)
 *     ObpReferenceSecurityDescriptor @ 0x1404F4BD0 (ObpReferenceSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1404FC5B0 (SeQuerySecurityDescriptorInfo.c)
 */

__int64 __fastcall ObQuerySecurityDescriptorInfo(__int64 a1, DWORD *a2, void *a3, ULONG *a4)
{
  PSECURITY_DESCRIPTOR v7; // rbp
  unsigned int v8; // ebx
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+30h] [rbp+8h] BYREF

  ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)ObpReferenceSecurityDescriptor(a1 - 48);
  v7 = ObjectsSecurityDescriptor;
  v8 = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
  if ( v7 )
    ObDereferenceSecurityDescriptor(v7);
  return v8;
}
