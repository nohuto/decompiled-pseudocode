/*
 * XREFs of ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0011110
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00103E0 (xxxProcessKeyEvent.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0013E1C (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     NtMITUpdateInputGlobals @ 0x1C008FAA0 (NtMITUpdateInputGlobals.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0110618 (rimDoProcessAnyPointerDeviceInput.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C012C000 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C001139C (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?KnownInputTypeFromLinpSource@@YA?AW4InputType@@W4_LINP_SOURCE@@@Z @ 0x1C00116E8 (-KnownInputTypeFromLinpSource@@YA-AW4InputType@@W4_LINP_SOURCE@@@Z.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0016C80 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     CitLastInputUpdate @ 0x1C0022F10 (CitLastInputUpdate.c)
 *     EtwTraceUserIsActive @ 0x1C0085540 (EtwTraceUserIsActive.c)
 *     ApiSetEditionKeepMachineUp @ 0x1C008ACF0 (ApiSetEditionKeepMachineUp.c)
 */

char __fastcall CInputGlobals::UpdateInputGlobals(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned int a5,
        int a6)
{
  int v10; // r10d
  bool v11; // al
  int v12; // ecx
  bool v13; // al
  unsigned int v14; // esi
  unsigned __int8 v16; // [rsp+28h] [rbp-50h]
  unsigned __int8 v17; // [rsp+30h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+80h] [rbp+8h] BYREF

  v10 = KnownInputTypeFromLinpSource(a3);
  v11 = v10 && (v10 & *(_DWORD *)(a1 + 104)) == v10;
  v12 = a6 | 4;
  if ( !v11 )
    v12 = a6;
  v13 = v10 && (v10 & *(_DWORD *)(a1 + 100)) == v10;
  v14 = v12 | 2;
  if ( !v13 )
    v14 = v12;
  RIMLockExclusive(a1);
  if ( (*(_DWORD *)gpsi & 0x2000) != 0 )
  {
    CInpPushLock::UnLockExclusive((CInpPushLock *)a1);
  }
  else
  {
    *(_DWORD *)(a1 + 80) = a3;
    *(_BYTE *)(a1 + 85) = 0;
    *(_BYTE *)(a1 + 84) = (v14 & 8) != 0;
    if ( a3 != 1 )
      *(_DWORD *)gpsi &= ~0x40u;
    if ( (v14 & 0x10) == 0 && (unsigned __int64)(a2 - *(_QWORD *)(a1 + 72)) > 0x1F4 )
    {
      ZwUpdateWnfStateData(&WNF_ISM_LAST_USER_ACTIVITY, 0LL, 0LL, 0LL, &gSessionId, v14 & 0x10 & v16, v14 & 0x10 & v17);
      *(_QWORD *)(a1 + 72) = a2;
    }
    if ( (v14 & 0x10) == 0 && (!gbBlockSendInputResets || (v14 & 8) == 0) )
      CInputGlobals::_UpdateLastInputTime(a1, a2, a3);
    CInpPushLock::UnLockExclusive((CInpPushLock *)a1);
    *((_DWORD *)gpsi + 1241) = a2;
    if ( (unsigned int)EtwTraceUserIsActive(&v19, &v18) && (int)IsTraceLoggingUserIsActiveSupported() >= 0 )
      TraceLoggingUserIsActive(v19, v18);
    if ( (v14 & 0x10) == 0 )
    {
      CitLastInputUpdate(a3, (unsigned int)a2, a4);
      ApiSetEditionKeepMachineUp((unsigned int)a2, a3, a5, v14);
    }
  }
  return 1;
}
