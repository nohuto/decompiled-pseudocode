/*
 * XREFs of ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x1800158A0
 * Callers:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180013D40 (-Release@CAudioSession@@UEAAKXZ.c)
 * Callees:
 *     ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180014400 (-CancelInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?CloseWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x1800241B0 (-CloseWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z.c)
 *     ?CloseTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@@Z @ 0x180024270 (-CloseTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002A8E8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x18007F8DC (-LogProductionAssert@@YAX_KPEBG@Z.c)
 */

void __fastcall CAudioSession::FinalRelease(CAudioSession *this)
{
  struct _TP_TIMER *v2; // rdx
  void (__fastcall *v3)(CAudioThreadPool *__hidden, struct _TP_TIMER *); // rax
  struct _TP_WORK *v4; // rdx
  void (*v5)(void); // rax
  __int64 v6; // rax
  unsigned __int16 v7[1024]; // [rsp+20h] [rbp-818h] BYREF

  if ( *((_BYTE *)this + 1016) )
  {
    v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 4) + 64LL))((char *)this - 32);
    StringCchPrintfW(v7, 0x400uLL, L"Session %ws is missing a transition to inactive", v6);
    LogProductionAssert(0x7206F6uLL, v7);
  }
  if ( *((_QWORD *)this + 88) )
  {
    CAudioSession::CancelInactiveTimer((struct _TP_TIMER **)this - 4);
    v2 = (struct _TP_TIMER *)*((_QWORD *)this + 88);
    v3 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *))(*(_QWORD *)ThreadPool + 16LL);
    if ( v3 == CAudioThreadPool::CloseTimer )
      CAudioThreadPool::CloseTimer(ThreadPool, v2);
    else
      v3(ThreadPool, v2);
    *((_QWORD *)this + 88) = 0LL;
  }
  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 105) + 32LL))(
    *((_QWORD *)this + 105),
    (char *)this - 32);
  v4 = (struct _TP_WORK *)*((_QWORD *)this + 89);
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)ThreadPool + 64LL);
    if ( (char *)v5 == (char *)CAudioThreadPool::CloseWork )
      CAudioThreadPool::CloseWork(ThreadPool, v4);
    else
      v5();
    *((_QWORD *)this + 89) = 0LL;
  }
}
