/*
 * XREFs of ZwFreeVirtualMemory @ 0x18009AE80
 * Callers:
 *     sub_180003970 @ 0x180003970 (sub_180003970.c)
 *     sub_180003B70 @ 0x180003B70 (sub_180003B70.c)
 *     RtlExtendMemoryZone @ 0x180003E90 (RtlExtendMemoryZone.c)
 *     sub_18000625C @ 0x18000625C (sub_18000625C.c)
 *     sub_18000AAA8 @ 0x18000AAA8 (sub_18000AAA8.c)
 *     RtlCreateQueryDebugBuffer @ 0x18004C9A0 (RtlCreateQueryDebugBuffer.c)
 *     sub_18005CD8C @ 0x18005CD8C (sub_18005CD8C.c)
 *     sub_18005E4EC @ 0x18005E4EC (sub_18005E4EC.c)
 *     sub_18005EA08 @ 0x18005EA08 (sub_18005EA08.c)
 *     sub_1800624DC @ 0x1800624DC (sub_1800624DC.c)
 *     sub_180062598 @ 0x180062598 (sub_180062598.c)
 *     sub_180062D68 @ 0x180062D68 (sub_180062D68.c)
 *     sub_180063040 @ 0x180063040 (sub_180063040.c)
 *     sub_18007CFD4 @ 0x18007CFD4 (sub_18007CFD4.c)
 *     sub_18007D464 @ 0x18007D464 (sub_18007D464.c)
 *     RtlFreeUserStack @ 0x1800803B0 (RtlFreeUserStack.c)
 *     RtlDestroyMemoryZone @ 0x180083200 (RtlDestroyMemoryZone.c)
 *     RtlDestroyHandleTable @ 0x1800837E0 (RtlDestroyHandleTable.c)
 *     PssNtFreeSnapshot @ 0x1800848E0 (PssNtFreeSnapshot.c)
 *     LdrCreateEnclave @ 0x1800C96A0 (LdrCreateEnclave.c)
 *     LdrDeleteEnclave @ 0x1800C9790 (LdrDeleteEnclave.c)
 *     RtlCreateProcessReflection @ 0x1800D0D60 (RtlCreateProcessReflection.c)
 *     sub_1800D12F0 @ 0x1800D12F0 (sub_1800D12F0.c)
 *     WerReportExceptionWorker @ 0x1800D79B0 (WerReportExceptionWorker.c)
 *     sub_1800D7D5C @ 0x1800D7D5C (sub_1800D7D5C.c)
 *     sub_1800D7F24 @ 0x1800D7F24 (sub_1800D7F24.c)
 *     sub_1800D8340 @ 0x1800D8340 (sub_1800D8340.c)
 *     sub_1800ECAC0 @ 0x1800ECAC0 (sub_1800ECAC0.c)
 *     sub_1800F67C0 @ 0x1800F67C0 (sub_1800F67C0.c)
 *     sub_1800F6800 @ 0x1800F6800 (sub_1800F6800.c)
 *     sub_1800F7CF8 @ 0x1800F7CF8 (sub_1800F7CF8.c)
 *     PssNtFreeRemoteSnapshot @ 0x180109D00 (PssNtFreeRemoteSnapshot.c)
 *     sub_18010A448 @ 0x18010A448 (sub_18010A448.c)
 *     sub_18010AD6C @ 0x18010AD6C (sub_18010AD6C.c)
 *     sub_18010BCFC @ 0x18010BCFC (sub_18010BCFC.c)
 *     sub_18010BD7C @ 0x18010BD7C (sub_18010BD7C.c)
 *     sub_18010C2E8 @ 0x18010C2E8 (sub_18010C2E8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  NTSTATUS result; // eax

  result = 30;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
