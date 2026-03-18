/*
 * XREFs of ACPIBuildDiscoverPowerNodeCompletion @ 0x1C0043320
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C000FF78 (ACPIBuildCompleteCommon.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sqqDqs @ 0x1C0045940 (WPP_RECORDER_SF_sqqDqs.c)
 */

void __fastcall ACPIBuildDiscoverPowerNodeCompletion(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  signed __int32 v7; // edx

  v6 = *(_QWORD *)(a1 + 40);
  if ( a2 >= 0 && a3 )
  {
    *(_QWORD *)(v6 + 136) = a3;
    _InterlockedOr64((volatile signed __int64 *)(v6 + 16), 0x8000uLL);
    WPP_RECORDER_SF_sqqDqs(WPP_GLOBAL_Control->DeviceExtension, v6, a3, a4);
  }
  v7 = *(_DWORD *)(a1 + 32);
  if ( a2 < 0 )
    *(_DWORD *)(a1 + 48) = a2;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v7);
}
