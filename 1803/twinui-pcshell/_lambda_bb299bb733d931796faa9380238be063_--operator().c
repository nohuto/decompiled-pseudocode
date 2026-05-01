/*
 * XREFs of _lambda_bb299bb733d931796faa9380238be063_::operator() @ 0x180104E54
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_bb299bb733d931796faa9380238be063___::operator() @ 0x180105070 (CDelayIAMOperations--CDelayedOperation__lambda_bb299bb733d931796faa9380238be063___--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18008CBD0 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z @ 0x180102B84 (--$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___ @ 0x1801031C0 (CIAMGlobals--QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_bb299bb733d931796faa9380238be063_::operator()(__int64 a1)
{
  HWND ForegroundWindow; // rax
  HWND v3; // rcx
  PVOID v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>((_QWORD *)(a1 + 24), &v8);
  ForegroundWindow = GetForegroundWindow();
  if ( !ForegroundWindow
    || (v3 = *(HWND *)(a1 + 8), ForegroundWindow == v3)
    && ForegroundWindow == *(HWND *)(a1 + 16)
    && *(HWND *)(*(_QWORD *)a1 + 760LL) != v3
    && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 416LL))(v8) )
  {
    v7 = *(_QWORD *)(a1 + 24);
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v7);
    CIAMGlobals::QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___(v4, &v7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    IamTraceLogging::PendingActivation<HWND__ * const &>((HWND *)(a1 + 8), v5);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
}
