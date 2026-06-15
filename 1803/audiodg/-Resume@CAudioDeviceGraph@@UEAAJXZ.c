/*
 * XREFs of ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x140040360
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140001970 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     _TlgKeywordOn @ 0x14001B050 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ @ 0x14002FBF0 (-Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 */

__int64 __fastcall CAudioDeviceGraph::Resume(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19));
  v4 = v3;
  if ( v3 >= 0 )
  {
    CAudioDeviceGraph::DurationTracker::Start((LARGE_INTEGER *)this + 10);
    v6 = (const struct _TlgProvider_t *)wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                                          v5,
                                          lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v6 > 4u && TlgKeywordOn(v6, 1uLL) )
      TlgWrite(v7, &unk_14006FFF8, (LPCGUID)this + 23, v8, 2u, &pData);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x424,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v3);
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return v4;
}
