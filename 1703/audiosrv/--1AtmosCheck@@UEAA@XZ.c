/*
 * XREFs of ??1AtmosCheck@@UEAA@XZ @ 0x1800D4CF0
 * Callers:
 *     ??_EAtmosCheck@@UEAAPEAXI@Z @ 0x1800D5150 (--_EAtmosCheck@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180026130 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AtmosCheck::~AtmosCheck(AtmosCheck *this)
{
  struct _TP_TIMER *v2; // rcx
  int v3; // eax
  __int64 v4; // rcx

  *(_QWORD *)this = &AtmosCheck::`vftable';
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 16);
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 16), 1);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 16));
  }
  v3 = 0;
  if ( !*((_QWORD *)this + 10)
    || (v2 = (struct _TP_TIMER *)*((_QWORD *)this + 3)) == 0LL
    || (v3 = (*(__int64 (__fastcall **)(struct _TP_TIMER *, _QWORD))(*(_QWORD *)v2 + 72LL))(v2, *((_QWORD *)this + 10)),
        v3 >= 0) )
  {
    if ( *((_QWORD *)this + 11) )
    {
      v2 = (struct _TP_TIMER *)*((_QWORD *)this + 3);
      if ( v2 )
        v3 = (*(__int64 (__fastcall **)(struct _TP_TIMER *, _QWORD))(*(_QWORD *)v2 + 104LL))(v2, *((_QWORD *)this + 11));
    }
  }
  AtmosCheck::Trace(v2, "UnregAppDepNotification result", v3);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
