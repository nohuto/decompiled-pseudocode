/*
 * XREFs of NtGetNlsSectionPtr @ 0x140593170
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenFile @ 0x14017DF20 (ZwOpenFile.c)
 *     ZwOpenSection @ 0x14017DFA0 (ZwOpenSection.c)
 *     ZwCreateSection @ 0x14017E200 (ZwCreateSection.c)
 *     MmMapViewOfSection @ 0x140460870 (MmMapViewOfSection.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     MmMapViewInSystemSpace @ 0x1404F6020 (MmMapViewInSystemSpace.c)
 *     RtlpInitNlsSectionName @ 0x1405934AC (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x140593510 (RtlpInitNlsFileName.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  PVOID v13; // rdi
  int v14; // eax
  HANDLE SectionHandle; // [rsp+58h] [rbp-200h] BYREF
  HANDLE FileHandle; // [rsp+60h] [rbp-1F8h] BYREF
  PVOID MappedBase; // [rsp+68h] [rbp-1F0h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-1E8h] BYREF
  _DWORD v19[2]; // [rsp+78h] [rbp-1E0h] BYREF
  PVOID Section; // [rsp+80h] [rbp-1D8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-1C8h] BYREF
  char v22; // [rsp+C0h] [rbp-198h] BYREF
  char v23; // [rsp+D0h] [rbp-188h] BYREF
  OBJECT_ATTRIBUTES v24; // [rsp+E0h] [rbp-178h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+110h] [rbp-148h] BYREF
  _BYTE v26[128]; // [rsp+120h] [rbp-138h] BYREF
  _BYTE v27[128]; // [rsp+1A0h] [rbp-B8h] BYREF

  FileHandle = 0LL;
  SectionHandle = 0LL;
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
  result = RtlpInitNlsSectionName(SectionType, SectionData, v26);
  if ( result >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 720;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
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
        result = RtlpInitNlsFileName(SectionType, SectionData, v27);
        if ( result < 0 )
          return result;
        v24.Length = 48;
        v24.RootDirectory = 0LL;
        v24.Attributes = 576;
        v24.ObjectName = (PUNICODE_STRING)&v23;
        *(_OWORD *)&v24.SecurityDescriptor = 0LL;
        result = ZwOpenFile(&FileHandle, 0x100000u, &v24, &IoStatusBlock, 1u, 0);
        if ( result < 0 )
          return result;
        v12 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
        ZwClose(FileHandle);
      }
    }
    if ( v12 >= 0 )
    {
      v12 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Section, 0LL);
      ZwClose(SectionHandle);
      if ( v12 >= 0 )
      {
        v19[0] = 0;
        v19[1] = 0;
        v13 = Section;
        if ( PreviousMode )
          v14 = MmMapViewOfSection(
                  (int)Section,
                  (int)KeGetCurrentThread()->ApcState.Process,
                  &MappedBase,
                  0,
                  0LL,
                  (__int64)v19,
                  (__int64)&ViewSize,
                  1,
                  0x400000,
                  2);
        else
          v14 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
        v12 = v14;
        ObfDereferenceObject(v13);
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
