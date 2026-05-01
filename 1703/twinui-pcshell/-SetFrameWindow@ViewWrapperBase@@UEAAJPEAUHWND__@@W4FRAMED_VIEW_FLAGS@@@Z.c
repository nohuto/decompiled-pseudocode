/*
 * XREFs of ?SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4FRAMED_VIEW_FLAGS@@@Z @ 0x180116DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F185C (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1800F819C (-_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?Instance@ViewManagerInteropTraceLogging@@KAPEAV1@XZ @ 0x180112054 (-Instance@ViewManagerInteropTraceLogging@@KAPEAV1@XZ.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x180116F48 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ??$FrameWindowChanged@AEAIAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x180119D40 (--$FrameWindowChanged@AEAIAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAU.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewWrapperBase::SetFrameWindow(__int64 a1, RTL_SRWLOCK *a2, char a3)
{
  _DWORD *v6; // rcx
  bool v7; // al
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  struct IViewWrapperInternal *v12; // rsi
  DWORD WindowThreadProcessId; // [rsp+50h] [rbp+28h] BYREF
  PSRWLOCK v15; // [rsp+58h] [rbp+30h] BYREF
  DWORD dwProcessId; // [rsp+60h] [rbp+38h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+40h] BYREF

  v15 = a2;
  ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(a1 + 104), &SRWLock);
  if ( *(RTL_SRWLOCK **)(a1 + 200) != a2 )
  {
    v6 = (_DWORD *)*((_QWORD *)ViewManagerInteropTraceLogging::Instance() + 1);
    if ( v6 )
    {
      if ( *v6 )
      {
        dwProcessId = 0;
        if ( a2 )
          WindowThreadProcessId = GetWindowThreadProcessId((HWND)a2, &dwProcessId);
        else
          WindowThreadProcessId = 0;
        ViewManagerInteropTraceLogging::FrameWindowChanged<unsigned int &,HWND__ * &,unsigned long const &,unsigned long &>(
          a1 + 84,
          &v15,
          &WindowThreadProcessId,
          &dwProcessId);
      }
    }
  }
  *(_QWORD *)(a1 + 200) = a2;
  v7 = (a3 & 1) == 0 && a2;
  v8 = a1 - 48;
  *(_WORD *)(a1 + 276) &= ~0x80u;
  *(_WORD *)(a1 + 276) |= v7 << 7;
  ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 48));
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v9 = a1 - 40;
  v10 = *(_QWORD *)(a1 + 104);
  v11 = v9 & -(__int64)(v8 != 0);
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(v10 + 224), &v15);
  v12 = *(struct IViewWrapperInternal **)(v10 + 240);
  if ( v12 == (struct IViewWrapperInternal *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 632LL))(v11) )
    ViewEventDispatcher::_HandleForegroundWindow((struct IViewWrapperInternal **)v10, v12);
  if ( v15 )
    ReleaseSRWLockExclusive(v15);
  return 0LL;
}
