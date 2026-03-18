/*
 * XREFs of ACPIBuildMissingChildren @ 0x1C0043918
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0007DFC (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0008074 (ACPIDetectPdoDevices.c)
 * Callees:
 *     OSNotifyCreateThermalZone @ 0x1C0006788 (OSNotifyCreateThermalZone.c)
 *     OSNotifyCreateProcessor @ 0x1C0006B64 (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateDevice @ 0x1C0012860 (OSNotifyCreateDevice.c)
 *     AMLIIterateSiblingsNext @ 0x1C001FA30 (AMLIIterateSiblingsNext.c)
 *     AMLIGetFirstChild @ 0x1C00203E8 (AMLIGetFirstChild.c)
 *     OSNotifyCreateOperationRegion @ 0x1C00275F0 (OSNotifyCreateOperationRegion.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0045158 (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall ACPIBuildMissingChildren(__int64 a1)
{
  volatile signed __int32 *i; // rax
  __int64 v2; // rax
  int Device; // eax
  int v4; // edx
  volatile signed __int32 *v5; // rbx

  if ( (*(_QWORD *)(a1 + 8) & 0x8000000000000LL) == 0 )
  {
    for ( i = AMLIGetFirstChild(*(_QWORD **)(a1 + 712)); ; i = (volatile signed __int32 *)AMLIIterateSiblingsNext(v5) )
    {
      v5 = i;
      if ( !i )
        return 0LL;
      v2 = *(_QWORD *)i;
      if ( !*(_QWORD *)(*(_QWORD *)v5 + 104LL) )
      {
        switch ( *(_WORD *)(v2 + 66) )
        {
          case 6:
            Device = OSNotifyCreateDevice((__int64)v5, 0x20000000000uLL);
            break;
          case 0xA:
            Device = OSNotifyCreateOperationRegion((__int64)v5);
            break;
          case 0xC:
            Device = OSNotifyCreateProcessor((__int64)v5, 0x20000000000uLL);
            break;
          case 0xD:
            Device = OSNotifyCreateThermalZone((__int64)v5, 0x20000000000uLL);
            break;
          default:
            continue;
        }
        if ( Device < 0 )
        {
          LOBYTE(v4) = 2;
          WPP_RECORDER_SF_DD(
            WPP_GLOBAL_Control->DeviceExtension,
            v4,
            22,
            24,
            (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
            Device,
            (char)v5);
        }
      }
    }
  }
  return 0LL;
}
