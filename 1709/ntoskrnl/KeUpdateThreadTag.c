/*
 * XREFs of KeUpdateThreadTag @ 0x14000B720
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x14008C950 (KiAcquireThreadStateLock.c)
 *     KiStartThreadCycleAccumulation @ 0x14008D5D0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     KiIpiSendPacket @ 0x1400D3118 (KiIpiSendPacket.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall KeUpdateThreadTag(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // si
  char v4; // al
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  char v7; // al
  int v8; // ebx
  struct _KPRCB *v9; // rcx
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  struct _KPRCB *v11; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int64 *v12; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v13[44]; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+138h] [rbp+38h] BYREF

  v14 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v10 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v10);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(unsigned __int8 *)(a1 + 124) != v14 )
  {
    if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = CurrentPrcb;
      _disable();
      KiEndThreadCycleAccumulation(CurrentPrcb, a1, 0LL);
      v7 = v14;
      if ( v14 )
        _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
      *(_BYTE *)(a1 + 124) = v7;
      KiStartThreadCycleAccumulation(CurrentPrcb, a1, 0LL);
      _enable();
    }
    else
    {
      if ( (unsigned __int8)KiAcquireThreadStateLock(a1, &v11, &v12) == 2 || *(_BYTE *)(a1 + 113) )
      {
        v8 = *(_DWORD *)(a1 + 536);
        v13[0] = 1310721;
        memset(&v13[1], 0, 0xA4uLL);
        KeAddProcessorAffinityEx(v13, v8 & 0x7FFFFFFF);
        KeGetCurrentIrql();
        __writecr8(0xCuLL);
        KiIpiSendPacket(0, (unsigned int)v13, (unsigned int)KiIpiUpdateThreadTag, a1, (__int64)&v14, 0LL);
        v9 = KeGetCurrentPrcb();
        while ( v9->PacketBarrier )
          _mm_pause();
      }
      else
      {
        v4 = v14;
        if ( v14 )
          _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
        else
          _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
        *(_BYTE *)(a1 + 124) = v4;
      }
      if ( v11 )
        _InterlockedAnd64((volatile signed __int64 *)&v11->PrcbLock, 0LL);
      if ( v12 )
        _InterlockedAnd64(v12, 0LL);
    }
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
