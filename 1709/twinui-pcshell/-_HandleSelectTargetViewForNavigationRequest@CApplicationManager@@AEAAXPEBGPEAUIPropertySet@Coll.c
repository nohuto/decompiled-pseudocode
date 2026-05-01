/*
 * XREFs of ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAXPEBGPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x1800125B0
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180011FE0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::_HandleSelectTargetViewForNavigationRequest(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *a4)
{
  int v5; // eax
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // rbx
  struct Windows::Foundation::Collections::IPropertySet *v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v14; // rcx
  void (__fastcall ***v15)(_QWORD, GUID *, _QWORD **); // rcx
  _QWORD *v16; // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v17)(_QWORD, GUID *, _QWORD **); // [rsp+38h] [rbp-18h]
  __int64 v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+70h] [rbp+20h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v20; // [rsp+80h] [rbp+30h] BYREF

  v20 = a3;
  v18 = -2LL;
  v17 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, const unsigned __int16 *))(**((_QWORD **)this + 76) + 56LL))(
         *((_QWORD *)this + 76),
         1LL,
         a2);
  if ( v5 < 0 )
  {
    if ( v5 == -2147319765 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *, _QWORD))(*(_QWORD *)a4 + 48LL))(
        a4,
        0LL);
  }
  else
  {
    v20 = 0LL;
    v16 = 0LL;
    (**v17)(v17, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v16);
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v19 = 0LL;
    v6 = v16;
    v7 = *v16;
    v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v19);
    v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, GUID *, __int64))(v7 + 352))(
           v6,
           2LL,
           &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
           v8);
    if ( v9 >= 0 )
    {
      v10 = v19;
      v11 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v9 = (*(__int64 (__fastcall **)(__int64, GUID *, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v10 + 40LL))(
             v10,
             &GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e,
             &v20);
    }
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v9 >= 0 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a4 + 48LL))(
        a4,
        v20);
    v12 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
    }
    v14 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  v15 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD **)))(*v15)[2])(v15);
  }
}
