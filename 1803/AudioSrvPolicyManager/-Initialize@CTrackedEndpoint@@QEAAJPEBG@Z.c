/*
 * XREFs of ?Initialize@CTrackedEndpoint@@QEAAJPEBG@Z @ 0x18002CBC8
 * Callers:
 *     ?StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002B8C0 (-StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180017D14 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTrackedEndpoint::Initialize(unsigned __int16 **this, const unsigned __int16 *a2)
{
  _QWORD *v3; // rsi
  unsigned __int64 v4; // r9
  int v5; // ebx
  _QWORD *v6; // rsi
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = this + 11;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = _AllocStringWorker<CTCoAllocPolicy>((__int64)this, (__int64)a2, a2, v4, v8, this + 11);
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
           g_DeviceEnumerator,
           *v3,
           &v9);
    if ( v5 >= 0 )
    {
      v6 = this + 9;
      v5 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v9 + 24LL))(
             v9,
             &IID_IAudioEndpointVolume,
             23LL);
      if ( v5 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v6 + 72LL))(*v6, (char *)this + 96);
        if ( v5 >= 0 )
          v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(*(_QWORD *)*v6 + 24LL))(*v6, this);
      }
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v5;
}
