/*
 * XREFs of ?GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14000D980
 * Callers:
 *     ?GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140011E60 (-GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRe.c)
 * Callees:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140002DA0 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetStreamingResourceManager(
        CAudioDeviceGraph *this,
        struct IAudioStreamingResourceRegistration **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  struct IAudioStreamingResourceRegistration **v4; // rsi
  int StreamingResourceManager; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  v4 = (struct IAudioStreamingResourceRegistration **)((char *)this + 384);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  *a2 = 0LL;
  if ( *v4 || (StreamingResourceManager = CreateStreamingResourceManager(v4), StreamingResourceManager >= 0) )
  {
    *a2 = *v4;
    if ( *v4 )
      (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)*v4 + 8LL))(*v4);
    StreamingResourceManager = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)StreamingResourceManager;
}
