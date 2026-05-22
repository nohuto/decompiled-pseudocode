/*
 * XREFs of ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x180088920
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?SetInputDeviceRepeatParameters@KeyboardDeviceCollection@@QEAAJKI@Z @ 0x180088DC4 (-SetInputDeviceRepeatParameters@KeyboardDeviceCollection@@QEAAJKI@Z.c)
 *     ?SetInputDeviceIndicatorState@KeyboardDeviceCollection@@QEAAJKG@Z @ 0x180088EF0 (-SetInputDeviceIndicatorState@KeyboardDeviceCollection@@QEAAJKG@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008A448 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?SetInputDeviceHapticsFeedback@SpatialInputControllerCollection@@QEAAJKEEG@Z @ 0x180095948 (-SetInputDeviceHapticsFeedback@SpatialInputControllerCollection@@QEAAJKEEG@Z.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialInputControllerCollection@@QEAAJK@Z @ 0x180095AA8 (-OnTrackingRequestedHeartbeat@SpatialInputControllerCollection@@QEAAJK@Z.c)
 *     ?SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z @ 0x18009B370 (-SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z.c)
 *     ?SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z @ 0x18009BD84 (-SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z.c)
 */

__int64 __fastcall RIMRawInputProvider::SendCommandToInputDevice(
        RIMRawInputProvider *this,
        unsigned int a2,
        const struct DeviceCommandMessage *a3)
{
  unsigned int v3; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // r9d
  RIMDeviceCollection *v10; // rcx
  RIMDeviceCollection *v11; // rcx
  struct DeviceInfo *v13; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  switch ( *(_DWORD *)a3 )
  {
    case 0:
      v11 = (RIMDeviceCollection *)*((_QWORD *)this + 6);
      if ( !v11 )
        return v3;
      if ( (int)RIMDeviceCollection::GetDeviceInfo(v11, a2, &v13) < 0 )
        return v3;
      v7 = KeyboardDeviceCollection::SetInputDeviceIndicatorState(
             *((KeyboardDeviceCollection **)this + 6),
             a2,
             *((_WORD *)a3 + 4));
      v3 = v7;
      if ( v7 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v3;
      v9 = 446;
LABEL_35:
      McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, v9, v7);
      return v3;
    case 1:
      v10 = (RIMDeviceCollection *)*((_QWORD *)this + 6);
      if ( !v10 )
        return v3;
      if ( (int)RIMDeviceCollection::GetDeviceInfo(v10, a2, &v13) < 0 )
        return v3;
      v7 = KeyboardDeviceCollection::SetInputDeviceRepeatParameters(
             *((KeyboardDeviceCollection **)this + 6),
             a2,
             *((_DWORD *)a3 + 2));
      v3 = v7;
      if ( v7 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v3;
      v9 = 462;
      goto LABEL_35;
    case 2:
      if ( (int)RIMDeviceCollection::GetDeviceInfo(*((RIMDeviceCollection **)this + 15), a2, &v13) < 0 )
        return v3;
      v7 = HeatDeviceCollection::SendHeatDeviceCommand(*((HeatDeviceCollection **)this + 15), a2, *((void **)a3 + 1));
      v3 = v7;
      if ( v7 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v3;
      v9 = 479;
      goto LABEL_35;
    case 3:
      if ( (int)RIMDeviceCollection::GetDeviceInfo(*((RIMDeviceCollection **)this + 13), a2, &v13) < 0 )
        return v3;
      v7 = SpatialInputControllerCollection::SetInputDeviceHapticsFeedback(
             *((SpatialInputControllerCollection **)this + 13),
             a2,
             *((_BYTE *)a3 + 8),
             *((_BYTE *)a3 + 9),
             *((_WORD *)a3 + 5));
      v3 = v7;
      if ( v7 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v3;
      v9 = 497;
      goto LABEL_35;
    case 4:
      if ( (int)RIMDeviceCollection::GetDeviceInfo(*((RIMDeviceCollection **)this + 16), a2, &v13) < 0 )
        return v3;
      v7 = GazeDeviceCollection::SetTrackingEnabled(*((GazeDeviceCollection **)this + 16), a2, *((_DWORD *)a3 + 2));
      v3 = v7;
      if ( v7 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v3;
      v9 = 513;
      goto LABEL_35;
    case 5:
      if ( (int)RIMDeviceCollection::GetDeviceInfo(*((RIMDeviceCollection **)this + 13), a2, &v13) < 0 )
        return v3;
      v7 = SpatialInputControllerCollection::OnTrackingRequestedHeartbeat(
             *((SpatialInputControllerCollection **)this + 13),
             a2);
      v3 = v7;
      if ( v7 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v3;
      v9 = 528;
      goto LABEL_35;
  }
  v3 = -2147467263;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 538, 1);
  return v3;
}
