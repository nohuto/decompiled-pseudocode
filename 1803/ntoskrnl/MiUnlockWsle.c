/*
 * XREFs of MiUnlockWsle @ 0x14004EB38
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiUnlockVa @ 0x14004EACC (MiUnlockVa.c)
 *     MiTerminateWsle @ 0x14012B31C (MiTerminateWsle.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableCharges @ 0x14004ECC4 (MiUnlockPageTableCharges.c)
 *     MiGetEffectivePagePriorityThread @ 0x14005605C (MiGetEffectivePagePriorityThread.c)
 *     MiSetVaAge @ 0x140125600 (MiSetVaAge.c)
 */

__int64 __fastcall MiUnlockWsle(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v7; // rdx
  unsigned int EffectivePagePriorityThread; // eax
  unsigned __int8 v9; // r9
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rbx

  v3 = *(_QWORD *)(a3 + 40);
  if ( (v3 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v14 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v3 >> 40) & 0x3FF));
    MiReturnCommit(v14, 1uLL);
    _InterlockedDecrement64((volatile signed __int64 *)(v14 + 7552));
  }
  MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread(), v7);
  v10 = v9;
  if ( EffectivePagePriorityThread < 5 )
    v10 = 7LL;
  MiSetVaAge(a1, a2, v10);
  result = 0xFFFF800000000000uLL;
  if ( a2 < 0xFFFF800000000000uLL )
  {
    v12 = *(_QWORD *)(a3 + 40);
    if ( (v12 & 0x200000000000000LL) != 0 )
      MiUnlockPageTableCharges(48 * (v12 & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v13 = MI_READ_PTE_LOCK_FREE(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    return MiUnlockPageTableCharges(48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  }
  return result;
}
