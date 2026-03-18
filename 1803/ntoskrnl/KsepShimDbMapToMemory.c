/*
 * XREFs of KsepShimDbMapToMemory @ 0x1405FFEA0
 * Callers:
 *     KseShimDatabaseOpen @ 0x1405FDD48 (KseShimDatabaseOpen.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401A7B20 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x1401A7E00 (ZwCreateSection.c)
 *     KsepDebugPrint @ 0x14024D0B4 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14024D344 (KsepLogError.c)
 *     MmUnmapViewInSystemSpace @ 0x1404BB5B0 (MmUnmapViewInSystemSpace.c)
 *     MmMapViewInSystemSpace @ 0x14054B620 (MmMapViewInSystemSpace.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     SdbInitDatabaseInMemory @ 0x1405FFBD0 (SdbInitDatabaseInMemory.c)
 */

__int64 KsepShimDbMapToMemory()
{
  PVOID v0; // rdi
  NTSTATUS v1; // eax
  NTSTATUS v2; // ebx
  NTSTATUS v3; // eax
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  PVOID Object; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+Fh] BYREF
  HANDLE FileHandle; // [rsp+C0h] [rbp+67h] BYREF
  HANDLE SectionHandle; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID MappedBase; // [rsp+D0h] [rbp+77h] BYREF
  ULONG_PTR ViewSize; // [rsp+D8h] [rbp+7Fh] BYREF

  FileHandle = 0LL;
  SectionHandle = 0LL;
  MappedBase = 0LL;
  v0 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\AppPatch\\drvmain.sdb");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  v2 = v1;
  if ( v1 < 0 )
  {
    v5 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v5 + 1] = v1;
    v6 = KsepDebugFlag;
    KsepHistoryErrors[2 * v5] = 590318;
    if ( (v6 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: ZwOpenFile failed opening DB file!\n");
    KsepLogError(0, "KSE: ZwOpenFile failed opening DB file!\n");
  }
  else
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v2 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
    if ( v2 < 0 )
    {
      v7 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v7 + 1] = v2;
      KsepHistoryErrors[2 * v7] = 590340;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(0LL, "KSE: ZwCreateSection Failed!\n");
      KsepLogError(0, "KSE: ZwCreateSection Failed!\n");
    }
    else
    {
      v3 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
      v0 = Object;
      v2 = v3;
      if ( v3 < 0 )
      {
        v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
        KsepHistoryErrors[2 * v8 + 1] = v2;
        KsepHistoryErrors[2 * v8] = 590354;
        if ( (KsepDebugFlag & 2) != 0 )
          KsepDebugPrint(0LL, "KSE: ObRefByHandle(section) failed!\n");
        KsepLogError(0, "KSE: ObRefByHandle(section) failed!\n");
      }
      else
      {
        ViewSize = 0LL;
        v2 = MmMapViewInSystemSpace(Object, &MappedBase, &ViewSize);
        if ( v2 < 0 )
        {
          v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          KsepHistoryErrors[2 * v9 + 1] = v2;
          KsepHistoryErrors[2 * v9] = 590367;
          if ( (KsepDebugFlag & 2) != 0 )
            KsepDebugPrint(0LL, "KSE: Unable to map view of section!\n");
          KsepLogError(0, "KSE: Unable to map view of section!\n");
        }
        else
        {
          KsepShimDbHandle = SdbInitDatabaseInMemory((__int64)MappedBase, ViewSize);
          if ( !KsepShimDbHandle )
          {
            v2 = -1073741823;
            v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
            KsepHistoryErrors[2 * v10 + 1] = -1073741823;
            KsepHistoryErrors[2 * v10] = 590376;
            if ( (KsepDebugFlag & 2) != 0 )
              KsepDebugPrint(0LL, "KSE: SdbInitDatabaseInMemory Failed!\n");
            KsepLogError(0, "KSE: SdbInitDatabaseInMemory Failed!\n");
            goto LABEL_26;
          }
          v2 = 0;
        }
      }
    }
  }
  if ( v2 >= 0 )
  {
    KsepShimDbFileHandle = FileHandle;
    KsepShimDbSectionHandle = SectionHandle;
    KsepShimDbAddress = MappedBase;
    KsepShimDbSectionPointer = v0;
    return (unsigned int)v2;
  }
LABEL_26:
  if ( MappedBase )
    MmUnmapViewInSystemSpace(MappedBase);
  if ( v0 )
    ObfDereferenceObject(v0);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v2;
}
