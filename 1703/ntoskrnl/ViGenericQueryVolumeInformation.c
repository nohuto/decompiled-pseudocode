/*
 * XREFs of ViGenericQueryVolumeInformation @ 0x140780750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericQueryVolumeInformation(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(
           a1,
           a2,
           (__int64 (__fastcall *)(__int64, __int64, ULONG_PTR))pXdvIRP_MJ_QUERY_VOLUME_INFORMATION,
           0xAu);
}
