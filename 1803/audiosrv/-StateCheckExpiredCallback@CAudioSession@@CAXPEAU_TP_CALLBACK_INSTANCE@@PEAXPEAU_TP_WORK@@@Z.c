/*
 * XREFs of ?StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180046980
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x180046C00 (-StateCheckExpired@CAudioSession@@AEAAXXZ.c)
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180047790 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x1800478A4 (-PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

void __fastcall CAudioSession::StateCheckExpiredCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_WORK *a3)
{
  __int64 (__fastcall *v4)(CAudioSession *); // rax
  volatile signed __int32 *v5; // rbx
  void (__fastcall *v6)(CAudioSession *__hidden); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  CAudioSession::PruneTerminatedOwningProcesses((CAudioSession *)a2);
  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a2 + 616);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 82LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, a2);
  }
  CAudioSession::StateCheckExpired((CAudioSession *)a2);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  v4 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)a2 + 16LL);
  if ( v4 == CAudioSession::Release )
  {
    v5 = (volatile signed __int32 *)(a2 + 32);
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      v6 = *(void (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v5 + 32LL);
      if ( v6 == CAudioSession::FinalRelease )
        CAudioSession::FinalRelease((CAudioSession *)v5);
      else
        v6((CAudioSession *)v5);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
    }
  }
  else
  {
    v4((CAudioSession *)a2);
  }
}
