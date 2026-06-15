/*
 * XREFs of ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18002B8BC
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180007920 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 * Callees:
 *     ??0CSharedStreamGroupProxy@@QEAA@XZ @ 0x18002BB64 (--0CSharedStreamGroupProxy@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18002BE9C (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DE.c)
 *     ??$AsIID@V?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18002DBC0 (--$AsIID@V-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@UIInspectable.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSharedStreamGroupProxy,IStreamGroupProxy,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
        _QWORD *a1,
        const struct StreamGroupParams **a2,
        struct STREAM_GROUP_DESCRIPTOR **a3,
        unsigned int *a4)
{
  volatile signed __int64 *v8; // rbx
  CSharedStreamGroupProxy *v9; // rax
  int v10; // edi
  signed __int64 v11; // rax
  signed __int32 v12; // ecx
  signed __int64 v13; // rtt
  volatile signed __int64 *v15; // [rsp+50h] [rbp+8h]

  *a1 = 0LL;
  v8 = 0LL;
  v15 = 0LL;
  v9 = (CSharedStreamGroupProxy *)operator new(0x1A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v8 = (volatile signed __int64 *)CSharedStreamGroupProxy::CSharedStreamGroupProxy(v9);
    v15 = v8;
    v10 = CSharedStreamGroupProxy::RuntimeClassInitialize((CSharedStreamGroupProxy *)v8, *a2, *a3, *a4);
    if ( v10 >= 0 )
      v10 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>>(
              v8,
              &GUID_69a39be5_2f3e_4d86_bac4_a145a90210a4,
              a1);
  }
  else
  {
    v10 = -2147024882;
  }
  if ( v8 )
  {
    v11 = *((_QWORD *)v8 + 30);
    while ( v11 >= 0 )
    {
      v12 = v11 - 1;
      v13 = v11;
      v11 = _InterlockedCompareExchange64(v8 + 30, v11 - 1, v11);
      if ( v13 == v11 )
        goto LABEL_8;
    }
    v12 = _InterlockedDecrement((volatile signed __int32 *)(2 * v11 + 16));
LABEL_8:
    if ( !v12 )
    {
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*((_QWORD *)v15 + 1) + 392LL))(v15 + 1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return (unsigned int)v10;
}
