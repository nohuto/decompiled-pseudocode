/*
 * XREFs of ?SetSite@XamlLauncherState@@UEAAJPEAUIUnknown@@@Z @ 0x180188B30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::SetSite(XamlLauncherState *this, struct IUnknown *a2)
{
  _QWORD *v4; // r14
  __int64 *v5; // rax
  HRESULT Service; // esi
  __int64 v7; // rdx
  __int64 *v9; // rax
  __int64 *v10; // rcx
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 *v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 )
  {
    v4 = (_QWORD *)((char *)this + 272);
    v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 34);
    Service = IUnknown_QueryService(
                a2,
                &IID_IImmersiveWindowMessageService,
                &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
                (void **)v5);
    if ( Service < 0 )
    {
      v7 = 229LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)Service);
      return (unsigned int)Service;
    }
    Service = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *))(*(_QWORD *)*v4 + 24LL))(
                *v4,
                0LL,
                (char *)this + 40,
                (char *)this + 264);
    if ( Service < 0 )
    {
      v7 = 230LL;
      goto LABEL_4;
    }
    v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 14);
    Service = IUnknown_QueryService(
                a2,
                &IID_IImmersiveSessionIdleDetector,
                &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
                (void **)v9);
    if ( Service < 0 )
    {
      v7 = 232LL;
      goto LABEL_4;
    }
    Service = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 14) + 32LL))(
                *((_QWORD *)this + 14),
                (char *)this + 48,
                (char *)this + 268);
    if ( Service < 0 )
    {
      v7 = 233LL;
      goto LABEL_4;
    }
    v10 = (__int64 *)((char *)this + 120);
    lpVtbl = a2->lpVtbl;
    v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v10);
    v13 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
            a2,
            &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
            v12);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xEB,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v13);
      return v14;
    }
  }
  else
  {
    if ( *((_DWORD *)this + 66) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 32LL))(*((_QWORD *)this + 34));
      *((_DWORD *)this + 66) = 0;
    }
    v15 = *((_QWORD *)this + 34);
    if ( v15 )
    {
      *((_QWORD *)this + 34) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    if ( *((_DWORD *)this + 67) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14));
      *((_DWORD *)this + 67) = 0;
    }
    v16 = *((_QWORD *)this + 14);
    if ( v16 )
    {
      *((_QWORD *)this + 14) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = *((_QWORD *)this + 15);
    if ( v17 )
    {
      *((_QWORD *)this + 15) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  return 0LL;
}
