/*
 * XREFs of ZwFreeVirtualMemory @ 0x1800A56C0
 * Callers:
 *     PssNtFreeSnapshot @ 0x180001CE0 (PssNtFreeSnapshot.c)
 *     sub_1800024C4 @ 0x1800024C4 (sub_1800024C4.c)
 *     sub_180003EF0 @ 0x180003EF0 (sub_180003EF0.c)
 *     sub_180004D20 @ 0x180004D20 (sub_180004D20.c)
 *     sub_1800074BC @ 0x1800074BC (sub_1800074BC.c)
 *     sub_1800076D8 @ 0x1800076D8 (sub_1800076D8.c)
 *     sub_18000799C @ 0x18000799C (sub_18000799C.c)
 *     sub_1800080CC @ 0x1800080CC (sub_1800080CC.c)
 *     sub_180009038 @ 0x180009038 (sub_180009038.c)
 *     sub_180009164 @ 0x180009164 (sub_180009164.c)
 *     sub_18000A020 @ 0x18000A020 (sub_18000A020.c)
 *     sub_18000A73C @ 0x18000A73C (sub_18000A73C.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     sub_180020B90 @ 0x180020B90 (sub_180020B90.c)
 *     sub_180052EDC @ 0x180052EDC (sub_180052EDC.c)
 *     RtlCreateQueryDebugBuffer @ 0x180056140 (RtlCreateQueryDebugBuffer.c)
 *     sub_180056B50 @ 0x180056B50 (sub_180056B50.c)
 *     sub_1800819C4 @ 0x1800819C4 (sub_1800819C4.c)
 *     sub_180083738 @ 0x180083738 (sub_180083738.c)
 *     RtlDestroyMemoryZone @ 0x1800890C0 (RtlDestroyMemoryZone.c)
 *     RtlFreeUserStack @ 0x180089130 (RtlFreeUserStack.c)
 *     RtlDestroyHandleTable @ 0x180089AF0 (RtlDestroyHandleTable.c)
 *     RtlCreateProcessReflection @ 0x1800D7DD0 (RtlCreateProcessReflection.c)
 *     sub_1800D8360 @ 0x1800D8360 (sub_1800D8360.c)
 *     WerReportExceptionWorker @ 0x1800DE1D0 (WerReportExceptionWorker.c)
 *     sub_1800DE6C4 @ 0x1800DE6C4 (sub_1800DE6C4.c)
 *     sub_1800DEAD4 @ 0x1800DEAD4 (sub_1800DEAD4.c)
 *     RtlExtendMemoryZone @ 0x1800E9820 (RtlExtendMemoryZone.c)
 *     sub_1800F096C @ 0x1800F096C (sub_1800F096C.c)
 *     sub_1800F8CC0 @ 0x1800F8CC0 (sub_1800F8CC0.c)
 *     sub_1800F8D00 @ 0x1800F8D00 (sub_1800F8D00.c)
 *     sub_1800F9D28 @ 0x1800F9D28 (sub_1800F9D28.c)
 *     sub_180102B68 @ 0x180102B68 (sub_180102B68.c)
 *     PssNtFreeRemoteSnapshot @ 0x180106810 (PssNtFreeRemoteSnapshot.c)
 *     sub_180106D98 @ 0x180106D98 (sub_180106D98.c)
 *     sub_180107D1C @ 0x180107D1C (sub_180107D1C.c)
 *     sub_18010840C @ 0x18010840C (sub_18010840C.c)
 *     sub_1801088FC @ 0x1801088FC (sub_1801088FC.c)
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
