/*
 * XREFs of ?SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z @ 0x180044AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?StartActivity@SplitView@CAppViewManagerTelemetry@@QEAAXXZ @ 0x180047BC0 (-StartActivity@SplitView@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAppViewManager::SplitView(
        CAppViewManager *this,
        HWND a2,
        __int64 (__fastcall ***a3)(struct IImmersiveApplication *, GUID *, __int64 *),
        struct IImmersiveApplication **a4)
{
  __int64 (__fastcall **v8)(struct IImmersiveApplication *, GUID *, __int64 *); // rbx
  __int64 *v9; // rax
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v19[3]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v20[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v21; // [rsp+80h] [rbp-80h]
  int *v22; // [rsp+88h] [rbp-78h]
  int *v23; // [rsp+90h] [rbp-70h]
  int v24; // [rsp+98h] [rbp-68h] BYREF
  char v25; // [rsp+9Ch] [rbp-64h]
  int v26; // [rsp+C0h] [rbp-40h] BYREF
  const char *v27; // [rsp+C8h] [rbp-38h]
  __int64 v28; // [rsp+D0h] [rbp-30h]
  char v29; // [rsp+D8h] [rbp-28h]
  __int64 v30; // [rsp+E0h] [rbp-20h]
  _BYTE v31[144]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v32; // [rsp+178h] [rbp+78h]
  __int64 v33; // [rsp+180h] [rbp+80h]
  __int64 v34; // [rsp+188h] [rbp+88h]
  __int64 v35; // [rsp+190h] [rbp+90h]

  v19[1] = -2LL;
  *a4 = 0LL;
  v20[1] = 0LL;
  v20[2] = v20;
  v20[3] = 0LL;
  v21 = 0;
  v22 = &v26;
  v23 = &v24;
  v24 = 0;
  v25 = 0;
  v29 = 0;
  v26 = 0;
  v27 = "SplitView";
  v28 = 0LL;
  v30 = 1LL;
  v32 = 0LL;
  v33 = 0LL;
  memset(v31, 0, sizeof(v31));
  v34 = 0LL;
  v35 = 0LL;
  v20[0] = &CAppViewManagerTelemetry::SplitView::`vftable';
  CAppViewManagerTelemetry::SplitView::StartActivity((CAppViewManagerTelemetry::SplitView *)v20);
  v19[0] = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 10))(
    *((_QWORD *)this + 10),
    &GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee,
    v19);
  v17 = 0LL;
  (*(void (__fastcall **)(_QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)v19[0] + 24LL))(
    v19[0],
    &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
    &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
    &v17);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 40LL))(v17);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v18 = 0LL;
  v16 = 0LL;
  v8 = *a3;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v18);
  v10 = (*v8)((struct IImmersiveApplication *)a3, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v9);
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, HWND, __int64, __int64 *))(**((_QWORD **)this + 10) + 80LL))(
            *((_QWORD *)this + 10),
            a2,
            v18,
            &v16);
    if ( v10 >= 0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 368LL))(v16, 2LL);
      v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IImmersiveApplication **))v16)(
              v16,
              &GUID_8b14e88b_5663_4caf_b196_c31479262831,
              a4);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v10 >= 0 )
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 10) + 144LL))(
            *((_QWORD *)this + 10),
            v16,
            0LL);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v20, v10);
  v11 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 48LL))(v17);
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v19[0];
  if ( v19[0] )
  {
    v19[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v20[0] = &CAppViewManagerTelemetry::SplitView::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v20);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v20);
  return (unsigned int)v10;
}
