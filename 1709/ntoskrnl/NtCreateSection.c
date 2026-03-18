/*
 * XREFs of NtCreateSection @ 0x14049C090
 * Callers:
 *     PfpFileBuildReadSupport @ 0x140441A30 (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x140442728 (PfSnGetSectionObject.c)
 * Callees:
 *     CcZeroEndOfLastPage @ 0x1400675C8 (CcZeroEndOfLastPage.c)
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     MmCreateSection @ 0x14049B260 (MmCreateSection.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  PHANDLE v8; // r12
  BOOL v9; // edx
  void *QuadPart; // rbx
  NTSTATUS result; // eax
  unsigned __int64 v12; // rax
  PVOID v13; // rcx
  __int64 v14; // rdi
  struct _FILE_OBJECT *v15; // rbx
  int v16; // eax
  PVOID Object[2]; // [rsp+40h] [rbp-48h] BYREF
  void *v18; // [rsp+50h] [rbp-38h] BYREF
  __int64 v19; // [rsp+58h] [rbp-30h] BYREF
  int v20; // [rsp+A0h] [rbp+18h]

  v20 = (int)ObjectAttributes;
  v8 = SectionHandle;
  if ( (AllocationAttributes & 0x3000000) == 0x3000000 )
    return -1073741580;
  v9 = (AllocationAttributes & 0x2100000) != 0 && (AllocationAttributes & 0x1100000) != 0x1100000;
  if ( (AllocationAttributes & 0x2087FF80) != 0 || (AllocationAttributes & 0xF100000) == 0 )
    return -1073741580;
  if ( (AllocationAttributes & 0x3100000) != 0 )
  {
    v16 = -872415232;
    if ( (AllocationAttributes & 0x2100000) == 0 )
      v16 = -868220928;
    if ( (v16 & AllocationAttributes) != 0 )
      return -1073741580;
  }
  if ( (AllocationAttributes & 0xC000000) == 0xC000000 || (AllocationAttributes & 0x80080000) == 0x80080000 )
    return -1073741580;
  if ( (SectionPageProtection & 0x701) != 0 )
    return -1073741755;
  if ( !KeGetCurrentThread()->PreviousMode )
  {
    if ( MaximumSize )
      QuadPart = (void *)MaximumSize->QuadPart;
    else
      QuadPart = 0LL;
    goto LABEL_20;
  }
  if ( v9 )
    return -1073741580;
  if ( (unsigned __int64)SectionHandle >= 0x7FFFFFFF0000LL )
    SectionHandle = (PHANDLE)0x7FFFFFFF0000LL;
  *SectionHandle = *SectionHandle;
  if ( MaximumSize )
  {
    if ( ((unsigned __int8)MaximumSize & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = (void *)MaximumSize->QuadPart;
  }
  else
  {
    QuadPart = 0LL;
  }
  Object[1] = QuadPart;
LABEL_20:
  while ( 1 )
  {
    v18 = QuadPart;
    result = MmCreateSection(
               (int)Object,
               DesiredAccess,
               (int)ObjectAttributes,
               (int)&v18,
               SectionPageProtection,
               AllocationAttributes,
               (__int64)FileHandle,
               0LL);
    if ( result >= 0 )
      break;
    if ( result != -1073741740 )
      return result;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    LODWORD(ObjectAttributes) = v20;
  }
  v12 = MiSectionControlArea((__int64)Object[0]);
  v14 = v12;
  if ( v12 && *(_QWORD *)(v12 + 64) )
  {
    v15 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v12);
    CcZeroEndOfLastPage(v15);
    MiDereferenceControlAreaFile(v14, (unsigned __int64)v15);
    v13 = Object[0];
  }
  result = ObInsertObjectEx(v13, 0LL, 0, 0LL, (__int64)&v19);
  if ( result >= 0 )
    *v8 = (HANDLE)v19;
  return result;
}
