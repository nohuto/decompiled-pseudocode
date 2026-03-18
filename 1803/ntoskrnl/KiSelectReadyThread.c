/*
 * XREFs of KiSelectReadyThread @ 0x1400F8040
 * Callers:
 *     KiSelectNextThread @ 0x1400A70C0 (KiSelectNextThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400A8540 (KiGroupSchedulingGenerationEnd.c)
 *     KiChooseLowestRankedThread @ 0x1400A8E28 (KiChooseLowestRankedThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400EABEC (KiGroupSchedulingQuantumEnd.c)
 *     KiQuantumEnd @ 0x1400EBA30 (KiQuantumEnd.c)
 *     KiSelectReadyThreadEx @ 0x1400EE3A0 (KiSelectReadyThreadEx.c)
 *     KiSearchForNewThread @ 0x1400F7480 (KiSearchForNewThread.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x14003A8F0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToScbQueue @ 0x1400A930C (KiAddThreadToScbQueue.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140248000 (KiConvertDynamicHeteroPolicy.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall KiSelectReadyThread(signed int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  bool *v4; // r11
  unsigned int v5; // esi
  __int64 v8; // rdi
  unsigned int v9; // r15d
  signed int v10; // ecx
  int v11; // edx
  unsigned int v12; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int v15; // r12d
  _DWORD *SchedulerAssist; // rcx
  unsigned int v17; // r12d
  __int64 v18; // r9
  _QWORD **v19; // r13
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  __int64 v27; // r10
  __int64 v28; // r10
  __int64 v29; // r10
  _QWORD *v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // rdx
  int v33; // eax
  int v34; // eax
  _QWORD *v35; // [rsp+30h] [rbp-58h]
  int v36; // [rsp+90h] [rbp+8h]
  signed int v37; // [rsp+98h] [rbp+10h]
  char v38; // [rsp+A0h] [rbp+18h]
  __int64 v39; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 24904);
  v4 = 0LL;
  v5 = 1 << a1;
  v39 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 80LL);
  if ( (*(_BYTE *)(a2 + 35) & 2) != 0 && (*(_QWORD *)(*(_QWORD *)(a2 + 192) + 80LL) & *(_QWORD *)(a2 + 24896)) != 0LL )
    v3 = 0LL;
  while ( 1 )
  {
    v8 = 0LL;
    if ( !KiForceIdleDisabled && KiForceIdleState == 4 )
      return v8;
    v9 = *(_DWORD *)(a2 + 22808);
    v10 = -1;
    v37 = -1;
    v11 = -2;
    v36 = -2;
    if ( v9 >= v5 )
    {
      _BitScanReverse((unsigned int *)&v10, v9);
      v37 = v10;
      v9 = 1 << v10;
    }
    if ( v3 )
    {
      v12 = *(_DWORD *)(v3 + 8);
      if ( v12 >= v5 )
      {
        _BitScanReverse((unsigned int *)&v11, v12);
        v36 = v11;
      }
      else
      {
        v11 = -2;
      }
      v10 = v37;
      if ( v11 > v37 || v11 == v37 && !_bittest((const signed __int32 *)(a2 + 22812), v37) )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = 0;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v33 = SchedulerAssist[5];
            SchedulerAssist[5] = v33 + 1;
            if ( v33 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
              KiPerformUnboostKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
        {
          KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
          do
          {
            if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v15);
          }
          while ( *(_QWORD *)v3 );
          LOBYTE(v32) = 1;
          KiSetVpThreadSpinLockCount(CurrentPrcb, v32);
        }
        v17 = *(_DWORD *)(v3 + 8);
        v18 = v39;
LABEL_18:
        v4 = 0LL;
        v8 = 0LL;
        if ( v17 >= v5 && v17 >= v9 )
        {
          _BitScanReverse((unsigned int *)&a3, v17);
          v38 = a3;
          v19 = (_QWORD **)(v3 + 16 * ((int)a3 + 1LL));
          v36 = a3;
          v17 ^= 1 << a3;
          v20 = *v19;
          v35 = *v19;
          while ( 1 )
          {
            v21 = *((unsigned __int8 *)v20 - 91);
            v8 = (__int64)(v20 - 27);
            if ( v21 >= 5 )
            {
              v21 = KiConvertDynamicHeteroPolicy(v20 - 27, v20, a2);
              v20 = v35;
              v18 = v39;
            }
            v22 = -1LL;
            if ( v21 )
              v22 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 24 * ((int)v21 + 8LL));
            if ( (v22 & *(_QWORD *)(a2 + 200)) != 0 || (v22 & *(_QWORD *)(a2 + 24896) & v18) == 0 )
              break;
            v20 = (_QWORD *)*v20;
            v35 = v20;
            if ( v20 == v19 )
              goto LABEL_18;
          }
          if ( (*(_DWORD *)(v8 + 120) & 0x400000) != 0 )
            *(_BYTE *)(*(_QWORD *)(v8 + 1512) + 26LL) = 0;
          v23 = *(_QWORD **)(v8 + 216);
          v24 = *(_QWORD **)(v8 + 224);
          if ( v23[1] != v8 + 216 || *v24 != v8 + 216 )
            __fastfail(3u);
          *v24 = v23;
          v23[1] = v24;
          if ( v24 == v23 )
            *(_DWORD *)(v3 + 8) ^= 1 << v38;
          --*(_DWORD *)(v3 + 608);
          *(_QWORD *)(v3 + 616) -= *(unsigned int *)(v8 + 2024);
          v4 = 0LL;
          *(_DWORD *)(v8 + 536) = *(_DWORD *)(a2 + 36);
        }
        _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        if ( v26 )
        {
          if ( v25->NestingLevel <= 1u )
          {
            v34 = v26[5] - 1;
            v26[5] = v34;
            if ( !v34 )
            {
              a3 = *((unsigned __int8 *)v26 + 27);
              if ( !*((_BYTE *)v26 + 25) && !(_BYTE)a3 )
                KiPerformUnboostKick(v25);
            }
          }
        }
        if ( v8 )
        {
          if ( v36 == v37 )
            _bittestandset((signed __int32 *)(a2 + 22812), v37);
          goto LABEL_37;
        }
        v11 = v36;
        v10 = v37;
      }
    }
    if ( v10 >= a1 )
    {
      a3 = *(_QWORD *)(a2 + 16 * (v10 + 1432LL));
      v8 = a3 - 216;
      if ( (*(_DWORD *)(a3 - 96) & 0x400000) != 0 )
        *(_BYTE *)(*(_QWORD *)(v8 + 1512) + 26LL) = 0;
      v30 = *(_QWORD **)a3;
      v31 = *(_QWORD **)(a3 + 8);
      if ( *(_QWORD *)(*(_QWORD *)a3 + 8LL) != a3 || *v31 != a3 )
        __fastfail(3u);
      *v31 = v30;
      v30[1] = v31;
      if ( v31 == v30 )
        *(_DWORD *)(a2 + 22808) ^= 1 << v10;
      --*(_DWORD *)(a2 + 23476);
      *(_QWORD *)(a2 + 23480) -= *(unsigned int *)(v8 + 2024);
      if ( v10 == v11 )
        _bittestandreset((signed __int32 *)(a2 + 22812), v10);
    }
    if ( !v8 )
      return v8;
LABEL_37:
    v27 = *(_QWORD *)(v8 + 104);
    if ( !v27 )
      return v8;
    v28 = *(unsigned int *)(a2 + 216) + v27;
    if ( !v28 || !(unsigned int)KiGetThreadEffectiveRankNonZero(v8, v28, a3, 1, v4) )
      return v8;
    KiAddThreadToScbQueue(a2, v29, v8, 0);
    v4 = 0LL;
  }
}
