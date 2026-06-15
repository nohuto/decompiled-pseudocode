/*
 * XREFs of ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180020B6C
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18000AA00 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ??0?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_419e19f7_d318_4c05_b705_2f17133c55da@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1800089A0 (--0-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_419e19f7_d318_4c05_b705_2f17133c55da@@3U__s_GUID@@.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::HasHardwareAudioEngine(CEndpointCharacteristics *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_419e19f7_d318_4c05_b705_2f17133c55da>::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_419e19f7_d318_4c05_b705_2f17133c55da>(
    &v5,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 2));
  v1 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 88LL))(v5, &v4);
    v1 = v5;
  }
  v2 = v4;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
