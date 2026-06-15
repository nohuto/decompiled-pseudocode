/*
 * XREFs of ??1AudioEffectsWatcher@@QEAA@XZ @ 0x18000BB44
 * Callers:
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x180009E7C (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 *     ??_GAudioEffectsWatcher@@QEAAPEAXI@Z @ 0x18005A84C (--_GAudioEffectsWatcher@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180032C98 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AudioEffectsWatcher::~AudioEffectsWatcher(AudioEffectsWatcher *this)
{
  struct _TP_WAIT *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &AudioEffectsWatcher::`vftable';
  if ( *((_BYTE *)this + 64) )
    (*(void (__fastcall **)(_QWORD, AudioEffectsWatcher *))(**(_QWORD **)&g_DeviceEnumerator + 56LL))(
      *(_QWORD *)&g_DeviceEnumerator,
      this);
  v2 = (struct _TP_WAIT *)*((_QWORD *)this + 26);
  if ( v2 )
    CloseThreadpoolWait(v2);
  v3 = (void *)*((_QWORD *)this + 25);
  if ( v3 )
    CloseHandle(v3);
  CoTaskMemFree(*((LPVOID *)this + 27));
  if ( *((_BYTE *)this + 88) )
    NtDeleteWnfStateName((char *)this + 92);
  CoTaskMemFree(*((LPVOID *)this + 3));
  `eh vector destructor iterator'((char *)this + 104, 0x20uLL, 3uLL, (void (*)(void *))ApoData::~ApoData);
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}
