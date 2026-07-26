/*
 * XREFs of ndisIovFindVFByVFId @ 0x1C00EF72C
 * Callers:
 *     ndisOidPreIovEnumVPorts @ 0x1C006D5F0 (ndisOidPreIovEnumVPorts.c)
 *     ndisIovCreateVPort @ 0x1C00EF384 (ndisIovCreateVPort.c)
 *     ndisOidPreIovBarResources @ 0x1C00EFCE0 (ndisOidPreIovBarResources.c)
 *     ndisOidPreIovFreeVF @ 0x1C00F04C0 (ndisOidPreIovFreeVF.c)
 *     ndisOidPreIovGetVFVendorDeviceId @ 0x1C00F05F0 (ndisOidPreIovGetVFVendorDeviceId.c)
 *     ndisOidPreIovReadVFConfigBlock @ 0x1C00F0CD0 (ndisOidPreIovReadVFConfigBlock.c)
 *     ndisOidPreIovReadVFConfigSpace @ 0x1C00F0E20 (ndisOidPreIovReadVFConfigSpace.c)
 *     ndisOidPreIovResetVF @ 0x1C00F0F70 (ndisOidPreIovResetVF.c)
 *     ndisOidPreIovSetVFPowerState @ 0x1C00F1070 (ndisOidPreIovSetVFPowerState.c)
 *     ndisOidPreIovVFParameters @ 0x1C00F1170 (ndisOidPreIovVFParameters.c)
 *     ndisOidPreIovWriteVFConfigBlock @ 0x1C00F1790 (ndisOidPreIovWriteVFConfigBlock.c)
 *     ndisOidPreIovWriteVFConfigSpace @ 0x1C00F18B0 (ndisOidPreIovWriteVFConfigSpace.c)
 *     ndisSriovInterfaceGetDeviceLocation @ 0x1C00F1CC0 (ndisSriovInterfaceGetDeviceLocation.c)
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
