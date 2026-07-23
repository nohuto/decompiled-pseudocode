/*
 * XREFs of PspCreateThread @ 0x1405410D4
 * Callers:
 *     NtCreateThreadEx @ 0x140541434 (NtCreateThreadEx.c)
 *     PsCreateSystemThreadEx @ 0x1405679C0 (PsCreateSystemThreadEx.c)
 *     NtCreateThread @ 0x1406DDE04 (NtCreateThread.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 *     PspInsertThread @ 0x1405408E4 (PspInsertThread.c)
 *     PspMapThreadCreationFlags @ 0x1405413F0 (PspMapThreadCreationFlags.c)
 */

__int64 __fastcall PspCreateThread(
        __int64 a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        struct _EX_RUNDOWN_REF *a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  struct _KTHREAD *CurrentThread; // r14
  char PreviousMode; // r12
  struct _EX_RUNDOWN_REF *v15; // rbx
  int v16; // edi
  __int64 result; // rax
  __int64 v18; // r15
  __int64 v19; // r15
  unsigned int inserted; // eax
  struct _EX_RUNDOWN_REF *v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // [rsp+30h] [rbp-D0h]
  __int64 v24; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID v25; // [rsp+70h] [rbp-90h] BYREF
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  __int64 v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  __int64 v29; // [rsp+90h] [rbp-70h]
  _KPROCESS *Process; // [rsp+98h] [rbp-68h]
  __int64 v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  __int64 v33; // [rsp+B0h] [rbp-50h]
  __int64 v34[3]; // [rsp+B8h] [rbp-48h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+D0h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v33 = a1;
  v27 = a6;
  v32 = a7;
  v29 = a9;
  v28 = a13;
  Process = CurrentThread->ApcState.Process;
  v31 = a3;
  HIDWORD(v24) = a2;
  if ( a8 )
    PreviousMode = CurrentThread->PreviousMode;
  else
    PreviousMode = 0;
  v25 = 0LL;
  v15 = 0LL;
  v16 = -1073741816;
  Object = 0LL;
  if ( a4 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a4,
               2,
               (__int64)PsProcessType,
               PreviousMode,
               1917023056,
               &Object,
               0LL,
               0LL);
    v15 = (struct _EX_RUNDOWN_REF *)Object;
    goto LABEL_5;
  }
  if ( a8 )
  {
    result = 3221225480LL;
LABEL_5:
    if ( (int)result < 0 )
      return result;
    goto LABEL_6;
  }
  ObfReferenceObjectWithTag(a5, 0x72437350u);
  v15 = a5;
LABEL_6:
  v18 = a11;
  if ( a11 && a8 )
    v18 = -(__int64)(v15[90].Count != 0) & a11;
  if ( !v27 && !v18 && ((HIDWORD(v15[96].Ptr) & 0x10) != 0 || (Process[1].DirectoryTableBase & 0x1000000000LL) != 0) )
    return 3221225506LL;
  if ( PreviousMode && (v15 == (struct _EX_RUNDOWN_REF *)PsInitialSystemProcess || (HIDWORD(v15[217].Ptr) & 1) != 0) )
  {
LABEL_29:
    ObfDereferenceObjectWithTag(v15, 0x72437350u);
    return (unsigned int)v16;
  }
  if ( (HIDWORD(v15[217].Ptr) & 1) != 0 && !v15[226].Count && a8 )
  {
    v16 = -1073741790;
    goto LABEL_29;
  }
  PspMapThreadCreationFlags(a10, &v24);
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(v15 + 95) )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v16 = -1073741558;
    goto LABEL_29;
  }
  ObfReferenceObjectWithTag(v15, 0x72437350u);
  v34[0] = v29;
  v23 = v18;
  v19 = v27;
  v16 = PspAllocateThread(
          (struct _KPROCESS *)v15,
          v31,
          PreviousMode,
          v27,
          a8,
          v34,
          v23,
          a12,
          (int *)&v24,
          &v25,
          (_BYTE *)v28,
          (__int64)&AccessState);
  if ( v16 < 0 )
  {
    ExReleaseRundownProtection(v15 + 95);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_29;
  }
  ObfDereferenceObjectWithTag(v15, 0x72437350u);
  inserted = PspInsertThread(
               v25,
               (PEPROCESS)v15,
               v29,
               &v24,
               HIDWORD(v24),
               (_BYTE *)v28,
               v19,
               a12,
               &AccessState,
               (PVOID *)v33,
               (_OWORD *)v32);
  v21 = v15 + 95;
  v22 = inserted;
  ExReleaseRundownProtection(v21);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  ObfDereferenceObject(v25);
  return v22;
}
