/*
 * XREFs of ?GetWindowResizingStateForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801338F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::GetWindowResizingStateForView(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        enum Windows::Internal::Shell::ViewManagerInterop::WindowResizingState *a3)
{
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  *(_DWORD *)a3 = 0;
  if ( *((_BYTE *)this + 153) )
    return 0LL;
  v14 = 0LL;
  lpVtbl = a2->lpVtbl;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v14);
  ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
    a2,
    &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
    v6);
  v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 536LL))(v14, &v13);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *(_DWORD *)a3 = v13 != 0;
    v11 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x171,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)(unsigned int)v7);
  v9 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v8;
}
