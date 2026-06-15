/*
 * XREFs of ?StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002D870
 * Callers:
 *     <none>
 * Callees:
 *     ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x180014734 (-StateCheckExpired@CAudioSession@@AEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 */

void __fastcall CAudioSession::StateCheckExpiredCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_WORK *a3)
{
  __int64 (__fastcall *v4)(CAudioSession *); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a2 + 752);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 101LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, a2);
  }
  CAudioSession::StateCheckExpired((CAudioSession *)a2);
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  v4 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)a2 + 16LL);
  if ( v4 == CAudioSession::Release )
    CAudioSession::Release((CAudioSession *)a2);
  else
    v4((CAudioSession *)a2);
}
