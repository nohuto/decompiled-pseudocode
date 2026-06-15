/*
 * XREFs of ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180019F00
 * Callers:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180018410 (-Release@CAudioSession@@UEAAKXZ.c)
 * Callees:
 *     ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180018A8C (-CancelInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?CloseWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x18001F490 (-CloseWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z.c)
 *     ?CloseTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@@Z @ 0x18001F550 (-CloseTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18005EDAC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x18005FB40 (-LogProductionAssert@@YAX_KPEBG@Z.c)
 */

void __fastcall CAudioSession::FinalRelease(CAudioSession *this)
{
  char *v2; // rdi
  struct _TP_TIMER *v3; // rdx
  void (__fastcall *v4)(CAudioThreadPool *__hidden, struct _TP_TIMER *); // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  struct _TP_WORK *v7; // rdx
  void (*v8)(void); // rax
  __int64 v9; // rax
  unsigned __int16 v10[1024]; // [rsp+20h] [rbp-818h] BYREF

  if ( *((_BYTE *)this + 1000) )
  {
    v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 4) + 64LL))((char *)this - 32);
    StringCchPrintfW(v10, 0x400uLL, L"Session %ws is missing a transition to inactive", v9);
    LogProductionAssert(0x7206F6uLL, v10);
  }
  v2 = (char *)this - 32;
  if ( *((_QWORD *)this + 79) )
  {
    CAudioSession::CancelInactiveTimer((struct _TP_TIMER **)this - 4);
    v3 = (struct _TP_TIMER *)*((_QWORD *)v2 + 83);
    v4 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *))(*(_QWORD *)ThreadPool + 16LL);
    if ( v4 == CAudioThreadPool::CloseTimer )
      CAudioThreadPool::CloseTimer(ThreadPool, v3);
    else
      v4(ThreadPool, v3);
    *((_QWORD *)v2 + 83) = 0LL;
  }
  v5 = (_QWORD *)*((_QWORD *)this + 101);
  v6 = (_QWORD *)*((_QWORD *)this + 102);
  while ( v5 != v6 )
  {
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v5 + 32LL))(*v5, v2);
    ++v5;
  }
  v7 = (struct _TP_WORK *)*((_QWORD *)v2 + 84);
  if ( v7 )
  {
    v8 = *(void (**)(void))(*(_QWORD *)ThreadPool + 64LL);
    if ( (char *)v8 == (char *)CAudioThreadPool::CloseWork )
      CAudioThreadPool::CloseWork(ThreadPool, v7);
    else
      v8();
    *((_QWORD *)v2 + 84) = 0LL;
  }
}
