/*
 * XREFs of KiUpdateCpuTargetByWeight @ 0x14001D010
 * Callers:
 *     KiAssignSchedulingGroupWeights @ 0x14001CE38 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateChildrenCpuTarget @ 0x1402063A4 (KiUpdateChildrenCpuTarget.c)
 * Callees:
 *     KiCheckForEffectivePriorityChange @ 0x14001D530 (KiCheckForEffectivePriorityChange.c)
 *     KiResetScb @ 0x14001D5B8 (KiResetScb.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiUpdateChildrenCpuTarget @ 0x1402063A4 (KiUpdateChildrenCpuTarget.c)
 */

char __fastcall KiUpdateCpuTargetByWeight(unsigned __int16 *a1, char a2)
{
  unsigned __int16 v2; // si
  unsigned __int16 v4; // r14
  __int64 v6; // r8
  unsigned __int64 v7; // rbp
  unsigned __int64 QuadPart; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r13
  unsigned int v11; // r14d
  char v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rsi
  char v15; // al
  _QWORD *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rbp
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  int v24; // [rsp+70h] [rbp+8h] BYREF
  bool v25; // [rsp+78h] [rbp+10h]
  int v26; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v27; // [rsp+88h] [rbp+20h]

  v2 = *a1;
  v4 = a1[1];
  if ( *((_QWORD *)a1 + 12) )
  {
    v17 = KiProcessorBlock[0];
    v24 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v24);
      while ( *(_QWORD *)(v17 + 48) );
    }
    v18 = *((_QWORD *)a1 + 67);
    v19 = *(unsigned int *)(*((_QWORD *)a1 + 12) + 20LL);
    QuadPart = (unsigned __int64)*a1 * *(_QWORD *)(v18 + 8) / v19;
    v9 = (unsigned __int64)*a1 * *(_QWORD *)(v18 + 8) % v19;
    v10 = QuadPart;
    if ( v2 == v4 )
      v7 = (unsigned __int64)*a1 * *(_QWORD *)(v18 + 8) / v19;
    else
      v7 = *(_QWORD *)(v18 + 16);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 48), 0LL);
    v6 = KiCyclesPerGeneration;
  }
  else
  {
    v6 = KiCyclesPerGeneration;
    v7 = KiCyclesPerGeneration;
    QuadPart = KiCyclesPerGeneration * (unsigned __int64)v2 / (unsigned int)KiGroupSchedulingTotalWeight;
    v9 = KiCyclesPerGeneration * (unsigned __int64)v2 % (unsigned int)KiGroupSchedulingTotalWeight;
    v10 = QuadPart;
    if ( v2 == v4 )
      v7 = KiCyclesPerGeneration * (unsigned __int64)v2 / (unsigned int)KiGroupSchedulingTotalWeight;
  }
  v11 = 0;
  v27 = KeNumberProcessors_0;
  v25 = v7 == v6;
  if ( KeMaximumProcessors )
  {
    v12 = 16 * (v7 == v6);
    do
    {
      v13 = KiProcessorBlock[v11];
      v14 = (__int64)&a1[212 * v11 + 64];
      if ( v13 )
      {
        v26 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v26);
          while ( *(_QWORD *)(v13 + 48) );
        }
        if ( !v25 && *(_BYTE *)(v13 + 33) )
        {
          v20 = v7 * v27;
          *((_QWORD *)a1 + 5) = v20;
          *((_QWORD *)a1 + 6) = v20;
        }
      }
      v15 = *(_BYTE *)(v14 + 112) & 0xEF;
      *(_QWORD *)(v14 + 8) = v10;
      LOBYTE(QuadPart) = v12 | v15;
      *(_QWORD *)(v14 + 16) = v7;
      *(_BYTE *)(v14 + 112) = QuadPart;
      if ( v13 )
      {
        if ( a2 )
        {
          *(_QWORD *)(v14 + 32) = 0LL;
          *(_QWORD *)(v14 + 48) = 0LL;
          LODWORD(QuadPart) = *((_DWORD *)a1 + 1);
          if ( (QuadPart & 2) != 0 )
          {
            KiResetScb(v14, v13);
            LOBYTE(QuadPart) = KiCheckForEffectivePriorityChange(v13, v14, v21, v22);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
      }
      ++v11;
    }
    while ( v11 < KeMaximumProcessors );
  }
  if ( a2 )
  {
    QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
    *((_QWORD *)a1 + 3) = QuadPart;
  }
  v16 = a1 + 40;
  if ( (_QWORD *)*v16 != v16 )
  {
    LOBYTE(v9) = a2;
    LOBYTE(QuadPart) = KiUpdateChildrenCpuTarget(v16, v9);
  }
  return QuadPart;
}
