/*
 * XREFs of NtLoadEnclaveData @ 0x1407535B8
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MmProbeAndLockPages @ 0x140022650 (MmProbeAndLockPages.c)
 *     MmSizeOfMdl @ 0x1400B9140 (MmSizeOfMdl.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     DbgkMapViewOfSection @ 0x1404E91B8 (DbgkMapViewOfSection.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCopyPagesIntoEnclave @ 0x140751610 (MiCopyPagesIntoEnclave.c)
 *     MiDereferenceEnclaveModule @ 0x1407522F0 (MiDereferenceEnclaveModule.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140752530 (MiLoadSectionIntoVsmEnclave.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtLoadEnclaveData(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        ULONG Protect,
        PVOID PageInformation,
        ULONG PageInformationLength,
        PSIZE_T NumberOfBytesWritten,
        PULONG EnclaveError)
{
  __int16 v9; // r11
  ULONG_PTR v10; // r10
  ULONG v11; // r15d
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  SIZE_T v16; // rax
  struct _MDL *PoolWithTag; // rax
  NTSTATUS v18; // edi
  struct _KTHREAD *CurrentThread; // rax
  struct _KPROCESS *Process; // rbx
  unsigned __int64 v21; // rax
  ULONG_PTR v22; // rdi
  void *v23; // rcx
  int v24; // r15d
  PACCESS_TOKEN v25; // rbx
  __int64 v26; // rbx
  ULONG_PTR v27; // rbx
  volatile signed __int32 *v28; // rbx
  KPROCESSOR_MODE AccessMode; // [rsp+50h] [rbp-118h]
  NTSTATUS v31; // [rsp+54h] [rbp-114h] BYREF
  int v32; // [rsp+58h] [rbp-110h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-108h]
  void *v34; // [rsp+68h] [rbp-100h]
  PVOID Object; // [rsp+70h] [rbp-F8h] BYREF
  _DWORD v36[3]; // [rsp+7Ch] [rbp-ECh] BYREF
  PMDL MemoryDescriptorList; // [rsp+88h] [rbp-E0h]
  PULONG v38; // [rsp+90h] [rbp-D8h]
  HANDLE v39; // [rsp+A0h] [rbp-C8h]
  PSIZE_T v40; // [rsp+A8h] [rbp-C0h]
  void *v41; // [rsp+B0h] [rbp-B8h]
  __int64 v42; // [rsp+B8h] [rbp-B0h]
  __int64 v43; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v44[3]; // [rsp+C8h] [rbp-A0h] BYREF
  void *Src; // [rsp+E0h] [rbp-88h]
  _BYTE v46[48]; // [rsp+F8h] [rbp-70h] BYREF

  v9 = BufferSize;
  v42 = BufferSize;
  Src = Buffer;
  *(_QWORD *)&v36[1] = BaseAddress;
  v10 = (ULONG_PTR)ProcessHandle;
  BugCheckParameter1 = (ULONG_PTR)ProcessHandle;
  v39 = ProcessHandle;
  v11 = PageInformationLength;
  LODWORD(v34) = PageInformationLength;
  v40 = NumberOfBytesWritten;
  v38 = EnclaveError;
  v44[0] = 0LL;
  v36[0] = 0;
  Object = 0LL;
  v12 = 0LL;
  v43 = 0LL;
  LOBYTE(BufferSize) = KeGetCurrentThread()->PreviousMode;
  AccessMode = BufferSize;
  if ( (_BYTE)BufferSize == 1 )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( EnclaveError )
    {
      v14 = (__int64)EnclaveError;
      if ( (unsigned __int64)EnclaveError >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
    }
    if ( NumberOfBytesWritten )
    {
      v15 = (__int64)NumberOfBytesWritten;
      if ( (unsigned __int64)NumberOfBytesWritten >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v15 = *(_QWORD *)v15;
    }
  }
  else
  {
    v13 = 0x7FFFFFFF0000LL;
  }
  v41 = 0LL;
  if ( PageInformationLength )
  {
    if ( PageInformationLength - 16 > 0xFFEF )
    {
      v18 = -1073741820;
      goto LABEL_22;
    }
    if ( (_BYTE)BufferSize == 1 )
    {
      if ( ((unsigned __int8)PageInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)PageInformation + PageInformationLength > 0x7FFFFFFF0000LL
        || (char *)PageInformation + PageInformationLength < PageInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    v41 = *(void **)PageInformation;
    v16 = MmSizeOfMdl(PageInformation, PageInformationLength);
    PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x6C646D4Du);
    v12 = (__int64)PoolWithTag;
    MemoryDescriptorList = PoolWithTag;
    if ( !PoolWithTag )
    {
      v18 = -1073741670;
LABEL_22:
      v31 = v18;
LABEL_46:
      v24 = 0;
      goto LABEL_47;
    }
    PoolWithTag->Next = 0LL;
    PoolWithTag->Size = 8
                      * (((((unsigned __int16)PageInformation & 0xFFF) + (unsigned __int64)PageInformationLength + 4095) >> 12)
                       + 6);
    PoolWithTag->MdlFlags = 0;
    PoolWithTag->StartVa = (PVOID)((unsigned __int64)PageInformation & 0xFFFFFFFFFFFFF000uLL);
    PoolWithTag->ByteOffset = (unsigned __int16)PageInformation & 0xFFF;
    PoolWithTag->ByteCount = PageInformationLength;
    MmProbeAndLockPages(PoolWithTag, AccessMode, IoReadAccess);
    v11 = (unsigned int)v34;
    v10 = BugCheckParameter1;
    LOBYTE(BufferSize) = AccessMode;
    v9 = v42;
  }
  if ( (v36[1] & 0xFFF) != 0 )
  {
    v18 = -1073741584;
    goto LABEL_22;
  }
  if ( (v9 & 0xFFF) != 0 )
  {
    v18 = -1073741582;
    goto LABEL_22;
  }
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( v10 == -1LL )
  {
    Object = CurrentThread->ApcState.Process;
  }
  else
  {
    v18 = ObpReferenceObjectByHandleWithTag(v10, 8, (__int64)PsProcessType, BufferSize, 0x6D566D4Du, &Object, 0LL, 0LL);
    v31 = v18;
    if ( v18 < 0 )
      goto LABEL_46;
  }
  KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v46);
  v32 = 1;
  v21 = MiObtainReferencedVadEx(*(unsigned __int64 *)&v36[1], 0, &v31);
  v22 = v21;
  if ( v21 && (*(_DWORD *)(v21 + 48) & 0x10000) != 0 )
  {
    v34 = (void *)v21;
    if ( (*(_DWORD *)(v21 + 64) & 1) != 0 )
    {
      if ( !v12 )
      {
        v26 = v42;
        if ( !v42 )
        {
          v18 = -1073741582;
          goto LABEL_37;
        }
        if ( !v11 )
        {
          KiUnstackDetachProcess((__int64)v46, 0LL);
          v24 = 0;
          v18 = MiCopyPagesIntoEnclave(
                  (_KPROCESS *)Object,
                  v22,
                  AccessMode,
                  *(__int64 *)&v36[1],
                  Src,
                  v26,
                  Protect,
                  v44,
                  v36);
          v31 = v18;
          v23 = v34;
          goto LABEL_48;
        }
      }
    }
    else if ( v12 )
    {
      v25 = PsReferencePrimaryToken(Process);
      v18 = MiLoadSectionIntoVsmEnclave(
              (__int64)Object,
              v22,
              v41,
              AccessMode,
              (__int64)v25,
              *(__int64 *)&v36[1],
              v12,
              &v43);
      v31 = v18;
      ObfDereferenceObject(v25);
      v23 = v34;
      goto LABEL_38;
    }
    v18 = -1073741820;
LABEL_37:
    v31 = v18;
    v23 = (void *)v21;
LABEL_38:
    v24 = v32;
    goto LABEL_48;
  }
  v18 = -1073741800;
  v31 = -1073741800;
  v24 = v32;
LABEL_47:
  v23 = 0LL;
LABEL_48:
  v27 = BugCheckParameter1;
  if ( v23 )
    MiUnlockAndDereferenceVad(v23, v13, (__int64)Buffer, BufferSize);
  if ( v24 )
    KiUnstackDetachProcess((__int64)v46, 0LL);
  if ( Object && v27 != -1LL )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  if ( v12 )
  {
    if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
      MmUnlockPages((PMDL)v12);
    ExFreePoolWithTag((PVOID)v12, 0);
  }
  v28 = (volatile signed __int32 *)v43;
  if ( v43 )
  {
    DbgkMapViewOfSection((_KPROCESS *)Object, 0LL, *(void **)(v43 + 16));
    MiDereferenceEnclaveModule(v28);
  }
  if ( NumberOfBytesWritten )
    *NumberOfBytesWritten = v44[0];
  if ( EnclaveError )
    *EnclaveError = v36[0];
  return v18;
}
