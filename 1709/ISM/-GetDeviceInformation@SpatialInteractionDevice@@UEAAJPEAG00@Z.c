/*
 * XREFs of ?GetDeviceInformation@SpatialInteractionDevice@@UEAAJPEAG00@Z @ 0x180074F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialInteractionDevice::GetDeviceInformation(
        SpatialInteractionDevice *this,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4)
{
  __int64 result; // rax

  *a2 = *(_WORD *)(*((_QWORD *)this + 11) + 88LL);
  *a3 = *(_WORD *)(*((_QWORD *)this + 11) + 90LL);
  result = 0LL;
  *a4 = *(_WORD *)(*((_QWORD *)this + 11) + 92LL);
  return result;
}
