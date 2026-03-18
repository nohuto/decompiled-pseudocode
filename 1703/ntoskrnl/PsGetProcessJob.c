/*
 * XREFs of PsGetProcessJob @ 0x14002C5E0
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x1404748C8 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140524DE0 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 944);
}
