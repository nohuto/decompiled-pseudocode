/*
 * XREFs of ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180048350
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z @ 0x1800485B0 (-ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800499D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x180049A70 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCInputTarget@@0PEA_NI@Z @ 0x18004A03C (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCInputTarget@@0PEA_NI@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004DF48 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MPCClickerProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  __int64 v4; // rbx
  struct IInputTarget *v5; // rcx
  MPCHolographicInputManager *Instance; // rax
  int v7; // eax
  unsigned int v8; // esi
  int v9; // eax
  struct IMPCInputTarget *v10; // rdx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  struct IMPCInputTarget *v14; // rcx
  struct IMPCInputTarget *v15; // rcx
  struct IInputTarget *v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  struct IInputTarget *v19; // [rsp+80h] [rbp+38h] BYREF
  struct IMPCInputTarget *v20; // [rsp+88h] [rbp+40h] BYREF
  struct IMPCInputTarget *v21; // [rsp+90h] [rbp+48h] BYREF
  __int64 v22; // [rsp+98h] [rbp+50h]

  v19 = 0LL;
  v4 = *(_QWORD *)(this + 2240);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*(_QWORD *)(this + 2240));
  v22 = v4;
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this) )
    MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
  v5 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Instance = MPCHolographicInputManager::GetInstance();
  v7 = MPCHolographicInputManager::Process3DInput(
         Instance,
         a2,
         (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)),
         &v19);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_26;
  }
  if ( v19 )
  {
    v21 = 0LL;
    v9 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, struct IMPCInputTarget **))v19)(
           v19,
           &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042,
           &v21);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x73,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
        (const char *)(unsigned int)v9);
    }
    else
    {
      v10 = 0LL;
      v20 = 0LL;
      if ( !v4 )
      {
LABEL_16:
        MPCInputProviderBase::ProcessSourceDetectedAndLost((MPCInputProviderBase *)(this - 24), v10, v21, 0LL, 0);
        if ( *(_BYTE *)(this + 2176) )
        {
          v13 = (*(__int64 (__fastcall **)(struct IInputTarget *, struct InputInfo *))(*(_QWORD *)v19 + 24LL))(v19, a2);
          if ( v13 == -2147417853 )
          {
            *(_BYTE *)(this + 2176) = 0;
          }
          else if ( v13 < 0 )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x89,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
              (const char *)(unsigned int)v13);
          }
        }
        MPCClickerProcessor::ProcessPoints((MPCClickerProcessor *)(this - 24), a2);
        v14 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v14 + 16LL))(v14);
        }
        v15 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v15 + 16LL))(v15);
        }
        goto LABEL_25;
      }
      v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IMPCInputTarget **))v4)(
              v4,
              &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042,
              &v20);
      v12 = retaddr;
      if ( v11 >= 0 )
      {
        v10 = v20;
        goto LABEL_16;
      }
    }
    wil::details::in1diag3::FailFast_Hr(
      v12,
      (void *)0x78,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x1800485ADLL);
  }
LABEL_25:
  v8 = 0;
LABEL_26:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v16 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v8;
}
