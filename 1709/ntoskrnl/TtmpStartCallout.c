/*
 * XREFs of TtmpStartCallout @ 0x14070DFD4
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x14070D4B0 (TtmiSessionDeviceListWorker.c)
 *     TtmpCallAssignedToTerminal @ 0x14070D684 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetBuiltinPanelState @ 0x14070D72C (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x14070D7B4 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x14070D85C (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x14070E158 (TtmpUpdatePrimaryDisplayWnf.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     TtmpCalloutArmWatchdog @ 0x14070D904 (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutCreateWatchdog @ 0x14070D9DC (TtmpCalloutCreateWatchdog.c)
 *     TtmpGetCalloutTagFromCalloutType @ 0x14070DC08 (TtmpGetCalloutTagFromCalloutType.c)
 *     TtmpInitializeWatchdogTimeouts @ 0x14070DD50 (TtmpInitializeWatchdogTimeouts.c)
 *     TtmiLogCalloutStart @ 0x1407112B0 (TtmiLogCalloutStart.c)
 */

__int64 __fastcall TtmpStartCallout(__int64 a1, unsigned int *a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  _DWORD *v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // edi
  unsigned int CalloutTagFromCalloutType; // eax
  __int64 result; // rax

  if ( !TtmpDeviceCalloutTimeoutsSet )
    TtmpDeviceCalloutTimeoutsSet = TtmpInitializeWatchdogTimeouts(a1);
  *(_QWORD *)a1 = a2;
  v10 = &TtmpDeviceWatchdogTimeouts;
  *(_QWORD *)(a1 + 8) = a3;
  v11 = 0;
  *(_DWORD *)(a1 + 16) = a4;
  while ( *v10 != a4 )
  {
    ++v11;
    v10 += 6;
    if ( v11 >= 6 )
    {
      v12 = 30000;
      goto LABEL_8;
    }
  }
  v12 = v10[4];
LABEL_8:
  if ( v12 && TtmpCalloutCreateWatchdog(a1) >= 0 && *(_QWORD *)(a1 + 24) )
    TtmpCalloutArmWatchdog(a1, *a2, v12, a5);
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  CalloutTagFromCalloutType = TtmpGetCalloutTagFromCalloutType(a4);
  TtmiLogCalloutStart(*(unsigned int *)(a3 + 16), *(_QWORD *)(a3 + 24), CalloutTagFromCalloutType, a6);
  result = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(a1 + 32) = MEMORY[0xFFFFF78000000008];
  return result;
}
