/*
 * XREFs of MmProbeAndLockProcessPages @ 0x1404A80F0
 * Callers:
 *     CcAsyncReadPrefetch @ 0x140098ACC (CcAsyncReadPrefetch.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MmProbeAndLockPages @ 0x140022650 (MmProbeAndLockPages.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __stdcall MmProbeAndLockProcessPages(
        PMDL MemoryDescriptorList,
        PEPROCESS Process,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  int v6; // ebx
  LOCK_OPERATION v7; // edi
  _BYTE v8[48]; // [rsp+28h] [rbp-60h] BYREF

  v6 = 0;
  v7 = Operation != IoReadAccess;
  if ( Process != KeGetCurrentThread()->ApcState.Process )
  {
    v6 = 1;
    KiStackAttachProcess(Process, 0, (__int64)v8);
  }
  MmProbeAndLockPages(MemoryDescriptorList, AccessMode, v7);
  if ( v6 )
    KiUnstackDetachProcess((__int64)v8, 0LL);
}
