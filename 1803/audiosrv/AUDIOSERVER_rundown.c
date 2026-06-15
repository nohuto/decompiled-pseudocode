/*
 * XREFs of AUDIOSERVER_rundown @ 0x1800C3020
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18000422C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180007CB4 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1800A1B30 (WPP_SF_qd.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

__int64 __fastcall AUDIOSERVER_rundown(char *a1)
{
  int v2; // eax
  LPCRITICAL_SECTION v3; // rbx
  int v6; // [rsp+20h] [rbp-58h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  char v8; // [rsp+38h] [rbp-40h]
  _BYTE v9[16]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v10[16]; // [rsp+50h] [rbp-28h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v9, a1);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x39u, (__int64)&WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids, a1);
  }
  v2 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a1 + 16LL))(a1);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v6 = v2;
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Au,
      (__int64)&WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids,
      a1,
      v6);
  }
  v3 = g_ADGProcess;
  lpCriticalSection = g_ADGProcess;
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( LODWORD(v3[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((struct _TP_TIMER **)v3);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return EtwEventActivityIdControl(4LL, v10);
}
