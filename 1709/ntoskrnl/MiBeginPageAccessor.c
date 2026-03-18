/*
 * XREFs of MiBeginPageAccessor @ 0x1400C73E4
 * Callers:
 *     MiUnlinkNodeLargePage @ 0x1400C6570 (MiUnlinkNodeLargePage.c)
 *     MiGetSinglePageToZero @ 0x14022B680 (MiGetSinglePageToZero.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 */

__int64 __fastcall MiBeginPageAccessor(unsigned __int64 a1, __int64 a2)
{
  bool v3; // bl
  struct _KTHREAD *CurrentThread; // rsi
  bool v5; // zf
  _QWORD *v7; // rdx
  _QWORD *v8; // rax

  if ( (*(_BYTE *)(a2 + 34) & 8) != 0 )
    return 0LL;
  *(_QWORD *)(a1 + 24) = a2;
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 56) = CurrentThread;
  *(_BYTE *)(a2 + 34) |= 8u;
  *(_QWORD *)(a2 + 16) = a1;
  v5 = *(_BYTE *)(a1 + 69) == 1;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 68) = 0;
  if ( !v5 )
    return 1LL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140388A98);
  v7 = (_QWORD *)qword_140388AA0;
  if ( !qword_140388AA0 )
    goto LABEL_8;
  while ( (unsigned __int64)CurrentThread < v7[7] )
  {
    v8 = (_QWORD *)*v7;
    if ( !*v7 )
      goto LABEL_8;
LABEL_11:
    v7 = v8;
  }
  v8 = (_QWORD *)v7[1];
  if ( v8 )
    goto LABEL_11;
  v3 = 1;
LABEL_8:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140388AA0, (unsigned __int64)v7, v3, a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388A98);
  return 1LL;
}
