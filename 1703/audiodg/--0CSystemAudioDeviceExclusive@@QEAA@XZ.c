/*
 * XREFs of ??0CSystemAudioDeviceExclusive@@QEAA@XZ @ 0x14003977C
 * Callers:
 *     ??0?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z @ 0x14003964C (--0-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z @ 0x140039708 (--0-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSystemAudioDeviceBase@@QEAA@XZ @ 0x140003C60 (--0CSystemAudioDeviceBase@@QEAA@XZ.c)
 *     memset @ 0x14001DC2C (memset.c)
 */

// Hidden C++ exception states: #wind=1
CSystemAudioDeviceExclusive *__fastcall CSystemAudioDeviceExclusive::CSystemAudioDeviceExclusive(
        CSystemAudioDeviceExclusive *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 74) = 0;
  v2 = (char *)this + 304;
  memset((char *)this + 304, 0, 0x28uLL);
  v2[40] = 0;
  CSystemAudioDeviceBase::CSystemAudioDeviceBase(this);
  *(_QWORD *)this = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &CSystemAudioDeviceOffload::`vftable'{for `ISubmix'};
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 95) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 96) = 0;
  return this;
}
