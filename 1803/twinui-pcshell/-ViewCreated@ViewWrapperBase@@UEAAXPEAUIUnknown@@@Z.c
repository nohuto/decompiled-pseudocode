/*
 * XREFs of ?ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z @ 0x1801E7360
 * Callers:
 *     <none>
 * Callees:
 *     ?s_ComputeAggregatedViewData@ViewWrapperBase@@AEAA?AUAPPLICATION_VIEW_DATA@@AEBU2@AEBUHostViewStateOverrides@@@Z @ 0x18004EC34 (-s_ComputeAggregatedViewData@ViewWrapperBase@@AEAA-AUAPPLICATION_VIEW_DATA@@AEBU2@AEBUHostViewSt.c)
 *     ?PushDesiredBoundsToView@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18004EF0C (-PushDesiredBoundsToView@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x18004F258 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18006D738 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CommitActivationTimeoutPolicy@ViewWrapperBase@@AEBAXXZ @ 0x1800EFF3C (-CommitActivationTimeoutPolicy@ViewWrapperBase@@AEBAXXZ.c)
 */

void __fastcall ViewWrapperBase::ViewCreated(CWinRTApplicationView **this, struct IUnknown *a2)
{
  _QWORD *v2; // rdi
  ViewWrapperBase *v4; // rbx
  __int64 v5; // rcx
  _BYTE v6[40]; // [rsp+20h] [rbp-38h] BYREF

  v2 = this + 23;
  Microsoft::WRL::ComPtr<IUnknown>::operator=(this + 23, (CWinRTApplicationView *)a2);
  if ( *((_DWORD *)this + 83) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this[20] + 65) + 80LL))(*((_QWORD *)this[20] + 65), *v2);
  v4 = (ViewWrapperBase *)(this - 1);
  ViewWrapperBase::CommitImportanceVector(v4);
  ViewWrapperBase::CommitActivationTimeoutPolicy(v4);
  ViewWrapperBase::s_ComputeAggregatedViewData(v5, (__int64)v6, (__int64)v4 + 220, (_DWORD *)v4 + 64);
  ViewWrapperBase::PushDesiredBoundsToView(v4, (const struct APPLICATION_VIEW_DATA *)v6);
  (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v4 + 176LL))(v4);
}
