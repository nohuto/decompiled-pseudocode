/*
 * XREFs of ObQuerySecurityDescriptorInfo @ 0x1404A5144
 * Callers:
 *     SeDefaultObjectMethod @ 0x1404C6D40 (SeDefaultObjectMethod.c)
 *     WmipSecurityMethod @ 0x14055D0F0 (WmipSecurityMethod.c)
 * Callees:
 *     SeQuerySecurityDescriptorInfo @ 0x1404A5E30 (SeQuerySecurityDescriptorInfo.c)
 *     ObpReferenceSecurityDescriptor @ 0x1404C1F80 (ObpReferenceSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404C7150 (ObDereferenceSecurityDescriptor.c)
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
