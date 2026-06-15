/*
 * XREFs of ?GetIids@SendCommandAsyncOperation@Devices@Media@Windows@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x14001F840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::SendCommandAsyncOperation::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Windows::Media::Devices::SendCommandAsyncOperation::GetIids(
           (Windows::Media::Devices::SendCommandAsyncOperation *)(a1 - 16),
           a2,
           a3);
}
