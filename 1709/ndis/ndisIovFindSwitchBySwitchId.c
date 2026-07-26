/*
 * XREFs of ndisIovFindSwitchBySwitchId @ 0x1C0001A2C
 * Callers:
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C0001988 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisIovDeleteNicSwitch @ 0x1C006BAC4 (ndisIovDeleteNicSwitch.c)
 *     ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C006BB6C (ndisIovDeleteNicSwitchDefaultVPortAndPFBlock.c)
 *     ndisOidPostIovNicSwitchParameters @ 0x1C006CCF0 (ndisOidPostIovNicSwitchParameters.c)
 *     ndisOidPreIovEnumVFs @ 0x1C006D2E0 (ndisOidPreIovEnumVFs.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C006D5F0 (ndisOidPreIovEnumVPorts.c)
 *     ndisIovAllocateVF @ 0x1C00EF16C (ndisIovAllocateVF.c)
 *     ndisIovCreateVPort @ 0x1C00EF384 (ndisIovCreateVPort.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00F0200 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00F07B0 (ndisOidPreIovNicSwitchParameters.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisIovFindSwitchBySwitchId(__int64 a1, unsigned int a2)
{
  __int64 *v3; // rdi
  KIRQL v5; // r8
  __int64 *v6; // rax
  unsigned int v8; // ecx

  v3 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  v6 = *(__int64 **)(a1 + 4728);
  *(_DWORD *)(a1 + 1856) = 2886342;
  while ( v6 != (__int64 *)(a1 + 4728) )
  {
    v8 = *((_DWORD *)v6 + 9);
    if ( v8 == a2 )
    {
      v3 = v6;
      break;
    }
    if ( v8 > a2 )
      break;
    v6 = (__int64 *)*v6;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
  return v3;
}
