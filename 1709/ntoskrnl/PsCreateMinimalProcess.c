/*
 * XREFs of PsCreateMinimalProcess @ 0x140719A94
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140005AC8 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     PspCreateProcess @ 0x140599DF0 (PspCreateProcess.c)
 *     PspCreatePicoProcess @ 0x140719FC0 (PspCreatePicoProcess.c)
 *     PspCreatePartitionSystemProcess @ 0x14071B048 (PspCreatePartitionSystemProcess.c)
 *     VmCreateMemoryProcess @ 0x14073D6C0 (VmCreateMemoryProcess.c)
 *     PspInitPhase1 @ 0x14084A9B0 (PspInitPhase1.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeUnstackDetachProcess @ 0x1400BD880 (KeUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1400BD8C0 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeKvaShadowingActive @ 0x14017B418 (KeKvaShadowingActive.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MmSynchronizeAddressPolicy @ 0x14043D634 (MmSynchronizeAddressPolicy.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     PspCreateObjectHandle @ 0x1404D5D14 (PspCreateObjectHandle.c)
 *     PspRundownSingleProcess @ 0x1404DAA68 (PspRundownSingleProcess.c)
 *     PsAssignProcessToJobObject @ 0x14050BD70 (PsAssignProcessToJobObject.c)
 *     PspInsertProcess @ 0x140539300 (PspInsertProcess.c)
 *     PspGetMemoryPartitionContext @ 0x14053AF58 (PspGetMemoryPartitionContext.c)
 *     PsTerminateProcess @ 0x140596078 (PsTerminateProcess.c)
 *     DbgkCreateMinimalProcess @ 0x1406ACAD0 (DbgkCreateMinimalProcess.c)
 *     PspSetMinimalProcessName @ 0x14071A600 (PspSetMinimalProcessName.c)
 */

__int64 __fastcall PsCreateMinimalProcess(
        struct _KPROCESS *a1,
        __int64 a2,
        char a3,
        void *a4,
        int a5,
        int a6,
        unsigned __int64 a7,
        ULONG_PTR a8,
        _QWORD *a9)
{
  ULONG_PTR v9; // r15
  unsigned int v10; // ebx
  PRKPROCESS v11; // rsi
  PACCESS_TOKEN v12; // r12
  signed int MemoryPartitionContext; // r14d
  signed __int8 v16; // cf
  char v17; // al
  PRKPROCESS PROCESS; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR v20; // [rsp+88h] [rbp-78h] BYREF
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  __int64 v22; // [rsp+98h] [rbp-68h]
  int v23; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v24; // [rsp+A8h] [rbp-58h]
  _BYTE AccessState[400]; // [rsp+B0h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+240h] [rbp+140h] BYREF
  int v27; // [rsp+2F0h] [rbp+1F0h]

  v9 = a8;
  v10 = 0;
  Object = 0LL;
  v11 = 0LL;
  v12 = a4;
  v22 = a2;
  v20 = a8;
  v24 = a9;
  PROCESS = 0LL;
  if ( a4 )
    v10 = 1;
  else
    v12 = PsReferencePrimaryToken(a1);
  v27 = a5 | 0x800;
  MemoryPartitionContext = PspGetMemoryPartitionContext((__int64)a1, v27, (__int64)&v20, a8 != 0, &Object);
  if ( MemoryPartitionContext >= 0 )
  {
    MemoryPartitionContext = PspAllocateProcess(
                               (__int64)a1,
                               0,
                               0LL,
                               a3,
                               0,
                               0,
                               0LL,
                               v12,
                               v27,
                               a6,
                               0LL,
                               v10,
                               (char *)Object,
                               (__int64)&v23,
                               &PROCESS);
    if ( MemoryPartitionContext >= 0 )
    {
      v11 = PROCESS;
      if ( a7 )
        PROCESS[2].ActiveProcessors.Bitmap[9] = a7;
      if ( (v11[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) != 0
        && !v11[2].ActiveProcessors.Bitmap[9]
        && (unsigned int)KeKvaShadowingActive() )
      {
        v11->AddressPolicy = 1;
        v16 = _interlockedbittestandset((volatile signed __int32 *)v11[2].ActiveProcessors.Bitmap + 1, 0xEu);
        v11 = PROCESS;
        if ( !v16 )
        {
          KeStackAttachProcess(PROCESS, &ApcState);
          MmSynchronizeAddressPolicy(v11);
          KeUnstackDetachProcess(&ApcState);
        }
        v9 = v20;
      }
      if ( v22 )
        PspSetMinimalProcessName(v11, v22);
      memset(AccessState, 0, sizeof(AccessState));
      v17 = 1;
      AccessState[388] = 0;
      if ( v23 )
        v17 = 3;
      MemoryPartitionContext = PspInsertProcess(
                                 (char *)v11,
                                 (__int64)a1,
                                 0x2000000u,
                                 v27,
                                 0LL,
                                 v17,
                                 0LL,
                                 (PACCESS_STATE)AccessState);
      if ( MemoryPartitionContext >= 0 )
      {
        v10 |= 4u;
        if ( !v9 || (MemoryPartitionContext = PsAssignProcessToJobObject(v9, v11, 0LL), MemoryPartitionContext >= 0) )
        {
          DbgkCreateMinimalProcess(v11);
          *(_DWORD *)&AccessState[384] |= 0x200u;
          v10 |= 2u;
          MemoryPartitionContext = PspCreateObjectHandle(
                                     v11,
                                     (__int64)AccessState,
                                     (struct _OBJECT_TYPE *)PsProcessType);
          if ( MemoryPartitionContext >= 0 )
          {
            v10 &= ~4u;
            *v24 = *(_QWORD *)&AccessState[392];
          }
        }
      }
      else
      {
        PspRundownSingleProcess((ULONG_PTR)v11, 0);
      }
    }
  }
  if ( (v10 & 2) != 0 )
  {
    SepDeleteAccessState((__int64)AccessState);
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&AccessState[32]);
  }
  if ( v11 )
  {
    if ( v10 >= 4 )
      PsTerminateProcess((ULONG_PTR)v11, MemoryPartitionContext);
    ObfDereferenceObjectWithTag(v11, 0x72437350u);
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( (v10 & 1) == 0 )
    ObfDereferenceObject(v12);
  return (unsigned int)MemoryPartitionContext;
}
