/*
 * XREFs of NdisWdfDeviceInternalControlIrpHandler @ 0x1C0062340
 * Callers:
 *     <none>
 * Callees:
 *     ndisDeviceInternalDispatch @ 0x1C00658FC (ndisDeviceInternalDispatch.c)
 */

__int64 __fastcall NdisWdfDeviceInternalControlIrpHandler(__int64 a1, __int64 a2)
{
  return ndisDeviceInternalDispatch(*(_QWORD *)(a1 + 3848), a1, a2);
}
