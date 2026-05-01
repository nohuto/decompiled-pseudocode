/*
 * XREFs of ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180129360
 * Callers:
 *     ?UpdateWindowPositionInternal@XamlTaskbarProxy@@AEAAXXZ @ 0x180128618 (-UpdateWindowPositionInternal@XamlTaskbarProxy@@AEAAXXZ.c)
 *     ?AsyncDestroy@XamlTaskbarProxy@@UEAAXXZ @ 0x180128740 (-AsyncDestroy@XamlTaskbarProxy@@UEAAXXZ.c)
 *     ?AsyncDestroy@XamlExplorerHostWindow@@UEAAJXZ @ 0x18012AE80 (-AsyncDestroy@XamlExplorerHostWindow@@UEAAJXZ.c)
 *     ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x18012C720 (-DestroyInternal@MonitorFrame@@AEAAXXZ.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::UI::Core::ICoreDispatcher::RunAsync(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)a1 + 64LL))(a1, a2, a3, &v7);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  v4 = v7;
  v5 = v7;
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v4 = v7;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
