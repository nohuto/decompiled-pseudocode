/*
 * XREFs of MiLockControlAreaSectionExtend @ 0x14005E338
 * Callers:
 *     MmExtendSection @ 0x140492D14 (MmExtendSection.c)
 * Callees:
 *     KeWaitForGate @ 0x140017A68 (KeWaitForGate.c)
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x1400FE240 (KeAbPreWait.c)
 */

__int64 __fastcall MiLockControlAreaSectionExtend(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // r12
  volatile LONG *v6; // r15
  _KLOCK_ENTRY *v7; // rbp
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
  v5 = (_QWORD *)(a2 + 24);
  v6 = (volatile LONG *)(BugCheckParameter2 + 72);
  while ( 1 )
  {
    v7 = 0LL;
    v8 = ExAcquireSpinLockExclusive(v6);
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
        v13 = KeAbPreAcquire(BugCheckParameter2, 0LL);
        v7 = (_KLOCK_ENTRY *)v13;
        if ( v13 )
          KeAbPreWait(v13);
      }
    }
    *(_DWORD *)(a2 + 20) = 0;
    *(_WORD *)(a2 + 16) = 263;
    *(_BYTE *)(a2 + 18) = 6;
    v5[1] = v5;
    *v5 = v5;
    *(_QWORD *)a2 = *(_QWORD *)(BugCheckParameter2 + 80);
    *(_QWORD *)(BugCheckParameter2 + 80) = a2;
    if ( !v9 )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    __writecr8(v10);
    KeWaitForGate(a2 + 16, 0x12u);
    if ( v7 )
    {
      KeAbPreAcquire(BugCheckParameter2, &v7->TreeNode);
      KeAbPostReleaseEx(BugCheckParameter2, v7);
    }
  }
  v11 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  result = v10;
  __writecr8(v10);
  return result;
}
