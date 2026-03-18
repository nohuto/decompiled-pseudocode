/*
 * XREFs of ExpGetGlobalLocaleSection @ 0x14045DD20
 * Callers:
 *     NtInitializeNlsFiles @ 0x14045DFB4 (NtInitializeNlsFiles.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlStringCchCatW @ 0x1400F9E18 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     ZwOpenFile @ 0x14017DF20 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x14017E200 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpGetGlobalLocaleSection(_QWORD *a1)
{
  PVOID v1; // rbx
  int v3; // esi
  NTSTATUS result; // eax
  HANDLE v5; // rax
  NTSTATUS v6; // ebx
  PVOID v7; // r15
  struct _KTHREAD *CurrentThread; // r14
  PVOID v9; // rbx
  PVOID v10; // rbx
  char v11; // al
  const wchar_t *v12; // r8
  __int64 v13; // rdx
  int v14; // r10d
  wchar_t *v15; // rcx
  wchar_t v16; // ax
  NTSTATUS v17; // eax
  HANDLE v18; // rcx
  HANDLE FileHandle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE SectionHandle; // [rsp+88h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B8h] [rbp-48h] BYREF
  int v28; // [rsp+BCh] [rbp-44h]
  int v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C4h] [rbp-3Ch]
  wchar_t pszDest[264]; // [rsp+D0h] [rbp-30h] BYREF

  v1 = NlsLocaleSectionPointer;
  FileHandle = 0LL;
  v3 = 0;
  if ( (unsigned __int64)NlsLocaleSectionPointer > 1 )
  {
    ObfReferenceObject(NlsLocaleSectionPointer);
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
      && v28 == 4
      && v29 == 4 )
    {
      v3 = v30;
      v12 = 0LL;
      if ( (_DWORD)v30 == 5243136 )
        v12 = L"loc2008.nls";
      if ( v12 )
      {
        v13 = 260LL;
        v14 = 0;
        v15 = pszDest;
        while ( v13 != -2147483386 )
        {
          v16 = *(wchar_t *)((char *)v15 + (char *)L"\\SystemRoot\\System32\\" - (char *)pszDest);
          if ( !v16 )
            break;
          *v15++ = v16;
          if ( !--v13 )
          {
            --v15;
            v14 = -2147483643;
            break;
          }
        }
        *v15 = 0;
        if ( v14 >= 0 && RtlStringCchCatW(pszDest, 0x104uLL, v12) >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, pszDest);
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v17 = ZwOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
          v18 = FileHandle;
          if ( v17 < 0 )
            v18 = 0LL;
          FileHandle = v18;
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
    v6 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    v7 = Object;
    ZwClose(SectionHandle);
    if ( v6 < 0 )
      return v6;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&NlsSectionLock, 0LL);
    v9 = NlsLocaleSectionPointer;
    if ( NlsLocaleSectionPointer == (PVOID)1 )
    {
      v10 = Object;
      NlsTableVersion = v3;
      ObfReferenceObject(Object);
      NlsLocaleSectionPointer = v10;
    }
    else if ( NlsLocaleSectionPointer )
    {
      ObfDereferenceObject(Object);
      v7 = v9;
      ObfReferenceObject(v9);
    }
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)&NlsSectionLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&NlsSectionLock);
    KeAbPostRelease((ULONG_PTR)&NlsSectionLock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    *a1 = v7;
    return 0;
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
