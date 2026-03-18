/*
 * XREFs of HUBMUX_QueueStopToAllPSMs @ 0x1C000D8E4
 * Callers:
 *     HUBHSM_NotifyingHubStopToPortsOnReset @ 0x1C0007990 (HUBHSM_NotifyingHubStopToPortsOnReset.c)
 *     HUBHSM_WaitingForPortsToReleaseReferenceOnResetOnResume @ 0x1C00079B0 (HUBHSM_WaitingForPortsToReleaseReferenceOnResetOnResume.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_QueueStopToAllPSMs(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rsi
  __int64 i; // rcx
  __int64 v5; // rcx
  __int64 *v6; // r14

  if ( !*(_DWORD *)(a1 + 2348) )
    goto LABEL_8;
  v2 = *(_DWORD *)(a1 + 2336);
  v3 = a1 + 2352;
  *(_DWORD *)(a1 + 2324) = v2;
  for ( i = *(_QWORD *)(a1 + 2352); ; i = *v6 )
  {
    v5 = i - 248;
    v6 = (__int64 *)(v5 + 248);
    if ( v3 == v5 + 248 )
      break;
    if ( (*(_DWORD *)(v5 + 264) & 8) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v5 + 264), 4u);
    (*(void (__fastcall **)(__int64, __int64))(v5 + 1240))(v5, 3034LL);
  }
  if ( !v2 )
LABEL_8:
    HUBSM_AddEvent(a1 + 1256, 2058);
}
