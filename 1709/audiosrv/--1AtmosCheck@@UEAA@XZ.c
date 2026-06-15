/*
 * XREFs of ??1AtmosCheck@@UEAA@XZ @ 0x1800E2650
 * Callers:
 *     ??_EAtmosCheck@@UEAAPEAXI@Z @ 0x1800E2A90 (--_EAtmosCheck@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x18005A218 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 */

void __fastcall AtmosCheck::~AtmosCheck(AtmosCheck *this)
{
  struct _TP_TIMER *v2; // rcx
  int v3; // eax

  *(_QWORD *)this = &AtmosCheck::`vftable';
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 17);
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 17), 1);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 17));
  }
  v3 = 0;
  if ( !*((_QWORD *)this + 11)
    || (v2 = (struct _TP_TIMER *)*((_QWORD *)this + 3)) == 0LL
    || (v3 = (*(__int64 (__fastcall **)(struct _TP_TIMER *, _QWORD))(*(_QWORD *)v2 + 72LL))(v2, *((_QWORD *)this + 11)),
        v3 >= 0) )
  {
    if ( *((_QWORD *)this + 12) )
    {
      v2 = (struct _TP_TIMER *)*((_QWORD *)this + 3);
      if ( v2 )
        v3 = (*(__int64 (__fastcall **)(struct _TP_TIMER *, _QWORD))(*(_QWORD *)v2 + 104LL))(v2, *((_QWORD *)this + 12));
    }
  }
  AtmosCheck::Trace(v2, "UnregAppDepNotification result", v3);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 3) = -1073741823;
}
