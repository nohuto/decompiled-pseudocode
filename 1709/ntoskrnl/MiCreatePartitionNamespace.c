/*
 * XREFs of MiCreatePartitionNamespace @ 0x1405B2174
 * Callers:
 *     MiInitializeMemoryEvents @ 0x1405B1D08 (MiInitializeMemoryEvents.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwCreateDirectoryObjectEx @ 0x14017ECE0 (ZwCreateDirectoryObjectEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObCleanupSecurityDescriptor @ 0x1405B2288 (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x1405B22C8 (ObCreateKernelObjectsSD.c)
 */

__int64 __fastcall MiCreatePartitionNamespace(__int64 a1)
{
  NTSTATUS KernelObjectsSD; // ebx
  void *v3; // rax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-19h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+48h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+1Fh] BYREF

  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlInitUnicodeString(&DestinationString, 0LL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  KernelObjectsSD = ZwCreateDirectoryObjectEx((PHANDLE)(a1 + 224), 0xF000Fu, &ObjectAttributes, 0LL, 2u);
  if ( KernelObjectsSD >= 0 )
  {
    KernelObjectsSD = ObCreateKernelObjectsSD(SecurityDescriptor);
    if ( KernelObjectsSD >= 0 )
    {
      v3 = *(void **)(a1 + 224);
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.RootDirectory = v3;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&MiKernelObjectsDirectoryName;
      ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
      ObjectAttributes.Attributes = 576;
      KernelObjectsSD = ZwCreateDirectoryObjectEx((PHANDLE)(a1 + 232), 0xF000Fu, &ObjectAttributes, 0LL, 0);
    }
  }
  ObCleanupSecurityDescriptor(SecurityDescriptor);
  return (unsigned int)KernelObjectsSD;
}
