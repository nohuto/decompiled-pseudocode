/*
 * XREFs of MiUnlockWsle @ 0x140017528
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiRemoveMappedPtes @ 0x1400FD140 (MiRemoveMappedPtes.c)
 *     MiTerminateWsle @ 0x140105650 (MiTerminateWsle.c)
 *     MiUnlockVa @ 0x140134DC8 (MiUnlockVa.c)
 * Callees:
 *     MiUnlockPageTableCharges @ 0x14001769C (MiUnlockPageTableCharges.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiSetVaAge @ 0x1400FDA60 (MiSetVaAge.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400FE040 (MiGetEffectivePagePriorityThread.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiUnlockWsle(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int EffectivePagePriorityThread; // eax
  unsigned __int8 v12; // r9
  __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  v3 = *(_QWORD *)(a3 + 40);
  if ( (v3 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 && (*(_BYTE *)(a1 + 192) & 7) == 0 )
  {
    v7 = *(_QWORD *)(qword_14036C8F8 + 8 * ((v3 >> 40) & 0x3FF));
    MiReturnCommit(v7, 1LL);
    _InterlockedDecrement64((volatile signed __int64 *)(v7 + 6272));
  }
  --*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  v8 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  LOBYTE(v8) = (v8 & 0x20) == 0;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread(), v9, v10, v8);
  v13 = v12;
  if ( EffectivePagePriorityThread < 5 )
    v13 = 7LL;
  MiSetVaAge(a1, a2, v13);
  result = 0xFFFF800000000000uLL;
  if ( a2 < 0xFFFF800000000000uLL )
  {
    v15 = *(_QWORD *)(a3 + 40);
    if ( (v15 & 0x200000000000000LL) != 0 )
      MiUnlockPageTableCharges(48 * (v15 & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v16 = MI_GET_PAGE_FRAME_FROM_PTE(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    return MiUnlockPageTableCharges(48 * v16 - 0x58000000000LL);
  }
  return result;
}
