/*
 * XREFs of ?OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800722EC
 * Callers:
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0316_0001@@W4GHOST_STATUS@@@Z @ 0x18005AC44 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005AD2C (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180060610 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSplashScreen::OnSystemVisualChanged(__int64 a1, unsigned int a2)
{
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  char *v7; // rbx
  char *v8; // rax
  char *v9; // rdi
  _QWORD *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt

  if ( a2 <= 1 && (a2 != 1) != *(_BYTE *)(a1 + 136) )
  {
    *(_BYTE *)(a1 + 136) = a2 != 1;
    if ( a2 != 1 )
    {
      v3 = *(_QWORD *)(a1 + 72);
      while ( v3 >= 0 )
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), v3 + 1, v3);
        if ( v4 == v3 )
          goto LABEL_8;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v3 + 16));
LABEL_8:
      v5 = *(_QWORD *)(a1 + 72);
      while ( v5 >= 0 )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), v5 + 1, v5);
        if ( v6 == v5 )
          goto LABEL_12;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v5 + 16));
LABEL_12:
      v7 = 0LL;
      v8 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v9 = v8;
      if ( v8 )
      {
        v10 = v8 + 8;
        Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v8 + 8));
        *((_DWORD *)v9 + 13) = 1;
        *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncCallback'};
        *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *(_QWORD *)v9 = off_1801FF3D0;
        *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
        *((_QWORD *)v9 + 7) = a1;
        v11 = *(_QWORD *)(a1 + 72);
        while ( v11 >= 0 )
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), v11 + 1, v11);
          if ( v12 == v11 )
            goto LABEL_19;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
LABEL_19:
        v7 = v9;
      }
      if ( v7
        && (*(int (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 128) + 200LL))(*(_QWORD *)(a1 + 128), v7) >= 0 )
      {
        *(_BYTE *)(a1 + 137) = 1;
      }
      if ( v7 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)a1);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)a1);
    }
  }
}
