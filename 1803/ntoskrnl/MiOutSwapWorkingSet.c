/*
 * XREFs of MiOutSwapWorkingSet @ 0x140062EF0
 * Callers:
 *     MmOutSwapWorkingSet @ 0x140062868 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x14009C194 (MmOutSwapVirtualAddresses.c)
 *     MiOutSwapKernelStackPage @ 0x1400CBDA0 (MiOutSwapKernelStackPage.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiOutSwapWorkingSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v9; // zf
  __int64 SharedVm; // rbx
  KIRQL v11; // al
  __int64 v12; // rdx
  __int64 result; // rax
  _QWORD v14[22]; // [rsp+20h] [rbp-91h] BYREF

  memset(v14, 0, sizeof(v14));
  v9 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v14[19] = MiOutSwapWorkingSetPte;
  v14[3] = a1;
  v14[21] = a5;
  LODWORD(v14[0]) = 129;
  if ( v9 )
  {
    LODWORD(v14[0]) = 131;
    v14[4] = a3;
    v14[5] = a4;
    SharedVm = MiGetSharedVm(a1);
    v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v9 = (*(_DWORD *)(a2 + 48) & 0x20000000) == 0;
    BYTE4(v14[0]) = v11;
    if ( !v9 )
    {
      LOBYTE(v12) = v11;
      return MiUnlockWorkingSetExclusive(a1, v12);
    }
  }
  else
  {
    BYTE4(v14[0]) = 17;
  }
  result = MiWalkPageTables((int *)v14);
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return result;
  LOBYTE(v12) = BYTE4(v14[0]);
  return MiUnlockWorkingSetExclusive(a1, v12);
}
