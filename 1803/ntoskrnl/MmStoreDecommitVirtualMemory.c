/*
 * XREFs of MmStoreDecommitVirtualMemory @ 0x1400CFD8C
 * Callers:
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x14009A2D4 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1402A399C (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MmStoreDecommitVirtualMemory(unsigned __int64 a1, __int64 a2)
{
  _KPROCESS *Process; // rbp
  unsigned __int64 Address; // rdi
  __int64 v6; // r8
  unsigned __int8 v7; // r10
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v9, 0, 0x20uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  MiLockWorkingSetShared((__int64)&Process[1].IdealNode[12]);
  Address = MiLocateAddress(a1);
  MiUnlockWorkingSetShared((__int64)&Process[1].IdealNode[12], v7, v6);
  return MiDecommitPages(
           a1,
           (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (__int64)Process,
           Address,
           0,
           v9);
}
