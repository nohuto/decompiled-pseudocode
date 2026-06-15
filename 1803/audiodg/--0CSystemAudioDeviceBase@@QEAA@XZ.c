/*
 * XREFs of ??0CSystemAudioDeviceBase@@QEAA@XZ @ 0x1400035AC
 * Callers:
 *     ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x140011DC8 (--0CSystemAudioDeviceSharedBase@@QEAA@XZ.c)
 *     ??0CSystemAudioDeviceExclusive@@QEAA@XZ @ 0x140037B20 (--0CSystemAudioDeviceExclusive@@QEAA@XZ.c)
 *     ??0CSystemAudioDeviceOffload@@QEAA@XZ @ 0x14003ACDC (--0CSystemAudioDeviceOffload@@QEAA@XZ.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x14000381C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140033578 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

// Hidden C++ exception states: #wind=3
CSystemAudioDeviceBase *__fastcall CSystemAudioDeviceBase::CSystemAudioDeviceBase(CSystemAudioDeviceBase *this)
{
  *(_QWORD *)this = &CSystemAudioDeviceBase::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceBase::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &CSystemAudioDeviceBase::`vftable'{for `ISubmix'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 10;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 10;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 10;
  ATL::CCriticalSection::CCriticalSection((CSystemAudioDeviceBase *)((char *)this + 184));
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  if ( *((_QWORD *)this + 34) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 34, 0LL);
  if ( *((_QWORD *)this + 33) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 33, 0LL);
  *((_DWORD *)this + 61) = 1;
  *((_DWORD *)this + 56) = 0;
  *(GUID *)((char *)this + 248) = GUID_00000000_0000_0000_0000_000000000000;
  return this;
}
