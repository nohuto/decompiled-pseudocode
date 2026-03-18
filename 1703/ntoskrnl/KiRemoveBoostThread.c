/*
 * XREFs of KiRemoveBoostThread @ 0x1400414C0
 * Callers:
 *     KeWakeWaitChain @ 0x14002CAF8 (KeWakeWaitChain.c)
 *     KiCompleteDirectSwitchThread @ 0x140041A60 (KiCompleteDirectSwitchThread.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1400EECB0 (ExpReleaseResourceSharedForThreadLite.c)
 *     KeGenericProcessorCallback @ 0x1401117A4 (KeGenericProcessorCallback.c)
 *     KeSetEventBoostPriorityEx @ 0x140111AC4 (KeSetEventBoostPriorityEx.c)
 *     KeRemovePriorityBoost @ 0x140153BF0 (KeRemovePriorityBoost.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiSelectReadyThreadEx @ 0x1400ECE00 (KiSelectReadyThreadEx.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiAbQueueAutoBoostDpc @ 0x14011F45C (KiAbQueueAutoBoostDpc.c)
 */

char __fastcall KiRemoveBoostThread(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al
  char v5; // dl
  char v6; // bp
  char v7; // cl
  char v8; // al
  char v9; // si
  unsigned int v10; // eax
  char v11; // r14
  char v12; // r12
  __int64 ready; // rax
  __int64 v14; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  char result; // al
  struct _SINGLE_LIST_ENTRY *v17; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  char v19; // cl
  int v20; // ecx
  int v21; // [rsp+68h] [rbp+10h] BYREF
  int v22; // [rsp+70h] [rbp+18h] BYREF
  int v23; // [rsp+78h] [rbp+20h]

  if ( !*(_BYTE *)(a2 + 564) )
    return *(_BYTE *)(a2 + 195) + 1;
  v21 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v21);
    while ( *(_QWORD *)(a2 + 64) );
  }
  v4 = *(_BYTE *)(a2 + 564);
  v5 = *(_BYTE *)(a2 + 195);
  v6 = v5;
  v7 = v4 & 0xF;
  if ( (v4 & 0xF) != 0 )
    v6 = v5 - v7;
  v8 = v4 >> 4;
  if ( v8 )
  {
    *(_BYTE *)(a2 + 564) = v7;
    v9 = v5 - v8;
    v10 = *(_DWORD *)(a2 + 1408);
    if ( v10 )
    {
      _BitScanReverse((unsigned int *)&v20, v10);
      v23 = v20;
      if ( v9 < v20 )
        v9 = v20;
    }
    if ( v9 != v5 )
    {
      v11 = 0;
      v22 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v22);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v12 = 1;
      if ( !*(_QWORD *)(a1 + 16) )
      {
        ready = KiSelectReadyThreadEx(a1, a2, 1LL);
        v14 = ready;
        if ( ready )
        {
          if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
          {
            if ( (unsigned __int8)KiIsThreadRankNonZero(ready, a1) )
              v19 = 1;
            else
              v19 = *(_BYTE *)(v14 + 195);
          }
          else
          {
            v19 = *(_BYTE *)(ready + 195);
          }
          **(_BYTE **)(a1 + 56) = v19;
          *(_QWORD *)(a1 + 16) = v14;
          if ( *(_BYTE *)(v14 + 388) == 1 )
            *(_DWORD *)(v14 + 132) = *(_DWORD *)(v14 + 132) - *(_DWORD *)(v14 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v14 + 388) = 3;
        }
        else
        {
          v11 = 1;
        }
      }
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v9 > *(char *)(a2 + 195) )
      {
        if ( *(_BYTE *)(a2 + 793) )
        {
          v17 = (struct _SINGLE_LIST_ENTRY *)(a2 + 1376);
          if ( *(_QWORD *)(a2 + 1376) == 1LL )
          {
            p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
            if ( CurrentPrcb != (struct _KPRCB *)-26040LL )
            {
              v17->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = v17;
              _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1420));
              KiAbQueueAutoBoostDpc(CurrentPrcb);
            }
          }
        }
      }
      *(_BYTE *)(a2 + 195) = v9;
      if ( v11 )
      {
        if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
        {
          if ( !(unsigned __int8)KiIsThreadRankNonZero(a2, a1) )
            v12 = *(_BYTE *)(a2 + 195);
          v9 = v12;
        }
        **(_BYTE **)(a1 + 56) = v9;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    }
  }
  else
  {
    ++v6;
  }
  result = v6;
  *(_QWORD *)(a2 + 64) = 0LL;
  return result;
}
