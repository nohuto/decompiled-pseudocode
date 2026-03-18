/*
 * XREFs of VidSchTerminateHwQueue @ 0x1C0033250
 * Callers:
 *     VidSchCreateHwQueue @ 0x1C0032270 (VidSchCreateHwQueue.c)
 *     VidSchTerminateAdapter @ 0x1C00BE350 (VidSchTerminateAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@H@Z @ 0x1C0030894 (-VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@H@Z.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0030FE0 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

void __fastcall VidSchTerminateHwQueue(struct VIDSCH_HW_QUEUE *a1)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)a1 + 3);
  if ( (*(_DWORD *)(v2 + 48) & 1) != 0 && *((_QWORD *)a1 + 8) )
  {
    ((void (__fastcall *)(_QWORD))DxgCoreInterface[24])(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 24LL) + 8LL));
    *((_QWORD *)a1 + 8) = 0LL;
  }
  VidSchiRemoveHwQueueFromSyncPoints(a1);
  VidSchiDecrementHwQueueReference((char *)a1);
}
