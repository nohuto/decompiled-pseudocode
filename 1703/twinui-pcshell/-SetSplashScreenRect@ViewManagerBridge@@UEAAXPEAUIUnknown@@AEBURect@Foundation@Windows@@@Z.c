/*
 * XREFs of ?SetSplashScreenRect@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBURect@Foundation@Windows@@@Z @ 0x1801097D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ChangeSplashScreenRect@PEAUIShellView@Server@Navigation@@AEAHAEAHAEAHAEAH@ViewManagerInteropTraceLogging@@SAX$$QEAPEAUIShellView@Server@Navigation@@AEAH111@Z @ 0x18010D3F8 (--$ChangeSplashScreenRect@PEAUIShellView@Server@Navigation@@AEAHAEAHAEAHAEAH@ViewManagerInteropT.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetSplashScreenRect(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        const struct Windows::Foundation::Rect *a3)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 *v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  int v10[4]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  __int64 v12; // [rsp+60h] [rbp+10h] BYREF
  __int64 v13; // [rsp+78h] [rbp+28h] BYREF

  if ( !*((_BYTE *)this + 137) )
  {
    v4 = *(float *)a3;
    v10[0] = (int)*(float *)a3;
    v5 = *((float *)a3 + 1);
    v10[1] = (int)v5;
    v10[2] = (int)(float)(v4 + *((float *)a3 + 2));
    v10[3] = (int)(float)(v5 + *((float *)a3 + 3));
    v12 = 0LL;
    lpVtbl = a2->lpVtbl;
    v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v12);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      v7);
    v13 = v12;
    ViewManagerInteropTraceLogging::ChangeSplashScreenRect<Navigation::Server::IShellView *,int &,int &,int &,int &>(
      (unsigned int)&v13,
      (unsigned int)v10,
      (unsigned int)&v10[1],
      (unsigned int)&v10[2],
      (__int64)&v10[3]);
    v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 216LL))(v12, v10);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1F6,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
}
