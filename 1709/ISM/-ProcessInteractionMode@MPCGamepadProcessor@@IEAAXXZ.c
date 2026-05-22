/*
 * XREFs of ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x180037D24
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180037730 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180037E90 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIGesturesPriv@Internal@Mirage@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIGesturesPriv@Internal@Mirage@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180039ED4 (--$ActivateInstance@V-$ComPtr@UIGesturesPriv@Internal@Mirage@Windows@@@WRL@Microsoft@@@Foundatio.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z @ 0x180058C6C (-IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ @ 0x18005906C (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ.c)
 *     ?OnInteractiveIntentGesture@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18005DB94 (-OnInteractiveIntentGesture@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180060C14 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCGamepadProcessor::ProcessInteractionMode(MPCGamepadProcessor *this)
{
  MPCHolographicInputManager *Instance; // rax
  struct IInputTarget *FocusedTarget; // rax
  __int64 v4; // rax
  _BYTE *v5; // rcx
  HRESULT v6; // eax
  int v7; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  HSTRING string; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_BYTE *)this + 3909)
    || (Instance = MPCHolographicInputManager::GetInstance(),
        FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(Instance),
        MPCHolographicInputManager::IsExclusiveTarget(FocusedTarget)) )
  {
    MPCButtonHoldHelper::UpdateState(
      *((MPCButtonHoldHelper **)this + 503),
      (*((_DWORD *)this + 866) & 0x40000000) != 0,
      *((_QWORD *)this + 77));
    v5 = (_BYTE *)*((_QWORD *)this + 503);
    if ( v5[8] )
      *((_BYTE *)this + 3360) = 1;
    if ( !v5[11] || *((_BYTE *)this + 385) )
    {
      if ( v5[13] )
        MPCManager::OnInteractiveIntentGesture(MPCManager::s_instance, *((_QWORD *)this + 7), 4LL);
    }
    else
    {
      if ( !*((_QWORD *)this + 502) )
      {
        string = 0LL;
        v6 = WindowsCreateStringReference(L"Windows.Mirage.Internal.GesturesPriv", 0x24u, &hstringHeader, &string);
        if ( v6 < 0 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
          __debugbreak();
        }
        v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Mirage::Internal::IGesturesPriv>>(
               string,
               (char *)this + 4016);
        if ( v7 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x113,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcgamepad\\lib\\mpcgamepadprocessor.cpp",
            (const char *)(unsigned int)v7);
          JUMPOUT(0x180037E74LL);
        }
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 502) + 88LL))(*((_QWORD *)this + 502), 0LL);
    }
  }
  else
  {
    v4 = *((_QWORD *)this + 503);
    if ( *(_BYTE *)(v4 + 8) )
    {
      *(_WORD *)(v4 + 8) = 0;
      *(_QWORD *)(v4 + 16) = 0LL;
    }
    *(_QWORD *)(v4 + 32) = 0LL;
  }
}
