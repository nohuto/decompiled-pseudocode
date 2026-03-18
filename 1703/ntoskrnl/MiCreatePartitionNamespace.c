/*
 * XREFs of MiCreatePartitionNamespace @ 0x1405A2A54
 * Callers:
 *     MiInitializeMemoryEvents @ 0x1405A25E8 (MiInitializeMemoryEvents.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ZwCreateDirectoryObjectEx @ 0x14017F340 (ZwCreateDirectoryObjectEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ObCleanupSecurityDescriptor @ 0x1405A2B68 (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x1405A2BA8 (ObCreateKernelObjectsSD.c)
 */

__int64 __fastcall MiCreatePartitionNamespace(__int64 a1)
{
  int DirectoryObject; // ebx
  __int64 v3; // rax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-19h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+48h] [rbp-9h] BYREF
  int v7; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v8; // [rsp+78h] [rbp+27h]
  UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp+2Fh]
  int v10; // [rsp+88h] [rbp+37h]
  _BYTE *v11; // [rsp+90h] [rbp+3Fh]
  __int64 v12; // [rsp+98h] [rbp+47h]

  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = 0LL;
  v12 = 0LL;
  p_DestinationString = &DestinationString;
  v11 = (_BYTE *)SePublicDefaultUnrestrictedSd;
  v7 = 48;
  v10 = 576;
  DirectoryObject = ZwCreateDirectoryObjectEx(a1 + 264, 983055LL, (__int64)&v7);
  if ( DirectoryObject >= 0 )
  {
    DirectoryObject = ObCreateKernelObjectsSD(SecurityDescriptor);
    if ( DirectoryObject >= 0 )
    {
      v3 = *(_QWORD *)(a1 + 264);
      v12 = 0LL;
      v8 = v3;
      v7 = 48;
      p_DestinationString = (UNICODE_STRING *)&MiKernelObjectsDirectoryName;
      v11 = SecurityDescriptor;
      v10 = 576;
      DirectoryObject = ZwCreateDirectoryObjectEx(a1 + 272, 983055LL, (__int64)&v7);
    }
  }
  ObCleanupSecurityDescriptor(SecurityDescriptor);
  return (unsigned int)DirectoryObject;
}
