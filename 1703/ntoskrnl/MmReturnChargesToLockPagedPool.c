/*
 * XREFs of MmReturnChargesToLockPagedPool @ 0x1406B694C
 * Callers:
 *     PopEnableHiberFile @ 0x1405A92A4 (PopEnableHiberFile.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     memset @ 0x140192D80 (memset.c)
 */

void __fastcall MmReturnChargesToLockPagedPool(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  char *AnyMultiplexedVm; // rax
  ULONG_PTR v6; // r8
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v7, 0, 0x20uLL);
  v4 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( (dword_1403E3104 & 2) == 0 )
  {
    MiGetPteAddress(a1);
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, v6, v4, 8, v7);
    MiReturnResidentAvailable(v4);
  }
}
