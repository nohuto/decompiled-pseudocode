/*
 * XREFs of ACPIBuildMissingChildren @ 0x1C00432D8
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0010900 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0010B84 (ACPIDetectPdoDevices.c)
 * Callees:
 *     AMLIIterateSiblingsNext @ 0x1C0013824 (AMLIIterateSiblingsNext.c)
 *     AMLIGetFirstChild @ 0x1C0013A80 (AMLIGetFirstChild.c)
 *     OSNotifyCreateDevice @ 0x1C001A86C (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x1C0028A5C (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateProcessor @ 0x1C0029320 (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateThermalZone @ 0x1C002A160 (OSNotifyCreateThermalZone.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0044B1C (WPP_RECORDER_SF_DD.c)
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
            Device = OSNotifyCreateDevice((ULONG_PTR)v5, 0x20000000000uLL);
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
            (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
            Device,
            (char)v5);
        }
      }
    }
  }
  return 0LL;
}
