/*
 * XREFs of ?GetProcessGpuVa@VIDMM_FENCE_STORAGE_PAGE@@QEAA_KPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00AA118
 * Callers:
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C005EDF8 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0003504 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::GetProcessGpuVa(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        struct VIDMM_PROCESS *a4)
{
  __int64 *i; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *j; // rax
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]

  if ( (*((_BYTE *)a2 + 41448) & 2) == 0 )
    return 0LL;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v14,
    (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 72));
  for ( i = (__int64 *)*((_QWORD *)this + 7); i != (__int64 *)((char *)this + 56); i = (__int64 *)*i )
  {
    if ( a2 == (struct VIDMM_GLOBAL *)i[6] )
    {
      v12 = i + 4;
      for ( j = (_QWORD *)i[4]; j != v12; j = (_QWORD *)*j )
      {
        if ( a4 == (struct VIDMM_PROCESS *)*(j - 1) )
        {
          v10 = *(j - 4) + *((unsigned int *)a3 + 4);
          goto LABEL_8;
        }
      }
      break;
    }
  }
  v10 = 0LL;
LABEL_8:
  if ( v15 )
  {
    v11 = v14;
    *(_QWORD *)(v14 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
  }
  return v10;
}
