/*
 * XREFs of ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVTabTipAdapter@KeyboardHosting@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAY0BAE@G$$QEAPEAVTabTipAdapter@KeyboardHosting@@@Z @ 0x1801A5FE8
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x1801A1B48 (-RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@.c)
 * Callees:
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x1801BE6D4 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short (&)[260],KeyboardHosting::TabTipAdapter *>(
        __int64 *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        struct IMessageProxyReconnectAdapterOwner **a4)
{
  __int64 v7; // rcx
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  int v10; // esi

  v7 = *a1;
  if ( v7 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *a1 = 0LL;
  v8 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v8[5] = 1;
    *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyReconnectAdapter,IMessageProxyListener>::`vftable'{for `IMessageProxyReconnectAdapter'};
    *((_QWORD *)v8 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyReconnectAdapter,IMessageProxyListener>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyListener>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v9 = &MessageProxyReconnectAdapter::`vftable'{for `IMessageProxyReconnectAdapter'};
    *((_QWORD *)v9 + 1) = &MessageProxyReconnectAdapter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyListener>'};
    v9[10] = 0;
    *((_QWORD *)v9 + 7) = 0LL;
    *((_QWORD *)v9 + 8) = 0LL;
    *((_QWORD *)v9 + 9) = 0LL;
    *((_QWORD *)v9 + 10) = 0LL;
    *((_QWORD *)v9 + 11) = 0LL;
    v10 = MessageProxyReconnectAdapter::RuntimeClassInitialize(
            (MessageProxyReconnectAdapter *)v9,
            &GUID_4184362c_9bcb_410f_a461_0bb9001ee6c7,
            a3,
            *a4);
    if ( v10 >= 0 )
    {
      if ( v9 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
      *a1 = (__int64)v9;
      if ( v9 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
      return 0;
    }
    else if ( v9 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
