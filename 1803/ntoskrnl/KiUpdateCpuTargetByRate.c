/*
 * XREFs of KiUpdateCpuTargetByRate @ 0x1400A7E68
 * Callers:
 *     KeInsertSchedulingGroup @ 0x1400A7684 (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1400A7A44 (KeSetSchedulingGroupCpuRates.c)
 *     KiUpdateChildrenCpuTarget @ 0x14024ACBC (KiUpdateChildrenCpuTarget.c)
 * Callees:
 *     KiCheckForEffectivePriorityChange @ 0x1400A8330 (KiCheckForEffectivePriorityChange.c)
 *     KiResetScb @ 0x1400A83C8 (KiResetScb.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiUpdateChildrenCpuTarget @ 0x14024ACBC (KiUpdateChildrenCpuTarget.c)
 */

char __fastcall KiUpdateCpuTargetByRate(unsigned __int16 *a1, __int64 a2)
{
  char v2; // r12
  unsigned __int64 v4; // kr00_8
  unsigned __int64 v5; // rcx
  unsigned __int128 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned int v8; // r14d
  char v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rsi
  struct _KPRCB *v12; // r15
  char v13; // al
  _QWORD *v14; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v16; // rdi
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned __int64 v20; // [rsp+20h] [rbp-58h]
  int v21; // [rsp+80h] [rbp+8h] BYREF
  bool v22; // [rsp+88h] [rbp+10h]
  int v23; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v24; // [rsp+98h] [rbp+20h]

  v2 = a2;
  if ( *((_QWORD *)a1 + 12) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v16 = KiProcessorBlock[0];
    v21 = 0;
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v16 + 48), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v21);
      while ( *(_QWORD *)(v16 + 48) );
    }
    v17 = *((_QWORD *)a1 + 67);
    v20 = (unsigned __int64)*a1 * *(_QWORD *)(v17 + 8) / 0x2710;
    v7 = *(_QWORD *)(v17 + 16) * (unsigned __int64)a1[1] / 0x2710;
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 48), 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  }
  else
  {
    v4 = KiCyclesPerGeneration * *a1;
    v5 = KiCyclesPerGeneration * a1[1];
    v20 = v4 / 0x2710;
    v6 = v5 * (unsigned __int128)0x346DC5D63886594BuLL;
    v7 = v5 / 0x2710;
  }
  v8 = 0;
  LOBYTE(v6) = KeNumberProcessors_0;
  v24 = KeNumberProcessors_0;
  v22 = v7 == KiCyclesPerGeneration;
  if ( KeMaximumProcessors )
  {
    v9 = 16 * (v7 == KiCyclesPerGeneration);
    do
    {
      v10 = KiProcessorBlock[v8];
      v11 = (__int64)&a1[212 * v8 + 64];
      if ( v10 )
      {
        v12 = KeGetCurrentPrcb();
        v23 = 0;
        while ( 1 )
        {
          BYTE8(v6) = 1;
          KiSetVpThreadSpinLockCount(v12, *((_QWORD *)&v6 + 1));
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v10 + 48), 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v12, 0LL);
          do
            KeYieldProcessorEx(&v23);
          while ( *(_QWORD *)(v10 + 48) );
        }
        if ( !v22 && *(_BYTE *)(v10 + 33) )
        {
          v18 = v7 * v24;
          *((_QWORD *)a1 + 5) = v18;
          *((_QWORD *)a1 + 6) = v18;
        }
      }
      *(_QWORD *)(v11 + 8) = v20;
      v13 = *(_BYTE *)(v11 + 112) & 0xEF;
      *(_QWORD *)(v11 + 16) = v7;
      LOBYTE(v6) = v9 | v13;
      *(_BYTE *)(v11 + 112) = v6;
      if ( v10 )
      {
        if ( v2 )
        {
          *(_QWORD *)(v11 + 32) = 0LL;
          *(_QWORD *)(v11 + 48) = 0LL;
          if ( (*((_DWORD *)a1 + 1) & 2) != 0 )
          {
            KiResetScb(v11, v10);
            KiCheckForEffectivePriorityChange(v10, v11);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 48), 0LL);
        LOBYTE(v6) = KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
      }
      ++v8;
    }
    while ( v8 < KeMaximumProcessors );
  }
  if ( v2 )
  {
    *(LARGE_INTEGER *)&v6 = KeQueryPerformanceCounter(0LL);
    *((_QWORD *)a1 + 3) = v6;
  }
  v14 = a1 + 40;
  if ( (_QWORD *)*v14 != v14 )
  {
    BYTE8(v6) = v2;
    LOBYTE(v6) = KiUpdateChildrenCpuTarget(v14, *((_QWORD *)&v6 + 1));
  }
  return v6;
}
