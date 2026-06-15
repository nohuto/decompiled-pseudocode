/*
 * XREFs of ?Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ @ 0x14003E770
 * Callers:
 *     ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x14003E4C4 (--1CSystemAudioDeviceOffloadGraph@@UEAA@XZ.c)
 * Callees:
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x14000FE00 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSystemAudioDeviceOffloadGraph::Cleanup(CSystemAudioDeviceOffloadGraph *this)
{
  __int128 v2; // [rsp+38h] [rbp-20h] BYREF

  v2 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v2);
  CSystemAudioDeviceSharedBase::Cleanup(this);
  EtwEventActivityIdControl(4LL, &v2);
}
