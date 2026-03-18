/*
 * XREFs of xxxProcessKeyEvent @ 0x1C00103E0
 * Callers:
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0117FA0 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0118060 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01187D0 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0118BA0 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C0118E20 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C012ECFC (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C012EF08 (-SendKeyUpDown@@YAXEE@Z.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C012F000 (ProcessKeyboardInjectedInputViaRim.c)
 *     ProcessKeyboardInputWorker @ 0x1C012F200 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ?UpdateRawKeyState@@YAXEH@Z @ 0x1C0010660 (-UpdateRawKeyState@@YAXEH@Z.c)
 *     xxxKeyEvent @ 0x1C0010760 (xxxKeyEvent.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0011110 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0011560 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ApiSetEditionGetActiveHKL @ 0x1C001171C (ApiSetEditionGetActiveHKL.c)
 *     ApiSetEditionIsGpqForegroundInaccessible @ 0x1C0011F2C (ApiSetEditionIsGpqForegroundInaccessible.c)
 *     xxxKENLSProcs @ 0x1C0011FC0 (xxxKENLSProcs.c)
 *     xxxKELocaleProcs @ 0x1C0011FF0 (xxxKELocaleProcs.c)
 *     KEOEMProcs @ 0x1C001204C (KEOEMProcs.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C012AFE0 (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 */

__int64 __fastcall xxxProcessKeyEvent(unsigned __int16 *a1, __int64 a2, unsigned int a3, int a4, __int64 a5)
{
  struct tagTHREADINFO *v5; // r12
  unsigned __int8 v7; // di
  int v11; // edx
  int v12; // edx
  __int64 v13; // rdx
  __int64 result; // rax
  char v15; // al
  __int64 v16; // rcx
  unsigned __int16 v17; // r8

  v5 = gptiCurrent;
  v7 = *((_BYTE *)a1 + 2);
  if ( (ApiSetEditionGetActiveHKL() & 0x3FF) != 0x12 )
  {
    v11 = a1[1] & 0x8000;
LABEL_3:
    UpdateRawKeyState(v7, v11);
    goto LABEL_4;
  }
  v17 = a1[1];
  if ( (v17 & 0x9000) != 0x8000
    || *(_BYTE *)a1 != 0xF1 && *(_BYTE *)a1 != 0xF2
    || ((unsigned __int8)(1 << (2 * (v7 & 3))) & gafRawKeyState[(unsigned __int64)v7 >> 2]) != 0 )
  {
    v11 = v17 & 0x8000;
    goto LABEL_3;
  }
  a1[1] = v17 & 0x7FFF;
LABEL_4:
  if ( (unsigned __int8)(v7 + 96) <= 5u )
  {
    v7 = (v7 - 160) / 2 + 16;
    UpdateRawKeyState(v7, a1[1] & 0x8000);
  }
  CInputGlobals::UpdateInputGlobals(
    gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    1LL);
  if ( !a3 || !*((_DWORD *)a1 + 1) )
    *((_DWORD *)a1 + 1) = CInputGlobals::GetLastInputTime(gpInputGlobals);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v12) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      14,
      270,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  if ( (int)IsEditionHandleSonarKeyEventSupported() >= 0 )
  {
    LOBYTE(v13) = v7;
    EditionHandleSonarKeyEvent(a1, v13);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      14,
      271,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  if ( (a1[1] & 0x1000) != 0 )
  {
    if ( (dword_1C0190E98 & 1) != 0 )
    {
      v15 = byte_1C0190E9C;
    }
    else
    {
      dword_1C0190E98 |= 1u;
      if ( (unsigned int)EditionGetExecutionEvironment() == 2 )
      {
        byte_1C0190E9C = 1;
        goto LABEL_32;
      }
      v15 = 0;
      byte_1C0190E9C = 0;
    }
    if ( !v15 )
    {
      v16 = 0LL;
      return xxxKeyEvent(a1[1], *a1, *((_DWORD *)a1 + 1), a2, v16, 0LL, a3, a4, a5);
    }
LABEL_32:
    v16 = *((_QWORD *)a1 + 1);
    return xxxKeyEvent(a1[1], *a1, *((_DWORD *)a1 + 1), a2, v16, 0LL, a3, a4, a5);
  }
  result = KEOEMProcs(a1);
  if ( (_DWORD)result )
  {
    result = xxxKELocaleProcs((struct tagKE *)a1);
    if ( (_DWORD)result )
    {
      result = xxxKENLSProcs(a1, a2);
      if ( (_DWORD)result )
      {
        result = ApiSetEditionIsGpqForegroundInaccessible(a3, v5);
        if ( !(_DWORD)result )
        {
          if ( !a4 && !a3 )
            CPTPProcessor::OnKeyEvent(v7, (a1[1] & 0x8000u) == 0);
          return xxxKeyEvent(
                   a1[1],
                   *(unsigned __int8 *)a1,
                   *((_DWORD *)a1 + 1),
                   a2,
                   *((_QWORD *)a1 + 1),
                   (__int64)(a1 + 8),
                   a3,
                   a4,
                   a5);
        }
      }
    }
  }
  return result;
}
