/*
 * XREFs of ?OnDisconnectedFromRightSubmix@CSpatialCrossProcessServerEndpoint@@UEAAJ_J@Z @ 0x14005F440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpatialCrossProcessServerEndpoint::OnDisconnectedFromRightSubmix(
        CSpatialCrossProcessServerEndpoint *this,
        __int64 a2)
{
  _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 4) + 72LL), 0xFFFFFFF7);
  _InterlockedExchange((volatile __int32 *)this - 198, 1);
  return (*(__int64 (__fastcall **)(CSpatialCrossProcessServerEndpoint *, __int64))(*(_QWORD *)this + 32LL))(this, -a2);
}
