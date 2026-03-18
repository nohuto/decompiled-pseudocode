/*
 * XREFs of PoExecuteIdleCheck @ 0x1402275F0
 * Callers:
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeIsEmptyAffinityEx @ 0x140047190 (KeIsEmptyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PpmGetIdleConstrainedMask @ 0x140227C58 (PpmGetIdleConstrainedMask.c)
 *     PpmEventIdleDurationExpiration @ 0x1402357EC (PpmEventIdleDurationExpiration.c)
 */

void __fastcall PoExecuteIdleCheck(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *Prcb; // rax
  ULONG v6; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v7[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v8; // [rsp+38h] [rbp-C8h]
  _DWORD v9[44]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v10[8]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 *v11; // [rsp+F8h] [rbp-8h]

  if ( PpmIdleDurationExpirationTimeout
    && PpmIdleDurationExpirationTimeout + PpmIdleLastIdleDurationExpirationTime < a1
    && (unsigned __int8)PpmGetIdleConstrainedMask(
                          v10,
                          PpmIdleDurationExpirationTimeout + PpmIdleLastIdleDurationExpirationTime,
                          a3,
                          a4) )
  {
    PpmIdleLastIdleDurationExpirationTime = a1;
    v9[0] = 1310721;
    memset(&v9[1], 0, 0xA4uLL);
    v7[1] = v11;
    v7[0] = (unsigned __int16 *)v10;
    v8 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v6, v7) )
    {
      Prcb = (struct _KPRCB *)KeGetPrcb(v6);
      if ( Prcb != KeGetCurrentPrcb() && Prcb->PowerState.IdleTimeExpiration <= a1 )
        KeAddProcessorAffinityEx(v9, v6);
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(v9) )
    {
      PpmEventIdleDurationExpiration(v9);
      HalRequestIpi(0LL, v9);
    }
  }
}
