/*
 * XREFs of ?SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0001_0001@@@Z @ 0x180141420
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18012343C (-_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?Instance@ViewManagerInteropTraceLogging@@KAPEAV1@XZ @ 0x18013C2D4 (-Instance@ViewManagerInteropTraceLogging@@KAPEAV1@XZ.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x1801419D0 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ??$FrameWindowChanged@AEAIAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1801447B8 (--$FrameWindowChanged@AEAIAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAU.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewWrapperBase::SetFrameWindow(__int64 a1, HWND a2, char a3)
{
  _DWORD *v6; // rcx
  __int16 v7; // ax
  __int64 v8; // rsi
  __int64 v9; // rbx
  struct IViewWrapperInternal *v10; // rbp
  DWORD WindowThreadProcessId; // [rsp+50h] [rbp+8h] BYREF
  HWND v13; // [rsp+58h] [rbp+10h] BYREF
  DWORD dwProcessId; // [rsp+60h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+20h] BYREF

  v13 = a2;
  ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(a1 + 128), &SRWLock);
  if ( *(HWND *)(a1 + 224) != a2 )
  {
    v6 = (_DWORD *)*((_QWORD *)ViewManagerInteropTraceLogging::Instance() + 1);
    if ( v6 )
    {
      if ( *v6 )
      {
        dwProcessId = 0;
        if ( a2 )
          WindowThreadProcessId = GetWindowThreadProcessId(a2, &dwProcessId);
        else
          WindowThreadProcessId = 0;
        ViewManagerInteropTraceLogging::FrameWindowChanged<unsigned int &,HWND__ * &,unsigned long const &,unsigned long &>(
          a1 + 108,
          &v13,
          &WindowThreadProcessId,
          &dwProcessId);
      }
    }
  }
  *(_QWORD *)(a1 + 224) = a2;
  if ( (a3 & 1) != 0 || !a2 )
    v7 = 0;
  else
    v7 = 128;
  *(_WORD *)(a1 + 300) &= ~0x80u;
  *(_WORD *)(a1 + 300) |= v7;
  ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 48));
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v8 = *(_QWORD *)(a1 + 128);
  v9 = (a1 - 40) & -(__int64)(a1 != 48);
  AcquireSRWLockExclusive((PSRWLOCK)(v8 + 296));
  v10 = *(struct IViewWrapperInternal **)(v8 + 312);
  if ( v10 == (struct IViewWrapperInternal *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 632LL))(v9) )
    ViewEventDispatcher::_HandleForegroundWindow((struct IViewWrapperInternal **)v8, v10);
  if ( v8 != -296 )
    ReleaseSRWLockExclusive((PSRWLOCK)(v8 + 296));
  return 0LL;
}
