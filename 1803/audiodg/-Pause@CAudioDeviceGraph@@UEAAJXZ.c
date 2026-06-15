/*
 * XREFs of ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x14000DFD0
 * Callers:
 *     ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140012270 (-OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140001970 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?Stop@DurationTracker@CAudioDeviceGraph@@QEAA?AUDurationInformation@2@XZ @ 0x14001AA30 (-Stop@DurationTracker@CAudioDeviceGraph@@QEAA-AUDurationInformation@2@XZ.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 */

__int64 __fastcall CAudioDeviceGraph::Pause(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  const GUID *v7; // r9
  int cData; // [rsp+28h] [rbp-39h]
  _BYTE v10[8]; // [rsp+38h] [rbp-29h] BYREF
  char v11; // [rsp+40h] [rbp-21h] BYREF
  char v12; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  _BYTE *v14; // [rsp+78h] [rbp+17h]
  int v15; // [rsp+80h] [rbp+1Fh]
  int v16; // [rsp+84h] [rbp+23h]
  char *v17; // [rsp+88h] [rbp+27h]
  int v18; // [rsp+90h] [rbp+2Fh]
  int v19; // [rsp+94h] [rbp+33h]
  char *v20; // [rsp+98h] [rbp+37h]
  int v21; // [rsp+A0h] [rbp+3Fh]
  int v22; // [rsp+A4h] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19));
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40F,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v3,
      cData);
  }
  else
  {
    CAudioDeviceGraph::DurationTracker::Stop((char *)this + 80, v10);
    v6 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
           v5,
           lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
    {
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v14 = v10;
      v17 = &v11;
      v20 = &v12;
      v15 = 4;
      v18 = 8;
      v21 = 8;
      TlgWrite((TraceLoggingHProvider)v6, &unk_14006FF4D, (LPCGUID)this + 23, v7, 5u, &pData);
    }
    v4 = 0;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return v4;
}
