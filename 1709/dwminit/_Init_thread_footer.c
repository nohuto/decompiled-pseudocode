/*
 * XREFs of _Init_thread_footer @ 0x180009238
 * Callers:
 *     ?GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800079F0 (-GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&stru_18000F6B8);
  v2 = (unsigned int)tls_index;
  *a1 = ++Init_global_epoch;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 4LL) = Init_global_epoch;
  LeaveCriticalSection(&stru_18000F6B8);
  return Init_thread_notify();
}
