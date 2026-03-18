/*
 * XREFs of EtwTraceContextSwap @ 0x140086BB0
 * Callers:
 *     KiSwapThread @ 0x1400EB0F0 (KiSwapThread.c)
 *     SwapContext @ 0x1401887A0 (SwapContext.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x140086960 (EtwpReserveTraceBuffer.c)
 *     EtwpCCSwapTrace @ 0x140086CF0 (EtwpCCSwapTrace.c)
 *     EtwpReleaseTraceBuffer @ 0x140087070 (EtwpReleaseTraceBuffer.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     EtwpReserveWithPebsIndex @ 0x140254854 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x1402548E8 (EtwpReserveWithPmcCounters.c)
 *     EtwpStackTraceDispatcher @ 0x140256CE0 (EtwpStackTraceDispatcher.c)
 */

__int64 __fastcall EtwTraceContextSwap(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  int v4; // ebp
  bool i; // zf
  __int64 v6; // r8
  char *v9; // rdx
  __int64 v10; // rdi
  int v11; // esi
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // al
  char v20; // cl
  struct _KPRCB *CurrentPrcb; // rax
  _PPM_IDLE_STATES *IdleStates; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  _BYTE v25[32]; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  __int64 v27; // [rsp+80h] [rbp+8h] BYREF

  result = (__int64)&retaddr;
  v3 = EtwpActiveSystemLoggers;
  v4 = 0;
  for ( i = !_BitScanForward((unsigned int *)&v6, EtwpActiveSystemLoggers);
        !i;
        i = !_BitScanForward((unsigned int *)&v6, v3) )
  {
    v3 &= v3 - 1;
    result = 32LL * (unsigned int)v6;
    v9 = (char *)&EtwpGroupMasks + result;
    if ( !(_UNKNOWN *)((char *)&EtwpGroupMasks + result) )
      continue;
    result = *((unsigned int *)v9 + 1);
    if ( (result & 4) == 0 )
      continue;
    result = (unsigned __int8)EtwpSystemLogger[2 * v6];
    if ( (unsigned int)result >= 0x40 )
    {
      v10 = 1LL;
    }
    else
    {
      _mm_lfence();
      result = EtwpHostSiloState;
      v10 = *(_QWORD *)(EtwpHostSiloState + 8LL * (unsigned __int8)EtwpSystemLogger[2 * v6] + 920);
    }
    if ( (v10 & 1) != 0 )
      continue;
    if ( v9 && (*((_DWORD *)v9 + 1) & 0x100) != 0 )
    {
      v11 = 1 << *(_DWORD *)(v10 + 200);
      result = (unsigned int)~v4;
      if ( ((unsigned int)result & v11) != 0 )
      {
        v12 = (*(__int64 (**)(void))(v10 + 40))();
        v13 = *(unsigned int *)(v10 + 200);
        v27 = v12;
        result = EtwpCCSwapTrace(a1, a2, v13, &v27);
        v4 |= v11;
      }
LABEL_11:
      v14 = *(_DWORD *)(v10 + 816);
      if ( (v14 & 0x80u) != 0 )
      {
        result = *(_QWORD *)(v10 + 832);
        if ( _bittest((const signed __int32 *)(result + 164), 4u) )
          result = EtwpStackTraceDispatcher(*(_DWORD *)v10 | v14 & 0xFFFF0000, &v27, a2, 3168771LL);
      }
      continue;
    }
    v15 = *(_DWORD *)(v10 + 816);
    if ( (v15 & 0xC00) == 0 )
      goto LABEL_22;
    if ( (v15 & 0x400) != 0 )
    {
      result = EtwpReserveWithPebsIndex(v10, 1316, 24, (unsigned int)v25, (__int64)&v27, 3168771);
      v16 = result;
      goto LABEL_24;
    }
    if ( (v15 & 0x800) != 0 && (v17 = 0LL, *(_DWORD *)(*(_QWORD *)(v10 + 848) + 32LL)) )
    {
      while ( 1 )
      {
        v18 = *(_QWORD *)(v10 + 848);
        if ( *(_WORD *)(v18 + 2 * v17 + 36) == 1316 )
          break;
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= *(_DWORD *)(v18 + 32) )
          goto LABEL_22;
      }
      result = EtwpReserveWithPmcCounters(v10, 1316, 24, (unsigned int)v25, (__int64)&v27, 3168771);
      v16 = result;
    }
    else
    {
LABEL_22:
      result = EtwpReserveTraceBuffer((int *)v10, 0x28u, (__int64)v25, &v27, 3168771);
      if ( !result )
        continue;
      v16 = result + 16;
      *(_QWORD *)(result + 8) = v27;
      *(_DWORD *)result = -1072627709;
      *(_DWORD *)(result + 4) = 86245416;
    }
LABEL_24:
    if ( v16 )
    {
      *(_DWORD *)v16 = *(_DWORD *)(a2 + 1600);
      *(_DWORD *)(v16 + 4) = *(_DWORD *)(a1 + 1600);
      *(_BYTE *)(v16 + 8) = *(_BYTE *)(a2 + 195);
      *(_BYTE *)(v16 + 9) = *(_BYTE *)(a1 + 195);
      *(_BYTE *)(v16 + 11) = *(_BYTE *)(a2 + 564);
      *(_BYTE *)(v16 + 12) = *(_BYTE *)(a1 + 643);
      *(_BYTE *)(v16 + 13) ^= (*(_BYTE *)(v16 + 13) ^ *(_BYTE *)(a1 + 391)) & 1;
      *(_BYTE *)(v16 + 14) = *(_BYTE *)(a1 + 388);
      v19 = *(_BYTE *)(a1 + 588);
      *(_BYTE *)(v16 + 13) &= 7u;
      *(_BYTE *)(v16 + 15) = v19;
      v20 = *(_BYTE *)(v16 + 13) ^ (*(_BYTE *)(v16 + 13) ^ *(_DWORD *)(a2 + 120) & 0xFC) & 4;
      *(_BYTE *)(v16 + 13) = v20;
      *(_BYTE *)(v16 + 13) = v20 ^ (v20 ^ (2 * (*(_DWORD *)(a1 + 120) >> 2))) & 2;
      *(_DWORD *)(v16 + 16) = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436);
      *(_DWORD *)(v16 + 20) = (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 72)) >> 10;
      CurrentPrcb = KeGetCurrentPrcb();
      if ( (_KTHREAD *)a1 == CurrentPrcb->IdleThread )
      {
        *(_BYTE *)(v16 + 10) = 0;
        IdleStates = CurrentPrcb->PowerState.IdleStates;
        if ( IdleStates )
          *(_BYTE *)(v16 + 10) = IdleStates->ActualState;
      }
      else
      {
        v23 = *(_QWORD *)(a1 + 104);
        if ( v23 )
        {
          v24 = v23 + CurrentPrcb->ScbOffset;
          while ( *(_DWORD *)(v24 + 116) <= 0xFFu )
          {
            LOBYTE(v23) = *(_BYTE *)(v24 + 116);
            if ( !(_BYTE)v23 )
            {
              v24 = *(_QWORD *)(v24 + 408);
              if ( v24 )
                continue;
            }
            goto LABEL_36;
          }
          LOBYTE(v23) = -1;
        }
LABEL_36:
        *(_BYTE *)(v16 + 10) = v23;
      }
      result = EtwpReleaseTraceBuffer(v25);
      goto LABEL_11;
    }
  }
  return result;
}
