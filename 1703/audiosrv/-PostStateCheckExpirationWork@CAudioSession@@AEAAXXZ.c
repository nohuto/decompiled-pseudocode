/*
 * XREFs of ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x18001457C
 * Callers:
 *     ?PostStateCheckExpirationWork_VerifyLifetime@CAudioSession@@AEAAXXZ @ 0x1800145CC (-PostStateCheckExpirationWork_VerifyLifetime@CAudioSession@@AEAAXXZ.c)
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180014620 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18008A940 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioSession::PostStateCheckExpirationWork(struct _TP_WORK **this)
{
  struct _TP_WORK *v2; // rdx
  void (__fastcall *v3)(CAudioThreadPool *__hidden, struct _TP_WORK *); // rax

  (*((void (__fastcall **)(struct _TP_WORK **))*this + 1))(this);
  v2 = this[93];
  v3 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_WORK *))(*(_QWORD *)ThreadPool + 72LL);
  if ( v3 == CAudioThreadPool::SubmitWork )
    CAudioThreadPool::SubmitWork(ThreadPool, v2);
  else
    v3(ThreadPool, v2);
}
