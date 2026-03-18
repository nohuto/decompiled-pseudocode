/*
 * XREFs of ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C00018B0
 * Callers:
 *     VidMmTerminateDevice @ 0x1C0012B50 (VidMmTerminateDevice.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0052F84 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C009B898 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C004CD60 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 */

VIDMM_DEVICE *__fastcall VIDMM_DEVICE::`scalar deleting destructor'(VIDMM_DEVICE *P)
{
  VIDMM_DEVICE::~VIDMM_DEVICE(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
