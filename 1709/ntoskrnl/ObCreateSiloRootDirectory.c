/*
 * XREFs of ObCreateSiloRootDirectory @ 0x140789F30
 * Callers:
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 * Callees:
 *     PsGetHostSilo @ 0x140004290 (PsGetHostSilo.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PsDetachSiloFromCurrentThread @ 0x1400AF180 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400AF1A0 (PsAttachSiloToCurrentThread.c)
 *     PsDereferenceSiloContext @ 0x1401262F0 (PsDereferenceSiloContext.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14017E3C0 (ZwOpenDirectoryObject.c)
 *     ZwCreateDirectoryObjectEx @ 0x14017ECE0 (ZwCreateDirectoryObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     RtlIntegerToUnicodeString @ 0x1404E0C50 (RtlIntegerToUnicodeString.c)
 *     PsIsJobParentImmutable @ 0x14050BB94 (PsIsJobParentImmutable.c)
 *     ObpInitializeRootNamespace @ 0x1405B1FD8 (ObpInitializeRootNamespace.c)
 *     PsInsertPermanentSiloContextEx @ 0x1405BFEB8 (PsInsertPermanentSiloContextEx.c)
 *     PsCreateSiloContext @ 0x1405C0150 (PsCreateSiloContext.c)
 *     PsGetSiloIdentifier @ 0x1405F2510 (PsGetSiloIdentifier.c)
 *     PsGetParentSilo @ 0x1407146F0 (PsGetParentSilo.c)
 *     PsInsertSiloContext @ 0x140714720 (PsInsertSiloContext.c)
 *     ObpGetSilosRootDirectory @ 0x14078A3BC (ObpGetSilosRootDirectory.c)
 */

__int64 __fastcall ObCreateSiloRootDirectory(unsigned __int64 a1, int a2)
{
  char v2; // r14
  PVOID v4; // r15
  void *v5; // rdi
  __int64 v7; // rcx
  __int64 ParentSilo; // rbx
  __int64 v9; // rax
  __int64 v10; // r12
  ULONG SiloIdentifier; // eax
  int SilosRootDirectory; // ebx
  NTSTATUS v13; // eax
  __int64 v14; // r8
  HANDLE Handle; // [rsp+38h] [rbp-59h] BYREF
  _QWORD *v16; // [rsp+40h] [rbp-51h] BYREF
  HANDLE v17; // [rsp+48h] [rbp-49h] BYREF
  HANDLE v18; // [rsp+50h] [rbp-41h] BYREF
  HANDLE DirectoryHandle; // [rsp+58h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING String; // [rsp+90h] [rbp-1h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+Fh] BYREF
  char v23; // [rsp+A8h] [rbp+17h] BYREF

  v2 = a2;
  v17 = 0LL;
  v18 = 0LL;
  v4 = 0LL;
  Handle = 0LL;
  v5 = 0LL;
  DirectoryHandle = 0LL;
  v16 = 0LL;
  if ( (a2 & 0xFFFFFFF8) != 0 || (a2 & 6) == 4 || !PsIsJobParentImmutable(a1) )
    return 3221225485LL;
  ParentSilo = PsGetParentSilo(v7);
  if ( ParentSilo != PsGetHostSilo() )
    return 3221227289LL;
  v9 = PsGetParentSilo(a1);
  v10 = PsAttachSiloToCurrentThread(v9);
  *(_DWORD *)&String.Length = 1441792;
  String.Buffer = (wchar_t *)&v23;
  SiloIdentifier = PsGetSiloIdentifier(a1);
  SilosRootDirectory = RtlIntegerToUnicodeString(SiloIdentifier, 0xAu, &String);
  if ( SilosRootDirectory >= 0 )
  {
    SilosRootDirectory = ObpGetSilosRootDirectory(&v18);
    if ( SilosRootDirectory >= 0 )
    {
      if ( (v2 & 1) == 0
        || (ObjectAttributes.Length = 48,
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpRootDirectoryName,
            ObjectAttributes.RootDirectory = 0LL,
            ObjectAttributes.Attributes = 512,
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
            SilosRootDirectory = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes),
            SilosRootDirectory >= 0) )
      {
        ObjectAttributes.RootDirectory = v18;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &String;
        ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
        ObjectAttributes.Attributes = 592;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        SilosRootDirectory = ZwCreateDirectoryObjectEx(&Handle, 0xF000Fu, &ObjectAttributes, DirectoryHandle, 0);
        if ( SilosRootDirectory >= 0 )
        {
          v13 = ObReferenceObjectByHandle(Handle, 0xF000Fu, ObpDirectoryObjectType, 0, &Object, 0LL);
          v4 = Object;
          SilosRootDirectory = v13;
          if ( v13 >= 0 )
          {
            SilosRootDirectory = PsCreateSiloContext(a1, 8, 1, (__int64)ObpDirectoryTeardownCallback, &v16);
            if ( SilosRootDirectory < 0 )
            {
              v5 = v16;
            }
            else
            {
              ObfReferenceObjectWithTag(v4, 0x7254624Fu);
              v5 = v16;
              v14 = (__int64)v16;
              *v16 = v4;
              SilosRootDirectory = PsInsertSiloContext(a1, PsObjectDirectoryTeardownSlot, v14);
              if ( SilosRootDirectory >= 0 )
              {
                SilosRootDirectory = PsInsertPermanentSiloContextEx(
                                       a1,
                                       PsObjectDirectorySiloContextSlot,
                                       (__int64)v4,
                                       1);
                if ( SilosRootDirectory >= 0 && (v2 & 2) != 0 )
                {
                  if ( (v2 & 4) == 0
                    || (ObjectAttributes.Length = 48,
                        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpGlobalDosDevicesShortName,
                        ObjectAttributes.RootDirectory = 0LL,
                        ObjectAttributes.Attributes = 512,
                        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
                        SilosRootDirectory = ZwOpenDirectoryObject(&v17, 3u, &ObjectAttributes),
                        SilosRootDirectory >= 0) )
                  {
                    SilosRootDirectory = ObpInitializeRootNamespace(a1, Handle, (__int64)v17);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v17 )
    ZwClose(v17);
  if ( v18 )
    ZwClose(v18);
  if ( Handle )
    ZwClose(Handle);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( v5 )
    PsDereferenceSiloContext(v5);
  PsDetachSiloFromCurrentThread(v10);
  return (unsigned int)SilosRootDirectory;
}
