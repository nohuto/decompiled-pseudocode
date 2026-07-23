/*
 * XREFs of RtlpGuardGrantSuppressedCallAccess @ 0x1800015FC
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x180001594 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800F69A0 (RtlpHandleInvalidUserCallTarget.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800F6A00 (RtlpUnsuppressForwardReferencingCallTarget.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwSetInformationVirtualMemory @ 0x1800A3330 (ZwSetInformationVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpGuardGrantSuppressedCallAccess(__int64 a1, unsigned int a2)
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
