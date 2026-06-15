/*
 * XREFs of ?Release@CVolumeStrip@@UEAAKXZ @ 0x180017FD0
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x180011CC0 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     AudioVolumeDisconnect @ 0x18002EE00 (AudioVolumeDisconnect.c)
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x180039CBC (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeStrip::Release(CVolumeStrip *this)
{
  unsigned __int32 v2; // edi

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_e3bea070e28c3377d9986b9fba3066b8_Traceguids,
      this,
      *((_DWORD *)this + 54) - 1);
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 54);
  if ( !v2 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_e3bea070e28c3377d9986b9fba3066b8_Traceguids, this);
    }
    if ( this )
      (*(void (__fastcall **)(CVolumeStrip *, __int64))(*(_QWORD *)this + 40LL))(this, 1LL);
  }
  return v2;
}
