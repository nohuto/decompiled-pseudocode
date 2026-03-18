/*
 * XREFs of ExpGetGlobalLocaleSection @ 0x14056CBE0
 * Callers:
 *     NtInitializeNlsFiles @ 0x14056CA6C (NtInitializeNlsFiles.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlStringCchCatW @ 0x140161C60 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     ZwOpenFile @ 0x1401A7B20 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x1401A7E00 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpGetGlobalLocaleSection(_QWORD *a1)
{
  PVOID v1; // rbx
  int v3; // edi
  NTSTATUS result; // eax
  HANDLE v5; // rax
  NTSTATUS v6; // ebx
  NTSTATUS v7; // r14d
  struct _KTHREAD *CurrentThread; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  PVOID v12; // r15
  PVOID v13; // rdi
  char v14; // al
  const wchar_t *v15; // r8
  __int64 v16; // rdx
  wchar_t *v17; // rcx
  wchar_t v18; // ax
  wchar_t *v19; // rax
  NTSTATUS v20; // eax
  HANDLE v21; // rcx
  HANDLE FileHandle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE SectionHandle; // [rsp+88h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B8h] [rbp-48h] BYREF
  int v31; // [rsp+BCh] [rbp-44h]
  int v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C4h] [rbp-3Ch]
  wchar_t pszDest[264]; // [rsp+D0h] [rbp-30h] BYREF

  v1 = NlsLocaleSectionPointer;
  FileHandle = 0LL;
  v3 = 0;
  if ( (unsigned __int64)NlsLocaleSectionPointer > 1 )
  {
    ObfReferenceObject(NlsLocaleSectionPointer);
LABEL_3:
    *a1 = v1;
    return 0;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"ln";
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&NlsTableVersionKeyName,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v31 == 4
      && v32 == 4 )
    {
      v3 = v33;
      v15 = 0LL;
      if ( v33 == 5243136 )
        v15 = L"loc2008.nls";
      if ( v15 )
      {
        v16 = 260LL;
        v17 = pszDest;
        do
        {
          if ( v16 == -2147483386 )
            break;
          v18 = *(wchar_t *)((char *)v17 + (char *)L"\\SystemRoot\\System32\\" - (char *)pszDest);
          if ( !v18 )
            break;
          *v17++ = v18;
          --v16;
        }
        while ( v16 );
        v19 = v17 - 1;
        if ( v16 )
          v19 = v17;
        *v19 = 0;
        if ( v16 && RtlStringCchCatW(pszDest, 0x104uLL, v15) >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, pszDest);
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v20 = ZwOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
          v21 = FileHandle;
          if ( v20 < 0 )
            v21 = 0LL;
          FileHandle = v21;
        }
      }
    }
    ZwClose(KeyHandle);
  }
  v5 = FileHandle;
  if ( FileHandle )
  {
LABEL_11:
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, v5);
    ZwClose(FileHandle);
    if ( v6 < 0 )
      return v6;
    v7 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    v1 = Object;
    ZwClose(SectionHandle);
    if ( v7 < 0 )
      return v7;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&NlsSectionLock, 0LL);
    v12 = NlsLocaleSectionPointer;
    if ( NlsLocaleSectionPointer == (PVOID)1 )
    {
      NlsTableVersion = v3;
      v13 = Object;
      ObfReferenceObject(Object);
      NlsLocaleSectionPointer = v13;
    }
    else if ( NlsLocaleSectionPointer )
    {
      ObfDereferenceObject(Object);
      v1 = v12;
      ObfReferenceObject(v12);
    }
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&NlsSectionLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&NlsSectionLock, v9, v10, v11);
    KeAbPostRelease((ULONG_PTR)&NlsSectionLock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_3;
  }
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L">@";
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( result >= 0 )
  {
    v5 = FileHandle;
    v3 = 263424;
    goto LABEL_11;
  }
  return result;
}
