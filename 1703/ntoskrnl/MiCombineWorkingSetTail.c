/*
 * XREFs of MiCombineWorkingSetTail @ 0x140078A40
 * Callers:
 *     MiCombinePte @ 0x14008AB80 (MiCombinePte.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiProcessCrcList @ 0x1404C89E0 (MiProcessCrcList.c)
 */

void __fastcall MiCombineWorkingSetTail(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 SharedVm; // rbx

  v2 = *(_QWORD **)(a1 + 136);
  if ( v2[1] )
  {
    v3 = *(_QWORD *)(a1 + 8);
    LOBYTE(a2) = *(_BYTE *)(a1 + 4);
    MiUnlockWorkingSetExclusive(v3, a2);
    MiProcessCrcList(
      v2[3],
      v2[4],
      v2[1],
      *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL));
    v2[1] = 0LL;
    SharedVm = MiGetSharedVm(v3);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
  }
}
