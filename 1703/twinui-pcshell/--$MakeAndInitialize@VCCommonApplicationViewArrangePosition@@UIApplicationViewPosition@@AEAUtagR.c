/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewArrangePosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAKAEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUtagRECT@@AEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAKAEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Z @ 0x1800E20E0
 * Callers:
 *     ?GetPosition@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewPosition@@@Z @ 0x1800E2220 (-GetPosition@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCCommonApplicationViewArrangePositionImpl@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E24F0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCCommonApplicationViewArrangePositionImpl@@U-$I.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCCommonApplicationViewArrangePositionImpl@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E25F0 (-Release@-$RuntimeClass@U-$InterfaceList@VCCommonApplicationViewArrangePositionImpl@@U-$Interfac.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePosition,IApplicationViewPosition,tagRECT &,enum ARRANGEMENT_BASED_VIEW_STATE &,unsigned long &,enum ARRANGEMENT_BASED_VIEW_STATE_OPTIONS &>(
        __int64 *a1,
        __int128 *a2,
        int *a3,
        _DWORD *a4,
        int *a5)
{
  __int64 v7; // rcx
  char *v10; // rax
  char *v11; // rbx
  unsigned int Interface; // edi
  __int128 v13; // xmm0
  int v14; // edx
  int v15; // eax

  v7 = *a1;
  if ( v7 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *a1 = 0LL;
  v10 = (char *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 6) = 0;
    *((_DWORD *)v10 + 7) = 0;
    *((_DWORD *)v10 + 8) = 0;
    *(_QWORD *)v10 = &CCommonApplicationViewArrangePositionImpl::`vftable';
    SetRectEmpty((LPRECT)(v10 + 8));
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v11 + 40));
    *((_DWORD *)v11 + 17) = 1;
    *(_QWORD *)v11 = &CCommonApplicationViewArrangePositionSnapshot::`vftable'{for `CCommonApplicationViewArrangePositionImpl'};
    *((_QWORD *)v11 + 5) = &CCommonApplicationViewArrangePositionSnapshot::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v11 = &CCommonApplicationViewArrangePositionSnapshot::`vftable'{for `CCommonApplicationViewArrangePositionImpl'};
    *((_QWORD *)v11 + 5) = &CCommonApplicationViewArrangePositionSnapshot::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    v13 = *a2;
    v14 = *a5;
    v15 = *a3;
    *((_DWORD *)v11 + 7) = *a4;
    *((_DWORD *)v11 + 8) = v14;
    *(_OWORD *)(v11 + 8) = v13;
    *((_DWORD *)v11 + 6) = v15;
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                  v11,
                  &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
                  a1);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return Interface;
}
