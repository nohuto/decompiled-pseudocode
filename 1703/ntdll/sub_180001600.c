/*
 * XREFs of sub_180001600 @ 0x180001600
 * Callers:
 *     sub_18000159C @ 0x18000159C (sub_18000159C.c)
 *     sub_1800F5B30 @ 0x1800F5B30 (sub_1800F5B30.c)
 *     sub_1800F5B90 @ 0x1800F5B90 (sub_1800F5B90.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwSetInformationVirtualMemory @ 0x1800A8510 (ZwSetInformationVirtualMemory.c)
 */

NTSTATUS __fastcall sub_180001600(__int64 a1, unsigned int a2)
{
  char v3; // [rsp+30h] [rbp-50h] BYREF
  _DWORD VmInformation[2]; // [rsp+38h] [rbp-48h] BYREF
  char *v5; // [rsp+40h] [rbp-40h]
  _QWORD *v6; // [rsp+48h] [rbp-38h]
  _MEMORY_RANGE_ENTRY VirtualAddresses; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v8[2]; // [rsp+60h] [rbp-20h] BYREF

  VmInformation[1] = 0;
  VirtualAddresses.NumberOfBytes = 4096LL;
  VirtualAddresses.VirtualAddress = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  v8[1] = a2;
  v5 = &v3;
  v6 = v8;
  v8[0] = a1 & 0xFFF;
  VmInformation[0] = 1;
  return ZwSetInformationVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           VmCfgCallTargetInformation,
           1uLL,
           &VirtualAddresses,
           VmInformation,
           0x18u);
}
