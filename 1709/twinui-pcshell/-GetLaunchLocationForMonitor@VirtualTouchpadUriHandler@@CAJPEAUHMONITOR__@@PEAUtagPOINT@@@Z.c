/*
 * XREFs of ?GetLaunchLocationForMonitor@VirtualTouchpadUriHandler@@CAJPEAUHMONITOR__@@PEAUtagPOINT@@@Z @ 0x18017C258
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x18017BC90 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualTouchpadUriHandler::GetLaunchLocationForMonitor(HMONITOR a1, struct tagPOINT *a2)
{
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  unsigned int v6; // ebx
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 *v9; // rax
  int v10; // eax
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  LONG v16; // eax
  LONG v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v22; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v23; // [rsp+38h] [rbp-38h] BYREF
  _QWORD *v24; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v26[2]; // [rsp+50h] [rbp-20h] BYREF
  LONG v27; // [rsp+58h] [rbp-18h]
  LONG v28; // [rsp+5Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v24 = 0LL;
  *a2 = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v24);
  Instance = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, (LPVOID *)ppv);
  v6 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6E,
      (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_25;
  }
  v7 = v24;
  v23 = 0LL;
  v8 = *v24;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v23);
  v10 = (*(__int64 (__fastcall **)(_QWORD *, SID *, GUID *, __int64 *))(v8 + 24))(
          v7,
          &SID_IImmersiveMonitorService,
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          v9);
  v6 = v10;
  if ( v10 >= 0 )
  {
    v11 = v23;
    v22 = 0LL;
    v12 = *v23;
    v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v22);
    v14 = (*(__int64 (__fastcall **)(_QWORD *, HMONITOR, SID *, GUID *, __int64 *))(v12 + 72))(
            v11,
            a1,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
            v13);
    v6 = v14;
    if ( v14 < 0 )
    {
      v15 = 116LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_21;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 80LL))(v22, &v25);
    v6 = v14;
    if ( v14 < 0 )
    {
      v15 = 118LL;
      goto LABEL_11;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v22 + 168LL))(v22, v26);
    v6 = v14;
    if ( v14 < 0 )
    {
      v15 = 120LL;
      goto LABEL_11;
    }
    if ( v25 < 2 )
    {
      v17 = v27;
    }
    else
    {
      if ( v25 != 2 )
      {
        if ( v25 != 3 )
        {
LABEL_20:
          v6 = 0;
LABEL_21:
          v18 = v22;
          if ( v22 )
          {
            v22 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          }
          goto LABEL_23;
        }
        a2->x = v27;
        v16 = v26[1];
LABEL_19:
        a2->y = v16;
        goto LABEL_20;
      }
      v17 = v26[0];
    }
    a2->x = v17;
    v16 = v28;
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x71,
    (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
    (const char *)(unsigned int)v10);
LABEL_23:
  v19 = (__int64)v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
LABEL_25:
  v20 = (__int64)v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return v6;
}
