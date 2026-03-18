/*
 * XREFs of KiUpdateCpuTargetByWeight @ 0x1400D1DA4
 * Callers:
 *     KiAssignSchedulingGroupWeights @ 0x1400D1BDC (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateChildrenCpuTarget @ 0x14020C994 (KiUpdateChildrenCpuTarget.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400D231C (KiCheckForEffectivePriorityChange.c)
 *     KiResetScb @ 0x1400D23B8 (KiResetScb.c)
 *     KiUpdateChildrenCpuTarget @ 0x14020C994 (KiUpdateChildrenCpuTarget.c)
 */

char __fastcall KiUpdateCpuTargetByWeight(LARGE_INTEGER *a1, char a2)
{
  unsigned __int16 LowPart; // bp
  unsigned __int16 LowPart_high; // r14
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r13
  unsigned int v9; // r14d
  LARGE_INTEGER PerformanceCounter; // rax
  char v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rbp
  char v14; // al
  LARGE_INTEGER *v15; // rcx
  __int64 v16; // rdi
  LARGE_INTEGER v17; // rsi
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  int v23; // [rsp+70h] [rbp+8h] BYREF
  bool v24; // [rsp+78h] [rbp+10h]
  int v25; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v26; // [rsp+88h] [rbp+20h]

  LowPart = a1->LowPart;
  LowPart_high = HIWORD(a1->u.LowPart);
  if ( a1[12].QuadPart )
  {
    v16 = KiProcessorBlock[0];
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v23);
      while ( *(_QWORD *)(v16 + 48) );
    }
    v17 = a1[67];
    v18 = *(unsigned int *)(a1[12].QuadPart + 20);
    v7 = (unsigned __int64)LOWORD(a1->LowPart) * *(_QWORD *)(v17.QuadPart + 8) % v18;
    v8 = (unsigned __int64)LOWORD(a1->LowPart) * *(_QWORD *)(v17.QuadPart + 8) / v18;
    if ( LowPart == LowPart_high )
      v6 = (unsigned __int64)LOWORD(a1->LowPart) * *(_QWORD *)(v17.QuadPart + 8) / v18;
    else
      v6 = *(_QWORD *)(v17.QuadPart + 16);
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 48), 0LL);
  }
  else
  {
    v6 = KiCyclesPerGeneration;
    v7 = KiCyclesPerGeneration * (unsigned __int64)LowPart % (unsigned int)KiGroupSchedulingTotalWeight;
    v8 = KiCyclesPerGeneration * (unsigned __int64)LowPart / (unsigned int)KiGroupSchedulingTotalWeight;
    if ( LowPart == LowPart_high )
      v6 = KiCyclesPerGeneration * (unsigned __int64)LowPart / (unsigned int)KiGroupSchedulingTotalWeight;
  }
  v9 = 0;
  LOBYTE(PerformanceCounter.LowPart) = KeMaximumProcessors;
  v24 = v6 == KiCyclesPerGeneration;
  v26 = KeNumberProcessors_0;
  if ( KeMaximumProcessors )
  {
    v11 = 16 * (v6 == KiCyclesPerGeneration);
    do
    {
      v12 = KiProcessorBlock[v9];
      v13 = (__int64)&a1[53 * v9 + 16];
      if ( v12 )
      {
        v25 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v25);
          while ( *(_QWORD *)(v12 + 48) );
        }
        if ( !v24 && *(_BYTE *)(v12 + 33) )
        {
          v19 = v6 * v26;
          a1[5].QuadPart = v19;
          a1[6].QuadPart = v19;
        }
      }
      v14 = *(_BYTE *)(v13 + 112) & 0xEF;
      *(_QWORD *)(v13 + 8) = v8;
      LOBYTE(PerformanceCounter.LowPart) = v11 | v14;
      *(_QWORD *)(v13 + 16) = v6;
      *(_BYTE *)(v13 + 112) = PerformanceCounter.LowPart;
      if ( v12 )
      {
        if ( a2 )
        {
          *(_QWORD *)(v13 + 32) = 0LL;
          *(_QWORD *)(v13 + 48) = 0LL;
          PerformanceCounter.LowPart = a1->HighPart;
          if ( (PerformanceCounter.LowPart & 2) != 0 )
          {
            KiResetScb(v13, v12);
            LOBYTE(PerformanceCounter.LowPart) = KiCheckForEffectivePriorityChange(v12, v13, v20, v21);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 48), 0LL);
      }
      ++v9;
    }
    while ( v9 < KeMaximumProcessors );
  }
  if ( a2 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    a1[3] = PerformanceCounter;
  }
  v15 = a1 + 10;
  if ( (LARGE_INTEGER *)v15->QuadPart != v15 )
  {
    LOBYTE(v7) = a2;
    LOBYTE(PerformanceCounter.LowPart) = KiUpdateChildrenCpuTarget(v15, v7);
  }
  return PerformanceCounter.LowPart;
}
