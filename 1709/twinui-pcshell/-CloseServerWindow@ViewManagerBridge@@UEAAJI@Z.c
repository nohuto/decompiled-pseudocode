/*
 * XREFs of ?CloseServerWindow@ViewManagerBridge@@UEAAJI@Z @ 0x180134800
 * Callers:
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1801247A0 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 *     wil::details::ScopeExitFn__lambda_0dcf13e7d39f28d4baed28b643a2d3bb___::_ScopeExitFn__lambda_0dcf13e7d39f28d4baed28b643a2d3bb___ @ 0x1801262B4 (wil--details--ScopeExitFn__lambda_0dcf13e7d39f28d4baed28b643a2d3bb___--_ScopeExitFn__lambda_0dcf.c)
 *     ?RemoveWindowFromView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z @ 0x1801345D0 (-RemoveWindowFromView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z.c)
 *     ?CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@@Z @ 0x180135BA8 (-CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV-$CCoSimpleArray@URecoveredViewInfo@@$0PP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CloseServerWindow@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x180138708 (--$CloseServerWindow@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewManagerBridge::CloseServerWindow(ViewManagerBridge *this, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  if ( *((_BYTE *)this + 153) )
  {
    v4 = -2147417848;
    v5 = 583LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)v4);
    return v4;
  }
  ViewManagerInteropTraceLogging::CloseServerWindow<unsigned int &>(&v8);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 72LL))(*((_QWORD *)this + 14), a2);
  if ( (v4 & 0x80000000) != 0 )
  {
    v5 = 586LL;
    goto LABEL_5;
  }
  return v4;
}
