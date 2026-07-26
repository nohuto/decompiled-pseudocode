/*
 * XREFs of ndisIovNicSwitchWithoutIovSupported @ 0x1C00045E4
 * Callers:
 *     ndisIndicateInitialStateToBinding @ 0x1C0006CE8 (ndisIndicateInitialStateToBinding.c)
 *     ndisIovGetNicSwitchList @ 0x1C0023A88 (ndisIovGetNicSwitchList.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C003AFF0 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisSetReceiveFilter @ 0x1C003B5FC (ndisSetReceiveFilter.c)
 *     ndisOidPostIovCreateNicSwitch @ 0x1C006C840 (ndisOidPostIovCreateNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C006CBB0 (ndisOidPostIovDeleteNicSwitch.c)
 *     ndisOidPreIovEnumNicSwitches @ 0x1C006D0F0 (ndisOidPreIovEnumNicSwitches.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C006D5F0 (ndisOidPreIovEnumVPorts.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00AD4D8 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00EFF20 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovCreateVPort @ 0x1C00F00F0 (ndisOidPreIovCreateVPort.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00F0200 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00F0370 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00F07B0 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00F1350 (ndisOidPreIovVPortParameters.c)
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
