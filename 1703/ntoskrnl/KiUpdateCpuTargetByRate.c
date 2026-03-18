/*
 * XREFs of KiUpdateCpuTargetByRate @ 0x14001D164
 * Callers:
 *     KeInsertSchedulingGroup @ 0x14001C9F8 (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupCpuRates @ 0x14001CD88 (KeSetSchedulingGroupCpuRates.c)
 *     KiUpdateChildrenCpuTarget @ 0x1402063A4 (KiUpdateChildrenCpuTarget.c)
 * Callees:
 *     KiCheckForEffectivePriorityChange @ 0x14001D530 (KiCheckForEffectivePriorityChange.c)
 *     KiResetScb @ 0x14001D5B8 (KiResetScb.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiUpdateChildrenCpuTarget @ 0x1402063A4 (KiUpdateChildrenCpuTarget.c)
 */

char __fastcall KiUpdateCpuTargetByRate(unsigned __int16 *a1, char a2)
{
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r13
  unsigned __int128 v8; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rbp
  unsigned int v11; // r14d
  char v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rsi
  char v15; // al
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  int v24; // [rsp+70h] [rbp+8h] BYREF
  bool v25; // [rsp+78h] [rbp+10h]
  int v26; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v27; // [rsp+88h] [rbp+20h]

  if ( *((_QWORD *)a1 + 12) )
  {
    v19 = KiProcessorBlock[0];
    v24 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v24);
      while ( *(_QWORD *)(v19 + 48) );
    }
    v20 = *((_QWORD *)a1 + 67);
    v21 = *(_QWORD *)(v20 + 16) * a1[1];
    v8 = v21 * (unsigned __int128)0x346DC5D63886594BuLL;
    v9 = (unsigned __int64)*a1 * *(_QWORD *)(v20 + 8) / 0x2710;
    v10 = v21 / 0x2710;
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 48), 0LL);
    v4 = KiCyclesPerGeneration;
  }
  else
  {
    v4 = KiCyclesPerGeneration;
    v5 = (KiCyclesPerGeneration * (unsigned __int64)*a1 * (unsigned __int128)0x346DC5D63886594BuLL) >> 64;
    v6 = KiCyclesPerGeneration * a1[1];
    v7 = v5;
    v8 = v6 * (unsigned __int128)0x346DC5D63886594BuLL;
    v9 = v7 >> 11;
    v10 = v6 / 0x2710;
  }
  v11 = 0;
  v27 = KeNumberProcessors_0;
  v25 = v10 == v4;
  if ( KeMaximumProcessors )
  {
    v12 = 16 * (v10 == v4);
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
          v22 = v10 * v27;
          *((_QWORD *)a1 + 5) = v22;
          *((_QWORD *)a1 + 6) = v22;
        }
      }
      v15 = *(_BYTE *)(v14 + 112) & 0xEF;
      *(_QWORD *)(v14 + 8) = v9;
      LOBYTE(v8) = v12 | v15;
      *(_QWORD *)(v14 + 16) = v10;
      *(_BYTE *)(v14 + 112) = v8;
      if ( v13 )
      {
        if ( a2 )
        {
          *(_QWORD *)(v14 + 32) = 0LL;
          *(_QWORD *)(v14 + 48) = 0LL;
          LODWORD(v8) = *((_DWORD *)a1 + 1);
          if ( (v8 & 2) != 0 )
          {
            KiResetScb(v14, v13);
            LOBYTE(v8) = KiCheckForEffectivePriorityChange(v13, v14, v16, v17);
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
    *(LARGE_INTEGER *)&v8 = KeQueryPerformanceCounter(0LL);
    *((_QWORD *)a1 + 3) = v8;
  }
  v18 = a1 + 40;
  if ( (_QWORD *)*v18 != v18 )
  {
    BYTE8(v8) = a2;
    LOBYTE(v8) = KiUpdateChildrenCpuTarget(v18, *((_QWORD *)&v8 + 1));
  }
  return v8;
}
