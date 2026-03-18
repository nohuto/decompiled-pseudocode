/*
 * XREFs of ExpGetGlobalLocaleSection @ 0x14049A020
 * Callers:
 *     NtInitializeNlsFiles @ 0x14049A2B4 (NtInitializeNlsFiles.c)
 * Callees:
 *     RtlStringCchCatW @ 0x14006DAE4 (RtlStringCchCatW.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     ZwOpenFile @ 0x14017E5A0 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x14017E880 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
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
  const wchar_t *v11; // r8
  __int64 v12; // rdx
  int v13; // r10d
  wchar_t *v14; // rcx
  wchar_t v15; // ax
  NTSTATUS v16; // eax
  HANDLE v17; // rcx
  HANDLE FileHandle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE SectionHandle; // [rsp+88h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B8h] [rbp-48h] BYREF
  int v27; // [rsp+BCh] [rbp-44h]
  int v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C4h] [rbp-3Ch]
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
      && v27 == 4
      && v28 == 4 )
    {
      v3 = v29;
      v11 = 0LL;
      if ( (_DWORD)v29 == 5243136 )
        v11 = L"loc2008.nls";
      if ( v11 )
      {
        v12 = 260LL;
        v13 = 0;
        v14 = pszDest;
        while ( v12 != -2147483386 )
        {
          v15 = *(wchar_t *)((char *)v14 + (char *)L"\\SystemRoot\\System32\\" - (char *)pszDest);
          if ( !v15 )
            break;
          *v14++ = v15;
          if ( !--v12 )
          {
            --v14;
            v13 = -2147483643;
            break;
          }
        }
        *v14 = 0;
        if ( v13 >= 0 && RtlStringCchCatW(pszDest, 0x104uLL, v11) >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, pszDest);
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v16 = ZwOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
          v17 = FileHandle;
          if ( v16 < 0 )
            v17 = 0LL;
          FileHandle = v17;
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&NlsSectionLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&NlsSectionLock);
    KeAbPostRelease((ULONG_PTR)&NlsSectionLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
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
