/*
 * XREFs of KiForceIdleUpdateSchedulerParkState @ 0x14020C534
 * Callers:
 *     KiForceIdleStartDpcRoutine @ 0x14020C440 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x14020C4C0 (KiForceIdleStopDpcRoutine.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x14005B740 (KeCopyAffinityEx.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     KiInsertQueueDpc @ 0x1400943B0 (KiInsertQueueDpc.c)
 *     KeCountSetBitsAffinityEx @ 0x1400D3180 (KeCountSetBitsAffinityEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiForceIdleParkUnparkProcessor @ 0x14020C368 (KiForceIdleParkUnparkProcessor.c)
 */

__int64 __fastcall KiForceIdleUpdateSchedulerParkState(unsigned __int8 a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int16 *v3; // rdx
  unsigned int v4; // eax
  int v5; // eax
  __int64 result; // rax
  struct _KPRCB *Prcb; // rax
  __int64 v8; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int16 *v9[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v10; // [rsp+50h] [rbp-B8h]
  __int64 v11; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v12[21]; // [rsp+60h] [rbp-A8h]

  CurrentPrcb = KeGetCurrentPrcb();
  while ( KiForceIdlePendingDpcCount )
    _mm_pause();
  v3 = (unsigned __int16 *)&KiForceIdleUnparkRestoreMask;
  if ( a1 )
    v3 = (unsigned __int16 *)KeActiveProcessors;
  KeCopyAffinityEx((__int64)&v11, v3);
  v4 = KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
  if ( ((v12[v4 >> 6] >> (v4 & 0x3F)) & 1) != 0 )
    v5 = KeCountSetBitsAffinityEx(&v11) - 1;
  else
    v5 = KeCountSetBitsAffinityEx(&v11);
  KiForceIdlePendingDpcCount = v5;
  v9[1] = (unsigned __int16 *)v12[0];
  v9[0] = (unsigned __int16 *)&v11;
  v10 = 0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v8, v9);
    if ( (_DWORD)result )
      break;
    Prcb = (struct _KPRCB *)KeGetPrcb(v8);
    if ( Prcb == KeGetCurrentPrcb() )
      KiForceIdleParkUnparkProcessor((__int64)Prcb, a1);
    else
      KiInsertQueueDpc((ULONG_PTR)&Prcb->ForceIdleDpc, a1, 0LL, 0LL, 0);
  }
  return result;
}
