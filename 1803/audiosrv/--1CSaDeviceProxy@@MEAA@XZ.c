/*
 * XREFs of ??1CSaDeviceProxy@@MEAA@XZ @ 0x180045E20
 * Callers:
 *     ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x1800463A0 (--_ECSaDeviceProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180017D54 (TraceLoggingRegisterEx.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019D10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObje.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180097844 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800997B4 (-_Erase@-$_Tree@V-$_Tmap_traits@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$allocator@U-$pair@$$CB.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$CComHeapPtr@G@ATL@@@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAV?$CComHeapPtr@G@ATL@@@Z @ 0x1800C7BD8 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$CComHeapPtr@G.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800CB6A8 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
void __fastcall CSaDeviceProxy::~CSaDeviceProxy(CSaDeviceProxy *this)
{
  char *v2; // r15
  __int64 v3; // rcx
  __int64 v4; // r14
  DWORD LastError; // ebx
  TLG_PENABLECALLBACK v6; // rdx
  PVOID v7; // r8
  __int64 v8; // r10
  __int64 v9; // rdx
  const WCHAR *v10; // r8
  __int64 v11; // rax
  std::_Ref_count_base *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // r8d
  __int64 v16; // rcx
  void (*v17)(void); // rax
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 *v21; // r14
  __int64 *v22; // rbx
  void *v23; // rbx
  HANDLE ProcessHeap; // rax
  LPVOID *v25; // rbx
  __int64 v26; // r10
  int v27; // [rsp+20h] [rbp-148h]
  WINBOOL fPending; // [rsp+30h] [rbp-138h] BYREF
  int v29; // [rsp+34h] [rbp-134h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-130h] BYREF
  __int64 v31; // [rsp+40h] [rbp-128h] BYREF
  std::_Ref_count_base *v32; // [rsp+48h] [rbp-120h]
  _QWORD v33[2]; // [rsp+50h] [rbp-118h] BYREF
  _DWORD v34[2]; // [rsp+60h] [rbp-108h] BYREF
  __int64 v35; // [rsp+68h] [rbp-100h]
  __int64 v36; // [rsp+70h] [rbp-F8h]
  _QWORD *v37; // [rsp+78h] [rbp-F0h]
  _QWORD v38[11]; // [rsp+88h] [rbp-E0h] BYREF
  unsigned __int16 *v39; // [rsp+E0h] [rbp-88h] BYREF
  int v40; // [rsp+E8h] [rbp-80h]
  int v41; // [rsp+ECh] [rbp-7Ch]
  void *v42; // [rsp+F0h] [rbp-78h]
  int v43; // [rsp+F8h] [rbp-70h]
  int v44; // [rsp+FCh] [rbp-6Ch]
  _QWORD *v45; // [rsp+100h] [rbp-68h]
  __int64 v46; // [rsp+108h] [rbp-60h]
  const WCHAR *v47; // [rsp+110h] [rbp-58h]
  int v48; // [rsp+118h] [rbp-50h]
  int v49; // [rsp+11Ch] [rbp-4Ch]
  __int64 v50; // [rsp+120h] [rbp-48h]
  __int64 v51; // [rsp+128h] [rbp-40h]
  int *v52; // [rsp+130h] [rbp-38h]
  __int64 v53; // [rsp+138h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v36 = -2LL;
  v33[1] = this;
  *(_QWORD *)this = &CSaDeviceProxy::`vftable'{for `IInspectable'};
  v2 = (char *)this + 8;
  *((_QWORD *)this + 1) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISaDeviceProxy,IWeakReferenceSource,IInspectable>'};
  *((_QWORD *)this + 2) = &CSaDeviceProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    LastError = GetLastError();
    (*(void (__fastcall **)(CAudioResourceManager *, __int64))(*(_QWORD *)g_AudioResourceManager + 40LL))(
      g_AudioResourceManager,
      v4);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 8) = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18018A2A0;
    qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
    qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    qword_18018A2A8 = (__int64)qword_18018A2B8;
    byte_18018A2B0 = 1;
    TraceLoggingRegisterEx(qword_18018A2B8, v6, v7);
    dword_18018A2B4 = 1;
    (*(void (__fastcall **)(void *))(qword_18018A2A0 + 8LL))(&qword_18018A2A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18018A2A0);
  }
  v8 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v8 > 4u )
  {
    v33[0] = v2;
    v45 = v33;
    v46 = 8LL;
    v9 = *((_QWORD *)this + 6);
    v10 = &word_180133238;
    LODWORD(v11) = 0;
    if ( *(_QWORD *)v9 )
    {
      v10 = *(const WCHAR **)v9;
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)(*(_QWORD *)v9 + 2 * v11) );
    }
    v47 = v10;
    v48 = 2 * v11 + 2;
    v49 = 0;
    v50 = v9 + 48;
    v51 = 16LL;
    v29 = *(_DWORD *)(v9 + 8);
    v52 = &v29;
    v53 = 4LL;
    v34[0] = ((unsigned int)&unk_180145E3C - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v34[1] = 4;
    v35 = 0LL;
    v39 = *(unsigned __int16 **)(v8 + 8);
    v40 = *v39;
    v41 = 2;
    v42 = &unk_180145E47;
    v43 = 64;
    v44 = 1;
    EtwEventWriteTransfer(*(_QWORD *)(v8 + 32), v34, 0LL, 0LL, 6, &v39);
  }
  if ( *((_BYTE *)this + 73) )
  {
    std::make_shared<std::wstring,ATL::CComHeapPtr<unsigned short> &>(&v31, *((_QWORD *)this + 6));
    v37 = v38;
    v12 = v32;
    if ( v32 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v32 + 2);
      v12 = v32;
    }
    v38[0] = off_180122860;
    v38[1] = v31;
    v38[2] = v12;
    v38[7] = v38;
    v13 = (*(__int64 (__fastcall **)(CAudioSrv *))(*(_QWORD *)g_AudioService + 112LL))(g_AudioService);
    v14 = CSerialWorkQueue::QueueWorkItem(v13, v38);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(retaddr, (void *)0x6E1, v15, (const char *)(unsigned int)v14, v27);
      __debugbreak();
      JUMPOUT(0x180046396LL);
    }
    if ( v32 )
      std::_Ref_count_base::_Decref(v32);
  }
  v16 = *((_QWORD *)this + 14);
  if ( v16 )
  {
    *((_QWORD *)this + 14) = 0LL;
    v17 = *(void (**)(void))(*(_QWORD *)v16 + 16LL);
    if ( (char *)v17 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphObjectsStore>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphObjectsStore>::Release(v16);
    else
      v17();
  }
  v18 = *((_QWORD *)this + 10);
  if ( v18 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( *((_QWORD *)this + 8) )
    (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
  v19 = *((_QWORD *)this + 7);
  if ( v19 )
  {
    v20 = *(_QWORD *)(v19 + 40);
    v21 = *(__int64 **)(v20 + 8);
    v22 = v21;
    if ( !*((_BYTE *)v21 + 25) )
    {
      do
      {
        std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Erase(
          v19 + 40,
          v22[2]);
        v22 = (__int64 *)*v22;
        std::_Deallocate(v21, 1uLL, 0x28uLL);
        v21 = v22;
      }
      while ( !*((_BYTE *)v22 + 25) );
      v20 = *(_QWORD *)(v19 + 40);
    }
    *(_QWORD *)(v20 + 8) = v20;
    **(_QWORD **)(v19 + 40) = *(_QWORD *)(v19 + 40);
    *(_QWORD *)(*(_QWORD *)(v19 + 40) + 16LL) = *(_QWORD *)(v19 + 40);
    *(_QWORD *)(v19 + 48) = 0LL;
    v23 = *(void **)(v19 + 40);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v23);
    DeleteCriticalSection((LPCRITICAL_SECTION)v19);
    operator delete((void *)v19, (const struct std::nothrow_t *)0x40);
  }
  *((_QWORD *)this + 7) = 0LL;
  v25 = (LPVOID *)*((_QWORD *)this + 6);
  if ( v25 )
  {
    CoTaskMemFree(v25[3]);
    v25[3] = 0LL;
    CoTaskMemFree(v25[2]);
    v25[2] = 0LL;
    CoTaskMemFree(*v25);
    *v25 = 0LL;
    operator delete(v25, (const struct std::nothrow_t *)0x68);
  }
  *((_QWORD *)this + 6) = 0LL;
  if ( *((__int64 *)this + 5) < 0 && !ATL::SafeDecrementReferenceMultiThread((int *)(2LL * *((_QWORD *)this + 5) + 12)) )
  {
    if ( v26 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 32LL))(v26, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
}
