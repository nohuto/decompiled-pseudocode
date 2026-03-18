/*
 * XREFs of ObQuerySecurityDescriptorInfo @ 0x140483D4C
 * Callers:
 *     WmipSecurityMethod @ 0x140483DC0 (WmipSecurityMethod.c)
 *     SeDefaultObjectMethod @ 0x1404BFB40 (SeDefaultObjectMethod.c)
 * Callees:
 *     SeQuerySecurityDescriptorInfo @ 0x140483530 (SeQuerySecurityDescriptorInfo.c)
 *     ObDereferenceSecurityDescriptor @ 0x140484DE0 (ObDereferenceSecurityDescriptor.c)
 *     ObpReferenceSecurityDescriptor @ 0x140485110 (ObpReferenceSecurityDescriptor.c)
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
    ObDereferenceSecurityDescriptor(v7, 1LL);
  return v8;
}
