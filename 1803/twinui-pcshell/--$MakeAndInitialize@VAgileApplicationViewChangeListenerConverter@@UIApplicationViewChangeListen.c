/*
 * XREFs of ??$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListener@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewChangeListener@@AEAPEAU3@@Z @ 0x180092910
 * Callers:
 *     ?RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x18002E3D0 (-RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListe.c)
 *     ?RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x18013DF00 (-RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicat.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E8C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationView.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E920 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18001E920.c)
 *     ?RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewChangeListener@@@Z @ 0x18001F0F8 (-RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewCh.c)
 *     ??0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z @ 0x18008FFDC (--0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewChangeListener@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800959C4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewChangeListener@@VFtmB.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AgileApplicationViewChangeListenerConverter,IApplicationViewChangeListener,IApplicationViewChangeListener * &>(
        void **a1,
        struct IApplicationViewChangeListener **a2)
{
  AgileApplicationViewChangeListenerConverter *v4; // rax
  AgileApplicationViewChangeListenerConverter *v5; // rbx
  volatile int *v6; // rdx
  int v7; // edi
  __int64 (__fastcall *v8)(__int64, __int64, void **); // rax
  int Interface; // eax
  unsigned int (__fastcall *v10)(__int64, volatile int *); // rax

  *a1 = 0LL;
  v4 = (AgileApplicationViewChangeListenerConverter *)operator new(
                                                        0x70uLL,
                                                        (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>(v4);
    CObjectWithThreadUseDetection::CObjectWithThreadUseDetection((__int64)v5 + 48, 2);
    *(_QWORD *)v5 = &AgileApplicationViewChangeListenerConverter::`vftable'{for `IApplicationViewChangeListener'};
    *((_QWORD *)v5 + 1) = &AgileApplicationViewChangeListenerConverter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v5 + 12) = 0LL;
    *((_QWORD *)v5 + 13) = 0LL;
    v7 = AgileApplicationViewChangeListenerConverter::RuntimeClassInitialize(v5, *a2);
    if ( v7 >= 0 )
    {
      v8 = **(__int64 (__fastcall ***)(__int64, __int64, void **))v5;
      if ( v8 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::QueryInterface(
                      (__int64)v5,
                      (__int64)&GUID_727f9e97_76ee_497b_a942_b6371328485c,
                      a1);
      else
        Interface = v8((__int64)v5, (__int64)&GUID_727f9e97_76ee_497b_a942_b6371328485c, a1);
      v7 = Interface;
    }
    if ( v5 )
    {
      v10 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v5 + 16LL);
      if ( v10 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::Release(
          (__int64)v5,
          v6);
      else
        ((void (__fastcall *)(AgileApplicationViewChangeListenerConverter *))v10)(v5);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
