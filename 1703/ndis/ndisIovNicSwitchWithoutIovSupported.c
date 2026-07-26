/*
 * XREFs of ndisIovNicSwitchWithoutIovSupported @ 0x1C0021F3C
 * Callers:
 *     ndisIndicateInitialStateToBinding @ 0x1C0018100 (ndisIndicateInitialStateToBinding.c)
 *     ndisIovGetNicSwitchList @ 0x1C0026438 (ndisIovGetNicSwitchList.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C003E550 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisSetReceiveFilter @ 0x1C003EB5C (ndisSetReceiveFilter.c)
 *     ndisOidPostIovCreateNicSwitch @ 0x1C006B2E0 (ndisOidPostIovCreateNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C006B650 (ndisOidPostIovDeleteNicSwitch.c)
 *     ndisOidPreIovEnumNicSwitches @ 0x1C006BB90 (ndisOidPreIovEnumNicSwitches.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C006C090 (ndisOidPreIovEnumVPorts.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00BCD98 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00E6900 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovCreateVPort @ 0x1C00E6AE0 (ndisOidPreIovCreateVPort.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00E6BF0 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00E6D60 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00E71B0 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00E7D80 (ndisOidPreIovVPortParameters.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIovNicSwitchWithoutIovSupported(__int64 a1)
{
  unsigned __int8 v1; // al
  char v2; // dl
  __int64 v4; // rax

  v1 = *(_BYTE *)(a1 + 32);
  v2 = 0;
  if ( v1 > 6u || v1 == 6 && *(_BYTE *)(a1 + 33) >= 0x32u )
  {
    v4 = *(_QWORD *)(a1 + 3584);
    if ( v4 && (*(_DWORD *)(v4 + 32) & 0x40) != 0 )
      return 1;
  }
  return v2;
}
