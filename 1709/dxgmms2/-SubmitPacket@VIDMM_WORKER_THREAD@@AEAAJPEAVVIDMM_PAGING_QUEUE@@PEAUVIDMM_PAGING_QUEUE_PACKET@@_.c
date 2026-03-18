/*
 * XREFs of ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0099174
 * Callers:
 *     ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C00A12B0 (-FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     McTemplateK0ppx @ 0x1C0021F10 (McTemplateK0ppx.c)
 *     McTemplateK0ppxx @ 0x1C0021F9C (McTemplateK0ppxx.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F630 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ @ 0x1C009908C (-GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ.c)
 *     ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C00992F4 (-CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_WORKER_THREAD::SubmitPacket(
        VIDMM_GLOBAL **this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_PAGING_QUEUE_PACKET *a3,
        unsigned __int8 a4,
        bool *a5,
        struct VIDMM_ALLOC **a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  unsigned int v13; // ebx
  struct VIDMM_DEVICE *VidMmDevice; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+18h] BYREF

  if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppx((__int64)this, (__int64)a2, (__int64)a3, a2, a3, *((_QWORD *)a3 + 5));
  if ( *((_BYTE *)a3 + 24) )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    v12 = (_QWORD *)WdLogNewEntry5_WdEvent(v11, v10);
    v12[3] = *((int *)a3 + 12);
    v12[4] = a3;
    v12[5] = *((_QWORD *)a3 + 8);
    v12[6] = *((_QWORD *)a3 + 7);
    v12[7] = *((_QWORD *)a3 + 4);
    WdLogEvent5_WdEvent(v12);
    v13 = VIDMM_GLOBAL::ProcessDeferredCommand(
            *this,
            (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)a3 + 48),
            a5,
            *((_BYTE *)a3 + 25),
            *((_QWORD *)a3 + 4),
            *((struct _VIDSCH_SYNC_OBJECT **)a2 + 11),
            a4,
            a6);
    VidMmDevice = VIDMM_PAGING_QUEUE_PACKET::GetVidMmDevice(a3);
    VIDMM_PROCESS_ADAPTER_INFO::CheckBudgetRefreshConditionOnProcessMemoryChange(*((VIDMM_PROCESS_ADAPTER_INFO **)VidMmDevice
                                                                                 + 2));
  }
  else
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdEvent(this, a2);
    v17[3] = *((int *)a3 + 12);
    v17[4] = a3;
    v17[5] = *((unsigned __int8 *)a3 + 25);
    v17[6] = *((_QWORD *)a3 + 4);
    WdLogEvent5_WdEvent(v17);
    *a5 = 0;
    *a6 = 0LL;
    LOBYTE(v18) = *((_BYTE *)a3 + 25);
    v13 = VIDMM_GLOBAL::ProcessSystemCommand(
            (VIDMM_CPU_HOST_APERTURE **)*this,
            (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)a3 + 48),
            v18,
            *((_QWORD *)a3 + 4),
            *((struct _VIDSCH_SYNC_OBJECT **)a2 + 11));
  }
  if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppxx(v15, &EventPagingQueueComplete, v16, a2, a3, *((_QWORD *)a3 + 5), 0LL);
  return v13;
}
