/*
 * XREFs of ?ShouldAttachDevice@MPCGamepadProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x1800937E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCGamepadProcessor::ShouldAttachDevice(MPCGamepadProcessor *this, struct DeviceInfo *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 287) + 32LL))(
           *((_QWORD *)this + 287),
           a2);
}
