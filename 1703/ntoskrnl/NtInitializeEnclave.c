/*
 * XREFs of NtInitializeEnclave @ 0x1406BC21C
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
 *     MiInitializeEnclave @ 0x1406BBAD0 (MiInitializeEnclave.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  _OWORD *PoolWithTag; // rdi
  char PreviousMode; // r12
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  _OWORD *v12; // rax
  __int64 v13; // rcx
  PVOID v14; // rsi
  ULONG v16; // [rsp+48h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-A8h] BYREF
  _OWORD *v18; // [rsp+58h] [rbp-A0h]
  HANDLE v19; // [rsp+68h] [rbp-90h]
  PULONG v20; // [rsp+70h] [rbp-88h]
  $5BC46E0569261879018906DEC3127961 v21; // [rsp+80h] [rbp-78h] BYREF

  v19 = ProcessHandle;
  v20 = EnclaveError;
  Object = 0LL;
  v16 = 0;
  PoolWithTag = 0LL;
  v18 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( EnclaveError && PreviousMode == 1 )
  {
    v10 = (__int64)EnclaveError;
    if ( (unsigned __int64)EnclaveError >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v10 = *(_DWORD *)v10;
  }
  if ( EnclaveInformationLength == 4096 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x44456D4Du);
    v18 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( PreviousMode == 1 && ((unsigned __int8)EnclaveInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = PoolWithTag;
      v13 = 32LL;
      do
      {
        *v12 = *(_OWORD *)EnclaveInformation;
        v12[1] = *((_OWORD *)EnclaveInformation + 1);
        v12[2] = *((_OWORD *)EnclaveInformation + 2);
        v12[3] = *((_OWORD *)EnclaveInformation + 3);
        v12[4] = *((_OWORD *)EnclaveInformation + 4);
        v12[5] = *((_OWORD *)EnclaveInformation + 5);
        v12[6] = *((_OWORD *)EnclaveInformation + 6);
        v12 += 8;
        *(v12 - 1) = *((_OWORD *)EnclaveInformation + 7);
        EnclaveInformation = (char *)EnclaveInformation + 128;
        --v13;
      }
      while ( v13 );
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        Object = KeGetCurrentThread()->ApcState.Process;
      }
      else
      {
        v11 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)ProcessHandle,
                8,
                (__int64)PsProcessType,
                PreviousMode,
                1834380621,
                &Object,
                0LL,
                0LL);
        if ( v11 < 0 )
          goto LABEL_20;
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v21);
      }
      v11 = MiInitializeEnclave((unsigned __int64)BaseAddress, (__int64)PoolWithTag, &v16);
      goto LABEL_20;
    }
    v11 = -1073741670;
  }
  else
  {
    v11 = -1073741820;
  }
LABEL_20:
  v14 = Object;
  if ( Object && ProcessHandle != (HANDLE)-1LL )
  {
    KiUnstackDetachProcess(&v21, 0LL);
    ObfDereferenceObjectWithTag(v14, 0x6D566D4Du);
  }
  if ( EnclaveError )
    *EnclaveError = v16;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v11;
}
