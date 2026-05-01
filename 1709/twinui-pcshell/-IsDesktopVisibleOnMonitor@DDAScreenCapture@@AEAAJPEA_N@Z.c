/*
 * XREFs of ?IsDesktopVisibleOnMonitor@DDAScreenCapture@@AEAAJPEA_N@Z @ 0x1800EDA70
 * Callers:
 *     ?TryAcquireFrame@DDAScreenCapture@@AEAAJPEAUDXGI_OUTDUPL_FRAME_INFO@@PEAPEAUIDXGIResource@@@Z @ 0x1800ED93C (-TryAcquireFrame@DDAScreenCapture@@AEAAJPEAUDXGI_OUTDUPL_FRAME_INFO@@PEAPEAUIDXGIResource@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DDAScreenCapture::IsDesktopVisibleOnMonitor(DDAScreenCapture *this, bool *a2)
{
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 *v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v23; // [rsp+80h] [rbp+30h] BYREF
  __int64 *v24; // [rsp+88h] [rbp+38h] BYREF

  v21[1] = -2LL;
  v24 = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v24);
  Instance = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, (LPVOID *)ppv);
  v6 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x108,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_19;
  }
  v21[0] = 0LL;
  v7 = (__int64)v24;
  v8 = *v24;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v21);
  v10 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(v8 + 24))(
          v7,
          &SID_IImmersiveMonitorService,
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          v9);
  v6 = v10;
  if ( v10 >= 0 )
  {
    v20 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v21[0] + 48LL))(
            v21[0],
            *((_QWORD *)this + 16),
            &v20);
    v6 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x110,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v11);
LABEL_15:
      v15 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      goto LABEL_17;
    }
    v19 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, GUID *, GUID *, __int64 *))(*v24 + 24))(
            v24,
            &IID_IImmersiveSystemMode,
            &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
            &v19);
    v6 = v12;
    if ( v12 >= 0 )
    {
      v23 = 0;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v19 + 24LL))(v19, v20, &v23);
      v6 = v12;
      if ( v12 >= 0 )
      {
        *a2 = v23 != 0;
        v6 = 0;
LABEL_13:
        v14 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        goto LABEL_15;
      }
      v13 = 277LL;
    }
    else
    {
      v13 = 275LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x10D,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
    (const char *)(unsigned int)v10);
LABEL_17:
  v16 = v21[0];
  if ( v21[0] )
  {
    v21[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
LABEL_19:
  v17 = (__int64)v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v6;
}
