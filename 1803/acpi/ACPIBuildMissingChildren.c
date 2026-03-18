/*
 * XREFs of ACPIBuildMissingChildren @ 0x1C000B868
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0018468 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0018844 (ACPIDetectPdoDevices.c)
 * Callees:
 *     OSNotifyCreateDevice @ 0x1C002E708 (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x1C002E808 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateProcessor @ 0x1C002EA1C (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateThermalZone @ 0x1C002EAFC (OSNotifyCreateThermalZone.c)
 *     WPP_RECORDER_SF_DD @ 0x1C003803C (WPP_RECORDER_SF_DD.c)
 *     AMLIGetFirstChild @ 0x1C00439BC (AMLIGetFirstChild.c)
 *     AMLIIterateSiblingsNext @ 0x1C0043EB0 (AMLIIterateSiblingsNext.c)
 */

__int64 __fastcall ACPIBuildMissingChildren(__int64 a1)
{
  __int64 *i; // rax
  __int64 v2; // rax
  int Device; // eax
  int v4; // edx
  ULONG_PTR v5; // rbx

  if ( (*(_QWORD *)(a1 + 8) & 0x8000000000000LL) == 0 )
  {
    for ( i = (__int64 *)AMLIGetFirstChild(*(_QWORD *)(a1 + 712)); ; i = (__int64 *)AMLIIterateSiblingsNext(v5) )
    {
      v5 = (ULONG_PTR)i;
      if ( !i )
        return 0LL;
      v2 = *i;
      if ( !*(_QWORD *)(*(_QWORD *)v5 + 104LL) )
      {
        switch ( *(_WORD *)(v2 + 66) )
        {
          case 6:
            Device = OSNotifyCreateDevice(v5);
            break;
          case 0xA:
            Device = OSNotifyCreateOperationRegion(v5);
            break;
          case 0xC:
            Device = OSNotifyCreateProcessor(v5, 0x20000000000LL);
            break;
          case 0xD:
            Device = OSNotifyCreateThermalZone(v5, 0x20000000000LL);
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
            (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
            Device,
            v5);
        }
      }
    }
  }
  return 0LL;
}
