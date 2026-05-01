/*
 * XREFs of ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x18011BBE0
 * Callers:
 *     ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180117368 (-PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 * Callees:
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x18011BD34 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x18011BE00 (--$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogg.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowReadyState::PosChanged(WindowReadyState *this, unsigned int a2, unsigned int a3)
{
  int *v3; // rdi
  _QWORD *v5; // r14
  char v8; // r15
  char v9; // si
  __int64 v10; // rcx
  int v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = (int *)((char *)this + 8);
  v5 = (_QWORD *)((char *)this + 28);
  v8 = *((_DWORD *)this + 2) == 0;
  if ( a2 != *((_DWORD *)this + 7) || a3 != *((_DWORD *)this + 8) )
  {
    if ( *((_BYTE *)this + 24) )
    {
      v11 = *v3;
      *v3 = v11 | 2;
      ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
        this,
        &v11);
      BeginLayoutUpdate(*(_QWORD *)this);
    }
    *v5 = __PAIR64__(a3, a2);
  }
  v9 = 1;
  ++*((_QWORD *)this + 2);
  ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
    this,
    (char *)this + 16,
    v5,
    (char *)this + 32);
  v11 = *v3;
  *v3 = v11 | 8;
  ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
    this,
    &v11);
  if ( !*(_QWORD *)this || *v3 )
    v9 = 0;
  if ( v8 != v9 )
  {
    v10 = *((_QWORD *)this + 12);
    LOBYTE(v11) = v9;
    if ( !v10 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 16LL))(v10, &v11);
  }
}
