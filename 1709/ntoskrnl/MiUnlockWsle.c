/*
 * XREFs of MiUnlockWsle @ 0x14010C8E0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiTerminateWsle @ 0x140058F20 (MiTerminateWsle.c)
 *     MiUnlockVa @ 0x14010C884 (MiUnlockVa.c)
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x140028114 (MiGetEffectivePagePriorityThread.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiSetVaAge @ 0x14009E9C0 (MiSetVaAge.c)
 *     MiUnlockPageTableCharges @ 0x14010CA64 (MiUnlockPageTableCharges.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiUnlockWsle(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  unsigned int EffectivePagePriorityThread; // eax
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 result; // rax
  __int64 v16; // rax
  ULONG_PTR v17; // rax

  v3 = *(_QWORD *)(a3 + 40);
  if ( (v3 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 && (*(_BYTE *)(a1 + 192) & 7) == 0 )
  {
    v7 = *(_QWORD *)(qword_140388AF0 + 8 * ((v3 >> 40) & 0x3FF));
    MiReturnCommit(v7, 1uLL);
    _InterlockedDecrement64((volatile signed __int64 *)(v7 + 6464));
  }
  --*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  v8 = (_QWORD *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
    MiReadPteShadow(v8, *v8);
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
  v11 = v10;
  if ( EffectivePagePriorityThread < 5 )
    v11 = 7;
  MiSetVaAge(a1, a2, v11);
  result = 0xFFFF800000000000uLL;
  if ( a2 < 0xFFFF800000000000uLL )
  {
    v16 = *(_QWORD *)(a3 + 40);
    if ( (v16 & 0x200000000000000LL) != 0 )
      MiUnlockPageTableCharges(48 * (v16 & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v17 = MI_GET_PFN_FROM_PTE(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL, v12, v13, v14);
    return MiUnlockPageTableCharges(v17);
  }
  return result;
}
