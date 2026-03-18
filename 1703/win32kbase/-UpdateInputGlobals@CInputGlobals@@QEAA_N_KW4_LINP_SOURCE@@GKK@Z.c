/*
 * XREFs of ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C00490F0
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00477DC (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     xxxProcessKeyEvent @ 0x1C004D210 (xxxProcessKeyEvent.c)
 *     NtMITUpdateInputGlobals @ 0x1C0088840 (NtMITUpdateInputGlobals.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0111B38 (rimDoProcessAnyPointerDeviceInput.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C012C950 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C004949C (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?KnownInputTypeFromLinpSource@@YA?AW4InputType@@W4_LINP_SOURCE@@@Z @ 0x1C004D1E0 (-KnownInputTypeFromLinpSource@@YA-AW4InputType@@W4_LINP_SOURCE@@@Z.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ?CitpLastInputUpdate@@YAXEI@Z @ 0x1C0052EAC (-CitpLastInputUpdate@@YAXEI@Z.c)
 *     EtwTraceUserIsActive @ 0x1C0083150 (EtwTraceUserIsActive.c)
 *     ApiSetEditionKeepMachineUp @ 0x1C008388C (ApiSetEditionKeepMachineUp.c)
 */

char __fastcall CInputGlobals::UpdateInputGlobals(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int16 a4,
        unsigned int a5,
        unsigned int a6)
{
  int v10; // eax
  unsigned int v11; // esi
  unsigned __int8 v12; // di
  __int64 v14; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+80h] [rbp+8h] BYREF

  v10 = KnownInputTypeFromLinpSource(a3);
  if ( v10 && (v10 & *(_DWORD *)(a1 + 104)) == v10 )
    v11 = a6 | 4;
  else
    v11 = a6;
  if ( v10 && (v10 & *(_DWORD *)(a1 + 100)) == v10 )
    v11 |= 2u;
  RIMLockExclusive(a1);
  if ( (*(_DWORD *)gpsi & 0x2000) != 0 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    *(_DWORD *)(a1 + 80) = a3;
    v12 = 8;
    *(_BYTE *)(a1 + 85) = 0;
    *(_BYTE *)(a1 + 84) = (v11 & 8) != 0;
    if ( a3 != 1 )
      *(_DWORD *)gpsi &= ~0x40u;
    if ( (v11 & 0x10) == 0 && (unsigned __int64)(a2 - *(_QWORD *)(a1 + 72)) > 0x1F4 )
    {
      ZwUpdateWnfStateData(&WNF_ISM_LAST_USER_ACTIVITY, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
      *(_QWORD *)(a1 + 72) = a2;
    }
    if ( !gbBlockSendInputResets || (v11 & 8) == 0 )
      CInputGlobals::_UpdateLastInputTime(a1, a2, a3);
    *(_QWORD *)(a1 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)gpsi + 1344) = a2;
    if ( (unsigned int)EtwTraceUserIsActive(&v15, &v14) && (int)IsTraceLoggingUserIsActiveSupported() >= 0 )
      TraceLoggingUserIsActive(v15, v14);
    if ( qword_1C018E8C8 )
      *((_WORD *)qword_1C018E8C8 + 502) = a4;
    switch ( a3 )
    {
      case 1u:
        v12 = 1;
        break;
      case 2u:
        v12 = 2;
        break;
      case 3u:
        v12 = 16;
        break;
      case 4u:
        v12 = 32;
        break;
      case 0xAu:
        v12 = 4;
        break;
      default:
        if ( a3 != 12 )
          v12 = 0;
        break;
    }
    CitpLastInputUpdate(v12, a2);
    if ( (v11 & 0x10) == 0 )
      ApiSetEditionKeepMachineUp((unsigned int)a2, a3, a5, v11);
  }
  return 1;
}
