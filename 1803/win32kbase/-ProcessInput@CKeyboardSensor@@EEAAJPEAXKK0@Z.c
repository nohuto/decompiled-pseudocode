/*
 * XREFs of ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C012AFC0
 * Callers:
 *     <none>
 * Callees:
 *     RIMRefreshDeviceAttributes @ 0x1C00E4610 (RIMRefreshDeviceAttributes.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C0122730 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C01269F8 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 */

__int64 __fastcall CKeyboardSensor::ProcessInput(char **this, _WORD *a2, __int64 a3, unsigned int a4, char *a5)
{
  unsigned __int8 v8; // si
  struct DEVICEINFO *DeviceInfo; // rax
  tagObjLock *v10; // rcx

  v8 = (unsigned __int16)(*a2 + 3) <= 1u;
  DeviceInfo = CBaseInput::FindDeviceInfo((CBaseInput *)this, a5, v8);
  if ( DeviceInfo
    && (unsigned int)CKeyboardProcessor::ProcessInput(v10, (__int64)DeviceInfo, (unsigned __int64)a2, a4, v8) == 1 )
  {
    RIMRefreshDeviceAttributes(this[1], (__int64)a5);
  }
  return 0LL;
}
