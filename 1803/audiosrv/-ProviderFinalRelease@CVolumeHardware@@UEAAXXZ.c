/*
 * XREFs of ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x1800A36F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x1800A302C (-LogBurst@VolumeHardwareLogger@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

void __fastcall CVolumeHardware::ProviderFinalRelease(CVolumeHardware *this)
{
  char *v1; // rbx
  struct _TP_TIMER *v3; // rcx
  __int64 *v4; // rbx
  __int64 v5; // rcx

  v1 = (char *)this + 288;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 288));
  v3 = (struct _TP_TIMER *)*((_QWORD *)v1 + 6);
  v1[56] = 1;
  SetThreadpoolTimer(v3, 0LL, 0, 0);
  if ( v1 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v1);
  WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)v1 + 6), 1);
  CloseThreadpoolTimer(*((PTP_TIMER *)v1 + 6));
  VolumeHardwareLogger::LogBurst((struct _RTL_CRITICAL_SECTION *)v1);
  *((_QWORD *)v1 + 8) = 0LL;
  v4 = (__int64 *)((char *)this + 248);
  if ( *((_QWORD *)this + 31) && *((_DWORD *)this + 70) )
  {
    v5 = *v4;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids, this);
      v5 = *v4;
    }
    (*(void (__fastcall **)(__int64, CVolumeHardware *))(*(_QWORD *)v5 + 120LL))(v5, this);
    *((_DWORD *)this + 70) = 0;
  }
  Microsoft::WRL::WeakRef::~WeakRef((CVolumeHardware *)((char *)this + 248));
}
