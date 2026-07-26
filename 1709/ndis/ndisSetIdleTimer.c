/*
 * XREFs of ndisSetIdleTimer @ 0x1C00713C4
 * Callers:
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006E2B8 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C0070D84 (ndisSelectiveSuspendClearStop.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C0070F24 (ndisSelectiveSuspendResumeOperations.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSetIdleTimer(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v2; // di
  int v3; // ecx

  v1 = *(_QWORD *)(a1 + 4480);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v1);
  if ( !*(_DWORD *)(v1 + 508) )
  {
    v3 = *(_DWORD *)(v1 + 504);
    if ( (v3 & 1) == 0 )
    {
      *(_DWORD *)(v1 + 144) = 0;
      *(_DWORD *)(v1 + 504) = v3 | 1;
      KeSetCoalescableTimer(
        (PKTIMER)(v1 + 16),
        (LARGE_INTEGER)(-10000LL * (*(_DWORD *)(v1 + 8) / 3u)),
        *(_DWORD *)(v1 + 8) / 3u,
        *(_DWORD *)(v1 + 8) / 3u / 5,
        (PKDPC)(v1 + 80));
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v1, v2);
}
