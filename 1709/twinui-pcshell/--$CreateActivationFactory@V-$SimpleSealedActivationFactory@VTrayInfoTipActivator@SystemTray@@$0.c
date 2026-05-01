/*
 * XREFs of ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VTrayInfoTipActivator@SystemTray@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1801BBC00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1801BB6A0 (-Release@-$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Microsoft::WRL::SimpleSealedActivationFactory<SystemTray::TrayInfoTipActivator,0>>(
        _BYTE *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4)
{
  __int64 v4; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rbx
  signed __int32 v11; // eax
  unsigned int v12; // ebx

  v4 = 0LL;
  v9 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (__int64)v9;
  if ( v9 )
  {
    v9[3] = 0LL;
    *((_DWORD *)v9 + 3) = 1;
    *v9 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
    *((_DWORD *)v9 + 8) = 4;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v10 = &Microsoft::WRL::SimpleSealedActivationFactory<SystemTray::TrayInfoTipActivator,0>::`vftable';
    v11 = _InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
    if ( (*(_BYTE *)(v10 + 32) & 4) == 0 && v11 == 2 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v4 = v10;
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v10);
    if ( *a3 == 53
      && a3[1] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
      && a3[2] == *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
      && a3[3] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
    {
      *a4 = v10;
      if ( (*a1 & 4) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
      v4 = 0LL;
      *(_DWORD *)(v10 + 32) = *(_DWORD *)a1;
      *(_QWORD *)(v10 + 24) = a2;
      v12 = 0;
    }
    else
    {
      v12 = -2147467262;
    }
  }
  else
  {
    v12 = -2147024882;
  }
  if ( v4 )
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v4);
  return v12;
}
