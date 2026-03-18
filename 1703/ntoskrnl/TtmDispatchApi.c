/*
 * XREFs of TtmDispatchApi @ 0x1406D9DCC
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 *     TtmpDispatchAssignDevice @ 0x1406DA184 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x1406DA238 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1406DA32C (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1406DA41C (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x1406DA4D0 (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x1406DA594 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1406DA634 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayState @ 0x1406DA6EC (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1406DA7AC (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmiLogDispatchApiStart @ 0x1406DB9B0 (TtmiLogDispatchApiStart.c)
 *     TtmiLogDispatchApiStop @ 0x1406DBA80 (TtmiLogDispatchApiStop.c)
 */

__int64 __fastcall TtmDispatchApi(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        unsigned int *a7,
        _BYTE *a8)
{
  PVOID PoolWithTag; // rbx
  int v13; // edi
  int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // esi
  int v17; // edx
  int Terminal; // eax

  TtmiLogDispatchApiStart();
  PoolWithTag = 0LL;
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( TtmpEnabled != 1 )
  {
    v13 = -1073741637;
    v14 = 873;
LABEL_3:
    TtmiLogError("TtmDispatchApi", v14, -1, v13);
    goto LABEL_54;
  }
  switch ( a1 )
  {
    case 9u:
      v15 = 12;
      goto LABEL_20;
    case 0xAu:
      v15 = 24;
      v16 = 16;
      goto LABEL_21;
    case 0xBu:
      v15 = 16;
LABEL_14:
      v16 = 0;
      goto LABEL_21;
    case 0xCu:
      v15 = 16;
LABEL_20:
      v16 = 8;
      goto LABEL_21;
  }
  if ( a1 != 13 )
  {
    if ( a1 != 14 && a1 != 15 && a1 - 16 >= 2 )
    {
      v13 = -1073741811;
      v14 = 929;
      goto LABEL_3;
    }
    v15 = 24;
    goto LABEL_14;
  }
  v15 = 16;
  v16 = 540;
LABEL_21:
  if ( a3 < v15 || !a4 && v16 || a5 < v16 )
  {
    v13 = -1073741789;
    v17 = 940;
    goto LABEL_49;
  }
  if ( v16 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x206D654Du);
    if ( !PoolWithTag )
    {
      v13 = -1073741801;
      v14 = 955;
      goto LABEL_3;
    }
  }
  switch ( a1 )
  {
    case 9u:
      Terminal = TtmpDispatchOpenTerminal(a2, PoolWithTag);
      goto LABEL_47;
    case 0xAu:
      Terminal = TtmpDispatchCreateTerminal(a2, PoolWithTag);
      goto LABEL_47;
    case 0xBu:
      Terminal = TtmpDispatchEvacuateDevices(a2);
      goto LABEL_47;
    case 0xCu:
      Terminal = TtmpDispatchCreateEventQueue(a2, PoolWithTag);
      goto LABEL_47;
    case 0xDu:
      Terminal = TtmpDispatchGetTerminalEvent(a2, PoolWithTag);
      goto LABEL_47;
    case 0xEu:
      Terminal = TtmpDispatchSetDefaultDeviceAssignment(a2);
      goto LABEL_47;
    case 0xFu:
      Terminal = TtmpDispatchAssignDevice(a2);
      goto LABEL_47;
    case 0x10u:
      Terminal = TtmpDispatchSetDisplayState(a2);
      goto LABEL_47;
    case 0x11u:
      Terminal = TtmpDispatchSetDisplayTimeouts(a2);
LABEL_47:
      v13 = Terminal;
      goto LABEL_50;
  }
  v13 = -1073741811;
  v17 = 1012;
LABEL_49:
  TtmiLogError("TtmDispatchApi", v17, -1, v13);
LABEL_50:
  if ( PoolWithTag )
  {
    if ( v13 < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0x206D654Du);
    }
    else
    {
      *a6 = PoolWithTag;
      *a7 = v16;
      *a8 = 1;
    }
  }
LABEL_54:
  TtmiLogDispatchApiStop(a1, (unsigned int)v13);
  return (unsigned int)v13;
}
