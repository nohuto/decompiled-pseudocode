/*
 * XREFs of KiAbThreadBoostIoPriority @ 0x14011F390
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x14011EE4C (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     KiAbThreadInsertList @ 0x1400309BC (KiAbThreadInsertList.c)
 *     PsBoostThreadIoEx @ 0x14008D210 (PsBoostThreadIoEx.c)
 *     KiAbQueueAutoBoostDpc @ 0x14011F45C (KiAbQueueAutoBoostDpc.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140205384 (KeAbProcessEffectiveIoPriorityChange.c)
 */

__int64 __fastcall KiAbThreadBoostIoPriority(__int64 a1, _QWORD *a2, int a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  volatile signed __int32 *v9; // rcx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v8 = 1;
  if ( a3 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 1796)) == 1 )
      KeAbProcessEffectiveIoPriorityChange(a1, 0LL);
    v9 = (volatile signed __int32 *)(a1 + 1416);
  }
  else
  {
    PsBoostThreadIoEx(a1, 0, 0, 0LL);
    v9 = (volatile signed __int32 *)(a1 + 1412);
  }
  _InterlockedOr(v11, 0);
  if ( *v9 )
    goto LABEL_13;
  if ( !a2 )
  {
    if ( a3 )
      *a4 |= 2u;
    else
      *a4 |= 1u;
LABEL_13:
    _InterlockedAdd(v9, 1u);
    return v8;
  }
  if ( a3 )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1796));
  else
    PsBoostThreadIoEx(a1, 1, 0, 0LL);
  if ( (unsigned int)KiAbThreadInsertList(a1, a2, (_QWORD *)(a1 + 1384)) )
    KiAbQueueAutoBoostDpc(a2 - 3254);
  return 0;
}
