/*
 * XREFs of ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C00F6310
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     DbgPrintRIMAlways @ 0x1C00C3410 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_dqdSd @ 0x1C00F6CAC (WPP_RECORDER_SF_dqdSd.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C00F73CC (WPP_RECORDER_SF_qdd.c)
 */

__int64 __fastcall RIMOnTTMDeviceAssignedToTerminal(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+38h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 336);
  v12 = *(_DWORD *)(a1 + 828);
  LODWORD(v11) = a2;
  HIDWORD(v10) = HIDWORD(a1);
  WPP_RECORDER_SF_qdd(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 18);
  RIMLockExclusive(v3 + 96);
  if ( *(_DWORD *)(a1 + 828) != a2 )
  {
    v12 = *(unsigned __int8 *)(a1 + 48);
    v11 = a1;
    WPP_RECORDER_SF_dqdSd(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8);
    DbgPrintRIMAlways(
      "rimttm:RIMOnTTMDeviceAssignedToTerminal: TTM changing terminal to %d for pRimDev=%p type=%d ustrName=%ls ulTerminalId=%d\n",
      a2,
      (const void *)a1,
      *(unsigned __int8 *)(a1 + 48),
      *(const wchar_t **)(a1 + 216),
      *(_DWORD *)(a1 + 828));
    *(_DWORD *)(a1 + 828) = a2;
  }
  *(_QWORD *)(v3 + 104) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 96, 0LL);
  KeLeaveCriticalRegion();
  LODWORD(v10) = 0;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x14u,
    (__int64)&WPP_6f93d23ab5493b07c801fc1105033033_Traceguids,
    v10,
    v11,
    v12);
  return 0LL;
}
