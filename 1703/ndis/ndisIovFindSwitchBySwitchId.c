/*
 * XREFs of ndisIovFindSwitchBySwitchId @ 0x1C0025A9C
 * Callers:
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C00259F8 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisIovDeleteNicSwitch @ 0x1C006A6B4 (ndisIovDeleteNicSwitch.c)
 *     ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C006A75C (ndisIovDeleteNicSwitchDefaultVPortAndPFBlock.c)
 *     ndisOidPostIovNicSwitchParameters @ 0x1C006B790 (ndisOidPostIovNicSwitchParameters.c)
 *     ndisOidPreIovEnumVFs @ 0x1C006BD80 (ndisOidPreIovEnumVFs.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C006C090 (ndisOidPreIovEnumVPorts.c)
 *     ndisIovAllocateVF @ 0x1C00E5B3C (ndisIovAllocateVF.c)
 *     ndisIovCreateVPort @ 0x1C00E5D54 (ndisIovCreateVPort.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00E6BF0 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00E71B0 (ndisOidPreIovNicSwitchParameters.c)
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
  *(_DWORD *)(a1 + 1856) = 2886331;
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
