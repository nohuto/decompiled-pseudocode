/*
 * XREFs of ?TryClose@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x18010DB80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x1801CD2A0 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationViewBackedViewHostItem::TryClose(ApplicationViewBackedViewHostItem *this, char a2)
{
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  unsigned int v6; // ebx
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  _QWORD *v17; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v17);
  Instance = CoCreateInstance(
               &CLSID_ImmersiveShell,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)ppv);
  v6 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xF4,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_11;
  }
  v16 = 0LL;
  v7 = v17;
  v8 = *v17;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v16);
  v10 = (*(__int64 (__fastcall **)(_QWORD *, SID *, GUID *, __int64 *))(v8 + 24))(
          v7,
          &SID_AppCrusher,
          &GUID_55c8429b_3f9e_4736_96a2_1c56e2dfc883,
          v9);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = 247LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_9;
  }
  v10 = ApplicationViewHelpers::CloseView(*((_QWORD *)this + 14), v16, a2 == 0 ? 0xA : 0);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = 256LL;
    goto LABEL_7;
  }
  v6 = 0;
LABEL_9:
  v12 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
LABEL_11:
  v13 = (__int64)v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v6;
}
