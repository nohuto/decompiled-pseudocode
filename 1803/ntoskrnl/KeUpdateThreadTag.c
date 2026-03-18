/*
 * XREFs of KeUpdateThreadTag @ 0x140143DE0
 * Callers:
 *     <none>
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x140060940 (KiStartThreadCycleAccumulation.c)
 *     KiIpiSendPacket @ 0x1400A4018 (KiIpiSendPacket.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiReleaseThreadStateLock @ 0x1400EDBF0 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadStateLock @ 0x1400EDDA0 (KiAcquireThreadStateLock.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall KeUpdateThreadTag(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  struct _KPRCB *v5; // rbx
  char v6; // al
  __int64 result; // rax
  struct _KPRCB *v8; // rcx
  char v9; // al
  int v10; // ebx
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  struct _KPRCB *v12; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int64 *v13; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v14[44]; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+148h] [rbp+48h] BYREF

  v15 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = 0;
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    do
      KeYieldProcessorEx(&v11);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(unsigned __int8 *)(a1 + 124) != v15 )
  {
    if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
    {
      v5 = KeGetCurrentPrcb();
      v12 = v5;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v5, a1, 0LL);
      v6 = v15;
      if ( v15 )
        _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
      *(_BYTE *)(a1 + 124) = v6;
      KiStartThreadCycleAccumulation((__int64)v5, a1, 0);
      _enable();
    }
    else
    {
      if ( (unsigned __int8)KiAcquireThreadStateLock(a1, (__int64 *)&v12, (volatile signed __int32 **)&v13) == 2
        || *(_BYTE *)(a1 + 113) )
      {
        v10 = *(_DWORD *)(a1 + 536);
        v14[0] = 1310721;
        memset(&v14[1], 0, 0xA4uLL);
        KeAddProcessorAffinityEx(v14, v10 & 0x7FFFFFFF);
        KeGetCurrentIrql();
        __writecr8(0xCuLL);
        KiIpiSendPacket(0, (unsigned __int16 *)v14, (__int64)KiIpiUpdateThreadTag, a1, (__int64)&v15, 0LL);
        v8 = KeGetCurrentPrcb();
        while ( v8->PacketBarrier )
          _mm_pause();
      }
      else
      {
        v9 = v15;
        if ( v15 )
          _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
        else
          _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
        *(_BYTE *)(a1 + 124) = v9;
      }
      KiReleaseThreadStateLock((__int64)v8, (__int64)v12, v13);
    }
  }
  result = KiReleaseThreadLockSafe(a1);
  __writecr8(CurrentIrql);
  return result;
}
