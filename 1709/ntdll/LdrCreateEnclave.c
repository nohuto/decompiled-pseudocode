/*
 * XREFs of LdrCreateEnclave @ 0x1800CFF70
 * Callers:
 *     <none>
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     ZwCreateEnclave @ 0x1800A14F0 (ZwCreateEnclave.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800D0568 (LdrpCreateSoftwareEnclave.c)
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
  int SoftwareEnclave; // ebx
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
  SoftwareEnclave = result;
  if ( result >= 0 )
  {
    if ( EnclaveType == 16 && (SoftwareEnclave = LdrpCreateSoftwareEnclave(BaseAddressa, Size), SoftwareEnclave < 0) )
      ZwFreeVirtualMemory(ProcessHandle, &BaseAddressa, 0LL, 0x8000u);
    else
      *BaseAddress = BaseAddressa;
    return SoftwareEnclave;
  }
  return result;
}
