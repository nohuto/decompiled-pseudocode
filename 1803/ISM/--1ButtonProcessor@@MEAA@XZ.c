/*
 * XREFs of ??1ButtonProcessor@@MEAA@XZ @ 0x18009125C
 * Callers:
 *     ??_EButtonProcessor@@MEAAPEAXI@Z @ 0x180091218 (--_EButtonProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$deque@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@@2@@std@@IEAAXXZ @ 0x1800921A8 (-_Tidy@-$deque@V-$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@V-$allocator@V-$shared.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ButtonProcessor::~ButtonProcessor(ButtonProcessor *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  void **v3; // r14
  struct _TP_WORK *v4; // rbp
  DWORD LastError; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &ButtonProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &ButtonProcessor::`vftable'{for `RefCountedObject'};
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  *((_BYTE *)this + 112) = 1;
  v3 = (void **)((char *)this + 120);
  std::deque<std::shared_ptr<ButtonProcessor::AsynchronousWorkItem>>::_Tidy((char *)this + 120);
  if ( v2 )
    LeaveCriticalSection(v2);
  v4 = (struct _TP_WORK *)*((_QWORD *)this + 20);
  if ( v4 )
  {
    LastError = GetLastError();
    WaitForThreadpoolWorkCallbacks(v4, 0);
    CloseThreadpoolWork(v4);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 20) = 0LL;
  std::deque<std::shared_ptr<ButtonProcessor::AsynchronousWorkItem>>::_Tidy((char *)this + 120);
  operator delete(*v3);
  *v3 = 0LL;
  DeleteCriticalSection(v2);
  v6 = *((_QWORD *)this + 8);
  if ( v6 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *(_QWORD *)this = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
