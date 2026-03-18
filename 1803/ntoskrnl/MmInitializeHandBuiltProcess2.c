/*
 * XREFs of MmInitializeHandBuiltProcess2 @ 0x140652748
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140185724 (MiGetWsAndMakePageTablesNx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiAllocateProcessVads @ 0x1404EA744 (MiAllocateProcessVads.c)
 *     MiInsertProcessVads @ 0x1404ED1D0 (MiInsertProcessVads.c)
 *     MiInitializeLockedPagesTracking @ 0x140749BF4 (MiInitializeLockedPagesTracking.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess2(__int64 BugCheckParameter1)
{
  int inserted; // ebx
  _QWORD *ProcessVads; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v5[48]; // [rsp+28h] [rbp-40h] BYREF

  MiGetWsAndMakePageTablesNx();
  *(_QWORD *)(BugCheckParameter1 + 1296) = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v5);
  ProcessVads = MiAllocateProcessVads(BugCheckParameter1, 0LL);
  if ( ProcessVads )
    inserted = MiInsertProcessVads((struct _KPROCESS *)BugCheckParameter1, &ProcessVads);
  else
    inserted = -1073741801;
  KiUnstackDetachProcess((__int64)v5, 0LL);
  if ( inserted >= 0 && (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
    MiInitializeLockedPagesTracking(BugCheckParameter1);
  return (unsigned int)inserted;
}
