/*
 * XREFs of NtCreateSection @ 0x1404C1930
 * Callers:
 *     PfpFileBuildReadSupport @ 0x1404A14F8 (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x1404A1E78 (PfSnGetSectionObject.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14005BC04 (MiDereferenceControlAreaFile.c)
 *     CcZeroEndOfLastPage @ 0x14005BC54 (CcZeroEndOfLastPage.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     MmCreateSection @ 0x1404C1C80 (MmCreateSection.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
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
  if ( (AllocationAttributes & 0x2083FF80) != 0 || (AllocationAttributes & 0xF100000) == 0 )
    return -1073741580;
  if ( (AllocationAttributes & 0x3100000) != 0 )
  {
    v16 = -872153088;
    if ( (AllocationAttributes & 0x2100000) == 0 )
      v16 = -867958784;
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
               (unsigned int)Object,
               DesiredAccess,
               (_DWORD)ObjectAttributes,
               (unsigned int)&v18,
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
  result = ObInsertObjectEx(v13, 0, 0LL, (__int64)&v19);
  if ( result >= 0 )
    *v8 = (HANDLE)v19;
  return result;
}
