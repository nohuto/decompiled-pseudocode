/*
 * XREFs of PsGetProcessJob @ 0x140123E70
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x140467354 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x1404A0B50 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 944);
}
