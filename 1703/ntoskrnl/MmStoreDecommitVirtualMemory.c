/*
 * XREFs of MmStoreDecommitVirtualMemory @ 0x14003ACDC
 * Callers:
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x14001E728 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14024A718 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall MmStoreDecommitVirtualMemory(__int64 a1, __int64 a2)
{
  _KPROCESS *Process; // rbp
  __int64 SharedVm; // rbx
  int Address; // eax
  char v7; // r10
  __int64 v8; // rdx
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF

  memset(v10, 0, 0x20uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm(&Process[1].IdealNode[12]);
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  Address = MiLocateAddress(a1);
  LOBYTE(v8) = v7;
  LODWORD(SharedVm) = Address;
  MiUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v8);
  return MiDecommitPages(
           a1,
           (unsigned int)((unsigned __int64)(a1 + a2 - 1) >> 9) & 0xFFFFFFF8,
           (_DWORD)Process,
           SharedVm,
           0,
           (__int64)v10);
}
