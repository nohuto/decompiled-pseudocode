/*
 * XREFs of PsQueryProcessExceptionFlags @ 0x140715EC0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall PsQueryProcessExceptionFlags(ULONG_PTR BugCheckParameter1, int a2, int *a3)
{
  int v6; // r14d
  __int64 v7; // rax
  __int16 v8; // cx
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v10; // ebx
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int16 v14; // dx
  int v15; // r14d
  int v16; // ecx
  $709EDFC2F9E0D4565D6AA3C4377BC643 v17; // [rsp+48h] [rbp-60h] BYREF

  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  if ( !*(_QWORD *)(BugCheckParameter1 + 1016) )
    return 3221225711LL;
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 )
  {
    v7 = *(_QWORD *)(BugCheckParameter1 + 1064);
    if ( !v7 )
      return 3221225711LL;
    v8 = *(_WORD *)(v7 + 8);
    if ( v8 != 332 && v8 != 452 )
      return 3221225711LL;
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v10 = (_KPROCESS *)BugCheckParameter1 != CurrentThread->Process ? 2 : 0;
    if ( CurrentThread->Process == (_KPROCESS *)BugCheckParameter1 )
      goto LABEL_14;
  }
  else
  {
    v10 = 3;
  }
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return 3221225738LL;
  }
LABEL_14:
  if ( (v10 & 1) != 0 )
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v17);
  if ( v6 )
  {
    v11 = *(__int64 **)(BugCheckParameter1 + 1064);
    if ( v11 && *((_WORD *)v11 + 4) == 0x8664 )
    {
      v12 = 80LL;
    }
    else
    {
      v13 = 0LL;
      if ( v11 )
      {
        v14 = *((_WORD *)v11 + 4);
        if ( v14 == 332 || v14 == 452 )
          v13 = *v11;
      }
      v12 = v13 + 40;
    }
  }
  else
  {
    v12 = *(_QWORD *)(BugCheckParameter1 + 1016) + 80LL;
  }
  v15 = *(_DWORD *)v12;
  if ( (v10 & 1) != 0 )
    KiUnstackDetachProcess(&v17, 0LL);
  if ( v10 >= 2 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  *a3 = 0;
  v16 = *a3;
  if ( (v15 & 4) != 0 )
    v16 = 1;
  *a3 = v16;
  if ( (v15 & 8) != 0 )
    *a3 |= 2u;
  return 0LL;
}
