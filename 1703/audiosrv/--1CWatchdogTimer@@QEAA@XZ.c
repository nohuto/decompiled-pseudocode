/*
 * XREFs of ??1CWatchdogTimer@@QEAA@XZ @ 0x18007B9E8
 * Callers:
 *     AudioServerCreateStream @ 0x18002AF60 (AudioServerCreateStream.c)
 *     _AudioServerInitialize_Internal_::_1_::dtor$1 @ 0x18005AC8C (_AudioServerInitialize_Internal_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWatchdogTimer::~CWatchdogTimer(HANDLE *this)
{
  HANDLE v2; // rcx

  if ( *this )
  {
    DeleteTimerQueueTimer(0LL, *this, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
    *this = 0LL;
  }
  v2 = this[4];
  if ( v2 )
    (*(void (__fastcall **)(HANDLE, HANDLE, HANDLE))(*(_QWORD *)v2 + 8LL))(v2, this[3], this[1]);
}
