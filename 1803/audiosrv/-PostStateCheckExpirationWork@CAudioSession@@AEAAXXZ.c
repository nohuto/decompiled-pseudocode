/*
 * XREFs of ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x180046B5C
 * Callers:
 *     ?PostStateCheckExpirationWork_VerifyLifetime@CAudioSession@@AEAAXXZ @ 0x180046BAC (-PostStateCheckExpirationWork_VerifyLifetime@CAudioSession@@AEAAXXZ.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800A8CA0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x1800AC8A0 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioSession::PostStateCheckExpirationWork(struct _TP_WORK **this)
{
  struct _TP_WORK *v2; // rdx
  void (__fastcall *v3)(CAudioThreadPool *, struct _TP_WORK *); // rax

  (*((void (__fastcall **)(struct _TP_WORK **))*this + 1))(this);
  v2 = this[76];
  v3 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_WORK *))(*(_QWORD *)ThreadPool + 72LL);
  if ( v3 == CAudioThreadPool::SubmitWork )
    CAudioThreadPool::SubmitWork(ThreadPool, v2);
  else
    v3(ThreadPool, v2);
}
