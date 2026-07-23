/*
 * XREFs of NtGetNlsSectionPtr @ 0x1404618FC
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenFile @ 0x14017E5A0 (ZwOpenFile.c)
 *     ZwOpenSection @ 0x14017E620 (ZwOpenSection.c)
 *     ZwCreateSection @ 0x14017E880 (ZwCreateSection.c)
 *     RtlpInitNlsFileName @ 0x140461778 (RtlpInitNlsFileName.c)
 *     RtlpInitNlsSectionName @ 0x140461C50 (RtlpInitNlsSectionName.c)
 *     MmMapViewOfSection @ 0x14049C1F0 (MmMapViewOfSection.c)
 *     MmMapViewInSystemSpace @ 0x1404B0180 (MmMapViewInSystemSpace.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtGetNlsSectionPtr(
        ULONG SectionType,
        ULONG SectionData,
        PVOID ContextData,
        PVOID *SectionPointer,
        PULONG SectionSize)
{
  char PreviousMode; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  NTSTATUS result; // eax
  int v12; // ebx
  __int64 v13; // r9
  PVOID v14; // rdi
  NTSTATUS v15; // eax
  HANDLE SectionHandle; // [rsp+58h] [rbp-210h] BYREF
  HANDLE FileHandle; // [rsp+60h] [rbp-208h] BYREF
  PVOID MappedBase; // [rsp+68h] [rbp-200h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-1F8h] BYREF
  __int64 v20; // [rsp+78h] [rbp-1F0h] BYREF
  PVOID Section; // [rsp+80h] [rbp-1E8h] BYREF
  PVOID v22; // [rsp+88h] [rbp-1E0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-1D0h] BYREF
  char v24; // [rsp+C8h] [rbp-1A0h] BYREF
  UNICODE_STRING v25; // [rsp+D8h] [rbp-190h] BYREF
  OBJECT_ATTRIBUTES v26; // [rsp+E8h] [rbp-180h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+118h] [rbp-150h] BYREF
  _BYTE v28[128]; // [rsp+130h] [rbp-138h] BYREF
  wchar_t v29[64]; // [rsp+1B0h] [rbp-B8h] BYREF

  FileHandle = 0LL;
  SectionHandle = 0LL;
  v22 = 0LL;
  MappedBase = 0LL;
  ViewSize = 0LL;
  if ( !SectionPointer )
    return -1073741582;
  if ( !SectionSize )
    return -1073741581;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__int64)SectionPointer;
    if ( (unsigned __int64)SectionPointer >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v9 = *(_QWORD *)v9;
    v10 = (__int64)SectionSize;
    if ( (unsigned __int64)SectionSize >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    if ( ContextData )
    {
      if ( ((unsigned __int8)ContextData & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ContextData + 4 > 0x7FFFFFFF0000LL || (char *)ContextData + 4 < ContextData )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = RtlpInitNlsSectionName(SectionType, SectionData, v28);
  if ( result >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 720;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v24;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( SectionType - 11 > 1 )
    {
      v12 = -1073741823;
    }
    else
    {
      v12 = ZwOpenSection(&SectionHandle, 4u, &ObjectAttributes);
      if ( v12 < 0 )
      {
        result = RtlpInitNlsFileName(SectionType, SectionData, v29, v13, &v25);
        if ( result < 0 )
          return result;
        v26.Length = 48;
        v26.RootDirectory = 0LL;
        v26.Attributes = 576;
        v26.ObjectName = &v25;
        *(_OWORD *)&v26.SecurityDescriptor = 0LL;
        result = ZwOpenFile(&FileHandle, 0x100000u, &v26, &IoStatusBlock, 1u, 0);
        if ( result < 0 )
          return result;
        v12 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
        ZwClose(FileHandle);
      }
    }
    if ( v12 >= 0 )
    {
      v12 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Section, 0LL);
      v14 = Section;
      v22 = Section;
      ZwClose(SectionHandle);
      if ( v12 >= 0 )
      {
        v20 = 0LL;
        if ( PreviousMode )
        {
          v14 = Section;
          v15 = MmMapViewOfSection(
                  (_DWORD)Section,
                  KeGetCurrentThread()->ApcState.Process,
                  (unsigned int)&MappedBase,
                  0,
                  0LL,
                  (__int64)&v20,
                  (__int64)&ViewSize,
                  1,
                  0x400000,
                  2);
        }
        else
        {
          v15 = MmMapViewInSystemSpace(v14, &MappedBase, &ViewSize);
        }
        v12 = v15;
        ObfDereferenceObject(v14);
        if ( v12 >= 0 )
        {
          *SectionPointer = MappedBase;
          *(_QWORD *)SectionSize = ViewSize;
        }
      }
    }
    return v12;
  }
  return result;
}
