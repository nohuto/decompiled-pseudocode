/*
 * XREFs of LdrCreateEnclave @ 0x1800C96A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 *     ZwCreateEnclave @ 0x18009BF10 (ZwCreateEnclave.c)
 *     sub_1800C9C98 @ 0x1800C9C98 (sub_1800C9C98.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl LdrCreateEnclave(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG Reserved,
        SIZE_T Size,
        SIZE_T InitialCommitment,
        ULONG EnclaveType,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  NTSTATUS result; // eax
  int v13; // ebx
  PVOID BaseAddressa; // [rsp+58h] [rbp-10h] BYREF

  BaseAddressa = *BaseAddress;
  result = ZwCreateEnclave(
             ProcessHandle,
             &BaseAddressa,
             *(ULONG_PTR *)&Reserved,
             Size,
             InitialCommitment,
             EnclaveType,
             EnclaveInformation,
             EnclaveInformationLength,
             EnclaveError);
  v13 = result;
  if ( result >= 0 )
  {
    if ( EnclaveType == 16 && (v13 = sub_1800C9C98(BaseAddressa, Size), v13 < 0) )
      ZwFreeVirtualMemory(ProcessHandle, &BaseAddressa, 0LL, 0x8000u);
    else
      *BaseAddress = BaseAddressa;
    return v13;
  }
  return result;
}
