/*
 * XREFs of ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18008071C
 * Callers:
 *     ?GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180044B40 (-GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z.c)
 *     ?GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180107880 (-GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationA.c)
 *     ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x1801162B0 (-Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmer.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIImmersiveApplicationArrayPrivate@@UIImmersiveApplicationArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationArray2@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180080970 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_180080970.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIImmersiveApplicationArrayPrivate@@UIImmersiveApplicationArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationArray2@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800809F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainIn.c)
 *     ?QueryInterface@CEnumerableObjectCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180080E10 (-QueryInterface@CEnumerableObjectCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@CEnumerableObjectCollection@@UEAAKXZ @ 0x180080E30 (-Release@CEnumerableObjectCollection@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveAppArray::s_CreateInstance(const struct _GUID *a1, void **a2)
{
  _DWORD *v3; // rbx
  _DWORD *v4; // rax
  _DWORD *v5; // rdi
  _DWORD *v6; // rcx
  __int64 (*v7)(); // rax
  signed int v8; // esi
  CEnumerableObjectCollection *v9; // rax
  CEnumerableObjectCollection *v10; // rdi
  __int64 (__fastcall *v11)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **); // rax
  void **v12; // r8
  signed int Interface; // eax
  unsigned int (__fastcall *v14)(CEnumerableObjectCollection *__hidden); // rax
  __int64 (__fastcall *v15)(_DWORD *, GUID *, void **); // rax
  signed int v16; // eax
  void (__fastcall *v17)(_DWORD *); // rax

  *a2 = 0LL;
  v3 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v6 = 0LL;
  if ( v4 )
  {
    memset_0(v4, 0, 0x20uLL);
    *(_QWORD *)v5 = &Microsoft::WRL::ChainInterfaces<ITaskbarLayoutItemInternal,ITaskbarLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v5[5] = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    *((_QWORD *)v5 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationArray2>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v7 = *(__int64 (**)())(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
      if ( v7 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
      else
        ((void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *))v7)(Microsoft::WRL::Details::ModuleBase::module_);
    }
    *(_QWORD *)v5 = &CImmersiveAppArray::`vftable'{for `Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    *((_QWORD *)v5 + 1) = &CImmersiveAppArray::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationArray2>'};
    *((_QWORD *)v5 + 3) = 0LL;
    v6 = v5;
    v3 = v5;
  }
  v8 = v6 == 0LL ? 0x8007000E : 0;
  if ( v6 )
  {
    *((_QWORD *)v3 + 3) = 0LL;
    v8 = -2147024882;
    v9 = (CEnumerableObjectCollection *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      *(_QWORD *)v9 = &CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
      *((_QWORD *)v9 + 1) = &CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
      *((_QWORD *)v9 + 2) = &CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
      *((_DWORD *)v9 + 6) = 1;
      *((_DWORD *)v9 + 7) = 4;
      *((_DWORD *)v9 + 8) = 0;
      *((_QWORD *)v9 + 5) = 0LL;
      *((_QWORD *)v9 + 6) = 0LL;
      *((_QWORD *)v9 + 7) = 0LL;
      *((_QWORD *)v9 + 8) = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      v11 = **(__int64 (__fastcall ***)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **))v10;
      v12 = (void **)(v3 + 6);
      if ( v11 == CEnumerableObjectCollection::QueryInterface )
        Interface = CEnumerableObjectCollection::QueryInterface(v10, &GUID_5632b1a4_e38a_400a_928a_d4cd63230295, v12);
      else
        Interface = v11(v10, &GUID_5632b1a4_e38a_400a_928a_d4cd63230295, v12);
      v8 = Interface;
      v14 = *(unsigned int (__fastcall **)(CEnumerableObjectCollection *__hidden))(*(_QWORD *)v10 + 16LL);
      if ( v14 == CEnumerableObjectCollection::Release )
        CEnumerableObjectCollection::Release(v10);
      else
        v14(v10);
    }
    if ( v8 >= 0 )
    {
      v15 = **(__int64 (__fastcall ***)(_DWORD *, GUID *, void **))v3;
      if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::QueryInterface )
        v16 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::QueryInterface(
                v3,
                &GUID_05581915_c410_44c8_819a_f310f6c0ffee,
                a2);
      else
        v16 = v15(v3, &GUID_05581915_c410_44c8_819a_f310f6c0ffee, a2);
      v8 = v16;
    }
  }
  if ( v3 )
  {
    v17 = *(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v17 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::Release(v3);
    else
      v17(v3);
  }
  return (unsigned int)v8;
}
