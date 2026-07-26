/*
 * XREFs of NdisCmDispatchCallConnected @ 0x1C0106B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisCmDispatchCallConnected(NDIS_HANDLE NdisVcHandle)
{
  (*((void (__fastcall **)(_QWORD))NdisVcHandle + 16))(*((_QWORD *)NdisVcHandle + 3));
}
