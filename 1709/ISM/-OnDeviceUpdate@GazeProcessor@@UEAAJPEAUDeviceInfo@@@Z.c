/*
 * XREFs of ?OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180043710
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?UpdateDisplayCalibration@GazeProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x18004374C (-UpdateDisplayCalibration@GazeProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 */

__int64 __fastcall GazeProcessor::OnDeviceUpdate(GazeProcessor *this, struct DeviceInfo *a2)
{
  int updated; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  updated = GazeProcessor::UpdateDisplayCalibration(this, a2);
  v4 = updated;
  if ( updated < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v3, &MinInput_Warning_CheckResult, 0, 203, updated);
  return v4;
}
