/*
 * XREFs of PsQueryProcessExceptionFlags @ 0x14077A050
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall PsQueryProcessExceptionFlags(ULONG_PTR BugCheckParameter1, int a2, int *a3)
{
  int v5; // ebx
  int v6; // r12d
  __int64 v7; // rax
  __int16 v8; // cx
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v10; // esi
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int16 v14; // dx
  int v15; // r14d
  char v16; // [rsp+20h] [rbp-98h]
  _BYTE v18[48]; // [rsp+50h] [rbp-68h] BYREF

  v16 = 0;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  v5 = 0;
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
    v10 = 0;
    if ( CurrentThread->Process != (_KPROCESS *)BugCheckParameter1 )
    {
      v16 = 2;
      v10 = 2;
    }
  }
  else
  {
    v10 = 3;
    v16 = 3;
  }
  if ( v10 < 2
    || (--CurrentThread->KernelApcDisable, ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760))) )
  {
    if ( (v10 & 1) != 0 )
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v18);
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
    if ( (v16 & 1) != 0 )
      KiUnstackDetachProcess((__int64)v18, 0LL);
    if ( (v16 & 2) != 0 )
    {
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    *a3 = 0;
    if ( (v15 & 4) != 0 )
    {
      *a3 = 1;
      v5 = 1;
    }
    if ( (v15 & 8) != 0 )
      *a3 = v5 | 2;
    return 0LL;
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return 3221225738LL;
  }
}
