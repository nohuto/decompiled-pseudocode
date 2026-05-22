/*
 * XREFs of ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800544B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z @ 0x1800546A8 (-ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x180056D64 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18005FE00 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x18005FED0 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCClickerProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  _OWORD *v4; // rax
  struct InputInfo *v5; // r8
  __int64 v6; // rcx
  struct IInputTarget *v7; // rcx
  struct IInputDisplay *v8; // rbx
  MPCHolographicInputManager *Instance; // rax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // r8
  int v16; // eax
  _QWORD *v17; // rcx
  struct IInputTarget *v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IInputTarget *v21; // [rsp+70h] [rbp+30h] BYREF
  _QWORD *v22; // [rsp+78h] [rbp+38h] BYREF

  v21 = 0LL;
  v4 = (_OWORD *)(this + 544);
  v5 = a2;
  v6 = 22LL;
  do
  {
    *v4 = *(_OWORD *)v5;
    v4[1] = *((_OWORD *)v5 + 1);
    v4[2] = *((_OWORD *)v5 + 2);
    v4[3] = *((_OWORD *)v5 + 3);
    v4[4] = *((_OWORD *)v5 + 4);
    v4[5] = *((_OWORD *)v5 + 5);
    v4[6] = *((_OWORD *)v5 + 6);
    v4 += 8;
    *(v4 - 1) = *((_OWORD *)v5 + 7);
    v5 = (struct InputInfo *)((char *)v5 + 128);
    --v6;
  }
  while ( v6 );
  *v4 = *(_OWORD *)v5;
  v4[1] = *((_OWORD *)v5 + 1);
  if ( !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this) )
    MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
  v7 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *(struct IInputDisplay **)(this + 32);
  Instance = MPCHolographicInputManager::GetInstance();
  v10 = MPCHolographicInputManager::Process3DInput(
          Instance,
          v8,
          a2,
          (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)),
          &v21);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v22 = 0LL;
    v12 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, _QWORD **))v21)(
            v21,
            &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042,
            &v22);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x4F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    v13 = v22;
    v14 = *v22;
    LOBYTE(v15) = !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this);
    v16 = (*(__int64 (__fastcall **)(_QWORD *, struct InputInfo *, __int64))(v14 + 48))(v13, a2, v15);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
        (const char *)(unsigned int)v16);
      __debugbreak();
    }
    MPCClickerProcessor::ProcessPoints((MPCClickerProcessor *)(this - 24), a2);
    v11 = 0;
    v17 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      (const char *)(unsigned int)v10);
  }
  v18 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return v11;
}
