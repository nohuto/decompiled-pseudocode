/*
 * XREFs of ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004FB54
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004DF48 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18004A1E8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCInputTarget@@@Z @ 0x1800518A0 (-MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCInputTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHolographicInputManager::ProcessCapture(
        MPCHolographicInputManager *this,
        struct InputInfo *a2,
        struct IMPCInputProviderBase *a3,
        struct IInputTarget **a4)
{
  char v7; // al
  __int64 v8; // r8
  struct IInputTarget *v9; // rbx
  __int64 (__fastcall **v10)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v11; // rax
  int v12; // eax
  __int64 v13; // r8
  struct IMPCInputTarget *v14; // rbx
  unsigned int v15; // esi
  unsigned int v16; // edi
  _DWORD *v17; // rcx
  ISMTracing *v18; // rcx
  struct IMPCInputTarget *v19; // rcx
  __int64 v20; // rax
  struct IMPCInputTarget *v21; // rax
  struct IMPCInputTarget *v22; // rbx
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  unsigned int v25; // esi
  unsigned int v26; // edi
  _DWORD *v27; // rcx
  ISMTracing *v28; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMPCInputTarget *v30; // [rsp+50h] [rbp+8h] BYREF

  v30 = this;
  v7 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 152LL))(a3);
  v8 = *(_QWORD *)a3;
  if ( v7 )
  {
    v21 = (struct IMPCInputTarget *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(v8 + 176))(a3);
    v22 = v21;
    v30 = v21;
    if ( v21 )
      (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v21 + 8LL))(v21);
    v23 = (**(__int64 (__fastcall ***)(struct IMPCInputTarget *, GUID *, struct IInputTarget **))v22)(
            v22,
            &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
            a4);
    v24 = retaddr;
    if ( v23 >= 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *, struct InputInfo *))(*(_QWORD *)a3 + 192LL))(
             a3,
             a2) )
      {
        (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD, _QWORD))(*(_QWORD *)a3 + 168LL))(a3, 0LL, 0LL);
        v25 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 112LL))(a3);
        v26 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 88LL))(a3);
        v27 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
        if ( v27 )
        {
          if ( *v27 )
          {
            ISMTracing::Instance();
            ISMTracing::MPCHolographicInputManager_CaptureEvent_(v28, v26, v25, 0, v22);
          }
        }
      }
      v20 = *(_QWORD *)v22;
      v19 = v22;
      goto LABEL_18;
    }
LABEL_21:
    wil::details::in1diag3::FailFast_Hr(
      v24,
      (void *)0x3B1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v23);
    __debugbreak();
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *, struct InputInfo *))(v8 + 184))(a3, a2) )
    return;
  v9 = *a4;
  if ( !*a4 )
    return;
  v30 = 0LL;
  v10 = *(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v9;
  v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFocusInputTarget>>((__int64 *)&v30);
  v12 = (*v10)(*a4, &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042, v11);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3A5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_21;
  }
  LOBYTE(v13) = *((_BYTE *)a2 + 600) != 0;
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct IMPCInputTarget *, __int64))(*(_QWORD *)a3 + 168LL))(
    a3,
    v30,
    v13);
  v14 = v30;
  v15 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 112LL))(a3);
  v16 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 88LL))(a3);
  v17 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v17 )
  {
    if ( *v17 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCHolographicInputManager_CaptureEvent_(v18, v16, v15, 1, v14);
    }
  }
  v19 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    v20 = *(_QWORD *)v19;
LABEL_18:
    (*(void (__fastcall **)(struct IMPCInputTarget *))(v20 + 16))(v19);
  }
}
