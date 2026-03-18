/*
 * XREFs of HUBMUX_QueuePowerUpEventToPSMs @ 0x1C000D7C0
 * Callers:
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResume @ 0x1C0008190 (HUBHSM_WaitingForPortsToAcquireReferenceOnResume.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResumeInS0 @ 0x1C00081C0 (HUBHSM_WaitingForPortsToAcquireReferenceOnResumeInS0.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset @ 0x1C00081F0 (HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnStart @ 0x1C0008240 (HUBHSM_WaitingForPortsToAcquireReferenceOnStart.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_QueuePowerUpEventToPSMs(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  KIRQL v5; // al
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax

  v2 = a1 + 2312;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2312));
  _InterlockedAnd((volatile signed __int32 *)(v2 + 32), 0xFFFFFFF7);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 2344), 0xFFFFFFFD);
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
  v6 = *(_DWORD *)(v2 + 36);
  if ( v6 )
  {
    *(_DWORD *)(v2 + 12) = v6;
    v7 = a1 + 2352;
    v8 = *(_QWORD *)(a1 + 2352);
    v9 = v8 - 248;
    if ( v7 != v8 )
    {
      do
      {
        _InterlockedOr((volatile signed __int32 *)(v9 + 264), 4u);
        (*(void (__fastcall **)(__int64, _QWORD))(v9 + 1240))(v9, a2);
        v10 = *(_QWORD *)(v9 + 248);
        v9 = v10 - 248;
      }
      while ( v7 != v10 );
    }
  }
  else
  {
    HUBSM_AddEvent(a1 + 1256, 2054);
  }
}
