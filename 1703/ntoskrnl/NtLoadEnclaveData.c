/*
 * XREFs of NtLoadEnclaveData @ 0x1406BC4E4
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCopyPagesIntoEnclave @ 0x1406BAD94 (MiCopyPagesIntoEnclave.c)
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
  char PreviousMode; // r15
  __int64 v14; // r8
  __int64 v15; // rcx
  NTSTATUS v16; // ebx
  __int64 v18; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20[3]; // [rsp+58h] [rbp-30h] BYREF

  v20[0] = 0LL;
  LODWORD(v18) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( EnclaveError )
    {
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)EnclaveError < 0x7FFFFFFF0000LL )
        v15 = (__int64)EnclaveError;
      *(_DWORD *)v15 = *(_DWORD *)v15;
    }
    if ( NumberOfBytesWritten )
    {
      if ( (unsigned __int64)NumberOfBytesWritten < 0x7FFFFFFF0000LL )
        v14 = (__int64)NumberOfBytesWritten;
      *(_QWORD *)v14 = *(_QWORD *)v14;
    }
  }
  if ( !BufferSize )
    goto LABEL_11;
  if ( ((unsigned __int16)BaseAddress & 0xFFF) != 0 )
  {
    v16 = -1073741584;
    goto LABEL_22;
  }
  if ( (BufferSize & 0xFFF) != 0 )
  {
LABEL_11:
    v16 = -1073741582;
    goto LABEL_22;
  }
  if ( PageInformationLength )
  {
    v16 = -1073741820;
    goto LABEL_22;
  }
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Object = KeGetCurrentThread()->ApcState.Process;
  }
  else
  {
    v16 = ObpReferenceObjectByHandleWithTag(
            (ULONG_PTR)ProcessHandle,
            8,
            (__int64)PsProcessType,
            PreviousMode,
            1834380621,
            &Object,
            0LL,
            0LL);
    if ( v16 < 0 )
      goto LABEL_22;
  }
  v16 = MiCopyPagesIntoEnclave(
          (_KPROCESS *)Object,
          PreviousMode,
          (unsigned __int64)BaseAddress,
          Buffer,
          BufferSize,
          Protect,
          v20,
          &v18);
  if ( ProcessHandle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
LABEL_22:
  if ( NumberOfBytesWritten )
    *NumberOfBytesWritten = v20[0];
  if ( EnclaveError )
    *EnclaveError = v18;
  return v16;
}
