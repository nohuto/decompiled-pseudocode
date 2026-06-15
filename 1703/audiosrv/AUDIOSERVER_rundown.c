/*
 * XREFs of AUDIOSERVER_rundown @ 0x1800024E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x1800025F0 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180017144 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x1800204E0 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 */

__int64 __fastcall AUDIOSERVER_rundown(void *a1)
{
  __int64 (__fastcall *v2)(void *); // rax
  int v3; // eax
  LPCRITICAL_SECTION v4; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  char v8; // [rsp+38h] [rbp-40h]
  _BYTE v9[16]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v10[16]; // [rsp+50h] [rbp-28h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v9, a1);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 63LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids, a1);
  }
  v2 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)a1 + 16LL);
  if ( v2 == ATL::CComObject<CVADServer>::Release )
    v3 = ATL::CComObject<CVADServer>::Release(a1);
  else
    v3 = v2(a1);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 64LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids, a1, v3);
  }
  v4 = g_ADGProcess;
  lpCriticalSection = g_ADGProcess;
  v8 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 53LL, &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids);
  }
  if ( LODWORD(v4[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v4);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return EtwEventActivityIdControl(4LL, v10);
}
