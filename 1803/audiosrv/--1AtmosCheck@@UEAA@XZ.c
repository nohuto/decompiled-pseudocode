/*
 * XREFs of ??1AtmosCheck@@UEAA@XZ @ 0x18010F490
 * Callers:
 *     ??_EAtmosCheck@@UEAAPEAXI@Z @ 0x18010F9C0 (--_EAtmosCheck@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x1800266F8 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AtmosCheck::~AtmosCheck(AtmosCheck *this)
{
  void *v2; // rcx
  void *v3; // rcx
  struct _TP_TIMER *v4; // rcx
  int v5; // eax
  __int64 v6; // rcx

  *(_QWORD *)this = &AtmosCheck::`vftable';
  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 )
  {
    UnregisterWaitEx(v2, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
    *((_QWORD *)this + 11) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 10);
  if ( v3 )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 10) = 0LL;
  }
  v4 = (struct _TP_TIMER *)*((_QWORD *)this + 20);
  if ( v4 )
  {
    SetThreadpoolTimer(v4, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 20), 1);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 20));
  }
  v5 = 0;
  if ( !*((_QWORD *)this + 14)
    || (v4 = (struct _TP_TIMER *)*((_QWORD *)this + 3)) == 0LL
    || (v5 = (*(__int64 (__fastcall **)(struct _TP_TIMER *, _QWORD))(*(_QWORD *)v4 + 72LL))(v4, *((_QWORD *)this + 14)),
        v5 >= 0) )
  {
    if ( *((_QWORD *)this + 15) )
    {
      v4 = (struct _TP_TIMER *)*((_QWORD *)this + 3);
      if ( v4 )
        v5 = (*(__int64 (__fastcall **)(struct _TP_TIMER *, _QWORD))(*(_QWORD *)v4 + 104LL))(v4, *((_QWORD *)this + 15));
    }
  }
  AtmosCheck::Trace(v4, "UnregAppDepNotification result", v5);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
