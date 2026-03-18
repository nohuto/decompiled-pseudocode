/*
 * XREFs of KeUpdateThreadTag @ 0x1401307B0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x140043AC0 (KiAcquireThreadStateLock.c)
 *     KiStartThreadCycleAccumulation @ 0x140043CC0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     KiIpiSendPacket @ 0x140120534 (KiIpiSendPacket.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall KeUpdateThreadTag(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // si
  int v4; // ebx
  struct _KPRCB *v5; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  char v7; // al
  __int64 result; // rax
  char v9; // al
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
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0LL);
      v7 = v14;
      if ( v14 )
        _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
      *(_BYTE *)(a1 + 124) = v7;
      KiStartThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0);
      _enable();
    }
    else
    {
      if ( (unsigned __int8)KiAcquireThreadStateLock(a1, (__int64 *)&v11, (volatile signed __int32 **)&v12) == 2
        || *(_BYTE *)(a1 + 113) )
      {
        v4 = *(_DWORD *)(a1 + 536);
        v13[0] = 1310721;
        memset(&v13[1], 0, 0xA4uLL);
        KeAddProcessorAffinityEx(v13, v4 & 0x7FFFFFFF);
        KeGetCurrentIrql();
        __writecr8(0xCuLL);
        KiIpiSendPacket(0, (int)v13, (__int64)KiIpiUpdateThreadTag, a1, (__int64)&v14, 0LL);
        v5 = KeGetCurrentPrcb();
        while ( v5->PacketBarrier )
          _mm_pause();
      }
      else
      {
        v9 = v14;
        if ( v14 )
          _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
        else
          _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
        *(_BYTE *)(a1 + 124) = v9;
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
