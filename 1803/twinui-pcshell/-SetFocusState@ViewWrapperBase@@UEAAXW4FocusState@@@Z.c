/*
 * XREFs of ?SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z @ 0x180052F70
 * Callers:
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x180034860 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x18004F258 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ?SetImportanceVectorForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@I@Z @ 0x180055DE0 (-SetImportanceVectorForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@I@Z.c)
 *     ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x180087F90 (-CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x1801E5198 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 */

void __fastcall ViewWrapperBase::SetFocusState(__int64 a1, int a2)
{
  __int16 v3; // ax
  struct IUnknown *v4; // rdx
  ViewManagerBridge *v5; // rcx
  void (__fastcall *v6)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned int); // rax
  __int64 v7; // r8
  _DWORD *v8; // rcx
  ViewManagerInteropTraceLogging *v9; // rcx
  LPVOID Context; // [rsp+40h] [rbp+8h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 == 1 )
    *(_DWORD *)(a1 + 88) |= 0x100u;
  else
    *(_DWORD *)(a1 + 88) &= ~0x100u;
  if ( (*(_DWORD *)(a1 + 88) & 0x40) != 0 )
  {
    if ( !a2 )
    {
      *(_WORD *)(a1 + 340) &= ~0x80u;
      ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 8));
      *(_WORD *)(a1 + 340) |= 0x80u;
      ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 8));
    }
  }
  else
  {
    *(_WORD *)(a1 + 340) &= ~0x40u;
    v3 = 0;
    if ( a2 == 1 )
      v3 = 64;
    *(_WORD *)(a1 + 340) |= v3;
    v4 = *(struct IUnknown **)(a1 + 184);
    if ( v4 )
    {
      v5 = *(ViewManagerBridge **)(*(_QWORD *)(a1 + 160) + 520LL);
      v6 = *(void (__fastcall **)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned int))(*(_QWORD *)v5 + 72LL);
      v7 = *(unsigned int *)(a1 + 340);
      if ( v6 == ViewManagerBridge::SetImportanceVectorForView )
        ViewManagerBridge::SetImportanceVectorForView(v5, v4, v7);
      else
        v6(v5, v4, v7);
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = &qword_180438968;
        qword_180438968 = &IamTraceLogging::`vftable';
        atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
        ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_180438968);
        InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_180438968);
      }
      v8 = (_DWORD *)*((_QWORD *)Context + 1);
      if ( v8 && *v8 )
      {
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) )
        {
          if ( fPending )
          {
            Context = &qword_180438968;
            qword_180438968 = &IamTraceLogging::`vftable';
            atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
            ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_180438968);
            InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_180438968);
          }
        }
        ViewManagerInteropTraceLogging::CommitImportanceVector_(
          v9,
          *(_DWORD *)(a1 + 140),
          (const union _RM_ACTIVITY_IMPORTANCE *)(a1 + 340));
      }
    }
  }
}
