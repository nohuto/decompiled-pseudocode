/*
 * XREFs of ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180037730
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180037990 (-Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x180037D24 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ.c)
 *     ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x180039054 (-AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ.c)
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180039800 (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180055834 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x180056D64 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18005FE00 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x18005FED0 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180060C14 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCGamepadProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  __int64 v5; // rdx
  _OWORD *v6; // rax
  struct InputInfo *v7; // rcx
  __int128 v8; // xmm1
  struct MPCGamepadInputHelper *Instance; // rax
  bool v10; // bl
  char v11; // dl
  struct IInputTarget *v12; // rcx
  struct IInputDisplay *v13; // rbx
  MPCHolographicInputManager *v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 846) != 1 )
    return MPCGamepadProcessor::Process2DInput((MPCGamepadProcessor *)this, a2);
  v5 = 22LL;
  v6 = (_OWORD *)(this + 568);
  v7 = a2;
  do
  {
    *v6 = *(_OWORD *)v7;
    v6[1] = *((_OWORD *)v7 + 1);
    v6[2] = *((_OWORD *)v7 + 2);
    v6[3] = *((_OWORD *)v7 + 3);
    v6[4] = *((_OWORD *)v7 + 4);
    v6[5] = *((_OWORD *)v7 + 5);
    v6[6] = *((_OWORD *)v7 + 6);
    v6 += 8;
    v8 = *((_OWORD *)v7 + 7);
    v7 = (struct InputInfo *)((char *)v7 + 128);
    *(v6 - 1) = v8;
    --v5;
  }
  while ( v5 );
  *v6 = *(_OWORD *)v7;
  v6[1] = *((_OWORD *)v7 + 1);
  *(_OWORD *)(this + 3424) = *(_OWORD *)((char *)a2 + 696);
  *(_OWORD *)(this + 3440) = *(_OWORD *)((char *)a2 + 712);
  *(_OWORD *)(this + 3456) = *(_OWORD *)((char *)a2 + 728);
  *(_OWORD *)(this + 3472) = *(_OWORD *)((char *)a2 + 744);
  Instance = MPCGamepadInputHelper::GetInstance();
  v10 = (((1LL << gdwDeviceFamily) & 0x400) != 0 || *((_BYTE *)Instance + 36))
     && !*((_BYTE *)Instance + 37)
     && (!*(_BYTE *)Instance || *((_BYTE *)Instance + 40));
  if ( *(_BYTE *)(this + 3877) && !v10 )
    MPCGamepadProcessor::ClearControllerProcessorState((MPCGamepadProcessor *)(this - 32), a2);
  v11 = *(_BYTE *)(this + 3432);
  *(_BYTE *)(this + 3877) = v10;
  MPCButtonHoldHelper::UpdateState(*(MPCButtonHoldHelper **)(this + 4000), v11 & 1, *((_QWORD *)a2 + 2));
  MPCGamepadProcessor::ProcessInteractionMode((MPCGamepadProcessor *)(this - 32));
  if ( v10 )
  {
    if ( (*((_DWORD *)a2 + 176) & 4) != 0 && (*(_DWORD *)(this + 3416) & 4) == 0 )
      *((_DWORD *)a2 + 174) = 2;
    if ( !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this)
      && MPCGamepadProcessor::AnyInputPressed((MPCGamepadProcessor *)(this - 32)) )
    {
      MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
    }
    v12 = *(struct IInputTarget **)(this + 560);
    if ( v12 )
    {
      *(_QWORD *)(this + 560) = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = *(struct IInputDisplay **)(this + 32);
    v14 = MPCHolographicInputManager::GetInstance();
    v15 = MPCHolographicInputManager::Process3DInput(
            v14,
            v13,
            a2,
            (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
            (struct IInputTarget **)(this + 560));
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x9E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcgamepad\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v15);
      return v16;
    }
  }
  else
  {
    (*(void (__fastcall **)(struct IInputTarget *, unsigned __int64))(**(_QWORD **)(this + 544) + 48LL))(
      *(struct IInputTarget **)(this + 544),
      this + 568);
  }
  *(_DWORD *)(this + 3416) = *(_DWORD *)(this + 3432);
  return 0LL;
}
