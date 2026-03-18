/*
 * XREFs of ViGenericInternalDeviceControl @ 0x140780650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericInternalDeviceControl(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(
           a1,
           a2,
           (__int64 (__fastcall *)(__int64, __int64, ULONG_PTR))pXdvIRP_MJ_INTERNAL_DEVICE_CONTROL,
           0xFu);
}
