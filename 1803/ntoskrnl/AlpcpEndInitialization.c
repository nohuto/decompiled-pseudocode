/*
 * XREFs of AlpcpEndInitialization @ 0x140556DF4
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x1404D2E50 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateReserve @ 0x140556174 (AlpcpCreateReserve.c)
 *     AlpcpCreateSection @ 0x140556B5C (AlpcpCreateSection.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 */

char __fastcall AlpcpEndInitialization(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v6, 0);
  *(_BYTE *)(a1 - 32) &= ~4u;
  v4 = a1 - 16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 - 16), a2, a3, a4);
  return KeAbPostRelease(v4);
}
