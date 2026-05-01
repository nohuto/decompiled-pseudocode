/*
 * XREFs of ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x18005A410
 * Callers:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x180058C50 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 * Callees:
 *     WPP_SF_qd @ 0x180006DCC (WPP_SF_qd.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x18005B550 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     ?CTaskWindow_CreateInstance@@YAJQEBUTASKWINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x180066810 (-CTaskWindow_CreateInstance@@YAJQEBUTASKWINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddConsecutiveView(
        __int64 a1,
        __int64 a2,
        int a3,
        struct ITaskWindow *a4)
{
  __int64 v8; // rbx
  int v9; // edx
  int v10; // r8d
  __int128 v11; // xmm2
  __int128 v12; // xmm1
  __int64 v13; // rax
  int Instance; // r14d
  __int64 v15; // rdx
  __int64 *v16; // rax
  const struct _GUID *v17; // rdx
  __int64 v18; // rax
  struct ITaskWindow *v19; // rcx
  struct ITaskWindow *v21; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h]
  __int64 v24; // [rsp+48h] [rbp-B8h]
  int v25; // [rsp+50h] [rbp-B0h]
  _OWORD *v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  _OWORD v29[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+90h] [rbp-70h]
  _QWORD v31[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v32; // [rsp+B0h] [rbp-50h]
  int v33; // [rsp+B4h] [rbp-4Ch]
  __int128 v34; // [rsp+B8h] [rbp-48h]
  __int128 v35; // [rsp+C8h] [rbp-38h]
  __int128 v36; // [rsp+D8h] [rbp-28h]
  int v37; // [rsp+E8h] [rbp-18h]
  __int64 v38; // [rsp+F0h] [rbp-10h]
  int v39; // [rsp+F8h] [rbp-8h]
  int v40; // [rsp+FCh] [rbp-4h]

  v27 = -2LL;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8LL * *(_QWORD *)(a1 + 160) - 8);
  v28 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = 4;
  if ( (unsigned int)(a3 - 1) > 2 )
    v9 = 0;
  if ( (*(_DWORD *)(a1 + 196) & 2) != 0
    || *(_DWORD *)(a1 + 16) > *(_DWORD *)(a1 + 24)
    || (v10 = 0, *(_DWORD *)(a1 + 20) > *(_DWORD *)(a1 + 28)) )
  {
    v10 = 8;
  }
  v11 = *(_OWORD *)(a1 + 68);
  v29[0] = v11;
  v12 = *(_OWORD *)(a1 + 84);
  v29[1] = v12;
  v30 = *(_QWORD *)(a1 + 100);
  v21 = 0LL;
  if ( a4 )
  {
    v13 = *(_QWORD *)(a1 + 144);
    v22 = v9 | ((v10 & 8) == 0);
    v23 = a1 + 16;
    v24 = (v13 + 112) & -(__int64)(v13 != 0);
    v25 = v10;
    v26 = v29;
    Instance = (*(__int64 (__fastcall **)(struct ITaskWindow *, int *))(*(_QWORD *)a4 + 200LL))(a4, &v22);
    if ( Instance < 0 )
      goto LABEL_21;
    if ( v21 != a4 )
    {
      (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a4 + 8LL))(a4);
      v21 = a4;
    }
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 144);
    v31[0] = 0LL;
    v31[1] = a2;
    v32 = 1;
    v33 = 1;
    v34 = *(_OWORD *)(a1 + 16);
    v35 = v11;
    v36 = v12;
    v37 = v30;
    v38 = (v15 + 112) & -(__int64)(v15 != 0);
    v39 = 0;
    v40 = v10;
    v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v21);
    Instance = CTaskWindow_CreateInstance((const struct TASKWINDOW_INIT_DATA *const)v31, v17, (void **)v16);
  }
  if ( Instance >= 0 )
  {
    Instance = CImmersiveApp::CImmersiveWindowCollection::_InsertWindow(
                 (CImmersiveApp::CImmersiveWindowCollection *)a1,
                 v21,
                 *(_QWORD *)(a1 + 160));
    if ( Instance >= 0 && ((a3 - 1) & 0xFFFFFFFD) == 0 )
    {
      if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) )
      {
        (*(void (__fastcall **)(struct ITaskWindow *, bool))(*(_QWORD *)v21 + 160LL))(v21, a3 != 1);
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v18 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v21 + 32LL))(v21);
          WPP_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x12u,
            &WPP_6f54c26325303d06ba2693269ff4d199_Traceguids,
            v18,
            a3 != 1);
        }
      }
    }
  }
LABEL_21:
  v19 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)Instance;
}
