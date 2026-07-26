/*
 * XREFs of ndisIovDeleteNicSwitch @ 0x1C006A6B4
 * Callers:
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C00259F8 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C006B650 (ndisOidPostIovDeleteNicSwitch.c)
 * Callees:
 *     ndisIovFindSwitchBySwitchId @ 0x1C0025A9C (ndisIovFindSwitchBySwitchId.c)
 */

void __fastcall ndisIovDeleteNicSwitch(__int64 a1, unsigned int a2)
{
  __int64 *SwitchBySwitchId; // rdi
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 **v6; // rdx

  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(a1, a2);
  if ( SwitchBySwitchId )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 2885007;
    v5 = *SwitchBySwitchId;
    v6 = (__int64 **)SwitchBySwitchId[1];
    if ( *(__int64 **)(*SwitchBySwitchId + 8) != SwitchBySwitchId || *v6 != SwitchBySwitchId )
      __fastfail(3u);
    *v6 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    --*(_DWORD *)(a1 + 4720);
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
    ExFreePoolWithTag(SwitchBySwitchId, 0);
  }
}
