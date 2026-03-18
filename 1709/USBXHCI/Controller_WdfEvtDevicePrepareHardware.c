/*
 * XREFs of Controller_WdfEvtDevicePrepareHardware @ 0x1C005A020
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_IsSecureDevice @ 0x1C0011780 (Controller_IsSecureDevice.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C0016BB8 (XilDeviceSlot_PrepareHardware.c)
 *     Command_PrepareHardware @ 0x1C00553E0 (Command_PrepareHardware.c)
 *     CommonBuffer_Create @ 0x1C0055618 (CommonBuffer_Create.c)
 *     Interrupter_PrepareHardware @ 0x1C005C6A0 (Interrupter_PrepareHardware.c)
 *     Register_PrepareHardware @ 0x1C005D868 (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x1C005E13C (RootHub_PrepareHardware.c)
 *     DmaEnabler_Create @ 0x1C005FBCC (DmaEnabler_Create.c)
 *     SecureDmaEnabler_Create @ 0x1C005FFAC (SecureDmaEnabler_Create.c)
 */

__int64 __fastcall Controller_WdfEvtDevicePrepareHardware(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // rdi
  char IsSecureDevice; // bp
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  __int64 v12; // [rsp+28h] [rbp-20h]

  v6 = *(__int64 **)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                       WdfDriverGlobals,
                       a1,
                       off_1C004E408)
                   + 8);
  IsSecureDevice = Controller_IsSecureDevice((__int64)v6);
  WPP_RECORDER_SF_q(v6[9], 4u, 4u, 0x2Du, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, a1);
  v8 = Register_PrepareHardware(v6[11]);
  v9 = v8;
  if ( v8 < 0 )
  {
    LODWORD(v12) = v8;
    WPP_RECORDER_SF_d(v6[9], 2u, 4u, 0x2Eu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v12);
    goto LABEL_15;
  }
  if ( IsSecureDevice )
  {
    if ( !v6[13] )
    {
      v10 = SecureDmaEnabler_Create(v6);
      goto LABEL_8;
    }
  }
  else if ( !v6[12] )
  {
    v10 = DmaEnabler_Create(a1, v6);
LABEL_8:
    v9 = v10;
    if ( v10 < 0 )
      goto LABEL_16;
  }
  if ( v6[15] || (v9 = CommonBuffer_Create((__int64)v6, v6 + 15), v9 >= 0) )
  {
    v9 = Interrupter_PrepareHardware(v6[16], a2, a3);
    if ( v9 >= 0 )
    {
      v9 = XilDeviceSlot_PrepareHardware(v6[17]);
      if ( v9 >= 0 )
      {
        v9 = Command_PrepareHardware(v6[18]);
        if ( v9 >= 0 )
        {
          v9 = RootHub_PrepareHardware(v6[19]);
LABEL_15:
          if ( v9 >= 0 )
            return (unsigned int)v9;
        }
      }
    }
  }
LABEL_16:
  DbgPrint("USBXHCI: Controller enumeration failure in WdfEvtDevicePrepareHardware\n");
  LODWORD(v12) = v9;
  WPP_RECORDER_SF_d(v6[9], 1u, 4u, 0x2Fu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v12);
  Controller_ReportFatalError((__int64)v6, 32, 4124, 0LL, 0LL, 0LL);
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  return (unsigned int)v9;
}
