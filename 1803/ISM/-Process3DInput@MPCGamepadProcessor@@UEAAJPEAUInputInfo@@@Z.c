/*
 * XREFs of ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180093860
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800499D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x180049A70 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x18004D130 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004DF48 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180058084 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180093AD0 (-Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x180093E20 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ.c)
 *     ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x180095378 (-AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ.c)
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180095E14 (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCGamepadProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  const char *v4; // r9
  __int64 v5; // rax
  __int64 v7; // rdx
  _OWORD *v8; // rcx
  struct InputInfo *v9; // rax
  __int128 v10; // xmm1
  struct MPCGamepadInputHelper *Instance; // rax
  bool v12; // si
  char v13; // dl
  __int64 v14; // rcx
  MPCHolographicInputManager *v15; // rax
  int v16; // eax
  unsigned int v17; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  MPCHolographicInputManager::GetInstance();
  if ( *(_DWORD *)(v5 + 2272) != 1 )
    return MPCGamepadProcessor::Process2DInput((MPCGamepadProcessor *)this, a2);
  v7 = 13LL;
  v8 = (_OWORD *)(this + 2296);
  v9 = a2;
  do
  {
    *v8 = *(_OWORD *)v9;
    v8[1] = *((_OWORD *)v9 + 1);
    v8[2] = *((_OWORD *)v9 + 2);
    v8[3] = *((_OWORD *)v9 + 3);
    v8[4] = *((_OWORD *)v9 + 4);
    v8[5] = *((_OWORD *)v9 + 5);
    v8[6] = *((_OWORD *)v9 + 6);
    v8 += 8;
    v10 = *((_OWORD *)v9 + 7);
    v9 = (struct InputInfo *)((char *)v9 + 128);
    *(v8 - 1) = v10;
    --v7;
  }
  while ( v7 );
  *v8 = *(_OWORD *)v9;
  v8[1] = *((_OWORD *)v9 + 1);
  v8[2] = *((_OWORD *)v9 + 2);
  v8[3] = *((_OWORD *)v9 + 3);
  *((_QWORD *)v8 + 8) = *((_QWORD *)v9 + 8);
  *(_OWORD *)(this + 4040) = *(_OWORD *)((char *)a2 + 520);
  *(_OWORD *)(this + 4056) = *(_OWORD *)((char *)a2 + 536);
  *(_OWORD *)(this + 4072) = *(_OWORD *)((char *)a2 + 552);
  *(_OWORD *)(this + 4088) = *(_OWORD *)((char *)a2 + 568);
  Instance = MPCGamepadInputHelper::GetInstance((__int64)v8, 0LL, 128LL, v4);
  v12 = (((1LL << gdwDeviceFamily) & 0x400) != 0 || *((_BYTE *)Instance + 36))
     && !*((_BYTE *)Instance + 37)
     && (!*(_BYTE *)Instance || *((_BYTE *)Instance + 41));
  if ( *(_BYTE *)(this + 4493) && !v12 )
    MPCGamepadProcessor::ClearControllerProcessorState((MPCGamepadProcessor *)(this - 32), a2);
  v13 = *(_BYTE *)(this + 4048);
  *(_BYTE *)(this + 4493) = v12;
  MPCButtonHoldHelper::UpdateState(*(MPCButtonHoldHelper **)(this + 4584), v13 & 1, *((_QWORD *)a2 + 2));
  MPCGamepadProcessor::ProcessInteractionMode((MPCGamepadProcessor *)(this - 32));
  if ( v12 )
  {
    if ( (*((_DWORD *)a2 + 132) & 4) != 0 && (*(_DWORD *)(this + 4032) & 4) == 0 )
      *((_DWORD *)a2 + 130) = 2;
    if ( !MPCInputProviderBase::IsPrimary(this)
      && MPCGamepadProcessor::AnyInputPressed((MPCGamepadProcessor *)(this - 32)) )
    {
      MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
    }
    v14 = *(_QWORD *)(this + 2288);
    if ( v14 )
    {
      *(_QWORD *)(this + 2288) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    MPCHolographicInputManager::GetInstance();
    v16 = MPCHolographicInputManager::Process3DInput(
            v15,
            a2,
            (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
            (struct IInputTarget **)(this + 2288));
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB3,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcgamepad\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v16);
      return v17;
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(this + 2272) + 48LL))(
      *(_QWORD *)(this + 2272),
      this + 2296);
  }
  *(_DWORD *)(this + 4032) = *(_DWORD *)(this + 4048);
  return 0LL;
}
