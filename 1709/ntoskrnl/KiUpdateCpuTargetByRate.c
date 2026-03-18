/*
 * XREFs of KiUpdateCpuTargetByRate @ 0x1400D1F04
 * Callers:
 *     KeInsertSchedulingGroup @ 0x1400D17B8 (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1400D1B2C (KeSetSchedulingGroupCpuRates.c)
 *     KiUpdateChildrenCpuTarget @ 0x14020C994 (KiUpdateChildrenCpuTarget.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400D231C (KiCheckForEffectivePriorityChange.c)
 *     KiResetScb @ 0x1400D23B8 (KiResetScb.c)
 *     KiUpdateChildrenCpuTarget @ 0x14020C994 (KiUpdateChildrenCpuTarget.c)
 */

char __fastcall KiUpdateCpuTargetByRate(unsigned __int16 *a1, char a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r13
  unsigned __int128 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rbp
  unsigned int v10; // r14d
  char v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rsi
  char v14; // al
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  int v23; // [rsp+70h] [rbp+8h] BYREF
  bool v24; // [rsp+78h] [rbp+10h]
  int v25; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v26; // [rsp+88h] [rbp+20h]

  if ( *((_QWORD *)a1 + 12) )
  {
    v18 = KiProcessorBlock[0];
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v23);
      while ( *(_QWORD *)(v18 + 48) );
    }
    v19 = *((_QWORD *)a1 + 67);
    v20 = *(_QWORD *)(v19 + 16) * a1[1];
    v7 = v20 * (unsigned __int128)0x346DC5D63886594BuLL;
    v8 = (unsigned __int64)*a1 * *(_QWORD *)(v19 + 8) / 0x2710;
    v9 = v20 / 0x2710;
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
  }
  else
  {
    v4 = (KiCyclesPerGeneration * (unsigned __int64)*a1 * (unsigned __int128)0x346DC5D63886594BuLL) >> 64;
    v5 = KiCyclesPerGeneration * a1[1];
    v6 = v4;
    v7 = v5 * (unsigned __int128)0x346DC5D63886594BuLL;
    v8 = v6 >> 11;
    v9 = v5 / 0x2710;
  }
  v10 = 0;
  LOBYTE(v7) = KeMaximumProcessors;
  v24 = v9 == KiCyclesPerGeneration;
  v26 = KeNumberProcessors_0;
  if ( KeMaximumProcessors )
  {
    v11 = 16 * (v9 == KiCyclesPerGeneration);
    do
    {
      v12 = KiProcessorBlock[v10];
      v13 = (__int64)&a1[212 * v10 + 64];
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
          v21 = v9 * v26;
          *((_QWORD *)a1 + 5) = v21;
          *((_QWORD *)a1 + 6) = v21;
        }
      }
      v14 = *(_BYTE *)(v13 + 112) & 0xEF;
      *(_QWORD *)(v13 + 8) = v8;
      LOBYTE(v7) = v11 | v14;
      *(_QWORD *)(v13 + 16) = v9;
      *(_BYTE *)(v13 + 112) = v7;
      if ( v12 )
      {
        if ( a2 )
        {
          *(_QWORD *)(v13 + 32) = 0LL;
          *(_QWORD *)(v13 + 48) = 0LL;
          LODWORD(v7) = *((_DWORD *)a1 + 1);
          if ( (v7 & 2) != 0 )
          {
            KiResetScb(v13, v12);
            LOBYTE(v7) = KiCheckForEffectivePriorityChange(v12, v13, v15, v16);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 48), 0LL);
      }
      ++v10;
    }
    while ( v10 < KeMaximumProcessors );
  }
  if ( a2 )
  {
    *(LARGE_INTEGER *)&v7 = KeQueryPerformanceCounter(0LL);
    *((_QWORD *)a1 + 3) = v7;
  }
  v17 = a1 + 40;
  if ( (_QWORD *)*v17 != v17 )
  {
    BYTE8(v7) = a2;
    LOBYTE(v7) = KiUpdateChildrenCpuTarget(v17, *((_QWORD *)&v7 + 1));
  }
  return v7;
}
