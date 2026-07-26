/*
 * XREFs of ndisIovFindVFByVFId @ 0x1C00E60F0
 * Callers:
 *     ndisOidPreIovEnumVPorts @ 0x1C006C090 (ndisOidPreIovEnumVPorts.c)
 *     ndisIovCreateVPort @ 0x1C00E5D54 (ndisIovCreateVPort.c)
 *     ndisOidPreIovBarResources @ 0x1C00E66B0 (ndisOidPreIovBarResources.c)
 *     ndisOidPreIovFreeVF @ 0x1C00E6EA0 (ndisOidPreIovFreeVF.c)
 *     ndisOidPreIovGetVFVendorDeviceId @ 0x1C00E6FE0 (ndisOidPreIovGetVFVendorDeviceId.c)
 *     ndisOidPreIovReadVFConfigBlock @ 0x1C00E76E0 (ndisOidPreIovReadVFConfigBlock.c)
 *     ndisOidPreIovReadVFConfigSpace @ 0x1C00E7830 (ndisOidPreIovReadVFConfigSpace.c)
 *     ndisOidPreIovResetVF @ 0x1C00E7980 (ndisOidPreIovResetVF.c)
 *     ndisOidPreIovSetVFPowerState @ 0x1C00E7A90 (ndisOidPreIovSetVFPowerState.c)
 *     ndisOidPreIovVFParameters @ 0x1C00E7BA0 (ndisOidPreIovVFParameters.c)
 *     ndisOidPreIovWriteVFConfigBlock @ 0x1C00E8200 (ndisOidPreIovWriteVFConfigBlock.c)
 *     ndisOidPreIovWriteVFConfigSpace @ 0x1C00E8330 (ndisOidPreIovWriteVFConfigSpace.c)
 *     ndisSriovInterfaceGetDeviceLocation @ 0x1C00E8750 (ndisSriovInterfaceGetDeviceLocation.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisIovFindVFByVFId(__int64 a1, unsigned __int16 a2)
{
  __int64 *v2; // r9
  __int64 v3; // r8
  __int64 *i; // rax
  unsigned __int16 v5; // cx

  v2 = (__int64 *)(a1 + 4752);
  v3 = 0LL;
  for ( i = *(__int64 **)(a1 + 4752); i != v2; i = (__int64 *)*i )
  {
    v5 = *((_WORD *)i + 861);
    if ( v5 == a2 )
      return i;
    if ( v5 > a2 )
      return (__int64 *)v3;
  }
  return (__int64 *)v3;
}
