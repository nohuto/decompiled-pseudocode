/*
 * XREFs of ?SetEndpointLevels@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z @ 0x1800FDA48
 * Callers:
 *     ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800FD46C (-SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800184EC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?SetEndpointLevel@@YAJPEAUIMMEndpointInternal@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z @ 0x1800FD9D0 (-SetEndpointLevel@@YAJPEAUIMMEndpointInternal@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SetEndpointLevels(struct IUnknown *a1)
{
  struct IUnknown *v2; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
    ATL::AtlComQIPtrAssign(&v2, a1, &GUID_419e19f7_d318_4c05_b705_2f17133c55da);
  return 2147942487LL;
}
