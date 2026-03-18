/*
 * XREFs of UsbhIoctlTraceOutput @ 0x1C004A1DC
 * Callers:
 *     UsbhIoctlCyclePort @ 0x1C00478CC (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004802C (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C0048344 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C0048594 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C004880C (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048AA8 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0048D10 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004916C (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049480 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004975C (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0049A14 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0049CD8 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C0049F94 (UsbhIoctlResetStuckHub.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003C01C (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF__HEX_ @ 0x1C004A7CC (WPP_RECORDER_SF__HEX_.c)
 *     log_xstr @ 0x1C004A8E8 (log_xstr.c)
 */

__int64 __fastcall UsbhIoctlTraceOutput(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r14
  unsigned int v5; // esi
  __int64 v6; // rbp
  __int64 v7; // r10
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r10
  int v11; // r11d
  int v12; // ebx
  PDEVICE_OBJECT v13; // r10
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 result; // rax
  __int128 *v17; // rax
  __int64 v18; // r10
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  __int128 v24; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v25[16]; // [rsp+50h] [rbp-28h] BYREF

  Log(a1, 32, 1768907604, 0LL, a2);
  v3 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 8);
  v6 = *(unsigned int *)(v3 + 16);
  Log(v7, 32, 1768911921, v5, v6);
  Log(v8, 32, 1768911922, v4, v9);
  Log(v10, 32, 1768911923, *(int *)(a2 + 48), *(_QWORD *)(a2 + 56));
  v12 = *(_DWORD *)(a2 + 56);
  v13 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0xAu,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids,
      v11);
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v21) = v6;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v14,
        2u,
        0xBu,
        (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids,
        v21,
        v5);
      v13 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v23) = v12;
        LODWORD(v22) = *(_DWORD *)(a2 + 48);
        WPP_RECORDER_SF_dd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v15,
          2u,
          0xCu,
          (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids,
          v22,
          v23);
        v13 = WPP_GLOBAL_Control;
      }
    }
  }
  result = 255LL;
  if ( (_BYTE)v12 )
  {
    if ( LOWORD(v13->DeviceType) )
    {
      v17 = (__int128 *)log_xstr(v25, (unsigned __int8)v12, v4);
      v19 = *(_QWORD *)(v18 + 64);
      v24 = *v17;
      return WPP_RECORDER_SF__HEX_(
               v19,
               v20,
               2,
               14,
               (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids,
               (__int64)&v24);
    }
  }
  else if ( LOWORD(v13->DeviceType) )
  {
    return WPP_RECORDER_SF_(
             (__int64)v13->DeviceExtension,
             0,
             2u,
             0xDu,
             (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids);
  }
  return result;
}
