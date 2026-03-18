/*
 * XREFs of VidSchiSubmitCommandPacketToHwQueue @ 0x1C0033B44
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00073F0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1C0032690 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0032AC0 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSubmitWaitToHwQueue @ 0x1C0032FB0 (VidSchSubmitWaitToHwQueue.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0053170 (VidSchEnqueueCpuEvent.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00BF058 (VidSchiSubmitHwPagingCommand.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000A8D0 (VidSchiProfilePerformanceTick.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0012E90 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0012F08 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030D38 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0076410 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1C0076C30 (VidSchiEnsureVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitCommandPacketToHwQueue(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rcx
  VIDMM_DEVICE *v10; // rcx
  _BYTE v11[48]; // [rsp+40h] [rbp-38h] BYREF

  v1 = *((_QWORD *)a1 + 12);
  v3 = *(_QWORD *)(v1 + 24);
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_QWORD *)(v4 + 24);
  VidSchiEnsureVSyncEnabled(a1, v5);
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v11, (unsigned __int64 *)(v6 + 1904), 1, 0);
  v8 = *((_DWORD *)a1 + 12);
  if ( v8 )
  {
    if ( v8 == 8 )
      *(_QWORD *)(v1 + 56) = *((_QWORD *)a1 + 36);
  }
  else
  {
    *(_QWORD *)(v1 + 56) = *((_QWORD *)a1 + 93);
    ++*(_QWORD *)(v5 + 1232);
  }
  VidSchiProfilePerformanceTick(4LL, v6, v4, v7, 0LL, (__int64)a1, 0LL, 0LL);
  VidSchiInsertCommandToHwQueue(a1);
  AcquireSpinLock::Release((AcquireSpinLock *)v11);
  v9 = *(_QWORD *)(v5 + 8);
  if ( v9 )
  {
    v10 = *(VIDMM_DEVICE **)(v9 + 608);
    if ( v10 )
      VIDMM_DEVICE::EnsureSchedulable(v10, 1);
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v11);
}
