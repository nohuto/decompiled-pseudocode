/*
 * XREFs of ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x18004F258
 * Callers:
 *     ?SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z @ 0x180052F70 (-SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z.c)
 *     ?UnboostPriority@ViewWrapperBase@@UEAAJXZ @ 0x180053870 (-UnboostPriority@ViewWrapperBase@@UEAAJXZ.c)
 *     ?ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z @ 0x1801E7360 (-ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?SetImportanceVectorForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@I@Z @ 0x180055DE0 (-SetImportanceVectorForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@I@Z.c)
 *     ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x180087F90 (-CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x1801E5198 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 */

void __fastcall ViewWrapperBase::CommitImportanceVector(ViewWrapperBase *this)
{
  struct IUnknown *v1; // rdx
  ViewManagerBridge *v3; // rcx
  void (__fastcall *v4)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned int); // rax
  __int64 v5; // r8
  _DWORD *v6; // rcx
  ViewManagerInteropTraceLogging *v7; // rcx
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

  v1 = (struct IUnknown *)*((_QWORD *)this + 24);
  if ( v1 )
  {
    v3 = *(ViewManagerBridge **)(*((_QWORD *)this + 21) + 520LL);
    v4 = *(void (__fastcall **)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned int))(*(_QWORD *)v3 + 72LL);
    v5 = *((unsigned int *)this + 87);
    if ( v4 == ViewManagerBridge::SetImportanceVectorForView )
      ViewManagerBridge::SetImportanceVectorForView(v3, v1, v5);
    else
      v4(v3, v1, v5);
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
    v6 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( v6 && *v6 )
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
        v7,
        *((_DWORD *)this + 37),
        (ViewWrapperBase *)((char *)this + 348));
    }
  }
}
