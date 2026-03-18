/*
 * XREFs of MiInitializeWorkingSetList @ 0x1400145B4
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14045E2B4 (MmInitializeProcessAddressSpace.c)
 *     MiInitializeSystemWorkingSetList @ 0x1405B471C (MiInitializeSystemWorkingSetList.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiAllocateWsle @ 0x140047A60 (MiAllocateWsle.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MiInitializeWorkingSetList(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  char v5; // al
  __int64 v6; // rax
  __int64 SharedVm; // rbx
  KIRQL v8; // al
  KIRQL v9; // bp
  int v10; // eax
  __int64 v11; // rdx
  _DWORD *v12; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v5 = a3 ^ *(_BYTE *)(a1 + 192);
  *(_QWORD *)(a1 + 16) = a2;
  LOBYTE(v6) = *(_BYTE *)(a1 + 192) ^ v5 & 7;
  *(_BYTE *)(a1 + 192) = v6;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
    if ( a3 == 1 )
    {
      *(_BYTE *)(a1 + 192) = v6 | 0x80;
      v6 = *(_QWORD *)(a1 + 112) + 6LL;
      *(_QWORD *)(a1 + 152) = v6;
    }
    else
    {
      *(_QWORD *)(a1 + 152) = a4;
    }
  }
  else
  {
    *(_QWORD *)(a1 - 360) = 1LL;
    SharedVm = MiGetSharedVm(a1);
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v9 = v8;
    v10 = MI_GET_PAGE_FRAME_FROM_PTE(0xFFFFF6FB7DBEDF68uLL);
    MiAllocateWsle(a1, 2109661032, 48 * v10, 0, ZeroPte, 0LL);
    LOBYTE(v11) = v9;
    MiPreUnlockWorkingSetExclusive(a1, v11);
    v12 = (_DWORD *)MiGetSharedVm(a1);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
    else
      *v12 = 0;
    LOBYTE(v6) = v9;
    __writecr8(v9);
  }
  return v6;
}
