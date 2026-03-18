/*
 * XREFs of MiLockControlAreaSectionExtend @ 0x14004CEC8
 * Callers:
 *     MmExtendSection @ 0x1404BDFD0 (MmExtendSection.c)
 * Callees:
 *     KeAbPreWait @ 0x140008A90 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     KeWaitForGate @ 0x140086DE8 (KeWaitForGate.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiLockControlAreaSectionExtend(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile LONG *v5; // r15
  _QWORD *v6; // r12
  __int64 v7; // rbp
  KIRQL v8; // al
  __int64 **v9; // rsi
  KIRQL v10; // r13
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(a2 + 8) == 16 )
    --CurrentThread->SpecialApcDisable;
  else
    --CurrentThread->KernelApcDisable;
  v5 = (volatile LONG *)(BugCheckParameter2 + 72);
  v6 = (_QWORD *)(a2 + 24);
  while ( 1 )
  {
    v7 = 0LL;
    v8 = ExAcquireSpinLockExclusive(v5);
    v9 = *(__int64 ***)(BugCheckParameter2 + 80);
    v10 = v8;
    if ( v9 )
    {
      do
      {
        if ( (*(_DWORD *)(a2 + 8) & (_DWORD)v9[1]) != 0 )
          break;
        v9 = (__int64 **)*v9;
      }
      while ( v9 );
      if ( v9 )
      {
        v13 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
        v7 = v13;
        if ( v13 )
          KeAbPreWait(v13);
      }
    }
    *(_DWORD *)(a2 + 20) = 0;
    *(_WORD *)(a2 + 16) = 263;
    *(_BYTE *)(a2 + 18) = 6;
    v6[1] = v6;
    *v6 = v6;
    *(_QWORD *)a2 = *(_QWORD *)(BugCheckParameter2 + 80);
    *(_QWORD *)(BugCheckParameter2 + 80) = a2;
    if ( !v9 )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    __writecr8(v10);
    KeWaitForGate(a2 + 16, 18LL);
    if ( v7 )
    {
      KeAbPreAcquire(BugCheckParameter2, v7, 0);
      KeAbPostReleaseEx(BugCheckParameter2);
    }
  }
  v11 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  result = v10;
  __writecr8(v10);
  return result;
}
