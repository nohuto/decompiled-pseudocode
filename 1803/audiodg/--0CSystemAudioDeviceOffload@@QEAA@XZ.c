/*
 * XREFs of ??0CSystemAudioDeviceOffload@@QEAA@XZ @ 0x14003ACDC
 * Callers:
 *     ??0?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@QEAA@PEAX@Z @ 0x14003AB58 (--0-$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@QEAA@PEAX@Z @ 0x14003AC40 (--0-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSystemAudioDeviceBase@@QEAA@XZ @ 0x1400035AC (--0CSystemAudioDeviceBase@@QEAA@XZ.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CSystemAudioDeviceOffload *__fastcall CSystemAudioDeviceOffload::CSystemAudioDeviceOffload(
        CSystemAudioDeviceOffload *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 80) = 0;
  v2 = (char *)this + 328;
  memset_0((char *)this + 328, 0, 0x28uLL);
  v2[40] = 0;
  CSystemAudioDeviceBase::CSystemAudioDeviceBase(this);
  *(_QWORD *)this = &CSystemAudioDeviceOffload::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &CSystemAudioDeviceOffload::`vftable'{for `ISubmix'};
  *((_QWORD *)this + 37) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioVolume'};
  *((_QWORD *)this + 38) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioMuteAPO'};
  *((_QWORD *)this + 39) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioMeter'};
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 110) = 0;
  return this;
}
