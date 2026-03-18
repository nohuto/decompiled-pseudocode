/*
 * XREFs of ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C0014A48
 * Callers:
 *     VidSchQueryLastCompletedVidPnSourcePresentIdDWM @ 0x1C00149A0 (VidSchQueryLastCompletedVidPnSourcePresentIdDWM.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchQueryLastCompletedPresentIdDWMInternal(
        KSPIN_LOCK *a1,
        struct _VIDSCH_DEVICE *a2,
        unsigned int a3,
        unsigned int a4,
        struct _D3DKMT_PRESENT_STATS_DWM *a5)
{
  __int64 v6; // r14
  __int64 v8; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v6 = a4;
  v8 = a3;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(a1 + 237, &LockHandle);
  a5->PresentCount = *((_DWORD *)a2 + v8 + 117);
  a5->PresentRefreshCount = *((_DWORD *)a2 + 2 * v8 + 134);
  a5->PresentQPCTime.QuadPart = *((_QWORD *)a2 + v8 + 83);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  a5->SyncRefreshCount = *(_DWORD *)(a1[v8 + 376] + 23552);
  a5->SyncQPCTime.QuadPart = *(_QWORD *)(a1[v8 + 376] + 23560);
  a5->CustomPresentDuration = *(_DWORD *)(280 * v6 + a1[v8 + 376] + 140);
}
