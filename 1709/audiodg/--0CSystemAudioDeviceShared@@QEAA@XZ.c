/*
 * XREFs of ??0CSystemAudioDeviceShared@@QEAA@XZ @ 0x14002FBD0
 * Callers:
 *     ??0?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x14003BDD4 (--0-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x14000EDD8 (--0CSystemAudioDeviceSharedBase@@QEAA@XZ.c)
 *     memset @ 0x14001D9AC (memset.c)
 */

// Hidden C++ exception states: #wind=1
CSystemAudioDeviceShared *__fastcall CSystemAudioDeviceShared::CSystemAudioDeviceShared(CSystemAudioDeviceShared *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 92) = 0;
  v2 = (char *)this + 376;
  memset((char *)this + 376, 0, 0x28uLL);
  v2[40] = 0;
  CSystemAudioDeviceSharedBase::CSystemAudioDeviceSharedBase(this);
  return this;
}
