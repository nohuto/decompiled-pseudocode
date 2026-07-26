/*
 * XREFs of ndisOidPreRcvFilterParameters @ 0x1C003C530
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     ndisFindReceiveFilterByFilterId @ 0x1C003B4D8 (ndisFindReceiveFilterByFilterId.c)
 */

char __fastcall ndisOidPreRcvFilterParameters(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  char v4; // bl
  unsigned int v5; // ebp
  int v6; // eax
  _DWORD *v7; // rax
  unsigned int v8; // r15d
  KIRQL v9; // r10
  unsigned int *ReceiveFilterByFilterId; // r13
  unsigned int v11; // r15d
  KIRQL NewIrql; // [rsp+60h] [rbp+8h]
  _DWORD *v14; // [rsp+68h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = 1;
  v5 = 36;
  if ( *(_DWORD *)(v1 + 4) != 12 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    return v4;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x24u )
    goto LABEL_3;
  if ( *(_DWORD *)(v1 + 52) < 0x24u )
    goto LABEL_5;
  if ( *(_BYTE *)(*(_QWORD *)(v1 + 40) + 1LL) == 2 )
  {
    v5 = 44;
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v1 + 48) < 0x2Cu )
    {
LABEL_3:
      v6 = -1073676268;
LABEL_6:
      *(_DWORD *)(v1 + 68) = v5;
      *(_DWORD *)(a1 + 40) = v6;
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = 0;
      return v4;
    }
    if ( *(_DWORD *)(v1 + 52) < 0x2Cu )
    {
LABEL_5:
      v6 = -1073676266;
      goto LABEL_6;
    }
  }
  if ( !v3 )
    return 0;
  *(_DWORD *)(a1 + 40) = -1073741637;
  v7 = *(_DWORD **)(v1 + 40);
  *(_DWORD *)(v1 + 60) = 0;
  *(_DWORD *)(v1 + 64) = v5;
  v14 = v7;
  v8 = v7[4];
  if ( !v8 )
  {
LABEL_13:
    *(_DWORD *)(a1 + 40) = -1073741811;
    return v4;
  }
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1856) = 2689864;
  ReceiveFilterByFilterId = (unsigned int *)ndisFindReceiveFilterByFilterId(v3, v8);
  if ( !ReceiveFilterByFilterId )
  {
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v9);
    goto LABEL_13;
  }
  v11 = v5 + ReceiveFilterByFilterId[40] * ReceiveFilterByFilterId[39];
  *(_DWORD *)(v1 + 68) = v11;
  if ( v11 <= *(_DWORD *)(v1 + 52) )
  {
    memmove(v14, ReceiveFilterByFilterId + 33, v5);
    v14[5] = v5;
    memmove(
      &v14[v5 / 4],
      (char *)ReceiveFilterByFilterId + ReceiveFilterByFilterId[38],
      ReceiveFilterByFilterId[40] * ReceiveFilterByFilterId[39]);
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
    *(_DWORD *)(a1 + 40) = 0;
    v4 = 1;
    *(_DWORD *)(v1 + 60) = v11;
  }
  else
  {
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v9);
    *(_DWORD *)(a1 + 40) = -1073676266;
  }
  return v4;
}
