/*
 * XREFs of MiInsertLargeVadMapping @ 0x140261C58
 * Callers:
 *     MiInPagePageTable @ 0x14003D3E0 (MiInPagePageTable.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 */

__int64 __fastcall MiInsertLargeVadMapping(unsigned __int64 a1, unsigned __int64 a2, int a3, unsigned __int64 *a4)
{
  _KPROCESS *Process; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  ULONG_PTR v13; // r9
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  LONG *SharedVm; // rax
  signed __int32 v19; // r10d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // r10d
  LONG *v24; // rax
  unsigned __int64 v25[3]; // [rsp+20h] [rbp-18h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !MiLockProtoPoolPage(a2, 0LL) )
    return 0LL;
  v10 = MI_READ_PTE_LOCK_FREE(a2);
  LOBYTE(v11) = 17;
  v25[0] = v10;
  MiUnlockProtoPoolPage(v13, v11, v12, v13);
  v14 = (unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v25) >> 12;
  v16 = 0xFFFFC0000LL;
  if ( a3 != 2 )
    v16 = 0xFFFFFFE00LL;
  v25[0] = MiMakeValidPte(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v16 & v14, (unsigned int)v15, v15);
  v17 = v25[0];
  if ( a3 != 1 )
  {
    SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
    if ( v19 != _InterlockedCompareExchange(SharedVm, 0x80000000, v19) )
      return 0LL;
    v17 = v25[0];
  }
  *a4 = v17;
  if ( MiPteInShadowRange((unsigned __int64)a4) )
    MiWritePteShadow(v21, v20, v22);
  if ( a3 != v23 )
  {
    v24 = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
    *v24 = v23;
  }
  return v23;
}
