/*
 * XREFs of KiTimerExpirationDpc @ 0x14020C0F0
 * Callers:
 *     <none>
 * Callees:
 *     KiTimer2Expiration @ 0x140092BD0 (KiTimer2Expiration.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiTimerExpiration @ 0x14020BF44 (KiTimerExpiration.c)
 */

void __fastcall KiTimerExpirationDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // esi
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // [rsp+30h] [rbp-138h] BYREF
  int v8; // [rsp+38h] [rbp-130h]
  int v9; // [rsp+3Ch] [rbp-12Ch]
  int v10; // [rsp+40h] [rbp-128h] BYREF
  __int64 v11; // [rsp+48h] [rbp-120h]

  v4 = (int)SystemArgument1;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v7 = 0LL;
    v8 = 0;
    v9 = 0;
    EtwTraceKernelEvent((__int64)&v7, 1u, 0x40020000u, 0xF56u, 0x400A02u);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  v11 = MEMORY[0xFFFFF78000000014];
  _disable();
  v6 = MEMORY[0xFFFFF78000000008];
  CurrentPrcb->LastTimerHand = MEMORY[0xFFFFF78000000008] >> 18;
  _enable();
  KiTimerExpiration((__int64)CurrentPrcb, v4, v6, &v10);
  CurrentPrcb->DpcData[0].ActiveDpc = 0LL;
  if ( CurrentPrcb->ClockOwner )
    KiTimer2Expiration((__int64)CurrentPrcb, v6, 1, (__int64)&v10);
}
