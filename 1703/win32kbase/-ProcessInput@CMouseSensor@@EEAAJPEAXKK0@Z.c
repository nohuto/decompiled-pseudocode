/*
 * XREFs of ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C0099E80
 * Callers:
 *     <none>
 * Callees:
 *     RIMRefreshDeviceAttributes @ 0x1C0099F30 (RIMRefreshDeviceAttributes.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C009A08C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C009A210 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?ProcessInput@CMouseAsTouchAdapter@@QEAAXPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K@Z @ 0x1C01327C4 (-ProcessInput@CMouseAsTouchAdapter@@QEAAXPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K@Z.c)
 */

__int64 __fastcall CMouseSensor::ProcessInput(
        CMouseAsTouchAdapter **this,
        struct _MOUSE_INPUT_DATA *a2,
        __int64 a3,
        unsigned int a4,
        void *a5)
{
  USHORT UnitId; // bp
  struct DEVICEINFO *DeviceInfo; // rax
  CMouseAsTouchAdapter *v10; // rcx
  bool v12; // [rsp+20h] [rbp-28h]

  UnitId = a2->UnitId;
  DeviceInfo = CBaseInput::FindDeviceInfo((CBaseInput *)this, a5, a2->UnitId == 0xFFFE);
  if ( DeviceInfo )
  {
    v10 = this[81];
    if ( !v10 || UnitId == 0xFFFE )
    {
      v12 = UnitId == 0xFFFEu;
      if ( (unsigned int)CMouseProcessor::ProcessInput(this[80], DeviceInfo, a2, a4, v12) == 1 )
        RIMRefreshDeviceAttributes(this[1], a5);
    }
    else
    {
      CMouseAsTouchAdapter::ProcessInput(v10, DeviceInfo, a2, a4);
    }
  }
  return 0LL;
}
