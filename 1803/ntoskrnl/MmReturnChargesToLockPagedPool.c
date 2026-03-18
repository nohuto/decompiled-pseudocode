/*
 * XREFs of MmReturnChargesToLockPagedPool @ 0x14074DB80
 * Callers:
 *     PopEnableHiberFile @ 0x140624E34 (PopEnableHiberFile.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

void __fastcall MmReturnChargesToLockPagedPool(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v6; // r8
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v7, 0, 0x20uLL);
  v4 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  MiGetPteAddress(a1);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, v6, v4, 8, v7);
  MiReturnResidentAvailable(v4);
}
