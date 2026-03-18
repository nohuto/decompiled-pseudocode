/*
 * XREFs of MmInitializeHandBuiltProcess2 @ 0x1405EF52C
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14015B444 (MiGetWsAndMakePageTablesNx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiInsertProcessVads @ 0x14045E7E0 (MiInsertProcessVads.c)
 *     MiAllocateSharedUserVad @ 0x14045ECD0 (MiAllocateSharedUserVad.c)
 *     MiInitializeLockedPagesTracking @ 0x1406DED70 (MiInitializeLockedPagesTracking.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess2(__int64 BugCheckParameter1)
{
  int inserted; // ebx
  _QWORD *SharedUserVad; // [rsp+20h] [rbp-48h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v5; // [rsp+28h] [rbp-40h] BYREF

  MiGetWsAndMakePageTablesNx();
  *(_QWORD *)(BugCheckParameter1 + 1296) = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v5);
  SharedUserVad = MiAllocateSharedUserVad();
  if ( SharedUserVad )
    inserted = MiInsertProcessVads(BugCheckParameter1, &SharedUserVad);
  else
    inserted = -1073741801;
  KiUnstackDetachProcess(&v5, 0LL);
  if ( inserted >= 0 && (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
    MiInitializeLockedPagesTracking(BugCheckParameter1);
  return (unsigned int)inserted;
}
