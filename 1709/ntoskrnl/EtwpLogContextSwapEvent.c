/*
 * XREFs of EtwpLogContextSwapEvent @ 0x14027BFB8
 * Callers:
 *     EtwTraceContextSwap @ 0x14027AFE0 (EtwTraceContextSwap.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x140092980 (EtwpReserveTraceBuffer.c)
 *     EtwpReleaseTraceBuffer @ 0x140153740 (EtwpReleaseTraceBuffer.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     EtwpReserveWithPebsIndex @ 0x14027CC38 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x14027CCCC (EtwpReserveWithPmcCounters.c)
 *     LBR_TRACING_ENABLED @ 0x14027DB8C (LBR_TRACING_ENABLED.c)
 *     EtwpStackTraceDispatcher @ 0x14027FCEC (EtwpStackTraceDispatcher.c)
 *     EtwpCCSwapTrace @ 0x140280B4C (EtwpCCSwapTrace.c)
 *     EtwpTraceLastBranchRecord @ 0x140281DAC (EtwpTraceLastBranchRecord.c)
 */

void __fastcall EtwpLogContextSwapEvent(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r13d
  int v4; // r12d
  __int64 v5; // rsi
  bool i; // zf
  __int64 v9; // rdx
  __int64 v10; // rbx
  int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  struct _KPRCB *CurrentPrcb; // rax
  _PPM_IDLE_STATES *IdleStates; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  signed __int64 v25[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+80h] [rbp+30h] BYREF

  v3 = *(_DWORD *)(a1 + 4172);
  v4 = 0;
  v5 = a3;
  for ( i = !_BitScanForward((unsigned int *)&a3, v3); !i; i = !_BitScanForward((unsigned int *)&a3, v3) )
  {
    v3 &= v3 - 1;
    v9 = 32LL * (unsigned int)a3 + a1 + 4208;
    if ( !v9 || (*(_DWORD *)(v9 + 4) & 4) == 0 )
      continue;
    if ( (unsigned int)*(unsigned __int8 *)(a1 + 2 * a3 + 4156) >= *(_DWORD *)(a1 + 8) )
    {
      v10 = 1LL;
    }
    else
    {
      _mm_lfence();
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 8LL * *(unsigned __int8 *)(a1 + 2 * a3 + 4156));
    }
    if ( (v10 & 1) != 0 )
      continue;
    if ( (*(_DWORD *)(v9 + 4) & 0x100) != 0 )
    {
      v11 = 1 << *(_DWORD *)(v10 + 216);
      if ( (~v4 & v11) != 0 )
      {
        v12 = (*(__int64 (**)(void))(v10 + 40))();
        v13 = *(unsigned int *)(v10 + 216);
        v26 = v12;
        EtwpCCSwapTrace(a2, v5, v13, &v26);
        v4 |= v11;
      }
LABEL_11:
      if ( v5 )
      {
        if ( (*(_DWORD *)(v10 + 832) & 0x80u) != 0
          && _bittest((const signed __int32 *)(*(_QWORD *)(v10 + 2136) + 164LL), 4u) )
        {
          EtwpStackTraceDispatcher(v10, &v26, v5, 3168772LL);
        }
        if ( (unsigned __int8)LBR_TRACING_ENABLED(v10, 1316LL) )
          EtwpTraceLastBranchRecord(v14, &v26, v5, 3168772LL);
      }
      continue;
    }
    v15 = *(_DWORD *)(v10 + 832);
    if ( (v15 & 0xC00) != 0 )
    {
      if ( (v15 & 0x400) != 0 )
      {
        v16 = EtwpReserveWithPebsIndex(v10, 1316, 24, (unsigned int)v25, (__int64)&v26, 3168772);
LABEL_22:
        v17 = v16;
        goto LABEL_29;
      }
      if ( (v15 & 0x800) != 0 )
      {
        v18 = 0LL;
        if ( *(_DWORD *)(*(_QWORD *)(v10 + 2152) + 32LL) )
        {
          while ( 1 )
          {
            v19 = *(_QWORD *)(v10 + 2152);
            if ( *(_WORD *)(v19 + 2 * v18 + 36) == 1316 )
              break;
            v18 = (unsigned int)(v18 + 1);
            if ( (unsigned int)v18 >= *(_DWORD *)(v19 + 32) )
              goto LABEL_27;
          }
          v16 = EtwpReserveWithPmcCounters(v10, 1316, 24, (unsigned int)v25, (__int64)&v26, 3168772);
          goto LABEL_22;
        }
      }
    }
LABEL_27:
    v20 = EtwpReserveTraceBuffer((unsigned int *)v10, 40LL, (__int64)v25, &v26, 3168772);
    if ( !v20 )
      continue;
    v17 = v20 + 16;
    *(_QWORD *)(v20 + 8) = v26;
    *(_DWORD *)v20 = -1072627708;
    *(_DWORD *)(v20 + 4) = 86245416;
LABEL_29:
    if ( v17 )
    {
      *(_QWORD *)v17 = 0LL;
      *(_QWORD *)(v17 + 8) = 0LL;
      *(_QWORD *)(v17 + 16) = 0LL;
      if ( a2 )
      {
        *(_DWORD *)(v17 + 4) = *(_DWORD *)(a2 + 1600);
        *(_BYTE *)(v17 + 9) = *(_BYTE *)(a2 + 195);
        *(_BYTE *)(v17 + 12) = *(_BYTE *)(a2 + 643);
        *(_BYTE *)(v17 + 13) ^= (*(_BYTE *)(v17 + 13) ^ *(_BYTE *)(a2 + 391)) & 1;
        *(_BYTE *)(v17 + 14) = *(_BYTE *)(a2 + 388);
        *(_BYTE *)(v17 + 15) = *(_BYTE *)(a2 + 588);
        *(_BYTE *)(v17 + 13) = *(_BYTE *)(v17 + 13) & 0xF1 | (2 * (*(_BYTE *)(a2 + 120) & 3));
        *(_DWORD *)(v17 + 20) = (*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 72)) >> 10;
        CurrentPrcb = KeGetCurrentPrcb();
        if ( (_KTHREAD *)a2 == CurrentPrcb->IdleThread )
        {
          IdleStates = CurrentPrcb->PowerState.IdleStates;
          if ( IdleStates )
            *(_BYTE *)(v17 + 10) = IdleStates->ActualState;
        }
        else
        {
          v23 = *(_QWORD *)(a2 + 104);
          if ( v23 )
          {
            v24 = v23 + CurrentPrcb->ScbOffset;
            do
            {
              if ( *(_DWORD *)(v24 + 116) > 0xFFu )
                LOBYTE(v23) = -1;
              else
                LOBYTE(v23) = *(_BYTE *)(v24 + 116);
              if ( (_BYTE)v23 )
                break;
              v24 = *(_QWORD *)(v24 + 408);
            }
            while ( v24 );
          }
          *(_BYTE *)(v17 + 10) = v23;
        }
      }
      if ( v5 )
      {
        *(_DWORD *)v17 = *(_DWORD *)(v5 + 1600);
        *(_BYTE *)(v17 + 8) = *(_BYTE *)(v5 + 195);
        *(_BYTE *)(v17 + 11) = *(_BYTE *)(v5 + 564);
        *(_BYTE *)(v17 + 13) = *(_BYTE *)(v17 + 13) & 0x8F | (16 * (*(_BYTE *)(v5 + 120) & 3));
        *(_DWORD *)(v17 + 16) = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v5 + 436);
      }
      EtwpReleaseTraceBuffer(v25);
      goto LABEL_11;
    }
  }
}
