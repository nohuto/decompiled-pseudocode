/*
 * XREFs of KiSelectReadyThread @ 0x1400EC0C0
 * Callers:
 *     KiQuantumEnd @ 0x140041B30 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140042440 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400428E0 (KiGroupSchedulingGenerationEnd.c)
 *     KiSearchForNewThread @ 0x1400EB7B0 (KiSearchForNewThread.c)
 *     KiSelectReadyThreadEx @ 0x1400ECE00 (KiSelectReadyThreadEx.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     KiChooseLowestRankedThread @ 0x140112D54 (KiChooseLowestRankedThread.c)
 *     NtYieldExecution @ 0x140112EE0 (NtYieldExecution.c)
 *     KiSelectNextThread @ 0x140113E30 (KiSelectNextThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140113960 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToScbQueue @ 0x140113C3C (KiAddThreadToScbQueue.c)
 *     KiCheckImportantThread @ 0x140203E00 (KiCheckImportantThread.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140203EA8 (KiConvertDynamicHeteroPolicy.c)
 */

_QWORD *__fastcall KiSelectReadyThread(signed int a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r14
  unsigned int v4; // edi
  __int64 v7; // r10
  bool v8; // zf
  _QWORD *v9; // rsi
  unsigned int v10; // r15d
  signed int v11; // ecx
  int v12; // edx
  unsigned int v13; // eax
  unsigned int v15; // r12d
  __int64 v16; // r10
  _QWORD **v17; // r13
  _QWORD *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // r10
  __int64 v24; // r10
  __int64 v25; // r10
  _QWORD *v26; // r9
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  char v29; // al
  _QWORD *v30; // [rsp+30h] [rbp-58h]
  int v31; // [rsp+90h] [rbp+8h]
  signed int v32; // [rsp+98h] [rbp+10h]
  int v33; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 25160);
  v4 = 1 << a1;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 80LL);
  v8 = (*(_BYTE *)(a2 + 35) & 2) == 0;
  v34 = v7;
  if ( !v8 && (v7 & *(_QWORD *)(a2 + 25152)) != 0 )
    v3 = 0LL;
  while ( 1 )
  {
    v9 = 0LL;
    if ( !KiForceIdleDisabled && KiForceIdleState == 4 )
      return v9;
    v10 = *(_DWORD *)(a2 + 22808);
    v11 = -1;
    v32 = -1;
    v12 = -2;
    v31 = -2;
    if ( v10 >= v4 )
    {
      _BitScanReverse((unsigned int *)&v11, v10);
      v32 = v11;
      v10 = 1 << v11;
    }
    if ( v3 )
    {
      v13 = *(_DWORD *)(v3 + 8);
      if ( v13 >= v4 )
      {
        _BitScanReverse((unsigned int *)&v12, v13);
        v31 = v12;
      }
      else
      {
        v12 = -2;
      }
      v11 = v32;
      if ( v12 > v32 || v12 == v32 && !_bittest((const signed __int32 *)(a2 + 22812), v32) )
      {
        v33 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
        {
          do
            KeYieldProcessorEx(&v33);
          while ( *(_QWORD *)v3 );
        }
        v15 = *(_DWORD *)(v3 + 8);
        v16 = v34;
LABEL_18:
        while ( v15 >= v4 && v15 >= v10 )
        {
          _BitScanReverse((unsigned int *)&a3, v15);
          v31 = (int)a3;
          v17 = (_QWORD **)(v3 + 16 * ((int)a3 + 1LL));
          v15 ^= 1 << (char)a3;
          v18 = *v17;
          v30 = *v17;
          while ( 1 )
          {
            v9 = v18 - 27;
            if ( KeHeteroSystem == 1 )
            {
              LODWORD(v19) = 0;
            }
            else
            {
              v19 = *((unsigned __int8 *)v9 + 125);
              if ( *((unsigned __int8 *)v9 + 125) >= 5u )
              {
                v28 = v18 - 27;
                if ( KeHeteroSystem == 2 )
                {
                  v29 = KiCheckImportantThread(v28, a2);
                  LODWORD(v19) = KiDefaultDynamicHeteroCpuPolicy;
                  if ( v29 )
                    LODWORD(v19) = KiDynamicHeteroCpuPolicyImportant;
                }
                else
                {
                  LODWORD(v19) = KiConvertDynamicHeteroPolicy(v28, v19, a2);
                }
                v16 = v34;
                v18 = v30;
              }
            }
            v20 = -1LL;
            if ( (_DWORD)v19 )
              v20 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 24 * ((int)v19 + 8LL));
            if ( (v20 & *(_QWORD *)(a2 + 200)) != 0 || (v20 & *(_QWORD *)(a2 + 25152) & v16) == 0 )
              break;
            v18 = (_QWORD *)*v18;
            v9 = 0LL;
            v30 = v18;
            if ( v18 == v17 )
              goto LABEL_18;
          }
          if ( v9 )
          {
            v21 = (_QWORD *)v9[27];
            v22 = (_QWORD *)v9[28];
            if ( (_QWORD *)v21[1] != v9 + 27 || (_QWORD *)*v22 != v9 + 27 )
              __fastfail(3u);
            *v22 = v21;
            v21[1] = v22;
            if ( v22 == v21 )
              *(_DWORD *)(v3 + 8) ^= 1 << v31;
            --*(_DWORD *)(v3 + 608);
            *(_QWORD *)(v3 + 616) -= *((unsigned int *)v9 + 504);
            *((_DWORD *)v9 + 134) = *(_DWORD *)(a2 + 36);
            break;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
        if ( v9 )
        {
          if ( v31 == v32 )
            _bittestandset((signed __int32 *)(a2 + 22812), v32);
          goto LABEL_35;
        }
        v12 = v31;
        v11 = v32;
      }
    }
    if ( v11 >= a1 )
    {
      a3 = *(_QWORD **)(a2 + 16 * (v11 + 1432LL));
      v26 = (_QWORD *)*a3;
      v9 = a3 - 27;
      v27 = (_QWORD *)a3[1];
      if ( *(_QWORD **)(*a3 + 8LL) != a3 || (_QWORD *)*v27 != a3 )
        __fastfail(3u);
      *v27 = v26;
      v26[1] = v27;
      if ( v27 == v26 )
        *(_DWORD *)(a2 + 22808) ^= 1 << v11;
      --*(_DWORD *)(a2 + 23480);
      *(_QWORD *)(a2 + 23552) -= *((unsigned int *)v9 + 504);
      if ( v11 == v12 )
        _bittestandreset((signed __int32 *)(a2 + 22812), v11);
    }
    if ( !v9 )
      return v9;
LABEL_35:
    v23 = v9[13];
    if ( !v23 )
      return v9;
    v24 = *(unsigned int *)(a2 + 216) + v23;
    if ( !v24 || !(unsigned int)KiGetThreadEffectiveRankNonZero((_DWORD)v9, v24, (_DWORD)a3, 1, 0LL) )
      return v9;
    KiAddThreadToScbQueue(a2, v25, v9, 0LL);
  }
}
