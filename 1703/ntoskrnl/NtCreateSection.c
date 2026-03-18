/*
 * XREFs of NtCreateSection @ 0x14050FCB0
 * Callers:
 *     PfSnGetSectionObject @ 0x14053DFD0 (PfSnGetSectionObject.c)
 *     PfpFileBuildReadSupport @ 0x14053E99C (PfpFileBuildReadSupport.c)
 * Callees:
 *     CcZeroEndOfLastPage @ 0x140096990 (CcZeroEndOfLastPage.c)
 *     MiDereferenceControlAreaFile @ 0x140096AD0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiCreateSection @ 0x14050C860 (MiCreateSection.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
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
  PHANDLE v7; // r15
  BOOL v9; // edx
  LONGLONG QuadPart; // rax
  char PreviousMode; // r14
  PACCESS_TOKEN v12; // rdi
  int SessionId; // eax
  NTSTATUS v14; // r14d
  _QWORD *v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  struct _FILE_OBJECT *v18; // rbx
  NTSTATUS result; // eax
  int v20; // eax
  LONGLONG i; // [rsp+60h] [rbp-48h]
  LONGLONG v22; // [rsp+68h] [rbp-40h] BYREF
  PVOID Object; // [rsp+70h] [rbp-38h] BYREF
  __int64 v24; // [rsp+78h] [rbp-30h] BYREF
  int v26; // [rsp+C0h] [rbp+18h]
  char AllocationAttributesa; // [rsp+D8h] [rbp+30h]

  v26 = (int)ObjectAttributes;
  v7 = SectionHandle;
  if ( (AllocationAttributes & 0x3000000) == 0x3000000 )
    return -1073741580;
  v9 = (AllocationAttributes & 0x2100000) != 0 && (AllocationAttributes & 0x1100000) != 0x1100000;
  if ( (AllocationAttributes & 0x2087FF80) != 0 || (AllocationAttributes & 0xF100000) == 0 )
    return -1073741580;
  if ( (AllocationAttributes & 0x3100000) != 0 )
  {
    v20 = -872415232;
    if ( (AllocationAttributes & 0x2100000) == 0 )
      v20 = -868220928;
    if ( (v20 & AllocationAttributes) != 0 )
      return -1073741580;
  }
  if ( (AllocationAttributes & 0xC000000) == 0xC000000 || (AllocationAttributes & 0x80080000) == 0x80080000 )
    return -1073741580;
  if ( (SectionPageProtection & 0x701) != 0 )
    return -1073741755;
  if ( !KeGetCurrentThread()->PreviousMode )
  {
    if ( MaximumSize )
      QuadPart = MaximumSize->QuadPart;
    else
      QuadPart = 0LL;
    i = QuadPart;
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
    QuadPart = MaximumSize->QuadPart;
  }
  else
  {
    QuadPart = 0LL;
  }
  for ( i = QuadPart; ; QuadPart = i )
  {
LABEL_20:
    v22 = QuadPart;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      AllocationAttributesa = BYTE1(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0]);
      v12 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
    }
    else
    {
      AllocationAttributesa = 0;
      v12 = 0LL;
    }
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    v14 = MiCreateSection(
            &Object,
            v26,
            0,
            (int)&v22,
            SectionPageProtection,
            AllocationAttributes,
            (__int64)v12,
            AllocationAttributesa,
            (__int64)FileHandle,
            0LL,
            PreviousMode,
            SessionId);
    if ( v12 )
      ObfDereferenceObject(v12);
    if ( v14 >= 0 )
      break;
    if ( v14 != -1073741740 )
      return v14;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  v15 = Object;
  v16 = MiSectionControlArea((__int64)Object);
  v17 = v16;
  if ( v16 && *(_QWORD *)(v16 + 64) )
  {
    v18 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v16);
    CcZeroEndOfLastPage(v18);
    MiDereferenceControlAreaFile(v17, (unsigned __int64)v18);
  }
  result = ObInsertObjectEx(v15, 0LL, DesiredAccess, 0, 0, 0LL, &v24);
  if ( result >= 0 )
    *v7 = (HANDLE)v24;
  return result;
}
