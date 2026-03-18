/*
 * XREFs of PsCreateMinimalProcess @ 0x14062C5DC
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14007DAD0 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     PspCreateProcess @ 0x1405E9350 (PspCreateProcess.c)
 *     CmpInitializeRegistryProcess @ 0x14062C3D8 (CmpInitializeRegistryProcess.c)
 *     PspCreatePicoProcess @ 0x14077DA50 (PspCreatePicoProcess.c)
 *     PspCreatePartitionSystemProcess @ 0x14077EB18 (PspCreatePartitionSystemProcess.c)
 *     VmCreateMemoryProcess @ 0x1407A0840 (VmCreateMemoryProcess.c)
 *     PspInitPhase1 @ 0x1408BC630 (PspInitPhase1.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     KeKvaShadowingActive @ 0x140040C88 (KeKvaShadowingActive.c)
 *     MiDeleteProcessShadow @ 0x1400704F8 (MiDeleteProcessShadow.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140105150 (SepDeleteAccessState.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PspCreateObjectHandle @ 0x1404B84AC (PspCreateObjectHandle.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     PspInsertProcess @ 0x1404EABB0 (PspInsertProcess.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     PspGetMemoryPartitionContext @ 0x1404F4070 (PspGetMemoryPartitionContext.c)
 *     PsAssignProcessToJobObject @ 0x140530390 (PsAssignProcessToJobObject.c)
 *     PspRundownSingleProcess @ 0x1405322EC (PspRundownSingleProcess.c)
 *     PsTerminateProcess @ 0x14057FB00 (PsTerminateProcess.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     DbgkCreateMinimalProcess @ 0x14062C8C8 (DbgkCreateMinimalProcess.c)
 *     PspSetMinimalProcessName @ 0x14062C920 (PspSetMinimalProcessName.c)
 */

__int64 __fastcall PsCreateMinimalProcess(
        struct _KPROCESS *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        PVOID Object,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10)
{
  ULONG_PTR v10; // rsi
  ULONG_PTR v12; // r15
  PACCESS_TOKEN v14; // r13
  char v15; // bl
  signed int MemoryPartitionContext; // r14d
  char v17; // r9
  struct _KPROCESS *v18; // rdi
  signed __int8 v19; // cf
  char v20; // al
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp-80h] BYREF
  __int64 v23; // [rsp+88h] [rbp-78h] BYREF
  PVOID v24; // [rsp+90h] [rbp-70h] BYREF
  struct _KPROCESS *v25; // [rsp+98h] [rbp-68h]
  __int64 v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-50h]
  _QWORD *v29; // [rsp+B8h] [rbp-48h]
  _BYTE v30[400]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v31[48]; // [rsp+250h] [rbp+150h] BYREF
  int v32; // [rsp+308h] [rbp+208h]

  v10 = 0LL;
  v24 = 0LL;
  v12 = a9;
  v14 = Object;
  v28 = a3;
  v26 = a2;
  v25 = a1;
  v23 = a9;
  v29 = a10;
  BugCheckParameter1 = 0LL;
  if ( !Object )
    v14 = PsReferencePrimaryToken(a1);
  v15 = Object != 0LL;
  v32 = a6 | 0x800;
  MemoryPartitionContext = PspGetMemoryPartitionContext((__int64)a1, v32, (__int64)&v23, a9 != 0, &v24);
  if ( MemoryPartitionContext >= 0 )
  {
    v17 = a4;
    v18 = v25;
    MemoryPartitionContext = PspAllocateProcess(
                               (__int64)v25,
                               0,
                               0LL,
                               v17,
                               0,
                               0,
                               0LL,
                               v14,
                               v32,
                               a7,
                               0LL,
                               Object != 0LL,
                               v24,
                               (__int64)&v27,
                               &BugCheckParameter1);
    if ( MemoryPartitionContext >= 0 )
    {
      v10 = BugCheckParameter1;
      if ( a8 )
        *(_QWORD *)(BugCheckParameter1 + 1808) = a8;
      if ( (*(_DWORD *)(v10 + 1740) & 1) != 0 && !*(_QWORD *)(v10 + 1808) && (unsigned int)KeKvaShadowingActive() )
      {
        *(_BYTE *)(v10 + 640) = 1;
        v19 = _interlockedbittestandset((volatile signed __int32 *)(v10 + 1740), 0xEu);
        v10 = BugCheckParameter1;
        if ( !v19 )
        {
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v31);
          if ( (PEPROCESS)v10 != PsInitialSystemProcess )
            MiDeleteProcessShadow(v10, 1);
          KiUnstackDetachProcess((__int64)v31, 0LL);
        }
        v12 = v23;
      }
      if ( v26 )
        PspSetMinimalProcessName(v10, v26);
      memset(v30, 0, sizeof(v30));
      v20 = 1;
      v30[388] = 0;
      if ( v27 )
        v20 = 3;
      MemoryPartitionContext = PspInsertProcess(
                                 (char *)v10,
                                 v18,
                                 0x2000000u,
                                 v32,
                                 0LL,
                                 v20,
                                 v28,
                                 (struct _ACCESS_STATE *)v30);
      if ( MemoryPartitionContext < 0 )
      {
        PspRundownSingleProcess(v10, 0);
      }
      else
      {
        v15 |= 4u;
        if ( !v12
          || (MemoryPartitionContext = PsAssignProcessToJobObject(v12, (PVOID)v10, 0LL), MemoryPartitionContext >= 0) )
        {
          DbgkCreateMinimalProcess((PVOID)v10);
          *(_DWORD *)&v30[384] |= 0x200u;
          v15 |= 2u;
          MemoryPartitionContext = PspCreateObjectHandle(
                                     (void *)v10,
                                     (__int64)v30,
                                     (struct _OBJECT_TYPE *)PsProcessType);
          if ( MemoryPartitionContext >= 0 )
          {
            v15 &= ~4u;
            *v29 = *(_QWORD *)&v30[392];
          }
        }
      }
    }
  }
  if ( (v15 & 2) != 0 )
  {
    SepDeleteAccessState((__int64)v30);
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v30[32]);
  }
  if ( v10 )
  {
    if ( (v15 & 4) != 0 )
      PsTerminateProcess(v10, MemoryPartitionContext);
    ObfDereferenceObjectWithTag((PVOID)v10, 0x72437350u);
  }
  if ( v24 )
    ObfDereferenceObjectWithTag(v24, 0x624A7350u);
  if ( (v15 & 1) == 0 )
    ObfDereferenceObject(v14);
  return (unsigned int)MemoryPartitionContext;
}
