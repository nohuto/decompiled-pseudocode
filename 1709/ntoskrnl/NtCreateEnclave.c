/*
 * XREFs of NtCreateEnclave @ 0x1406E9454
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     ExSystemExceptionFilter @ 0x140515700 (ExSystemExceptionFilter.c)
 *     MiValidateZeroBits @ 0x1406E0DA4 (MiValidateZeroBits.c)
 *     MiCreateEnclave @ 0x1406E8210 (MiCreateEnclave.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtCreateEnclave(
        ULONG_PTR a1,
        unsigned __int64 *a2,
        ULONGLONG a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        char *Src,
        unsigned int a8,
        _DWORD *a9)
{
  PVOID PoolWithTag; // r14
  char PreviousMode; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  int Enclave; // ebx
  int v15; // ebx
  char v16; // dl
  __int64 v17; // rcx
  void *Process; // rdi
  char v20; // [rsp+50h] [rbp-C8h]
  _DWORD Size_4[3]; // [rsp+64h] [rbp-B4h] BYREF
  unsigned __int64 v23[2]; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp-98h]
  ULONGLONG v25[2]; // [rsp+88h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+98h] [rbp-80h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v27; // [rsp+A0h] [rbp-78h] BYREF

  v24 = a4;
  v25[1] = (ULONGLONG)a2;
  v25[0] = a3;
  v23[1] = (unsigned __int64)a9;
  v23[0] = 0LL;
  PoolWithTag = 0LL;
  memset(Size_4, 0, sizeof(Size_4));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v20 = PreviousMode;
  if ( a9 && PreviousMode == 1 )
  {
    v12 = (__int64)a9;
    if ( (unsigned __int64)a9 >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
  }
  if ( a6 == 1 )
  {
    if ( qword_1403885E8 )
    {
      v15 = 4096;
      v13 = a5;
      goto LABEL_16;
    }
LABEL_14:
    Enclave = -1073741637;
    goto LABEL_47;
  }
  if ( a6 != 16 )
    goto LABEL_14;
  v13 = a5;
  if ( a5 )
  {
LABEL_9:
    Enclave = -1073741581;
    goto LABEL_47;
  }
  if ( a8 > 0x24 )
    goto LABEL_11;
  v15 = 0;
LABEL_16:
  if ( (int)MiValidateZeroBits(v25) < 0 )
  {
    Enclave = -1073741583;
    goto LABEL_47;
  }
  if ( !v24 )
  {
    Enclave = -1073741582;
    goto LABEL_47;
  }
  if ( v13 > v24 )
    goto LABEL_9;
  v16 = v20;
  if ( v20 == 1 )
  {
    v17 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v17 = *(_QWORD *)v17;
  }
  v23[0] = *a2;
  if ( a8 )
  {
    if ( v15 && a8 != v15 )
    {
LABEL_11:
      Enclave = -1073741820;
      goto LABEL_47;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (a8 + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x44456D4Du);
    *(_QWORD *)&Size_4[1] = PoolWithTag;
    if ( !PoolWithTag )
    {
      Enclave = -1073741670;
      goto LABEL_47;
    }
    if ( v20 == 1 )
    {
      if ( (unsigned __int64)a8 - 1 > 0xFFFE )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Src[a8] > 0x7FFFFFFF0000LL || &Src[a8] < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else if ( ((unsigned __int8)Src & 3) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
    }
    memmove(PoolWithTag, Src, a8);
    v16 = v20;
  }
  if ( a1 == -1LL )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
  }
  else
  {
    Enclave = ObpReferenceObjectByHandleWithTag(
                a1,
                8,
                (__int64)PsProcessType,
                v16,
                1834380621,
                &BugCheckParameter1,
                0LL,
                0LL);
    if ( Enclave < 0 )
      goto LABEL_47;
    Process = (void *)BugCheckParameter1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v27);
  }
  Enclave = MiCreateEnclave((__int64)Process, v23, v25[0], v24, v13, a6, (__int64)PoolWithTag, a8, (__int64)Size_4);
  if ( a1 != -1LL )
  {
    KiUnstackDetachProcess(&v27, 0LL);
    ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
  }
LABEL_47:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( Enclave >= 0 )
    *a2 = v23[0];
  if ( a9 )
    *a9 = Size_4[0];
  return (unsigned int)Enclave;
}
