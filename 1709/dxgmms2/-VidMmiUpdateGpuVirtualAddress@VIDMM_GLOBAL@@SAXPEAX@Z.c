/*
 * XREFs of ?VidMmiUpdateGpuVirtualAddress@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00A0400
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C0020FC0 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0060310 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress(VIDMM_DEVICE_COMMAND_UPDATEGPUVA *P)
{
  __int64 v2; // rax
  VIDMM_GLOBAL *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD v9[11]; // [rsp+30h] [rbp-58h] BYREF

  memset(v9, 0, 0x50uLL);
  v2 = *((_QWORD *)P + 11);
  v3 = (VIDMM_GLOBAL *)*((_QWORD *)P + 1);
  LODWORD(v9[0]) = 119;
  v4 = *(_QWORD *)(v2 + 16);
  v5 = *((unsigned int *)P + 4);
  v9[1] = v4;
  v9[4] = P;
  if ( (int)VIDMM_GLOBAL::QueueDeferredCommand(
              v3,
              (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(v4 + 72) + 160 * v5),
              (struct _VIDMM_DEFERRED_COMMAND *)v9,
              0,
              0LL) < 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 23863LL;
    WdLogEvent5_WdAssertion(v8);
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(P);
  }
}
