/*
 * XREFs of ?AddRef@CVolumeStrip@@UEAAKXZ @ 0x180018030
 * Callers:
 *     ?QueryInterface@CVolumeStrip@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180017F10 (-QueryInterface@CVolumeStrip@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x180039CBC (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 */

__int64 __fastcall CVolumeStrip::AddRef(CVolumeStrip *this)
{
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12LL,
      &WPP_e3bea070e28c3377d9986b9fba3066b8_Traceguids,
      this,
      *((_DWORD *)this + 54) + 1);
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 54);
}
