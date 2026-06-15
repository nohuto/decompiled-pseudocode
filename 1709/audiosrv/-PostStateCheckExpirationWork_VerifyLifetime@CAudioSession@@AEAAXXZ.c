/*
 * XREFs of ?PostStateCheckExpirationWork_VerifyLifetime@CAudioSession@@AEAAXXZ @ 0x18005A788
 * Callers:
 *     ?InactiveTimerCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180072930 (-InactiveTimerCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x180018C64 (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall CAudioSession::PostStateCheckExpirationWork_VerifyLifetime(struct _TP_WORK **this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  v3 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 85);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 102) != 2 )
    CAudioSession::PostStateCheckExpirationWork(this);
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
}
