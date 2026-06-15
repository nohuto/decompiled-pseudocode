/*
 * XREFs of ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x1400183C0
 * Callers:
 *     ??0CCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140017EE8 (--0CCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 *     ??0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x14002EA18 (--0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z.c)
 *     ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x14004F7EC (--0CCrossProcessBaseClientEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x14000381C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?Clear@?$CAggregateValuesClusteredCounter@W4CpGlitchEvent@@$07@@UEAAXXZ @ 0x1400186F0 (-Clear@-$CAggregateValuesClusteredCounter@W4CpGlitchEvent@@$07@@UEAAXXZ.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
CCrossProcessBaseEndpoint *__fastcall CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint(
        CCrossProcessBaseEndpoint *this)
{
  ULONGLONG TickCount64; // rax
  __int64 v3; // rcx
  void (*v4)(void); // rax
  __int64 v5; // rcx

  *(_QWORD *)this = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  *((_QWORD *)this + 23) = &CCrossProcessEndpointTraceLogger::`vftable';
  *((GUID *)this + 12) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = &g_CrossProcessTelemetryProvider;
  *((_QWORD *)this + 31) = (char *)this + 192;
  memset_0((char *)this + 256, 0, 0x20uLL);
  *((_QWORD *)this + 26) = &CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::`vftable';
  *((_QWORD *)this + 37) = (char *)this + 208;
  *((_WORD *)this + 152) = 0;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 36) = &CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
  *((_BYTE *)this + 320) = 0;
  *((_QWORD *)this + 41) = 10000LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 5000LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 30000LL;
  *((_QWORD *)this + 47) = 0LL;
  TickCount64 = GetTickCount64();
  *((_BYTE *)this + 320) = 0;
  *((_QWORD *)this + 44) = TickCount64;
  *((_QWORD *)this + 45) = TickCount64;
  *((_QWORD *)this + 47) = TickCount64;
  v3 = *((_QWORD *)this + 37);
  if ( v3 )
  {
    v4 = *(void (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)CAggregateValuesClusteredCounter<enum CpGlitchEvent,8>::Clear )
      CAggregateValuesClusteredCounter<enum CpGlitchEvent,8>::Clear();
    else
      v4();
  }
  *((_BYTE *)this + 304) = 0;
  v5 = *((_QWORD *)this + 37);
  if ( v5 )
    (*(void (__fastcall **)(__int64, char *, char *, char *))(*(_QWORD *)v5 + 40LL))(
      v5,
      (char *)this + 320,
      (char *)this + 352,
      (char *)this + 360);
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 36) = 1;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  return this;
}
