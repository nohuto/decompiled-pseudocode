/*
 * XREFs of MmStoreDecommitVirtualMemory @ 0x14022D870
 * Callers:
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x1402690C8 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14026AAE0 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall MmStoreDecommitVirtualMemory(unsigned __int64 a1, __int64 a2)
{
  _KPROCESS *Process; // rbp
  LONG *SharedVm; // rbx
  unsigned __int64 Address; // rax
  char v7; // r10
  __int64 v8; // rdx
  __int64 v9; // rbx
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v11, 0, 0x20uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  Address = MiLocateAddress(a1);
  LOBYTE(v8) = v7;
  v9 = Address;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v8);
  return MiDecommitPages(a1, (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (__int64)Process, v9, 0, v11);
}
