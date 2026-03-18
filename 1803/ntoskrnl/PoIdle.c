/*
 * XREFs of PoIdle @ 0x14010B740
 * Callers:
 *     KiIdleLoop @ 0x1401AE5C0 (KiIdleLoop.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     MmGetNextNode @ 0x14003AFD8 (MmGetNextNode.c)
 *     PpmEventIdleStateChange @ 0x1400BA468 (PpmEventIdleStateChange.c)
 *     PpmIdleExecuteTransition @ 0x14010BC10 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x14010DF60 (PpmIdlePrepare.c)
 *     PpmIdleSelectStates @ 0x14015F520 (PpmIdleSelectStates.c)
 *     PpmResetProcessorIdleAccounting @ 0x140180B50 (PpmResetProcessorIdleAccounting.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140273820 (PpmSetPlatformIdleDurationHint.c)
 */

__int64 __fastcall PoIdle(ULONG_PTR BugCheckParameter4)
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
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int v15; // edi
  int v16; // ecx
  int v17; // edx
  __int64 v19; // r12
  unsigned __int16 v20; // dx
  char v21; // si
  unsigned __int16 v22; // cx
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

  result = dword_1403AAA2C;
  if ( BYTE5(PpmCurrentProfile[336 * dword_1403AAA2C + 17]) )
    return result;
  v3 = 0;
  v4 = *(_QWORD *)(BugCheckParameter4 + 23808);
  v5 = *(_DWORD **)(BugCheckParameter4 + 23816);
  v6 = 0LL;
  v33 = 0LL;
  if ( !v4 )
    return HalProcessorIdle();
  *(_DWORD *)(v4 + 796) = 0;
  v7 = *(_QWORD *)(BugCheckParameter4 + 23808);
  if ( *(_BYTE *)(v7 + 5) )
  {
    v8 = *(_QWORD *)(BugCheckParameter4 + 23824);
    *(_QWORD *)(BugCheckParameter4 + 23824) = 0LL;
    v9 = *(unsigned int *)(v7 + 20);
    *(_QWORD *)(BugCheckParameter4 + 23832) += v8;
    v10 = *(_QWORD *)(BugCheckParameter4 + 23816) + 1000 * v9;
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
    result = PpmIdlePrepare(
               BugCheckParameter4,
               (unsigned int)v28,
               (unsigned int)&v32,
               (unsigned int)&v34,
               (__int64)&v33,
               (__int64)v36);
    v15 = result;
    v29 = result;
    if ( (_DWORD)result != -2 )
    {
      if ( (_DWORD)result == -1 )
      {
        ++v5[3];
        return result;
      }
      v16 = *(_DWORD *)(v4 + 560);
      v30 = v16;
      if ( v16 != -1 )
      {
        **(_DWORD **)(v4 + 808) = v16;
        *(_DWORD *)(v4 + 796) = 1;
      }
      v6 = v33;
      v27 = *(_BYTE *)(248LL * (unsigned int)result + v4 + 1058) == 0;
      v35 = 0LL;
      goto LABEL_27;
    }
    return HalProcessorIdle();
  }
  if ( PpmIdleVetoBias && *(_BYTE *)(v4 + 8) )
    return HalProcessorIdle();
  PpmIdleSelectStates(
    BugCheckParameter4,
    (unsigned int)&v32,
    (unsigned int)&v34,
    (unsigned int)v28,
    (__int64)&v29,
    (__int64)&v30,
    (__int64)&v35,
    (__int64)&v27);
  v15 = v29;
LABEL_27:
  v17 = *(_DWORD *)(v4 + 16);
  if ( v15 != v17 )
  {
    *(_DWORD *)(v4 + 24) = v17;
    *(_DWORD *)(v4 + 16) = v15;
    PpmEventIdleStateChange(v15, v17);
  }
  if ( v5[1]++ == -1 )
    PpmResetProcessorIdleAccounting(v5);
  v19 = *(_QWORD *)(BugCheckParameter4 + 23808);
  v20 = 0;
  v21 = *(_BYTE *)(248LL * v15 + v4 + 1057);
  v22 = v36[0];
  if ( LOWORD(v36[0]) )
  {
    while ( !*(_QWORD *)&v36[2 * v20 + 2] )
    {
      if ( ++v20 >= LOWORD(v36[0]) )
        goto LABEL_34;
    }
    *(_WORD *)(v19 + 48) |= 0x400u;
    if ( KiSerializeTimerExpiration && v6 )
      PpmSetPlatformIdleDurationHint(v6);
    v22 = v36[0];
  }
LABEL_34:
  if ( !(_BYTE)KiDynamicTickDisableReason
    && !PpmIpiLastClockOwnerDisable
    && !*(_BYTE *)(BugCheckParameter4 + 33)
    && *(_BYTE *)(KiProcessorBlock[KiClockTimerOwner] + 33)
    && !v21 )
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
      CurrentPrcb = (struct _KPRCB *)(*(_QWORD *)&v36[2
                                                    * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v26] >> 6)
                                                    + 2] >> (KiProcessorIndexToNumberMappingTable[v26] & 0x3F));
      if ( ((unsigned __int8)CurrentPrcb & 1) == 0 )
      {
        KeAddProcessorAffinityEx(v36, v26);
        *(_WORD *)(v19 + 48) |= 0x800u;
      }
    }
LABEL_40:
    v22 = v36[0];
  }
  if ( v22 )
  {
    while ( !*(_QWORD *)&v36[2 * v3 + 2] )
    {
      if ( ++v3 >= v22 )
        return PpmIdleExecuteTransition(BugCheckParameter4, v28[0], v32, v34, v27);
    }
    HalRequestIpi(0LL, v36, CurrentPrcb);
  }
  return PpmIdleExecuteTransition(BugCheckParameter4, v28[0], v32, v34, v27);
}
