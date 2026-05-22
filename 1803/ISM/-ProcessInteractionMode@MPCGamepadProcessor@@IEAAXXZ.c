/*
 * XREFs of ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x180093E20
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180093860 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180093F00 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x18004D130 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z @ 0x180050038 (-IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ @ 0x180050440 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ.c)
 *     ?OnInteractiveIntentGesture@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18005288C (-OnInteractiveIntentGesture@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z.c)
 */

void __fastcall MPCGamepadProcessor::ProcessInteractionMode(MPCGamepadProcessor *this)
{
  MPCHolographicInputManager *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9
  __int64 (__fastcall ***FocusedTarget)(struct IInputTarget *, GUID *, __int64 *); // rax
  __int64 v7; // rax
  _BYTE *v8; // rcx

  if ( *((_BYTE *)this + 4525)
    || (MPCHolographicInputManager::GetInstance(),
        FocusedTarget = (__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))MPCHolographicInputManager::GetFocusedTarget(
                                                                                              v2,
                                                                                              v3,
                                                                                              v4,
                                                                                              v5),
        MPCHolographicInputManager::IsExclusiveTarget(FocusedTarget)) )
  {
    MPCButtonHoldHelper::UpdateState(
      *((MPCButtonHoldHelper **)this + 576),
      (*((_DWORD *)this + 1020) & 0x40000000) != 0,
      *((_QWORD *)this + 293));
    v8 = (_BYTE *)*((_QWORD *)this + 576);
    if ( v8[8] )
      *((_BYTE *)this + 4048) = 1;
    if ( !v8[11] || *((_BYTE *)this + 377) )
    {
      if ( v8[13] )
        MPCManager::OnInteractiveIntentGesture((__int64)MPCManager::s_instance, *((_QWORD *)this + 7), 4u);
    }
    else
    {
      MPCManager::SendHomeGesture(
        MPCManager::s_instance,
        **((_DWORD **)this + 7),
        *(_DWORD *)(*((_QWORD *)this + 7) + 4LL));
    }
  }
  else
  {
    v7 = *((_QWORD *)this + 576);
    if ( *(_BYTE *)(v7 + 8) )
    {
      *(_WORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 16) = 0LL;
    }
    *(_QWORD *)(v7 + 32) = 0LL;
  }
}
