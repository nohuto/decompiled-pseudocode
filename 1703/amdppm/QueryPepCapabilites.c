/*
 * XREFs of QueryPepCapabilites @ 0x1C0029D84
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001BB84 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C001EB14 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C001EC60 (ProcLibTraceGetPlatformIdleStates.c)
 *     PepQueryVetoList @ 0x1C001FFC8 (PepQueryVetoList.c)
 *     PepNotifyProcessorLpiStates @ 0x1C0020C84 (PepNotifyProcessorLpiStates.c)
 *     PepNotifyQueryCapabilities @ 0x1C002A000 (PepNotifyQueryCapabilities.c)
 */

__int64 __fastcall QueryPepCapabilites(__int64 a1)
{
  int VetoList; // edi
  __int64 v3; // rcx
  int v5; // [rsp+60h] [rbp+8h] BYREF
  char v6; // [rsp+68h] [rbp+10h] BYREF
  int v7; // [rsp+70h] [rbp+18h] BYREF
  int v8; // [rsp+78h] [rbp+20h] BYREF

  VetoList = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113E8,
    0LL);
  if ( !PepPlatformStatesQueried )
  {
    if ( (*(_QWORD *)(a1 + 264) & 0x300000300LL) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 1088);
      v5 = 0;
      if ( (int)PoFxProcessorNotification(v3, 16LL, &v5) >= 0 )
        dword_1C0011918 = v5;
      ProcLibTraceGetPlatformIdleStates(0);
    }
    PepPlatformStatesQueried = 1;
    VetoList = PepQueryVetoList(a1);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00113E8);
  if ( VetoList >= 0 )
  {
    if ( (*(_QWORD *)(a1 + 264) & 0x100000000000LL) != 0 )
      PepNotifyProcessorLpiStates(a1);
    VetoList = PepNotifyQueryCapabilities(a1, (unsigned int)&v8, (unsigned int)&v7, (unsigned int)&v6, (__int64)&v5);
    if ( VetoList >= 0 )
    {
      *(_BYTE *)(a1 + 1105) = v5;
      *(_BYTE *)(a1 + 1104) = v6;
      *(_DWORD *)(a1 + 1096) = v7;
      *(_DWORD *)(a1 + 1100) = v8;
      ProcLibTraceQueryCapabilities(a1, 0);
      if ( (*(_QWORD *)(a1 + 264) & 0x100000000000LL) != 0 )
      {
        if ( *(_DWORD *)(a1 + 1100) )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0xCu,
            (__int64)&WPP_6e91082c5c0e36b7f4cdd49e1436a0cc_Traceguids);
          *(_DWORD *)(a1 + 1100) = 0;
        }
      }
      else if ( !*(_DWORD *)(a1 + 1100) )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xDu,
          (__int64)&WPP_6e91082c5c0e36b7f4cdd49e1436a0cc_Traceguids);
        *(_QWORD *)(a1 + 264) &= 0xFFFFFFFCFFFFFCFFuLL;
      }
      if ( !*(_BYTE *)(a1 + 1104) && !*(_DWORD *)(a1 + 1096) )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xEu,
          (__int64)&WPP_6e91082c5c0e36b7f4cdd49e1436a0cc_Traceguids);
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
      (__int64)&WPP_6e91082c5c0e36b7f4cdd49e1436a0cc_Traceguids,
      VetoList);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)VetoList;
}
