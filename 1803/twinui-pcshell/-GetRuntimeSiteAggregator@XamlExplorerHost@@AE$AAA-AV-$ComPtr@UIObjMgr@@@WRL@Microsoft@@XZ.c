/*
 * XREFs of ?GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA?AV?$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ @ 0x1801FAF7C
 * Callers:
 *     ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x1801FAC48 (-EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ?EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ @ 0x1801FAD98 (-EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___ @ 0x1801FA230 (std--call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall XamlExplorerHost::GetRuntimeSiteAggregator(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v6 = (_QWORD *)__abi_winrt_ptr_ctor(a1);
  std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___((struct std::once_flag *)(a1 + 56), (__int64)&v6);
  __abi_winrt_ptr_dtor((__int64)v6);
  v4 = *(_QWORD *)(a1 + 48);
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
