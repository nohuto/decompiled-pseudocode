/*
 * XREFs of PoIdle @ 0x1400F4340
 * Callers:
 *     KiIdleLoop @ 0x140184ED0 (KiIdleLoop.c)
 * Callees:
 *     PpmEventIdleStateChange @ 0x140022A04 (PpmEventIdleStateChange.c)
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     MmGetNextNode @ 0x140067EB0 (MmGetNextNode.c)
 *     PpmIdleExecuteTransition @ 0x1400F4810 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x1400F60C0 (PpmIdlePrepare.c)
 *     PpmIdleSelectStates @ 0x14015B9D0 (PpmIdleSelectStates.c)
 *     PpmResetProcessorIdleAccounting @ 0x14015F854 (PpmResetProcessorIdleAccounting.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140229380 (PpmSetPlatformIdleDurationHint.c)
 */

__int64 __fastcall PoIdle(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 v3; // bx
  __int64 v4; // rsi
  _DWORD *v5; // r12
  __int64 v6; // r15
  __int64 v7; // r10
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned __int64 *v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // edi
  int v15; // ecx
  int v16; // edx
  __int64 v18; // r12
  unsigned __int16 v19; // dx
  char v20; // si
  unsigned __int16 v21; // cx
  struct _KPRCB *CurrentPrcb; // r8
  _KNODE *ParentNode; // r9
  int v24; // edi
  int NextNode; // eax
  __int64 v26; // r10
  char v27; // [rsp+48h] [rbp-C0h] BYREF
  char v28[3]; // [rsp+49h] [rbp-BFh] BYREF
  unsigned int v29; // [rsp+4Ch] [rbp-BCh] BYREF
  int v30; // [rsp+50h] [rbp-B8h] BYREF
  int v31; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v32; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v36[44]; // [rsp+78h] [rbp-90h] BYREF

  result = dword_14034BB2C;
  if ( BYTE5(PpmCurrentProfile[175 * dword_14034BB2C + 17]) )
    return result;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 23936);
  v5 = *(_DWORD **)(a1 + 23944);
  v6 = 0LL;
  v33 = 0LL;
  if ( !v4 )
    return HalProcessorIdle();
  *(_DWORD *)(v4 + 796) = 0;
  v7 = *(_QWORD *)(a1 + 23936);
  if ( *(_BYTE *)(v7 + 5) )
  {
    v8 = *(_QWORD *)(a1 + 23952);
    *(_QWORD *)(a1 + 23952) = 0LL;
    v9 = *(unsigned int *)(v7 + 16);
    *(_QWORD *)(a1 + 23960) += v8;
    v10 = *(_QWORD *)(a1 + 23944) + 1000 * v9;
    *(_QWORD *)(v10 + 40) += v8;
    if ( *(_DWORD *)(v7 + 68) == 3 )
    {
      if ( *(int *)(v7 + 64) < 0 )
      {
        ++*(_DWORD *)(v10 + 52);
      }
      else
      {
        ++*(_DWORD *)(v10 + 56);
        v11 = (unsigned __int64 *)&PpmIdleIntervalLimits;
        v12 = 0;
        while ( v8 >= *v11 )
        {
          if ( v8 < v11[3] )
          {
            ++v12;
            break;
          }
          v11 += 6;
          v12 += 2;
          if ( v12 >= 0x1A )
            goto LABEL_58;
        }
        if ( v12 >= 0x1A )
        {
LABEL_58:
          ++*(_DWORD *)(v10 + 60);
          goto LABEL_17;
        }
        v13 = 32LL * v12;
        *(_QWORD *)(v13 + v10 + 208) += v8;
        ++*(_DWORD *)(v13 + v10 + 232);
        if ( v8 < *(_QWORD *)(v13 + v10 + 216) )
          *(_QWORD *)(v13 + v10 + 216) = v8;
        if ( v8 > *(_QWORD *)(v13 + v10 + 224) )
          *(_QWORD *)(v13 + v10 + 224) = v8;
LABEL_17:
        if ( v8 < *(_QWORD *)(v10 + 64) )
          *(_QWORD *)(v10 + 64) = v8;
        if ( v8 > *(_QWORD *)(v10 + 72) )
          *(_QWORD *)(v10 + 72) = v8;
      }
    }
    else
    {
      ++*(_DWORD *)(v10 + 48);
    }
  }
  *(_DWORD *)(v7 + 64) = 0;
  *(_DWORD *)(v7 + 68) = 3;
  *(_BYTE *)(v7 + 5) = 0;
  *(_BYTE *)(v4 + 5) = 1;
  v36[0] = 1310721;
  memset(&v36[1], 0, 0xA4uLL);
  *(_WORD *)(v4 + 48) = 0;
  if ( !*(_BYTE *)v4 )
  {
    result = PpmIdlePrepare(a1, (unsigned int)v28, (unsigned int)&v32, (unsigned int)&v34, (__int64)&v33, (__int64)v36);
    v14 = result;
    v29 = result;
    if ( (_DWORD)result != -2 )
    {
      if ( (_DWORD)result == -1 )
      {
        ++v5[3];
        return result;
      }
      v15 = *(_DWORD *)(v4 + 560);
      v30 = v15;
      if ( v15 != -1 )
      {
        **(_DWORD **)(v4 + 808) = v15;
        *(_DWORD *)(v4 + 796) = 1;
      }
      v27 = *(_BYTE *)(248LL * (unsigned int)result + v4 + 1058) == 0;
      v6 = v33;
      v35 = 0LL;
      goto LABEL_27;
    }
    return HalProcessorIdle();
  }
  if ( PpmIdleVetoBias && (unsigned int)(*(_DWORD *)(v4 + 32) - 3) <= 1 )
    return HalProcessorIdle();
  PpmIdleSelectStates(
    a1,
    (unsigned int)&v32,
    (unsigned int)&v34,
    (unsigned int)v28,
    (__int64)&v29,
    (__int64)&v30,
    (__int64)&v35,
    (__int64)&v27);
  v14 = v29;
LABEL_27:
  v16 = *(_DWORD *)(v4 + 12);
  if ( v14 != v16 )
  {
    *(_DWORD *)(v4 + 20) = v16;
    *(_DWORD *)(v4 + 12) = v14;
    PpmEventIdleStateChange(v14, v16);
  }
  if ( v5[1]++ == -1 )
    PpmResetProcessorIdleAccounting(v5);
  v18 = *(_QWORD *)(a1 + 23936);
  v19 = 0;
  v20 = *(_BYTE *)(248LL * v14 + v4 + 1057);
  v21 = v36[0];
  if ( LOWORD(v36[0]) )
  {
    while ( !*(_QWORD *)&v36[2 * v19 + 2] )
    {
      if ( ++v19 >= LOWORD(v36[0]) )
        goto LABEL_34;
    }
    *(_WORD *)(v18 + 48) |= 0x400u;
    if ( KiSerializeTimerExpiration && v6 )
      PpmSetPlatformIdleDurationHint(v6);
    v21 = v36[0];
  }
LABEL_34:
  if ( !(_BYTE)KiDynamicTickDisableReason
    && !PpmIpiLastClockOwnerDisable
    && !*(_BYTE *)(a1 + 33)
    && *(_BYTE *)(KiProcessorBlock[KiClockTimerOwner] + 33)
    && !v20 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v31 = 0;
    ParentNode = CurrentPrcb->ParentNode;
    v24 = ParentNode->Affinity.Reserved[0];
    if ( (ParentNode->DeepIdleSet & ~(1LL << CurrentPrcb->GroupIndex)) == (ParentNode->Affinity.Mask & ~(1LL << (KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F))) )
    {
      while ( 1 )
      {
        NextNode = MmGetNextNode(v24, &v31);
        if ( NextNode == -1 )
          break;
        if ( *(_QWORD *)(KeNodeBlock[NextNode] + 64) != *(_QWORD *)(KeNodeBlock[NextNode] + 136) )
          goto LABEL_40;
      }
      if ( ((*(_QWORD *)&v36[2 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v26] >> 6) + 2] >> (KiProcessorIndexToNumberMappingTable[v26] & 0x3F)) & 1) == 0 )
      {
        KeAddProcessorAffinityEx(v36, v26);
        *(_WORD *)(v18 + 48) |= 0x800u;
      }
    }
LABEL_40:
    v21 = v36[0];
    v14 = v29;
  }
  if ( v21 )
  {
    while ( !*(_QWORD *)&v36[2 * v3 + 2] )
    {
      if ( ++v3 >= v21 )
        return PpmIdleExecuteTransition(a1, v14, v30, v35, v28[0], v32, v34, v27);
    }
    HalRequestIpi(0LL, v36);
  }
  return PpmIdleExecuteTransition(a1, v14, v30, v35, v28[0], v32, v34, v27);
}
