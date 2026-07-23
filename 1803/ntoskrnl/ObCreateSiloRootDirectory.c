/*
 * XREFs of ObCreateSiloRootDirectory @ 0x1407F63F0
 * Callers:
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     PsGetHostSilo @ 0x14006CDB0 (PsGetHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x140073540 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     PsDereferenceSiloContext @ 0x1400C5610 (PsDereferenceSiloContext.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1401A7FC0 (ZwOpenDirectoryObject.c)
 *     ZwCreateDirectoryObjectEx @ 0x1401A8900 (ZwCreateDirectoryObjectEx.c)
 *     PsIsJobParentImmutable @ 0x14052FD0C (PsIsJobParentImmutable.c)
 *     RtlIntegerToUnicodeString @ 0x14053E930 (RtlIntegerToUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ObpInitializeRootNamespace @ 0x14061CB80 (ObpInitializeRootNamespace.c)
 *     PsInsertPermanentSiloContextEx @ 0x140620658 (PsInsertPermanentSiloContextEx.c)
 *     PsCreateSiloContext @ 0x1406208F0 (PsCreateSiloContext.c)
 *     PsGetParentSilo @ 0x1407788F0 (PsGetParentSilo.c)
 *     PsInsertSiloContext @ 0x140778920 (PsInsertSiloContext.c)
 *     ObpGetSilosRootDirectory @ 0x1407F687C (ObpGetSilosRootDirectory.c)
 */

__int64 __fastcall ObCreateSiloRootDirectory(__int64 a1, int a2)
{
  char v2; // r14
  PVOID v4; // r15
  void *v5; // rsi
  __int64 v7; // rcx
  __int64 ParentSilo; // rbx
  __int64 v9; // rax
  __int64 v10; // r12
  ULONG v11; // ecx
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
  *(_DWORD *)&String.Length = 1441792;
  v10 = PsAttachSiloToCurrentThread(v9);
  v11 = 0;
  String.Buffer = (wchar_t *)&v23;
  if ( a1 )
    v11 = *(_DWORD *)(a1 + 1220);
  SilosRootDirectory = RtlIntegerToUnicodeString(v11, 0xAu, &String);
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
