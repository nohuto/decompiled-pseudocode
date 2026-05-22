/*
 * XREFs of ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0CL@$$CBGPEAVViewHierarchy@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAY0CL@$$CBG$$QEAPEAVViewHierarchy@@@Z @ 0x1800846D8
 * Callers:
 *     ?RuntimeClassInitialize@ViewHierarchy@@UEAAJW4TestMode@1@@Z @ 0x180083090 (-RuntimeClassInitialize@ViewHierarchy@@UEAAJW4TestMode@1@@Z.c)
 * Callees:
 *     ??0MessageProxyReconnectAdapter@@QEAA@XZ @ 0x1800BF6A8 (--0MessageProxyReconnectAdapter@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x1800BF8B4 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short const (&)[43],ViewHierarchy *>(
        MessageProxyReconnectAdapter **a1,
        __int64 a2,
        __int64 a3,
        struct IMessageProxyReconnectAdapterOwner **a4)
{
  MessageProxyReconnectAdapter *v6; // rcx
  MessageProxyReconnectAdapter *v7; // rax
  int v8; // esi
  MessageProxyReconnectAdapter *v9; // rdi

  v6 = *a1;
  if ( v6 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *a1 = 0LL;
  v7 = (MessageProxyReconnectAdapter *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v9 = MessageProxyReconnectAdapter::MessageProxyReconnectAdapter(v7);
    v8 = MessageProxyReconnectAdapter::RuntimeClassInitialize(
           v9,
           &GUID_b2ef2dce_3e3b_4944_9447_e7f2772f3ad3,
           L"System\\NavigationServer_MonitorViewManager",
           *a4);
    if ( v8 >= 0 )
    {
      if ( v9 )
        (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v9 + 8LL))(v9);
      *a1 = v9;
      if ( v9 )
        (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v9 + 16LL))(v9);
      return 0;
    }
    else if ( v9 )
    {
      (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
