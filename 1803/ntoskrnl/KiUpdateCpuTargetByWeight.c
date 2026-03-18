/*
 * XREFs of KiUpdateCpuTargetByWeight @ 0x1400A7CCC
 * Callers:
 *     KiAssignSchedulingGroupWeights @ 0x1400A7AF4 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateChildrenCpuTarget @ 0x14024ACBC (KiUpdateChildrenCpuTarget.c)
 * Callees:
 *     KiCheckForEffectivePriorityChange @ 0x1400A8330 (KiCheckForEffectivePriorityChange.c)
 *     KiResetScb @ 0x1400A83C8 (KiResetScb.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiUpdateChildrenCpuTarget @ 0x14024ACBC (KiUpdateChildrenCpuTarget.c)
 */

char __fastcall KiUpdateCpuTargetByWeight(LARGE_INTEGER *a1, __int64 a2)
{
  char v2; // r13
  unsigned __int16 LowPart; // r14
  unsigned __int16 LowPart_high; // r15
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v9; // r14
  char v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rsi
  struct _KPRCB *v13; // r15
  char v14; // al
  LARGE_INTEGER *v15; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v17; // rdi
  LARGE_INTEGER v18; // rbp
  unsigned __int64 v19; // rax
  unsigned __int64 v21; // [rsp+20h] [rbp-58h]
  int v22; // [rsp+80h] [rbp+8h] BYREF
  bool v23; // [rsp+88h] [rbp+10h]
  int v24; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v25; // [rsp+98h] [rbp+20h]

  v2 = a2;
  LowPart = a1->LowPart;
  LowPart_high = HIWORD(a1->u.LowPart);
  if ( a1[12].QuadPart )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v22 = 0;
    v17 = KiProcessorBlock[0];
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v17 + 48), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v22);
      while ( *(_QWORD *)(v17 + 48) );
    }
    v18 = a1[67];
    v21 = (unsigned __int64)LOWORD(a1->LowPart)
        * *(_QWORD *)(v18.QuadPart + 8)
        / *(unsigned int *)(a1[12].QuadPart + 20);
    if ( LowPart == LowPart_high )
      v6 = (unsigned __int64)LOWORD(a1->LowPart)
         * *(_QWORD *)(v18.QuadPart + 8)
         / *(unsigned int *)(a1[12].QuadPart + 20);
    else
      v6 = *(_QWORD *)(v18.QuadPart + 16);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 48), 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  }
  else
  {
    v6 = KiCyclesPerGeneration;
    v7 = KiCyclesPerGeneration * (unsigned __int64)LowPart % (unsigned int)KiGroupSchedulingTotalWeight;
    v21 = KiCyclesPerGeneration * (unsigned __int64)LowPart / (unsigned int)KiGroupSchedulingTotalWeight;
    if ( LowPart == LowPart_high )
      v6 = KiCyclesPerGeneration * (unsigned __int64)LowPart / (unsigned int)KiGroupSchedulingTotalWeight;
  }
  LOBYTE(PerformanceCounter.LowPart) = KeNumberProcessors_0;
  v25 = KeNumberProcessors_0;
  v9 = 0LL;
  v23 = v6 == KiCyclesPerGeneration;
  if ( KeMaximumProcessors )
  {
    v10 = 16 * (v6 == KiCyclesPerGeneration);
    do
    {
      v11 = KiProcessorBlock[v9];
      v12 = (__int64)&a1[53 * (unsigned int)v9 + 16];
      if ( v11 )
      {
        v13 = KeGetCurrentPrcb();
        v24 = 0;
        while ( 1 )
        {
          LOBYTE(v7) = 1;
          KiSetVpThreadSpinLockCount(v13, v7);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v11 + 48), 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v13, 0LL);
          do
            KeYieldProcessorEx(&v24);
          while ( *(_QWORD *)(v11 + 48) );
        }
        if ( !v23 && *(_BYTE *)(v11 + 33) )
        {
          v19 = v6 * v25;
          a1[5].QuadPart = v19;
          a1[6].QuadPart = v19;
        }
      }
      *(_QWORD *)(v12 + 8) = v21;
      v14 = *(_BYTE *)(v12 + 112) & 0xEF;
      *(_QWORD *)(v12 + 16) = v6;
      LOBYTE(PerformanceCounter.LowPart) = v10 | v14;
      *(_BYTE *)(v12 + 112) = PerformanceCounter.LowPart;
      if ( v11 )
      {
        if ( v2 )
        {
          *(_QWORD *)(v12 + 32) = 0LL;
          *(_QWORD *)(v12 + 48) = 0LL;
          if ( (a1->HighPart & 2) != 0 )
          {
            KiResetScb(v12, v11);
            KiCheckForEffectivePriorityChange(v11, v12);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 48), 0LL);
        LOBYTE(PerformanceCounter.LowPart) = KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < KeMaximumProcessors );
  }
  if ( v2 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    a1[3] = PerformanceCounter;
  }
  v15 = a1 + 10;
  if ( (LARGE_INTEGER *)v15->QuadPart != v15 )
  {
    LOBYTE(v7) = v2;
    LOBYTE(PerformanceCounter.LowPart) = KiUpdateChildrenCpuTarget(v15, v7);
  }
  return PerformanceCounter.LowPart;
}
