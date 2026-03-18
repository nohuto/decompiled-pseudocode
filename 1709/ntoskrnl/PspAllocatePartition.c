/*
 * XREFs of PspAllocatePartition @ 0x1405E9330
 * Callers:
 *     NtCreatePartition @ 0x14071ADC8 (NtCreatePartition.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140852E58 (PspInitializeSystemPartitionPhase0.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     PspAddPartitionToGlobalList @ 0x140158798 (PspAddPartitionToGlobalList.c)
 *     MmCreatePartition @ 0x140158808 (MmCreatePartition.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     ExpPartitionStart @ 0x1405DDBA0 (ExpPartitionStart.c)
 *     ExpPartitionInitialize @ 0x1405DDCC4 (ExpPartitionInitialize.c)
 *     PspCreatePartitionSystemProcess @ 0x14071B048 (PspCreatePartitionSystemProcess.c)
 */

__int64 __fastcall PspAllocatePartition(
        __int64 a1,
        ACCESS_MASK a2,
        char a3,
        __int64 a4,
        char a5,
        volatile signed __int64 **a6,
        __int64 *a7)
{
  char v8; // si
  int PartitionSystemProcess; // edi
  volatile signed __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 v13; // rax
  signed __int64 v14; // rax
  bool v15; // cc
  signed __int64 v16; // rax
  __int64 v17; // [rsp+20h] [rbp-71h]
  PVOID Object; // [rsp+50h] [rbp-41h] BYREF
  ACCESS_MASK v19; // [rsp+58h] [rbp-39h]
  __int64 v20; // [rsp+60h] [rbp-31h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v21; // [rsp+68h] [rbp-29h] BYREF

  v19 = a2;
  v8 = 0;
  Object = 0LL;
  PartitionSystemProcess = ObCreateObjectEx(a3, PsPartitionType, a1, a3, v17, 128, 0, 0, &Object, 0LL);
  if ( PartitionSystemProcess < 0 )
  {
    v10 = (volatile signed __int64 *)Object;
    goto LABEL_8;
  }
  v8 = 1;
  v10 = (volatile signed __int64 *)Object;
  memset(Object, 0, 0x80uLL);
  *((_QWORD *)v10 + 3) = 2LL;
  ObfReferenceObjectWithTag((PVOID)v10, 0x64726148u);
  *((_QWORD *)v10 + 4) = 1LL;
  *((_QWORD *)v10 + 12) = 0LL;
  if ( a4 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(a4 + 24)) <= 1 )
      __fastfail(0xEu);
    v10 = (volatile signed __int64 *)Object;
    *((_QWORD *)Object + 7) = a4;
LABEL_16:
    if ( !a5 )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v21);
      PartitionSystemProcess = PspCreatePartitionSystemProcess(v10 + 13, v10 + 14);
      KiUnstackDetachProcess(&v21, 0LL);
      if ( PartitionSystemProcess < 0 )
        goto LABEL_8;
      PartitionSystemProcess = ExpPartitionInitialize((__int64)v10);
      if ( PartitionSystemProcess < 0 )
        goto LABEL_8;
    }
    goto LABEL_4;
  }
  if ( !a5 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)PspSystemPartition + 3) <= 1 )
      __fastfail(0xEu);
    v10 = (volatile signed __int64 *)Object;
    *((_QWORD *)Object + 7) = PspSystemPartition;
    goto LABEL_16;
  }
LABEL_4:
  LOBYTE(v11) = a5;
  PartitionSystemProcess = MmCreatePartition(v10, v11);
  if ( PartitionSystemProcess < 0 )
    goto LABEL_8;
  PspAddPartitionToGlobalList((__int64)v10);
  if ( a5 )
  {
    *((_DWORD *)v10 + 30) |= 1u;
    *a6 = v10;
    v10 = 0LL;
    Object = 0LL;
LABEL_7:
    PartitionSystemProcess = 0;
    goto LABEL_8;
  }
  PartitionSystemProcess = ExpPartitionStart(*((_QWORD *)v10 + 2));
  if ( PartitionSystemProcess >= 0 )
  {
    v8 = 0;
    PartitionSystemProcess = ObInsertObjectEx(v10, 0LL, v19, 0, 0, 0LL, (unsigned __int64 *)&v20);
    if ( PartitionSystemProcess >= 0 )
    {
      v13 = v20;
      *a6 = v10;
      *a7 = v13;
      goto LABEL_7;
    }
  }
LABEL_8:
  if ( v10 )
  {
    if ( v8 )
      ObfDereferenceObject((PVOID)v10);
    v14 = _InterlockedExchangeAdd64(v10 + 4, 0xFFFFFFFFFFFFFFFFuLL);
    v15 = v14 <= 1;
    v16 = v14 - 1;
    if ( v15 )
    {
      if ( v16 )
        __fastfail(0xEu);
      PsDereferencePartition((__int64)Object);
    }
    if ( PartitionSystemProcess < 0 )
      PsDereferencePartition((__int64)Object);
  }
  return (unsigned int)PartitionSystemProcess;
}
