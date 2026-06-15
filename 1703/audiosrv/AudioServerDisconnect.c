/*
 * XREFs of AudioServerDisconnect @ 0x180032710
 * Callers:
 *     <none>
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180017144 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x1800204E0 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 */

__int64 __fastcall AudioServerDisconnect(volatile signed __int32 **a1)
{
  GUID v2; // xmm0
  __int64 v3; // r8
  __int64 v4; // r9
  volatile signed __int32 *v5; // rcx
  __int64 (__fastcall *v6)(volatile signed __int32 *); // rax
  LPCRITICAL_SECTION v7; // rbx
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+20h] [rbp-40h] BYREF
  GUID v11; // [rsp+30h] [rbp-30h]
  GUID v12; // [rsp+40h] [rbp-20h] BYREF

  if ( *a1 )
    v2 = (GUID)*((_OWORD *)*a1 + 17);
  else
    v2 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)lpCriticalSection = v2;
  v11 = v2;
  v12 = v2;
  EtwEventActivityIdControl(4LL, &v12);
  v5 = *a1;
  v6 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)*a1 + 16LL);
  if ( v6 == ATL::CComObject<CVADServer>::Release )
    ATL::CComObject<CVADServer>::Release(v5);
  else
    ((void (__fastcall *)(volatile signed __int32 *, __int64 (__fastcall *)(volatile signed __int32 *), __int64, __int64))v6)(
      v5,
      ATL::CComObject<CVADServer>::Release,
      v3,
      v4);
  *a1 = 0LL;
  v7 = g_ADGProcess;
  lpCriticalSection[0] = g_ADGProcess;
  LOBYTE(lpCriticalSection[1]) = 0;
  ATL::CCritSecLock::Lock(lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 53LL, &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids);
  }
  if ( LODWORD(v7[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((struct _TP_TIMER **)v7);
  if ( LOBYTE(lpCriticalSection[1]) )
    LeaveCriticalSection(lpCriticalSection[0]);
  EtwEventActivityIdControl(4LL, &v12);
  return 0LL;
}
