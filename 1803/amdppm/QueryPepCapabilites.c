/*
 * XREFs of QueryPepCapabilites @ 0x1C002AFA8
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0026E8C (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001374 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C0029E04 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C0029F60 (ProcLibTraceGetPlatformIdleStates.c)
 *     PepNotifyQueryCapabilities @ 0x1C002B22C (PepNotifyQueryCapabilities.c)
 *     PepQueryVetoList @ 0x1C002C48C (PepQueryVetoList.c)
 *     PepNotifyProcessorLpiStates @ 0x1C002D164 (PepNotifyProcessorLpiStates.c)
 */

__int64 __fastcall QueryPepCapabilites(__int64 a1)
{
  int VetoList; // edi
  __int64 v3; // rcx
  int v4; // ecx
  int v6; // [rsp+30h] [rbp-10h] BYREF
  int v7; // [rsp+70h] [rbp+30h] BYREF
  char v8; // [rsp+78h] [rbp+38h] BYREF
  char v9; // [rsp+80h] [rbp+40h] BYREF
  int v10; // [rsp+88h] [rbp+48h] BYREF

  VetoList = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0011418,
    0LL);
  if ( !PepPlatformStatesQueried )
  {
    if ( (*(_QWORD *)(a1 + 264) & 0x300000300LL) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 1088);
      v7 = 0;
      if ( (int)PoFxProcessorNotification(v3, 16LL, &v7) >= 0 )
        dword_1C0011948 = v7;
      ProcLibTraceGetPlatformIdleStates(0);
    }
    PepPlatformStatesQueried = 1;
    VetoList = PepQueryVetoList(a1);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0011418);
  if ( VetoList >= 0 )
  {
    if ( (*(_QWORD *)(a1 + 264) & 0x100000000000LL) != 0 )
      PepNotifyProcessorLpiStates(a1);
    VetoList = PepNotifyQueryCapabilities(
                 a1,
                 (unsigned int)&v6,
                 (unsigned int)&v9,
                 (unsigned int)&v10,
                 (__int64)&v8,
                 (__int64)&v7);
    if ( VetoList >= 0 )
    {
      *(_BYTE *)(a1 + 1106) = v7;
      *(_BYTE *)(a1 + 1105) = v8;
      *(_DWORD *)(a1 + 1096) = v10;
      *(_DWORD *)(a1 + 1100) = v6;
      *(_BYTE *)(a1 + 1104) = v9;
      ProcLibTraceQueryCapabilities(a1, 0);
      v4 = *(_DWORD *)(a1 + 1100);
      if ( (*(_QWORD *)(a1 + 264) & 0x100000000000LL) != 0 )
      {
        if ( v4 )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0xCu,
            (__int64)&WPP_03cea2f8b6a43217516e73b8caef141a_Traceguids);
          *(_DWORD *)(a1 + 1100) = 0;
        }
      }
      else if ( !v4 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xDu,
          (__int64)&WPP_03cea2f8b6a43217516e73b8caef141a_Traceguids);
        *(_QWORD *)(a1 + 264) &= 0xFFFFFFFCFFFFFCFFuLL;
      }
      if ( !*(_BYTE *)(a1 + 1105) && !*(_DWORD *)(a1 + 1096) )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xEu,
          (__int64)&WPP_03cea2f8b6a43217516e73b8caef141a_Traceguids);
        *(_QWORD *)(a1 + 264) &= ~0x1000000000uLL;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_03cea2f8b6a43217516e73b8caef141a_Traceguids,
      VetoList);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)VetoList;
}
