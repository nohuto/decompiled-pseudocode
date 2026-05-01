/*
 * XREFs of ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18005A208
 * Callers:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x180058C50 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0316_0001@@W4GHOST_STATUS@@@Z @ 0x18005AC44 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x18005B550 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x18005B9B4 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x180064ED4 (-s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddFirstView(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct ITaskWindow *a3)
{
  __int64 v6; // rax
  int Instance; // edi
  struct ITaskWindow *v8; // rdx
  __int128 v9; // xmm2
  __int128 v10; // xmm1
  struct ITaskWindow *v12[6]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v13; // [rsp+78h] [rbp-9h]
  __int128 v14; // [rsp+80h] [rbp-1h] BYREF
  __int128 v15; // [rsp+90h] [rbp+Fh]
  __int64 v16; // [rsp+A0h] [rbp+1Fh]

  v12[1] = (struct ITaskWindow *)-2LL;
  v12[0] = 0LL;
  if ( a3 )
  {
    v6 = *((_QWORD *)this + 18);
    LODWORD(v14) = 2;
    *((_QWORD *)&v14 + 1) = 0LL;
    *(_QWORD *)&v15 = (v6 + 112) & -(__int64)(v6 != 0);
    DWORD2(v15) = 0;
    v16 = 0LL;
    Instance = (*(__int64 (__fastcall **)(struct ITaskWindow *, __int128 *))(*(_QWORD *)a3 + 200LL))(a3, &v14);
    if ( Instance < 0 )
      goto LABEL_15;
    v8 = v12[0];
    if ( v12[0] != a3 )
    {
      (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a3 + 8LL))(a3);
      v8 = a3;
      v12[0] = a3;
    }
  }
  else
  {
    if ( *((_DWORD *)this + 4) <= *((_DWORD *)this + 6) && *((_DWORD *)this + 5) <= *((_DWORD *)this + 7) )
    {
      v9 = *(_OWORD *)((char *)this + 68);
      v10 = *(_OWORD *)((char *)this + 84);
      v13 = *(_QWORD *)((char *)this + 100);
      v14 = v9;
      v15 = v10;
      LODWORD(v16) = v13;
    }
    IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)v12);
    Instance = CTaskWindow::s_CreateInstance(0LL, a2, 1LL);
    v8 = v12[0];
  }
  if ( Instance < 0 )
    goto LABEL_16;
  if ( !v8 || !(*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v8 + 32LL))(v8) )
    CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(
      this,
      2LL,
      *(_BYTE *)(*((_QWORD *)this + 18) + 714LL) != 0 ? 0x20 : 0);
  Instance = CImmersiveApp::CImmersiveWindowCollection::_InsertWindow(this, v12[0], 0LL);
  if ( Instance >= 0 )
    CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(this, v12[0]);
LABEL_15:
  v8 = v12[0];
LABEL_16:
  if ( v8 )
  {
    v12[0] = 0LL;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)Instance;
}
