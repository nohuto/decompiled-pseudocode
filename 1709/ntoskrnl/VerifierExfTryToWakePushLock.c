/*
 * XREFs of VerifierExfTryToWakePushLock @ 0x1407C1FF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViExCheckAPCsDisabled @ 0x1407C220C (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfTryToWakePushLock(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(0xEBuLL, a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExfTryToWakePushLock)(a1);
}
