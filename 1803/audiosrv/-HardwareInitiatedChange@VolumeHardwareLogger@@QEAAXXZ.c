/*
 * XREFs of ?HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ @ 0x1800A23F0
 * Callers:
 *     ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x1800A3370 (-OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x18004BC88 (-CurrentVolumeLevel@VolumeHardwareLogger@@AEAA-AUVolumeLevel@1@XZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ @ 0x1800A3AAC (-ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VolumeHardwareLogger::HardwareInitiatedChange(VolumeHardwareLogger *this)
{
  __int64 v2; // rcx
  LARGE_INTEGER v3; // rax
  int v4; // eax
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  TraceLoggingHProvider v7; // r10
  __int64 v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+58h] [rbp-B0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v16; // [rsp+A8h] [rbp-60h]
  int v17; // [rsp+B0h] [rbp-58h]
  int v18; // [rsp+B4h] [rbp-54h]
  char *v19; // [rsp+B8h] [rbp-50h]
  int v20; // [rsp+C0h] [rbp-48h]
  int v21; // [rsp+C4h] [rbp-44h]
  char *v22; // [rsp+C8h] [rbp-40h]
  int v23; // [rsp+D0h] [rbp-38h]
  int v24; // [rsp+D4h] [rbp-34h]
  char *v25; // [rsp+D8h] [rbp-30h]
  int v26; // [rsp+E0h] [rbp-28h]
  int v27; // [rsp+E4h] [rbp-24h]
  __int64 *v28; // [rsp+E8h] [rbp-20h]
  int v29; // [rsp+F0h] [rbp-18h]
  int v30; // [rsp+F4h] [rbp-14h]
  char *v31; // [rsp+F8h] [rbp-10h]
  int v32; // [rsp+100h] [rbp-8h]
  int v33; // [rsp+104h] [rbp-4h]
  int *v34; // [rsp+108h] [rbp+0h]
  int v35; // [rsp+110h] [rbp+8h]
  int v36; // [rsp+114h] [rbp+Ch]

  v12 = -2LL;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  PerformanceCount.QuadPart = (LONGLONG)this;
  if ( !*((_QWORD *)this + 8) )
    goto LABEL_12;
  VolumeHardwareLogger::CurrentVolumeLevel((__int64)this, (__int64)&v8);
  if ( v9 == *((_DWORD *)this + 21) )
    goto LABEL_12;
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  ++*((_DWORD *)this + 25);
  v3 = PerformanceCount;
  *((LARGE_INTEGER *)this + 17) = PerformanceCount;
  if ( *((_DWORD *)this + 25) == 1 )
  {
    *((LARGE_INTEGER *)this + 13) = v3;
    *((_QWORD *)this + 14) = v8;
    v4 = v9;
    *((_DWORD *)this + 30) = v9;
  }
  else
  {
    v4 = v9;
    if ( v9 < *((_DWORD *)this + 30) )
    {
      *((_QWORD *)this + 14) = v8;
      *((_DWORD *)this + 30) = v4;
    }
    if ( v4 <= *((_DWORD *)this + 33) )
      goto LABEL_9;
  }
  *(_QWORD *)((char *)this + 124) = v8;
  *((_DWORD *)this + 33) = v4;
LABEL_9:
  if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                       v2,
                       lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
        + 1) > 5u )
  {
    TlgCreateWsz(&pDesc, *(LPCWSTR *)(*((_QWORD *)this + 8) + 64LL));
    TlgCreateWsz(&v15, *(LPCWSTR *)(*((_QWORD *)this + 8) + 72LL));
    LODWORD(v10) = *(_DWORD *)(*((_QWORD *)this + 8) + 80LL);
    v16 = &v10;
    v17 = 4;
    v18 = 0;
    v19 = (char *)this + 72;
    v20 = 4;
    v21 = 0;
    v22 = (char *)this + 76;
    v23 = 4;
    v24 = 0;
    v25 = (char *)this + 80;
    v26 = 4;
    v27 = 0;
    v28 = &v8;
    v29 = 4;
    v30 = 0;
    v31 = (char *)&v8 + 4;
    v32 = 4;
    v33 = 0;
    v34 = &v9;
    v35 = 4;
    v36 = 0;
    TlgWrite(v7, &unk_1801452A6, v5, v6, 0xBu, &pData);
  }
  *((_DWORD *)this + 21) = v9;
  VolumeHardwareLogger::ScheduleTimer(this);
LABEL_12:
  if ( this )
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
}
