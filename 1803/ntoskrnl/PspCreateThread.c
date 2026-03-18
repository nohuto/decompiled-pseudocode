/*
 * XREFs of PspCreateThread @ 0x1404B98F8
 * Callers:
 *     NtCreateThreadEx @ 0x1404B9CEC (NtCreateThreadEx.c)
 *     PsCreateSystemThreadEx @ 0x14052AC40 (PsCreateSystemThreadEx.c)
 *     NtCreateThread @ 0x1407784BC (NtCreateThread.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     PspIsProcessReadyForRemoteThread @ 0x1400C9B1C (PspIsProcessReadyForRemoteThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PspInsertThread @ 0x1404B7C74 (PspInsertThread.c)
 *     PspMapThreadCreationFlags @ 0x1404B9C30 (PspMapThreadCreationFlags.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 */

__int64 __fastcall PspCreateThread(
        __int64 a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        _KPROCESS *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r12
  char PreviousMode; // cl
  _KPROCESS *v16; // rbx
  int Thread; // edi
  __int64 result; // rax
  __int64 v19; // r12
  __int64 v20; // r12
  unsigned int inserted; // eax
  struct _EX_RUNDOWN_REF *p_Blink; // rcx
  unsigned int v23; // ebx
  int v24; // eax
  __int64 v25; // [rsp+30h] [rbp-D0h]
  char v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID v28; // [rsp+70h] [rbp-90h] BYREF
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  __int64 v30; // [rsp+80h] [rbp-80h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h]
  _KPROCESS *v33; // [rsp+98h] [rbp-68h]
  __int64 v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  __int64 v36; // [rsp+B0h] [rbp-50h]
  __int64 v37[3]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v38[50]; // [rsp+D0h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v36 = a1;
  Process = CurrentThread->ApcState.Process;
  v30 = a6;
  v35 = a7;
  v32 = a9;
  v31 = a13;
  v34 = a3;
  HIDWORD(v27) = a2;
  v33 = Process;
  if ( a8 )
    PreviousMode = CurrentThread->PreviousMode;
  else
    PreviousMode = 0;
  v28 = 0LL;
  v16 = 0LL;
  v26 = PreviousMode;
  Thread = -1073741816;
  Object = 0LL;
  if ( a4 )
  {
    result = ObpReferenceObjectByHandleWithTag(a4, 0x72437350u, (__int64)&Object, 0LL, 0LL);
    v16 = (_KPROCESS *)Object;
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
  v16 = a5;
LABEL_6:
  if ( v16 != Process && !PspIsProcessReadyForRemoteThread((__int64)v16) )
    return 3221225473LL;
  v19 = a11;
  if ( a11 && a8 )
    v19 = -(__int64)((v16->SecureState.SecureHandle & 1) != 0) & a11;
  if ( !v30 && !v19 && ((v16[2].UserDirectoryTableBase & 1) != 0 || (v33[2].UserDirectoryTableBase & 1) != 0) )
    return 3221225506LL;
  if ( v26 )
  {
    v24 = HIDWORD(v16[2].ActiveProcessors.Bitmap[0]);
    if ( (v24 & 0x1000) != 0 || (v24 & 1) != 0 )
    {
LABEL_31:
      ObfDereferenceObjectWithTag(v16, 0x72437350u);
      return (unsigned int)Thread;
    }
  }
  if ( (v16[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) != 0 && !v16[2].ActiveProcessors.Bitmap[9] && a8 )
  {
    Thread = -1073741790;
    goto LABEL_31;
  }
  PspMapThreadCreationFlags(a10, &v27);
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&v16[1].ProfileListHead.Blink) )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    Thread = -1073741558;
    goto LABEL_31;
  }
  ObfReferenceObjectWithTag(v16, 0x72437350u);
  v37[0] = v32;
  v25 = v19;
  v20 = v30;
  Thread = PspAllocateThread(
             (ULONG_PTR)v16,
             a8,
             (__int64)v37,
             v25,
             a12,
             (__int64)&v27,
             (__int64)&v28,
             v31,
             (__int64)v38);
  if ( Thread < 0 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&v16[1].ProfileListHead.Blink);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_31;
  }
  ObfDereferenceObjectWithTag(v16, 0x72437350u);
  inserted = PspInsertThread(
               (ULONG_PTR)v28,
               (__int64)v16,
               v32,
               &v27,
               SHIDWORD(v27),
               (_BYTE *)v31,
               v20,
               a12,
               (__int64)v38,
               (_QWORD *)v36,
               (_OWORD *)v35);
  p_Blink = (struct _EX_RUNDOWN_REF *)&v16[1].ProfileListHead.Blink;
  v23 = inserted;
  ExReleaseRundownProtection(p_Blink);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  ObfDereferenceObject(v28);
  return v23;
}
