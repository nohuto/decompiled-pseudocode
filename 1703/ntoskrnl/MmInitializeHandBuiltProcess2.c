/*
 * XREFs of MmInitializeHandBuiltProcess2 @ 0x1405D36C0
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140167358 (MiGetWsAndMakePageTablesNx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiInsertProcessVads @ 0x14049E0E0 (MiInsertProcessVads.c)
 *     MiAllocateSharedUserVad @ 0x14049E740 (MiAllocateSharedUserVad.c)
 *     MiInitializeLockedPagesTracking @ 0x1406B2DB0 (MiInitializeLockedPagesTracking.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess2(__int64 BugCheckParameter1)
{
  int inserted; // ebx
  _QWORD *SharedUserVad; // [rsp+20h] [rbp-48h] BYREF
  $5BC46E0569261879018906DEC3127961 v5; // [rsp+28h] [rbp-40h] BYREF

  MiGetWsAndMakePageTablesNx();
  *(_QWORD *)(BugCheckParameter1 + 1296) = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v5);
  SharedUserVad = MiAllocateSharedUserVad();
  if ( SharedUserVad )
    inserted = MiInsertProcessVads(BugCheckParameter1, &SharedUserVad);
  else
    inserted = -1073741801;
  KiUnstackDetachProcess(&v5, 0LL);
  if ( inserted >= 0 && (MmTrackLockedPages & 0x10000001) == 1 )
    MiInitializeLockedPagesTracking(BugCheckParameter1);
  return (unsigned int)inserted;
}
