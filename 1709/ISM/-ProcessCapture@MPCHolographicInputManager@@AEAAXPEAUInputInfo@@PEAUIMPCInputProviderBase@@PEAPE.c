/*
 * XREFs of ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18005871C
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x180056D64 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCInputTarget@@@Z @ 0x180055E98 (-MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCInputTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHolographicInputManager::ProcessCapture(
        MPCHolographicInputManager *this,
        struct InputInfo *a2,
        struct IMPCInputProviderBase *a3,
        struct IInputTarget **a4)
{
  bool v7; // zf
  __int64 v8; // rax
  struct IInputTarget *v9; // rcx
  int v10; // eax
  __int64 v11; // r8
  struct IMPCInputTarget *v12; // rbx
  int v13; // esi
  int v14; // edi
  _DWORD *v15; // rcx
  ISMTracing *v16; // rcx
  struct IMPCInputTarget *v17; // rcx
  __int64 v18; // rax
  struct IMPCInputTarget *v19; // rax
  struct IMPCInputTarget *v20; // rbx
  int v21; // eax
  int v22; // esi
  int v23; // edi
  _DWORD *v24; // rcx
  ISMTracing *v25; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMPCInputTarget *v27; // [rsp+50h] [rbp+8h] BYREF

  v27 = this;
  v7 = (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 152LL))(a3) == 0;
  v8 = *(_QWORD *)a3;
  if ( !v7 )
  {
    v19 = (struct IMPCInputTarget *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(v8 + 176))(a3);
    v20 = v19;
    v27 = v19;
    if ( v19 )
      (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v19 + 8LL))(v19);
    v21 = (**(__int64 (__fastcall ***)(struct IMPCInputTarget *, GUID *, struct IInputTarget **))v20)(
            v20,
            &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
            a4);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x382,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v21);
      __debugbreak();
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *, struct InputInfo *))(*(_QWORD *)a3 + 192LL))(
           a3,
           a2) )
    {
      (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD, _QWORD))(*(_QWORD *)a3 + 168LL))(a3, 0LL, 0LL);
      v22 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 112LL))(a3);
      v23 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 88LL))(a3);
      v24 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v24 )
      {
        if ( *v24 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCHolographicInputManager_CaptureEvent_(v25, v23, v22, 0, v20);
        }
      }
    }
    v18 = *(_QWORD *)v20;
    v17 = v20;
    goto LABEL_20;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *, struct InputInfo *))(v8 + 184))(a3, a2) )
  {
    v9 = *a4;
    if ( *a4 )
    {
      v27 = 0LL;
      v10 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, struct IMPCInputTarget **))v9)(
              v9,
              &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042,
              &v27);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x376,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v10);
        __debugbreak();
      }
      LOBYTE(v11) = *((_BYTE *)a2 + 776) != 0;
      (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct IMPCInputTarget *, __int64))(*(_QWORD *)a3 + 168LL))(
        a3,
        v27,
        v11);
      v12 = v27;
      v13 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 112LL))(a3);
      v14 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 88LL))(a3);
      v15 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v15 )
      {
        if ( *v15 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCHolographicInputManager_CaptureEvent_(v16, v14, v13, 1, v12);
        }
      }
      v17 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        v18 = *(_QWORD *)v17;
LABEL_20:
        (*(void (__fastcall **)(struct IMPCInputTarget *))(v18 + 16))(v17);
      }
    }
  }
}
