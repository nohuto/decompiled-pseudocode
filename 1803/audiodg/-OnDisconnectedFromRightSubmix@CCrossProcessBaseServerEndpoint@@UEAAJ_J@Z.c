/*
 * XREFs of ?OnDisconnectedFromRightSubmix@CCrossProcessBaseServerEndpoint@@UEAAJ_J@Z @ 0x140017030
 * Callers:
 *     ?OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z @ 0x140008530 (-OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z.c)
 * Callees:
 *     ?UpdateLatency@CCrossProcessBaseServerEndpoint@@UEAAJ_J@Z @ 0x140017610 (-UpdateLatency@CCrossProcessBaseServerEndpoint@@UEAAJ_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::OnDisconnectedFromRightSubmix(
        CCrossProcessBaseServerEndpoint *this,
        __int64 a2)
{
  __int64 v2; // rdx
  __int64 (__fastcall *v3)(CCrossProcessBaseServerEndpoint *__hidden, __int64); // rax

  _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 40) + 156LL), 0xFFFFFFFD);
  _InterlockedExchange((volatile __int32 *)this - 60, 1);
  v2 = -a2;
  v3 = *(__int64 (__fastcall **)(CCrossProcessBaseServerEndpoint *__hidden, __int64))(*(_QWORD *)this + 32LL);
  if ( v3 == CCrossProcessBaseServerEndpoint::UpdateLatency )
    CCrossProcessBaseServerEndpoint::UpdateLatency(this, v2);
  else
    v3(this, v2);
  return 0LL;
}
