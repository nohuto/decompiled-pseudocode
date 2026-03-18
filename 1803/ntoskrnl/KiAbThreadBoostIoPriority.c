/*
 * XREFs of KiAbThreadBoostIoPriority @ 0x1400CE508
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x140064924 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140039664 (KiAbQueueAutoBoostDpc.c)
 *     PsBoostThreadIoQoS @ 0x1400AAAB0 (PsBoostThreadIoQoS.c)
 *     KiAbThreadInsertList @ 0x1400C38F0 (KiAbThreadInsertList.c)
 *     PsBoostThreadIoEx @ 0x1400FE2D0 (PsBoostThreadIoEx.c)
 */

__int64 __fastcall KiAbThreadBoostIoPriority(__int64 a1, _QWORD *a2, __int64 a3, _DWORD *a4)
{
  int v6; // edi
  __int64 v8; // rdx
  unsigned int v9; // ecx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v6 = a3;
  if ( (_DWORD)a3 )
  {
    PsBoostThreadIoQoS(a1, 0);
    v8 = 1416LL;
  }
  else
  {
    PsBoostThreadIoEx(a1, 0LL, a3, 0LL);
    v8 = 1412LL;
  }
  _InterlockedOr(v11, 0);
  if ( *(_DWORD *)(a1 + v8) )
  {
    v9 = 1;
    goto LABEL_12;
  }
  if ( !a2 )
  {
    v9 = 1;
    *a4 |= (v6 != 0) + 1;
LABEL_12:
    _InterlockedAdd((volatile signed __int32 *)(a1 + v8), 1u);
    return v9;
  }
  if ( v6 )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1804));
  else
    PsBoostThreadIoEx(a1, 1LL, 0LL, 0LL);
  if ( (unsigned int)KiAbThreadInsertList(a1, a2, (_QWORD *)(a1 + 1384)) )
    KiAbQueueAutoBoostDpc((struct _KDPC *)(a2 - 3214));
  return 0;
}
