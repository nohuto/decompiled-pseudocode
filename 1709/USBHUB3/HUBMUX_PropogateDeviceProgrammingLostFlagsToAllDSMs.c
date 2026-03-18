/*
 * XREFs of HUBMUX_PropogateDeviceProgrammingLostFlagsToAllDSMs @ 0x1C000E228
 * Callers:
 *     HUBPARENT_QueryParentIfDeviceWasReset @ 0x1C0006924 (HUBPARENT_QueryParentIfDeviceWasReset.c)
 *     HUBPARENT_ResetHubComplete @ 0x1C0006B60 (HUBPARENT_ResetHubComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall HUBMUX_PropogateDeviceProgrammingLostFlagsToAllDSMs(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // al
  KSPIN_LOCK i; // rdx
  KSPIN_LOCK v4; // rdx

  v1 = (KSPIN_LOCK *)(a1 + 2312);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2312));
  for ( i = v1[8]; ; i = *(_QWORD *)(v4 + 192) )
  {
    v4 = i - 192;
    if ( v1 + 8 == (KSPIN_LOCK *)(v4 + 192) )
      break;
    _InterlockedOr((volatile signed __int32 *)(v4 + 1636), 0x20u);
  }
  KeReleaseSpinLock(v1, v2);
}
