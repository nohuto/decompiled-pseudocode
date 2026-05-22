/*
 * XREFs of ?ShouldAttachDevice@MPCMouseProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x18004AEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCMouseProcessor::ShouldAttachDevice(MPCMouseProcessor *this, struct DeviceInfo *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 73) + 32LL))(
           *((_QWORD *)this + 73),
           a2);
}
