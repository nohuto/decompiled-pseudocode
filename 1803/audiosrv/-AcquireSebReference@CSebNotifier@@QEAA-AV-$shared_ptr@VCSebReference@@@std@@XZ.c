/*
 * XREFs of ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x180029990
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x1800260A0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     PubSebLevelEvent @ 0x180017CE0 (PubSebLevelEvent.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180097220 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
volatile signed __int32 **__fastcall CSebNotifier::AcquireSebReference(__int64 a1, volatile signed __int32 **a2)
{
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v5; // rax
  volatile signed __int32 *v6; // rdi
  volatile signed __int32 *v7; // r15
  int v8; // eax
  int v9; // r12d
  int v10; // eax
  struct _TP_TIMER *v11; // rcx
  std::_Ref_count_base *v12; // rcx
  __int64 v14; // rcx
  const struct _TlgProvider_t *v15; // rcx
  const GUID *v16; // r8
  const GUID *v17; // r9
  char v18; // [rsp+30h] [rbp-A8h] BYREF
  int v19; // [rsp+38h] [rbp-A0h]
  int v20; // [rsp+3Ch] [rbp-9Ch] BYREF
  volatile signed __int32 **v21; // [rsp+40h] [rbp-98h]
  volatile signed __int32 *v22; // [rsp+48h] [rbp-90h]
  volatile signed __int32 *v23; // [rsp+50h] [rbp-88h]
  __int64 v24; // [rsp+58h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-78h] BYREF
  char *v26; // [rsp+80h] [rbp-58h]
  __int64 v27; // [rsp+88h] [rbp-50h]
  int *v28; // [rsp+90h] [rbp-48h]
  __int64 v29; // [rsp+98h] [rbp-40h]

  v24 = -2LL;
  v21 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  v19 = 1;
  try
  {
    ProcessHeap = GetProcessHeap();
    v5 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v6 = v5;
    if ( v5 )
    {
      *((_DWORD *)v5 + 2) = 1;
      *((_DWORD *)v5 + 3) = 1;
      *(_QWORD *)v5 = &std::_Ref_count_obj<CSebReference>::`vftable';
      *((_QWORD *)v5 + 2) = a1;
    }
    else
    {
      v6 = 0LL;
    }
    v7 = v6 + 4;
    v22 = v6 + 4;
    v23 = v6;
    v8 = _Mtx_lock((_Mtx_t)(a1 + 8));
    if ( v8 )
      std::_Throw_C_error(v8);
    v9 = ++*(_DWORD *)a1;
    if ( *(_DWORD *)a1 == 1 )
    {
      v18 = 1;
      if ( *(_BYTE *)(a1 + 88) != 1 )
      {
        v20 = PubSebLevelEvent(WNF_SEB_AUDIO_ACTIVITY, 1u);
        if ( v20 >= 0 )
          *(_BYTE *)(a1 + 88) = v18;
        v15 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                           v14,
                                                           lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                             + 1);
        if ( *(_DWORD *)v15 > 4u )
        {
          v26 = &v18;
          v27 = 1LL;
          v28 = &v20;
          v29 = 4LL;
          TlgWrite(v15, &unk_1801472AF, v16, v17, 4u, &pData);
        }
      }
    }
    v10 = _Mtx_unlock((_Mtx_t)(a1 + 8));
    if ( v10 )
      std::_Throw_C_error(v10);
    if ( v9 == 1 )
    {
      v11 = *(struct _TP_TIMER **)(a1 + 96);
      if ( v11 )
      {
        SetThreadpoolTimer(v11, 0LL, 0, 0);
        WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)(a1 + 96), 1);
      }
    }
    if ( v6 )
    {
      _InterlockedIncrement(v6 + 2);
      v7 = v22;
    }
    *a2 = v7;
    v12 = (std::_Ref_count_base *)a2[1];
    a2[1] = v6;
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    if ( v6 && _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v6);
    }
  }
  catch ( std::bad_alloc )
  {
    AudSrvTraceLoggingErrorHelper("CSebNotifier::AcquireSebReference", 0xB0u, -2147024882);
    return v21;
  }
  return a2;
}
