/*
 * XREFs of ?StreamStopped@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002BB20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_I @ 0x18002B574 (WPP_SF_I.c)
 *     ?FindTrackedEndpoint@CVolumeLimitTrackerImpl@@IEAAPEAVCTrackedEndpoint@@PEBG@Z @ 0x18002C09C (-FindTrackedEndpoint@CVolumeLimitTrackerImpl@@IEAAPEAVCTrackedEndpoint@@PEBG@Z.c)
 *     ?RemoveStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002D024 (-RemoveStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeLimitTrackerImpl::StreamStopped(
        CVolumeLimitTrackerImpl *this,
        struct IAudioStreamInfo *a2,
        const unsigned __int16 *a3)
{
  signed int v6; // ebx
  CTrackedEndpoint *TrackedEndpoint; // rax
  __int64 v8; // rax
  __int64 v9; // r8

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v6 = *((_DWORD *)this + 16) != 0 ? 0x8000FFFF : 0;
  if ( !a2 && !*((_DWORD *)this + 16) )
    v6 = -2147467261;
  TrackedEndpoint = CVolumeLimitTrackerImpl::FindTrackedEndpoint(this, a3);
  if ( TrackedEndpoint )
  {
    if ( v6 >= 0 )
    {
      v6 = CTrackedEndpoint::RemoveStream(TrackedEndpoint, a2);
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(CVolumeLimitTrackerImpl *))(*(_QWORD *)this + 48LL))(this);
        if ( v6 >= 0
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v8 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 40LL))(a2);
          WPP_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, v9, v8);
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  return (unsigned int)v6;
}
