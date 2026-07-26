/*
 * XREFs of ndisOidPreRcvFilterParameters @ 0x1C003B1C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     ndisFindReceiveFilterByFilterId @ 0x1C003A14C (ndisFindReceiveFilterByFilterId.c)
 */

char __fastcall ndisOidPreRcvFilterParameters(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  char v4; // bl
  unsigned int v5; // ebp
  _DWORD *v6; // rax
  unsigned int v7; // r15d
  KIRQL v8; // r10
  unsigned int *ReceiveFilterByFilterId; // r13
  unsigned int v10; // r15d
  KIRQL NewIrql; // [rsp+60h] [rbp+8h]
  _DWORD *v13; // [rsp+68h] [rbp+10h]

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
  if ( *(_DWORD *)(v1 + 48) >= 0x24u )
  {
    if ( *(_DWORD *)(v1 + 52) < 0x24u )
    {
      *(_DWORD *)(v1 + 68) = 36;
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 68) = 36;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_7;
  if ( *(_BYTE *)(*(_QWORD *)(v1 + 40) + 1LL) != 2 )
    goto LABEL_14;
  v5 = 44;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x2Cu )
  {
    if ( *(_DWORD *)(v1 + 52) < 0x2Cu )
    {
      *(_DWORD *)(v1 + 68) = 44;
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 68) = 44;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
  {
LABEL_7:
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = 0;
  }
  else
  {
LABEL_14:
    if ( !v3 )
      return 0;
    *(_DWORD *)(a1 + 40) = -1073741637;
    v6 = *(_DWORD **)(v1 + 40);
    *(_DWORD *)(v1 + 60) = 0;
    *(_DWORD *)(v1 + 64) = v5;
    v13 = v6;
    v7 = v6[4];
    if ( !v7 )
    {
LABEL_17:
      *(_DWORD *)(a1 + 40) = -1073741811;
      return v4;
    }
    NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v3 + 1856) = 2690294;
    ReceiveFilterByFilterId = (unsigned int *)ndisFindReceiveFilterByFilterId(v3, v7);
    if ( !ReceiveFilterByFilterId )
    {
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v8);
      goto LABEL_17;
    }
    v10 = v5 + ReceiveFilterByFilterId[39] * ReceiveFilterByFilterId[40];
    *(_DWORD *)(v1 + 68) = v10;
    if ( v10 <= *(_DWORD *)(v1 + 52) )
    {
      memmove(v13, ReceiveFilterByFilterId + 33, v5);
      v13[5] = v5;
      memmove(
        &v13[v5 / 4],
        (char *)ReceiveFilterByFilterId + ReceiveFilterByFilterId[38],
        ReceiveFilterByFilterId[39] * ReceiveFilterByFilterId[40]);
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
      *(_DWORD *)(a1 + 40) = 0;
      v4 = 1;
      *(_DWORD *)(v1 + 60) = v10;
    }
    else
    {
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v8);
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  return v4;
}
