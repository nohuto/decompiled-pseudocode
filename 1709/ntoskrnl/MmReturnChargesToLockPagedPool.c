/*
 * XREFs of MmReturnChargesToLockPagedPool @ 0x1406E3484
 * Callers:
 *     PopEnableHiberFile @ 0x1405AD8E0 (PopEnableHiberFile.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void __fastcall MmReturnChargesToLockPagedPool(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  char *AnyMultiplexedVm; // rax
  ULONG_PTR v6; // r8
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v7, 0, 0x20uLL);
  v4 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( (dword_140400104 & 2) == 0 )
  {
    MiGetPteAddress(a1);
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, v6, v4, 8, v7);
    MiReturnResidentAvailable(v4);
  }
}
