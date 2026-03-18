/*
 * XREFs of FsRtlCreateSectionForDataScan @ 0x14005E8F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     CcZeroEndOfLastPage @ 0x140096990 (CcZeroEndOfLastPage.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObInsertObject @ 0x140493DC0 (ObInsertObject.c)
 *     MmGetFileObjectForSection @ 0x140493DF0 (MmGetFileObjectForSection.c)
 *     MmCreateSectionEx @ 0x140493E0C (MmCreateSectionEx.c)
 *     FsRtlGetFileSize @ 0x140493F40 (FsRtlGetFileSize.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x140510090 (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlReleaseFile @ 0x140510170 (FsRtlReleaseFile.c)
 */

NTSTATUS __stdcall FsRtlCreateSectionForDataScan(
        PHANDLE SectionHandle,
        PVOID *SectionObject,
        PLARGE_INTEGER SectionFileSize,
        PFILE_OBJECT FileObject,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        ULONG Flags)
{
  ULONG v10; // esi
  PHANDLE v11; // r12
  ULONG v15; // r14d
  struct _KTHREAD *CurrentThread; // rax
  int v17; // ebx
  int v18; // edx
  ULONG v19; // r12d
  int Section; // eax
  struct _FILE_OBJECT *FileObjectForSection; // rax
  struct _FILE_OBJECT *v22; // rsi
  PVOID v23; // rbx
  int inserted; // edi
  int v26; // [rsp+30h] [rbp-40h]
  _BYTE v27[8]; // [rsp+50h] [rbp-20h] BYREF
  PVOID Object; // [rsp+58h] [rbp-18h] BYREF
  LARGE_INTEGER FileSize; // [rsp+60h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-8h] BYREF

  v10 = SectionPageProtection;
  v11 = SectionHandle;
  Object = 0LL;
  Handle = 0LL;
  if ( (SectionPageProtection & 0xFFFFFFF9) != 0 || !SectionPageProtection )
    return -1073741578;
  v15 = AllocationAttributes;
  if ( (AllocationAttributes & 0xFF7FFFFF) != 0x8000000 )
    return -1073741577;
  if ( !FileObject->SectionObjectPointer )
    return -1073741792;
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v17 = FsRtlAcquireToCreateMappedSection(FileObject, v10, &SectionPageProtection, v27);
  if ( v17 < 0 )
  {
    KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
    return v17;
  }
  v17 = FsRtlGetFileSize(FileObject, &FileSize);
  if ( v17 >= 0 )
  {
    if ( FileSize.QuadPart )
    {
      v19 = SectionPageProtection;
      while ( 1 )
      {
        Section = MmCreateSectionEx(
                    (unsigned int)&Object,
                    v18,
                    (_DWORD)ObjectAttributes,
                    (unsigned int)&FileSize,
                    v10,
                    v15,
                    v26,
                    (__int64)FileObject,
                    v19);
        v17 = Section;
        if ( Section != -1073741740 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&FsRtlHalfSecond);
      }
      if ( Section >= 0 )
      {
        FileObjectForSection = (struct _FILE_OBJECT *)MmGetFileObjectForSection(Object);
        v22 = FileObjectForSection;
        if ( FileObjectForSection )
        {
          CcZeroEndOfLastPage(FileObjectForSection);
          ObfDereferenceObjectWithTag(v22, 0x746C6644u);
        }
      }
      v11 = SectionHandle;
    }
    else
    {
      v17 = -1073741807;
    }
  }
  FsRtlReleaseFile(FileObject);
  KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
  if ( v17 < 0 )
    return v17;
  v23 = Object;
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  inserted = ObInsertObject(v23, 0LL, DesiredAccess, 0, 0LL, &Handle);
  if ( inserted < 0 )
  {
    ObfDereferenceObjectWithTag(v23, 0x746C6644u);
  }
  else
  {
    *v11 = Handle;
    *SectionObject = v23;
    if ( SectionFileSize )
      *SectionFileSize = FileSize;
  }
  return inserted;
}
