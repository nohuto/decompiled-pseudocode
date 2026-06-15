/*
 * XREFs of ?PostStateCheckExpirationWork_VerifyLifetime@CAudioSession@@AEAAXXZ @ 0x1800145CC
 * Callers:
 *     ?OnProcessTerminated@CAudioSession@@UEAAXXZ @ 0x180014540 (-OnProcessTerminated@CAudioSession@@UEAAXXZ.c)
 *     ?InactiveTimerCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180032C40 (-InactiveTimerCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x18001457C (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall CAudioSession::PostStateCheckExpirationWork_VerifyLifetime(struct _TP_WORK **this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  v3 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 94);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_DWORD *)this + 120) != 2 )
    CAudioSession::PostStateCheckExpirationWork(this);
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
}
