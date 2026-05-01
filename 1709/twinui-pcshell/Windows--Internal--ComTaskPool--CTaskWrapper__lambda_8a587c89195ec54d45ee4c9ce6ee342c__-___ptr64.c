/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8a587c89195ec54d45ee4c9ce6ee342c__&___ptr64_::Run @ 0x1800840A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180081BF4 (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180083EE0 (-GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180085270 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8a587c89195ec54d45ee4c9ce6ee342c______ptr64_::Run(
        __int64 a1)
{
  const unsigned __int16 *v2; // rbx
  int Application; // eax
  __int64 v4; // rax
  struct IImmersiveApplication *v5; // rbx
  __int64 v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rcx
  unsigned __int16 **v9; // r8
  int EnterpriseIdForWindow; // eax
  __int64 v11; // rcx
  unsigned __int16 *v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  struct HWND__ v15[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h]
  __int64 v17; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v19; // [rsp+70h] [rbp+20h] BYREF
  struct IImmersiveApplication *v20; // [rsp+78h] [rbp+28h] BYREF
  EdpHelpers *v21; // [rsp+80h] [rbp+30h] BYREF

  v2 = 0LL;
  *(_QWORD *)&v15[0].unused = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( (unsigned int)EdpGetIsManaged(a1) )
  {
    v20 = 0LL;
    Application = CWinRTApplicationView::GetApplication((CWinRTApplicationView *)(*(_QWORD *)(a1 + 16) + 128LL), &v20);
    if ( Application < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x9D,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)Application);
      if ( !v20 )
        return;
      v4 = *(_QWORD *)v20;
      goto LABEL_5;
    }
    v19 = 0LL;
    v5 = v20;
    v6 = *(_QWORD *)v20;
    v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v19);
    if ( (*(int (__fastcall **)(struct IImmersiveApplication *, __int64, GUID *, __int64 *))(v6 + 24))(
           v5,
           1LL,
           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
           v7) < 0
      || (*(int (__fastcall **)(__int64, EdpHelpers **))(*(_QWORD *)v19 + 32LL))(v19, &v21) < 0 )
    {
      v8 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      v4 = *(_QWORD *)v5;
LABEL_5:
      (*(void (**)(void))(v4 + 16))();
      return;
    }
    v16 = -1LL;
    v17 = -1LL;
    EnterpriseIdForWindow = EdpHelpers::GetEnterpriseIdForWindow(v21, v15, v9);
    if ( EnterpriseIdForWindow < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xA4,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)EnterpriseIdForWindow);
      v11 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v5 + 16LL))(v5);
      v12 = *(unsigned __int16 **)&v15[0].unused;
      if ( *(_QWORD *)&v15[0].unused )
        goto LABEL_24;
      return;
    }
    v13 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v5 + 16LL))(v5);
    v2 = *(const unsigned __int16 **)&v15[0].unused;
  }
  v14 = CApplicationViewBase::SetEnterpriseId((CApplicationViewBase *)(*(_QWORD *)(a1 + 16) + 16LL), v2);
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA7,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v14);
  if ( v2 )
  {
    v12 = (unsigned __int16 *)v2;
LABEL_24:
    CoTaskMemFree(v12);
  }
}
