/*
 * XREFs of xxxProcessKeyEvent @ 0x1C004D210
 * Callers:
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0119130 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01191F0 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0119B70 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0119F70 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C011A1F0 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C012F65C (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C012F878 (-SendKeyUpDown@@YAXEE@Z.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C012F970 (ProcessKeyboardInjectedInputViaRim.c)
 *     ProcessKeyboardInputWorker @ 0x1C012FB70 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C00490F0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C00495B0 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ?UpdateRawKeyState@@YAXEH@Z @ 0x1C004D49C (-UpdateRawKeyState@@YAXEH@Z.c)
 *     xxxKeyEvent @ 0x1C004D5A0 (xxxKeyEvent.c)
 *     ApiSetEditionGetActiveHKL @ 0x1C004DE9C (ApiSetEditionGetActiveHKL.c)
 *     ApiSetEditionIsGpqForegroundInaccessible @ 0x1C004E1AC (ApiSetEditionIsGpqForegroundInaccessible.c)
 *     xxxKENLSProcs @ 0x1C004E240 (xxxKENLSProcs.c)
 *     xxxKELocaleProcs @ 0x1C004E27C (xxxKELocaleProcs.c)
 *     KEOEMProcs @ 0x1C004E2D0 (KEOEMProcs.c)
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C012B90C (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 */

__int64 __fastcall xxxProcessKeyEvent(struct tagKE *a1, __int64 a2, unsigned int a3, int a4, __int64 a5)
{
  struct tagTHREADINFO *v5; // r12
  unsigned __int8 v7; // di
  int v11; // edx
  int v12; // r9d
  int v13; // edx
  __int64 v14; // rdx
  __int64 result; // rax
  char v16; // al
  __int64 v17; // rcx
  __int16 v18; // r8

  v5 = gptiCurrent;
  v7 = *((_BYTE *)a1 + 2);
  if ( (ApiSetEditionGetActiveHKL() & 0x3FF) != 0x12 )
  {
    v11 = *((_WORD *)a1 + 1) & 0x8000;
LABEL_3:
    UpdateRawKeyState(v7, v11);
    goto LABEL_4;
  }
  v18 = *((_WORD *)a1 + 1);
  if ( (v18 & 0x9000) != 0x8000
    || *(_BYTE *)a1 != 0xF1 && *(_BYTE *)a1 != 0xF2
    || ((unsigned __int8)(1 << (2 * (v7 & 3))) & gafRawKeyState[(unsigned __int64)v7 >> 2]) != 0 )
  {
    v11 = v18 & 0x8000;
    goto LABEL_3;
  }
  *((_WORD *)a1 + 1) = v18 & 0x7FFF;
LABEL_4:
  if ( (unsigned __int8)(v7 + 96) <= 5u )
  {
    v7 = (v7 - 160) / 2 + 16;
    UpdateRawKeyState(v7, *((_WORD *)a1 + 1) & 0x8000);
  }
  if ( v7 < 0xADu || (v12 = 1, v7 > 0xB3u) )
    v12 = 0;
  CInputGlobals::UpdateInputGlobals(
    (__int64)gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    1u,
    0,
    0,
    (a3 != 0 ? 8 : 0) | (v12 == 0 ? 2 : 0));
  if ( !a3 || !*((_DWORD *)a1 + 1) )
    *((_DWORD *)a1 + 1) = CInputGlobals::GetLastInputTime(gpInputGlobals);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      14,
      258,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  if ( (int)IsEditionHandleSonarKeyEventSupported() >= 0 )
  {
    LOBYTE(v14) = v7;
    EditionHandleSonarKeyEvent(a1, v14);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v14) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      14,
      259,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  if ( (*((_WORD *)a1 + 1) & 0x1000) != 0 )
  {
    if ( (dword_1C018C168 & 1) != 0 )
    {
      v16 = byte_1C018C16C;
    }
    else
    {
      dword_1C018C168 |= 1u;
      if ( (unsigned int)EditionGetExecutionEvironment() == 2 )
      {
        byte_1C018C16C = 1;
        goto LABEL_36;
      }
      v16 = 0;
      byte_1C018C16C = 0;
    }
    if ( !v16 )
    {
      v17 = 0LL;
      return xxxKeyEvent(
               *((unsigned __int16 *)a1 + 1),
               *(unsigned __int16 *)a1,
               *((_DWORD *)a1 + 1),
               a2,
               v17,
               0LL,
               a3,
               a4,
               a5);
    }
LABEL_36:
    v17 = *((_QWORD *)a1 + 1);
    return xxxKeyEvent(
             *((unsigned __int16 *)a1 + 1),
             *(unsigned __int16 *)a1,
             *((_DWORD *)a1 + 1),
             a2,
             v17,
             0LL,
             a3,
             a4,
             a5);
  }
  result = KEOEMProcs(a1);
  if ( (_DWORD)result )
  {
    result = xxxKELocaleProcs(a1);
    if ( (_DWORD)result )
    {
      result = xxxKENLSProcs(a1, a2);
      if ( (_DWORD)result )
      {
        result = ApiSetEditionIsGpqForegroundInaccessible(a3, v5);
        if ( !(_DWORD)result )
        {
          if ( !a4 && !a3 )
            CPTPProcessor::OnKeyEvent(v7, *((_WORD *)a1 + 1) >= 0);
          return xxxKeyEvent(
                   *((unsigned __int16 *)a1 + 1),
                   *(unsigned __int8 *)a1,
                   *((_DWORD *)a1 + 1),
                   a2,
                   *((_QWORD *)a1 + 1),
                   (__int64)a1 + 16,
                   a3,
                   a4,
                   a5);
        }
      }
    }
  }
  return result;
}
