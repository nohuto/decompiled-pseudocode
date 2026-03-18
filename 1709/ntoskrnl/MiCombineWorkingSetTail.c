/*
 * XREFs of MiCombineWorkingSetTail @ 0x140123C30
 * Callers:
 *     MiCombinePte @ 0x14009F2D0 (MiCombinePte.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiProcessCrcList @ 0x14053FBA0 (MiProcessCrcList.c)
 */

__int64 __fastcall MiCombineWorkingSetTail(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rbx
  LONG *SharedVm; // rbx

  v2 = *(_QWORD **)(a1 + 144);
  if ( v2[1] )
  {
    v4 = *(_QWORD *)(a1 + 8);
    LOBYTE(a2) = *(_BYTE *)(a1 + 4);
    MiUnlockWorkingSetExclusive(v4, a2);
    MiProcessCrcList(
      v2[3],
      v2[4],
      v2[1],
      *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL));
    v2[1] = 0LL;
    SharedVm = MiGetSharedVm(v4);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  return 0LL;
}
