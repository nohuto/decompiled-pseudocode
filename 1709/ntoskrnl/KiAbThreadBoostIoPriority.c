/*
 * XREFs of KiAbThreadBoostIoPriority @ 0x14010F8BC
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x1400A6E08 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400813D0 (PsBoostThreadIoEx.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010F97C (KiAbQueueAutoBoostDpc.c)
 *     PsBoostThreadIoQoS @ 0x140113034 (PsBoostThreadIoQoS.c)
 *     KiAbThreadInsertList @ 0x140124280 (KiAbThreadInsertList.c)
 */

__int64 __fastcall KiAbThreadBoostIoPriority(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebp
  __int64 v8; // rcx
  __int64 result; // rax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v6 = a3;
  if ( (_DWORD)a3 )
  {
    PsBoostThreadIoQoS(a1, 0LL, a3);
    v8 = 1416LL;
  }
  else
  {
    PsBoostThreadIoEx(a1, 0, 0, 0LL);
    v8 = 1412LL;
  }
  _InterlockedOr(v10, 0);
  if ( *(_DWORD *)(v8 + a1) )
  {
    result = 1LL;
LABEL_12:
    _InterlockedAdd((volatile signed __int32 *)(v8 + a1), 1u);
    return result;
  }
  if ( !a2 )
  {
    result = 1LL;
    if ( v6 )
      *a4 |= 2u;
    else
      *a4 |= 1u;
    goto LABEL_12;
  }
  if ( v6 )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1804));
  else
    PsBoostThreadIoEx(a1, 1, 0, 0LL);
  if ( (unsigned int)KiAbThreadInsertList(a1, a2, a1 + 1384) )
    KiAbQueueAutoBoostDpc((PVOID)(a2 - 25712));
  return 0LL;
}
