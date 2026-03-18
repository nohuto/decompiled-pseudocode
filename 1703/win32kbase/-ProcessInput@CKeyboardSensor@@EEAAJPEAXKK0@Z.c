/*
 * XREFs of ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C012D3D0
 * Callers:
 *     <none>
 * Callees:
 *     RIMRefreshDeviceAttributes @ 0x1C0099F30 (RIMRefreshDeviceAttributes.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C009A210 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C0130ED0 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 */

__int64 __fastcall CKeyboardSensor::ProcessInput(char **this, _WORD *a2, __int64 a3, unsigned int a4, char *a5)
{
  struct DEVICEINFO *DeviceInfo; // rax
  __int64 v9; // rcx

  DeviceInfo = CBaseInput::FindDeviceInfo((CBaseInput *)this, a5, *a2 == 0xFFFE);
  if ( DeviceInfo && (unsigned int)CKeyboardProcessor::ProcessInput(v9, DeviceInfo, a2, a4) == 1 )
    RIMRefreshDeviceAttributes(this[1], a5);
  return 0LL;
}
