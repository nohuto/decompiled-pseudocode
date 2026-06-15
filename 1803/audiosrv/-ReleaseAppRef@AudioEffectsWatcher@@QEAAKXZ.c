/*
 * XREFs of ?ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ @ 0x1800A7D84
 * Callers:
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x1800A7534 (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x1800A7DF4 (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioEffectsWatcher::ReleaseAppRef(AudioEffectsWatcher *this)
{
  bool v1; // zf
  unsigned int v3; // edi
  struct _TP_WAIT *v4; // rcx

  v1 = (*((_DWORD *)this + 18))-- == 1;
  v3 = *((_DWORD *)this + 18);
  if ( v1 )
  {
    if ( *((_BYTE *)this + 64) )
      (*(void (__fastcall **)(_QWORD, AudioEffectsWatcher *))(**(_QWORD **)&g_DeviceEnumerator + 56LL))(
        *(_QWORD *)&g_DeviceEnumerator,
        this);
    v4 = (struct _TP_WAIT *)*((_QWORD *)this + 26);
    *((_BYTE *)this + 64) = 0;
    if ( v4 )
    {
      SetThreadpoolWait(v4, 0LL, 0LL);
      WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 26), 1);
    }
  }
  return v3;
}
