/*
 * XREFs of KiRemoveBoostThread @ 0x14008B160
 * Callers:
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140083270 (ExpReleaseResourceSharedForThreadLite.c)
 *     KeGenericProcessorCallback @ 0x1400A8F40 (KeGenericProcessorCallback.c)
 *     KeSetEventBoostPriorityEx @ 0x140100F90 (KeSetEventBoostPriorityEx.c)
 *     KeWakeWaitChain @ 0x140115E38 (KeWakeWaitChain.c)
 *     KiCompleteDirectSwitchThread @ 0x14011B418 (KiCompleteDirectSwitchThread.c)
 *     KeRemovePriorityBoost @ 0x140202884 (KeRemovePriorityBoost.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiSelectReadyThreadEx @ 0x14008B420 (KiSelectReadyThreadEx.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010F97C (KiAbQueueAutoBoostDpc.c)
 */

char __fastcall KiRemoveBoostThread(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al
  char v5; // r8
  char v6; // r14
  char v7; // cl
  char v8; // al
  char v9; // si
  unsigned int v10; // eax
  char v11; // bp
  char v12; // r12
  __int64 ready; // rax
  __int64 v14; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v16; // rcx
  char result; // al
  char v18; // cl
  _DWORD *v19; // rdx
  __int64 v20; // rcx
  int v21; // edx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  struct _SINGLE_LIST_ENTRY *v23; // r8
  int v24; // [rsp+68h] [rbp+10h] BYREF
  int v25; // [rsp+70h] [rbp+18h] BYREF
  int v26; // [rsp+78h] [rbp+20h]

  if ( !*(_BYTE *)(a2 + 564) )
    return *(_BYTE *)(a2 + 195) + 1;
  v24 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v24);
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
      _BitScanReverse((unsigned int *)&v21, v10);
      if ( v9 < v21 )
        v9 = v21;
      v26 = v21;
    }
    if ( v9 != v5 )
    {
      v11 = 0;
      v25 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v25);
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
              v18 = 1;
            else
              v18 = *(_BYTE *)(v14 + 195);
          }
          else
          {
            v18 = *(_BYTE *)(ready + 195);
          }
          **(_BYTE **)(a1 + 56) = v18;
          v19 = *(_DWORD **)(a1 + 25016);
          if ( v19 )
            *v19 = v18;
          *(_QWORD *)(a1 + 16) = v14;
          v20 = *(_QWORD *)(a1 + 25016);
          if ( v20 )
            *(_BYTE *)(v20 + 8) = v14 == *(_QWORD *)(a1 + 24);
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
          v23 = (struct _SINGLE_LIST_ENTRY *)(a2 + 1376);
          if ( *(_QWORD *)(a2 + 1376) == 1LL )
          {
            p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
            if ( CurrentPrcb != (struct _KPRCB *)-25720LL )
            {
              v23->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = v23;
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
        v16 = *(_DWORD **)(a1 + 25016);
        if ( v16 )
          *v16 = v9;
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
