/*
 * XREFs of ObCreateSiloRootDirectory @ 0x140747700
 * Callers:
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 * Callees:
 *     PsGetHostSilo @ 0x14001ED90 (PsGetHostSilo.c)
 *     PsDereferenceSiloContext @ 0x14003ABD0 (PsDereferenceSiloContext.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     PsDetachSiloFromCurrentThread @ 0x14006F590 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14006F5B0 (PsAttachSiloToCurrentThread.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14017EA40 (ZwOpenDirectoryObject.c)
 *     ZwCreateDirectoryObjectEx @ 0x14017F340 (ZwCreateDirectoryObjectEx.c)
 *     RtlIntegerToUnicodeString @ 0x1404C02F0 (RtlIntegerToUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObpInitializeRootNamespace @ 0x1405A28B8 (ObpInitializeRootNamespace.c)
 *     PsInsertPermanentSiloContextEx @ 0x1405A3A00 (PsInsertPermanentSiloContextEx.c)
 *     PsCreateSiloContext @ 0x1405A3CA0 (PsCreateSiloContext.c)
 *     PsGetSiloIdentifier @ 0x1405D5E30 (PsGetSiloIdentifier.c)
 *     PsGetParentSilo @ 0x1406DE24C (PsGetParentSilo.c)
 *     PsInsertSiloContext @ 0x1406DE270 (PsInsertSiloContext.c)
 *     ObpGetSilosRootDirectory @ 0x140747B7C (ObpGetSilosRootDirectory.c)
 */

__int64 __fastcall ObCreateSiloRootDirectory(unsigned __int64 a1, int a2)
{
  char v2; // si
  PVOID v4; // r15
  void *v5; // rdi
  __int64 ParentSilo; // rbx
  __int64 v8; // rax
  __int64 v9; // r12
  ULONG SiloIdentifier; // eax
  int SilosRootDirectory; // ebx
  NTSTATUS v12; // eax
  __int64 v13; // r8
  HANDLE Handle; // [rsp+38h] [rbp-59h] BYREF
  _QWORD *v15; // [rsp+40h] [rbp-51h] BYREF
  HANDLE v16; // [rsp+48h] [rbp-49h] BYREF
  HANDLE v17; // [rsp+50h] [rbp-41h] BYREF
  HANDLE DirectoryHandle; // [rsp+58h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING String; // [rsp+90h] [rbp-1h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+Fh] BYREF
  char v22; // [rsp+A8h] [rbp+17h] BYREF

  v2 = a2;
  v16 = 0LL;
  v17 = 0LL;
  v4 = 0LL;
  Handle = 0LL;
  v5 = 0LL;
  DirectoryHandle = 0LL;
  v15 = 0LL;
  if ( (a2 & 0xFFFFFFF8) != 0 || (a2 & 6) == 4 )
    return 3221225485LL;
  ParentSilo = PsGetParentSilo(a1);
  if ( ParentSilo != PsGetHostSilo() )
    return 3221227289LL;
  v8 = PsGetParentSilo(a1);
  v9 = PsAttachSiloToCurrentThread(v8);
  *(_DWORD *)&String.Length = 1441792;
  String.Buffer = (wchar_t *)&v22;
  SiloIdentifier = PsGetSiloIdentifier(a1);
  SilosRootDirectory = RtlIntegerToUnicodeString(SiloIdentifier, 0xAu, &String);
  if ( SilosRootDirectory >= 0 )
  {
    SilosRootDirectory = ObpGetSilosRootDirectory(&v17);
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
        ObjectAttributes.RootDirectory = v17;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &String;
        ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
        ObjectAttributes.Attributes = 592;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        SilosRootDirectory = ZwCreateDirectoryObjectEx(&Handle, 0xF000Fu, &ObjectAttributes, DirectoryHandle, 0);
        if ( SilosRootDirectory >= 0 )
        {
          v12 = ObReferenceObjectByHandle(Handle, 0xF000Fu, ObpDirectoryObjectType, 0, &Object, 0LL);
          v4 = Object;
          SilosRootDirectory = v12;
          if ( v12 >= 0 )
          {
            SilosRootDirectory = PsCreateSiloContext(a1, 8, 1, (__int64)ObpDirectoryTeardownCallback, &v15);
            if ( SilosRootDirectory < 0 )
            {
              v5 = v15;
            }
            else
            {
              ObfReferenceObjectWithTag(v4, 0x7254624Fu);
              v5 = v15;
              v13 = (__int64)v15;
              *v15 = v4;
              SilosRootDirectory = PsInsertSiloContext(a1, PsObjectDirectoryTeardownSlot, v13);
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
                        SilosRootDirectory = ZwOpenDirectoryObject(&v16, 3u, &ObjectAttributes),
                        SilosRootDirectory >= 0) )
                  {
                    SilosRootDirectory = ObpInitializeRootNamespace(a1, Handle, (__int64)v16);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v16 )
    ZwClose(v16);
  if ( v17 )
    ZwClose(v17);
  if ( Handle )
    ZwClose(Handle);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( v5 )
    PsDereferenceSiloContext(v5);
  PsDetachSiloFromCurrentThread(v9);
  return (unsigned int)SilosRootDirectory;
}
