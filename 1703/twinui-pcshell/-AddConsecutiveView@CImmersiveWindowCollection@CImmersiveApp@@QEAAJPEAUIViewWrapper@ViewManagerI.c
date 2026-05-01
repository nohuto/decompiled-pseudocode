/*
 * XREFs of ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180057DD4
 * Callers:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18005664C (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 * Callees:
 *     WPP_SF_qd @ 0x180006D2C (WPP_SF_qd.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x180058D74 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     ?CTaskWindow_CreateInstance@@YAJQEBUTASKWINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x180064B40 (-CTaskWindow_CreateInstance@@YAJQEBUTASKWINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddConsecutiveView(
        __int64 a1,
        __int64 a2,
        int a3,
        struct ITaskWindow *a4)
{
  __int64 v8; // rbx
  int v9; // r8d
  __int128 v10; // xmm2
  __int128 v11; // xmm1
  __int64 v12; // rax
  int Instance; // r14d
  __int64 v14; // rdx
  __int64 *v15; // rax
  const struct _GUID *v16; // rdx
  __int64 v17; // rax
  struct ITaskWindow *v18; // rcx
  struct ITaskWindow *v20; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v21[3]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h]
  _OWORD *v23; // [rsp+60h] [rbp-A8h]
  __int64 v24; // [rsp+68h] [rbp-A0h]
  __int64 v25; // [rsp+70h] [rbp-98h]
  _OWORD v26[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v27; // [rsp+98h] [rbp-70h]
  _QWORD v28[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v29; // [rsp+B8h] [rbp-50h]
  int v30; // [rsp+BCh] [rbp-4Ch]
  __int128 v31; // [rsp+C0h] [rbp-48h]
  __int128 v32; // [rsp+D0h] [rbp-38h]
  __int128 v33; // [rsp+E0h] [rbp-28h]
  int v34; // [rsp+F0h] [rbp-18h]
  __int64 v35; // [rsp+F8h] [rbp-10h]
  int v36; // [rsp+100h] [rbp-8h]
  int v37; // [rsp+104h] [rbp-4h]

  v24 = -2LL;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8LL * *(_QWORD *)(a1 + 160) - 8);
  v25 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  if ( (*(_DWORD *)(a1 + 196) & 2) != 0
    || *(_DWORD *)(a1 + 16) > *(_DWORD *)(a1 + 24)
    || *(_DWORD *)(a1 + 20) > *(_DWORD *)(a1 + 28) )
  {
    v9 = 8;
  }
  else
  {
    v9 = 0;
  }
  v10 = *(_OWORD *)(a1 + 68);
  v26[0] = v10;
  v11 = *(_OWORD *)(a1 + 84);
  v26[1] = v11;
  v27 = *(_QWORD *)(a1 + 100);
  v20 = 0LL;
  if ( a4 )
  {
    v12 = *(_QWORD *)(a1 + 144);
    LODWORD(v21[0]) = ((unsigned int)(a3 - 1) <= 2 ? 4 : 0) | ((v9 & 8) == 0);
    v21[1] = a1 + 16;
    v21[2] = (v12 + 88) & -(__int64)(v12 != 0);
    LODWORD(v22) = v9;
    v23 = v26;
    Instance = (*(__int64 (__fastcall **)(struct ITaskWindow *, _QWORD *))(*(_QWORD *)a4 + 200LL))(a4, v21);
    if ( Instance < 0 )
      goto LABEL_20;
    if ( v20 != a4 )
    {
      (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a4 + 8LL))(a4);
      v20 = a4;
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 144);
    v28[0] = 0LL;
    v28[1] = a2;
    v29 = 1;
    v30 = 1;
    v31 = *(_OWORD *)(a1 + 16);
    v32 = v10;
    v33 = v11;
    v34 = v27;
    v35 = (v14 + 88) & -(__int64)(v14 != 0);
    v36 = 0;
    v37 = v9;
    v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v20);
    Instance = CTaskWindow_CreateInstance((const struct TASKWINDOW_INIT_DATA *const)v28, v16, (void **)v15);
  }
  if ( Instance >= 0 )
  {
    Instance = CImmersiveApp::CImmersiveWindowCollection::_InsertWindow(
                 (CImmersiveApp::CImmersiveWindowCollection *)a1,
                 v20,
                 *(_QWORD *)(a1 + 160));
    if ( Instance >= 0 && ((a3 - 1) & 0xFFFFFFFD) == 0 )
    {
      if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) )
      {
        (*(void (__fastcall **)(struct ITaskWindow *, bool))(*(_QWORD *)v20 + 160LL))(v20, a3 != 1);
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v17 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v20 + 32LL))(v20);
          WPP_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x12u,
            &WPP_62695e9b884c3ff85ccc232e92679a04_Traceguids,
            v17,
            a3 != 1);
        }
      }
    }
  }
LABEL_20:
  v18 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)Instance;
}
