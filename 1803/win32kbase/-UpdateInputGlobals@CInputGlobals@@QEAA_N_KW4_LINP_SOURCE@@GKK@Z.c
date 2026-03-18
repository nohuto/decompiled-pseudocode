/*
 * XREFs of ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C01215E0
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00399EC (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     NtMITUpdateInputGlobals @ 0x1C00B5350 (NtMITUpdateInputGlobals.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0100C9C (rimDoProcessAnyPointerDeviceInput.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C0127A70 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     xxxProcessKeyEvent @ 0x1C0130400 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0036058 (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     CitLastInputUpdate @ 0x1C003FA80 (CitLastInputUpdate.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0055980 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     EtwTraceUserIsActive @ 0x1C0066960 (EtwTraceUserIsActive.c)
 *     ApiSetEditionKeepMachineUp @ 0x1C0066B04 (ApiSetEditionKeepMachineUp.c)
 *     ?KnownInputTypeFromLinpSource@@YA?AW4InputType@@W4_LINP_SOURCE@@@Z @ 0x1C0067AEC (-KnownInputTypeFromLinpSource@@YA-AW4InputType@@W4_LINP_SOURCE@@@Z.c)
 */

char __fastcall CInputGlobals::UpdateInputGlobals(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // edi
  int v10; // eax
  int v11; // r8d
  __int64 v12; // r8
  int v13; // r9d
  unsigned __int8 v15; // [rsp+28h] [rbp-40h]
  unsigned __int8 v16; // [rsp+30h] [rbp-38h]
  LONGLONG v17; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  if ( (a6 & 0x20) != 0 )
  {
    v10 = KnownInputTypeFromLinpSource(a3);
    v11 = v6 | 4;
    if ( (v10 & *(_DWORD *)(a1 + 104)) == 0 )
      v11 = v6;
    v6 = v11;
    if ( (v10 & *(_DWORD *)(a1 + 100)) != 0 )
      v6 = v11 | 2;
  }
  RIMLockExclusive(a1);
  if ( (*(_DWORD *)gpsi & 0x2000) != 0 )
  {
    CInpPushLock::UnLockExclusive((CInpPushLock *)a1);
  }
  else
  {
    *(_DWORD *)(a1 + 80) = a3;
    *(_BYTE *)(a1 + 85) = 0;
    *(_BYTE *)(a1 + 84) = (v6 & 8) != 0;
    if ( a3 != 1 )
      *(_DWORD *)gpsi &= ~0x40u;
    if ( (v6 & 0x10) == 0 )
    {
      if ( (unsigned __int64)(a2 - *(_QWORD *)(a1 + 72)) > 0x1F4 )
      {
        ZwUpdateWnfStateData(&WNF_ISM_LAST_USER_ACTIVITY, 0LL, 0LL, 0LL, &gSessionId, v6 & 0x10 & v15, v6 & 0x10 & v16);
        *(_QWORD *)(a1 + 72) = a2;
      }
      if ( !gbBlockSendInputResets || (v6 & 8) == 0 )
        CInputGlobals::_UpdateLastInputTime(a1, a2, a3);
    }
    CInpPushLock::UnLockExclusive((CInpPushLock *)a1);
    *((_DWORD *)gpsi + 1242) = a2;
    if ( (unsigned int)EtwTraceUserIsActive(&a6, &v17, v12, v13) && (int)IsTraceLoggingUserIsActiveSupported() >= 0 )
      TraceLoggingUserIsActive(a6, v17);
    if ( (v6 & 0x10) == 0 )
    {
      CitLastInputUpdate(a3, a2);
      ApiSetEditionKeepMachineUp(a2, a3, a5, v6);
    }
  }
  return 1;
}
