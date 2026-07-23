/*
 * XREFs of NtCreateEnclave @ 0x1406BBE40
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     MiValidateZeroBits @ 0x1406B4D9C (MiValidateZeroBits.c)
 *     MiCreateEnclave @ 0x1406BB47C (MiCreateEnclave.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateEnclave(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T Size,
        SIZE_T InitialCommitment,
        ULONG EnclaveType,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  _OWORD *v11; // rdi
  _OWORD *PoolWithTag; // r14
  char PreviousMode; // r13
  __int64 v14; // rcx
  NTSTATUS v15; // ebx
  __int64 v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // rcx
  void *Process; // rdi
  ULONG v21; // [rsp+48h] [rbp-D0h] BYREF
  PVOID v22; // [rsp+50h] [rbp-C8h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-C0h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-B8h]
  ULONGLONG v25; // [rsp+68h] [rbp-B0h] BYREF
  ULONG_PTR v26; // [rsp+70h] [rbp-A8h]
  PULONG v27; // [rsp+78h] [rbp-A0h]
  _OWORD *v28; // [rsp+88h] [rbp-90h]
  PVOID *v29; // [rsp+90h] [rbp-88h]
  $5BC46E0569261879018906DEC3127961 v30; // [rsp+A8h] [rbp-70h] BYREF

  v24 = Size;
  v26 = (ULONG_PTR)ProcessHandle;
  v29 = BaseAddress;
  v25 = ZeroBits;
  v11 = EnclaveInformation;
  v27 = EnclaveError;
  v22 = 0LL;
  PoolWithTag = 0LL;
  v21 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( EnclaveError && PreviousMode == 1 )
  {
    v14 = (__int64)EnclaveError;
    if ( (unsigned __int64)EnclaveError >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
  }
  if ( EnclaveType == 1 && qword_14036C298 )
  {
    if ( (int)MiValidateZeroBits(&v25) < 0 )
    {
      v15 = -1073741583;
      goto LABEL_32;
    }
    if ( !Size )
    {
      v15 = -1073741582;
      goto LABEL_32;
    }
    if ( InitialCommitment > v24 )
    {
      v15 = -1073741581;
      goto LABEL_32;
    }
    if ( EnclaveInformationLength != 4096 )
    {
      v15 = -1073741820;
      goto LABEL_32;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x44456D4Du);
    v28 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v15 = -1073741670;
      goto LABEL_32;
    }
    if ( PreviousMode == 1 )
    {
      v16 = (__int64)BaseAddress;
      if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v16 = *(_QWORD *)v16;
      if ( ((unsigned __int8)EnclaveInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v22 = *BaseAddress;
    v17 = PoolWithTag;
    v18 = 32LL;
    do
    {
      *v17 = *v11;
      v17[1] = v11[1];
      v17[2] = v11[2];
      v17[3] = v11[3];
      v17[4] = v11[4];
      v17[5] = v11[5];
      v17[6] = v11[6];
      v17 += 8;
      *(v17 - 1) = v11[7];
      v11 += 8;
      --v18;
    }
    while ( v18 );
    if ( v26 == -1LL )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      BugCheckParameter1 = (ULONG_PTR)Process;
    }
    else
    {
      v15 = ObpReferenceObjectByHandleWithTag(
              v26,
              8,
              (__int64)PsProcessType,
              PreviousMode,
              1834380621,
              &BugCheckParameter1,
              0LL,
              0LL);
      if ( v15 < 0 )
        goto LABEL_32;
      Process = (void *)BugCheckParameter1;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v30);
    }
    v15 = MiCreateEnclave(
            (__int64)Process,
            (unsigned __int64 *)&v22,
            v25,
            v24,
            InitialCommitment,
            (__int64)PoolWithTag,
            &v21);
    if ( v26 != -1LL )
    {
      KiUnstackDetachProcess(&v30, 0LL);
      ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
    }
  }
  else
  {
    v15 = -1073741637;
  }
LABEL_32:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v15 >= 0 )
    *BaseAddress = v22;
  if ( EnclaveError )
    *EnclaveError = v21;
  return v15;
}
