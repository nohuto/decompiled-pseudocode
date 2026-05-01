/*
 * XREFs of ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1800432E0
 * Callers:
 *     ?GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180044950 (-GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 *     ?GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x1800F1560 (-GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 *     ?GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x180107140 (-GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIImmersiveApplicationArrayPrivate@@UIImmersiveApplicationArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationArray2@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180080970 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_180080970.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIImmersiveApplicationArrayPrivate@@UIImmersiveApplicationArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationArray2@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800809F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainIn.c)
 *     ?AddObject@CImmersiveAppArray@@UEAAJPEAUIUnknown@@@Z @ 0x180080A90 (-AddObject@CImmersiveAppArray@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?QueryInterface@CEnumerableObjectCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180080E10 (-QueryInterface@CEnumerableObjectCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@CEnumerableObjectCollection@@UEAAKXZ @ 0x180080E30 (-Release@CEnumerableObjectCollection@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::GetImmersiveApplicationArraySafe(
        CApplicationManager *this,
        struct IImmersiveApplicationArray **a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  _QWORD *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  void (__fastcall *v10)(struct Microsoft::WRL::Details::ModuleBase *); // rax
  int v11; // esi
  __int64 (__fastcall ***v12)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **); // rax
  CEnumerableObjectCollection *v13; // rdi
  __int64 (__fastcall *v14)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **); // rax
  void **v15; // r8
  int Interface; // eax
  unsigned int (__fastcall *v17)(CEnumerableObjectCollection *__hidden); // rax
  __int64 (__fastcall *v18)(_QWORD *, GUID *, CImmersiveAppArray **); // rax
  int v19; // eax
  void (__fastcall *v20)(_QWORD *); // rax
  CImmersiveAppArray *v21; // rcx
  CImmersiveAppArray *v22; // rbx
  CImmersiveAppArray *v23; // rsi
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rdi
  struct IUnknown *v26; // rdx
  __int64 (__fastcall *v27)(CImmersiveAppArray *__hidden, struct IUnknown *); // rax
  int v28; // eax
  void (__fastcall *v29)(CImmersiveAppArray *); // rax
  __int64 (__fastcall *v30)(CImmersiveAppArray *, GUID *, struct IImmersiveApplicationArray **); // rax
  int v31; // eax
  __int64 (__fastcall *v32)(_QWORD); // rax
  int v34; // [rsp+88h] [rbp+10h]
  CImmersiveAppArray *v35; // [rsp+90h] [rbp+18h] BYREF
  _QWORD *v36; // [rsp+98h] [rbp+20h]

  *a2 = 0LL;
  v35 = 0LL;
  v4 = 0LL;
  v36 = 0LL;
  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  if ( v6 )
  {
    memset_0(v6, 0, 0x20uLL);
    *v6 = &Microsoft::WRL::ChainInterfaces<ITaskbarLayoutItemInternal,ITaskbarLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *((_DWORD *)v6 + 5) = 1;
    *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    v6[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationArray2>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v10 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                + 8LL);
      if ( (char *)v10 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
      else
        v10(Microsoft::WRL::Details::ModuleBase::module_);
    }
    *v6 = &CImmersiveAppArray::`vftable'{for `Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    v6[1] = &CImmersiveAppArray::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationArray2>'};
    v6[3] = 0LL;
    v9 = v6;
    v4 = v6;
    v36 = v6;
  }
  v11 = -2147024882;
  if ( v9 )
  {
    v4[3] = 0LL;
    v12 = (__int64 (__fastcall ***)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **))operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = (CEnumerableObjectCollection *)v12;
    if ( v12 )
    {
      *v12 = (__int64 (__fastcall **)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **))&CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
      v12[1] = (__int64 (__fastcall **)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **))&CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
      v12[2] = (__int64 (__fastcall **)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **))&CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
      *((_DWORD *)v12 + 6) = 1;
      *(__int64 (__fastcall ***)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **))((char *)v12 + 28) = (__int64 (__fastcall **)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **))4;
      v12[5] = 0LL;
      v12[6] = 0LL;
      v12[7] = 0LL;
      v12[8] = 0LL;
      v14 = **v12;
      v15 = (void **)(v4 + 3);
      if ( v14 == CEnumerableObjectCollection::QueryInterface )
        Interface = CEnumerableObjectCollection::QueryInterface(v13, &GUID_5632b1a4_e38a_400a_928a_d4cd63230295, v15);
      else
        Interface = v14(v13, &GUID_5632b1a4_e38a_400a_928a_d4cd63230295, v15);
      v11 = Interface;
      v17 = *(unsigned int (__fastcall **)(CEnumerableObjectCollection *__hidden))(*(_QWORD *)v13 + 16LL);
      if ( v17 == CEnumerableObjectCollection::Release )
        CEnumerableObjectCollection::Release(v13);
      else
        v17(v13);
    }
    if ( v11 >= 0 )
    {
      v18 = *(__int64 (__fastcall **)(_QWORD *, GUID *, CImmersiveAppArray **))*v4;
      if ( (char *)v18 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::QueryInterface )
        v19 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::QueryInterface(
                v4,
                &GUID_05581915_c410_44c8_819a_f310f6c0ffee,
                &v35);
      else
        v19 = v18(v4, &GUID_05581915_c410_44c8_819a_f310f6c0ffee, &v35);
      v11 = v19;
    }
  }
  if ( v4 )
  {
    v20 = *(void (__fastcall **)(_QWORD *))(*v4 + 16LL);
    if ( (char *)v20 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::Release(v4);
    else
      v20(v4);
  }
  v34 = v11;
  v21 = v35;
  if ( v11 >= 0 )
  {
    v22 = v35;
    v23 = v35;
    if ( v35 )
    {
      (*(void (__fastcall **)(CImmersiveAppArray *, __int64, __int64, __int64))(*(_QWORD *)v35 + 8LL))(v35, v5, v7, v8);
      v21 = v35;
    }
    v24 = *((_QWORD *)this + 48);
    v25 = 0LL;
    if ( v24 )
    {
      do
      {
        v26 = *(struct IUnknown **)(*((_QWORD *)this + 47) + 8 * v25);
        v27 = *(__int64 (__fastcall **)(CImmersiveAppArray *__hidden, struct IUnknown *))(*(_QWORD *)v23 + 64LL);
        if ( v27 == CImmersiveAppArray::AddObject )
          v28 = CImmersiveAppArray::AddObject(v23, v26);
        else
          v28 = v27(v23, v26);
        v34 = v28;
        if ( v28 < 0 )
          break;
        ++v25;
      }
      while ( v25 < v24 );
      v21 = v35;
    }
    if ( v22 )
    {
      v29 = *(void (__fastcall **)(CImmersiveAppArray *))(*(_QWORD *)v22 + 16LL);
      if ( (char *)v29 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::Release(v22);
      else
        v29(v22);
      v21 = v35;
    }
    if ( v34 >= 0 )
    {
      v30 = **(__int64 (__fastcall ***)(CImmersiveAppArray *, GUID *, struct IImmersiveApplicationArray **))v21;
      if ( (char *)v30 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::QueryInterface )
        v31 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::QueryInterface(
                v21,
                &GUID_c6ed6dac_8fac_4598_a74c_69020137149c,
                a2);
      else
        v31 = v30(v21, &GUID_c6ed6dac_8fac_4598_a74c_69020137149c, a2);
      v21 = v35;
      v34 = v31;
    }
  }
  if ( v21 )
  {
    v35 = 0LL;
    v32 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 16LL);
    if ( v32 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::Release(v21);
    else
      ((void (__fastcall *)(CImmersiveAppArray *, _QWORD, __int64, __int64))v32)(v21, *(_QWORD *)v21, v7, v8);
  }
  return (unsigned int)v34;
}
