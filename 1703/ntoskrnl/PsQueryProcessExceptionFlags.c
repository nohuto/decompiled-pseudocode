/*
 * XREFs of PsQueryProcessExceptionFlags @ 0x1406DFA40
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall PsQueryProcessExceptionFlags(ULONG_PTR BugCheckParameter1, int a2, int *a3)
{
  int v6; // r14d
  __int64 v7; // rax
  __int16 v8; // cx
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v10; // ebx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int16 v13; // dx
  int *v14; // rax
  __int64 v15; // rcx
  __int16 v16; // dx
  int v17; // r14d
  int v18; // ecx
  $5BC46E0569261879018906DEC3127961 v19; // [rsp+48h] [rbp-60h] BYREF

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
    v10 = 0;
    if ( CurrentThread->Process != (_KPROCESS *)BugCheckParameter1 )
      v10 = 2;
    if ( v10 < 2 )
      goto LABEL_16;
  }
  else
  {
    v10 = 3;
  }
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    return 3221225738LL;
  }
LABEL_16:
  if ( (v10 & 1) != 0 )
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v19);
  if ( v6 )
  {
    v11 = *(__int64 **)(BugCheckParameter1 + 1064);
    if ( v11 && *((_WORD *)v11 + 4) == 0x8664 )
    {
      v12 = 0LL;
      v13 = *((_WORD *)v11 + 4);
      if ( v13 == 332 || v13 == 452 )
        v12 = *v11;
      v14 = (int *)(v12 + 80);
    }
    else
    {
      v15 = 0LL;
      if ( v11 )
      {
        v16 = *((_WORD *)v11 + 4);
        if ( v16 == 332 || v16 == 452 )
          v15 = *v11;
      }
      v14 = (int *)(v15 + 40);
    }
  }
  else
  {
    v14 = (int *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 80LL);
  }
  v17 = *v14;
  if ( (v10 & 1) != 0 )
    KiUnstackDetachProcess(&v19, 0LL);
  if ( v10 >= 2 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  *a3 = 0;
  v18 = *a3;
  if ( (v17 & 4) != 0 )
    v18 = 1;
  *a3 = v18;
  if ( (v17 & 8) != 0 )
    *a3 |= 2u;
  return 0LL;
}
