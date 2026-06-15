/*
 * XREFs of ??_ECThread@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z @ 0x18010F9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 */

Windows::Internal::ComTaskPool::CThread *__fastcall Windows::Internal::ComTaskPool::CThread::`vector deleting destructor'(
        Windows::Internal::ComTaskPool::CThread *this,
        char a2)
{
  void *v4; // rcx
  void *v5; // rcx
  struct _TP_TIMER *v6; // rcx

  *(_QWORD *)this = &Windows::Internal::ComTaskPool::CThread::`vftable';
  v4 = (void *)*((_QWORD *)this + 7);
  if ( v4 )
    CloseHandle(v4);
  v5 = (void *)*((_QWORD *)this + 14);
  if ( v5 )
    CloseHandle(v5);
  v6 = (struct _TP_TIMER *)*((_QWORD *)this + 13);
  if ( v6 )
  {
    SetThreadpoolTimer(v6, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 13), 1);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 13));
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 18);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
