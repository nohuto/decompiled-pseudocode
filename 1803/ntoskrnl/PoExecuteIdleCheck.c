/*
 * XREFs of PoExecuteIdleCheck @ 0x140271800
 * Callers:
 *     KeClockInterruptNotify @ 0x14010A200 (KeClockInterruptNotify.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KeIsEmptyAffinityEx @ 0x1400352E0 (KeIsEmptyAffinityEx.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PpmGetIdleConstrainedMask @ 0x140272040 (PpmGetIdleConstrainedMask.c)
 *     PpmEventIdleDurationExpiration @ 0x1402807FC (PpmEventIdleDurationExpiration.c)
 */

void __fastcall PoExecuteIdleCheck(unsigned __int64 a1)
{
  struct _KPRCB *Prcb; // rax
  __int64 v3; // r8
  ULONG v4; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v5[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v6; // [rsp+38h] [rbp-C8h]
  _DWORD v7[44]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v8[8]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 *v9; // [rsp+F8h] [rbp-8h]

  if ( PpmIdleDurationExpirationTimeout
    && PpmIdleDurationExpirationTimeout + PpmIdleLastIdleDurationExpirationTime < a1
    && (unsigned __int8)PpmGetIdleConstrainedMask(v8) )
  {
    PpmIdleLastIdleDurationExpirationTime = a1;
    v7[0] = 1310721;
    memset(&v7[1], 0, 0xA4uLL);
    v5[1] = v9;
    v5[0] = (unsigned __int16 *)v8;
    v6 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v4, v5) )
    {
      Prcb = (struct _KPRCB *)KeGetPrcb(v4);
      if ( Prcb != KeGetCurrentPrcb() && Prcb->PowerState.IdleTimeExpiration <= a1 )
        KeAddProcessorAffinityEx(v7, v4);
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(v7) )
    {
      PpmEventIdleDurationExpiration(v7);
      HalRequestIpi(0LL, v7, v3);
    }
  }
}
