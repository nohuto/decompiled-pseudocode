/*
 * XREFs of ndisOidPostRcvFilterMoveFilter @ 0x1C003A560
 * Callers:
 *     <none>
 * Callees:
 *     ndisFindReceiveFilterByFilterId @ 0x1C003A14C (ndisFindReceiveFilterByFilterId.c)
 *     ndisIovFindVPortByVPortId @ 0x1C006C07C (ndisIovFindVPortByVPortId.c)
 */

__int64 __fastcall ndisOidPostRcvFilterMoveFilter(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rbp
  unsigned int v5; // r14d
  __int64 *ReceiveFilterByFilterId; // rax
  __int64 *v7; // r14
  KIRQL v8; // r10
  __int64 v9; // rbx
  __int64 VPortByVPortId; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // r8

  result = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(result + 40);
  v5 = *(_DWORD *)(v4 + 4);
  if ( *(_QWORD *)a1 )
  {
    result = *(unsigned int *)(a1 + 40);
    if ( !(_DWORD)result || (_DWORD)result == 65539 && (result = *(unsigned int *)(v3 + 120), (result & 4) != 0) )
    {
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v3 + 1856) = 2691372;
      ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(v3, v5);
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
      v7 = ReceiveFilterByFilterId;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v8);
      v9 = v7[22];
      VPortByVPortId = ndisIovFindVPortByVPortId(v3, *(unsigned int *)(v4 + 20));
      v11 = v7 + 4;
      v12 = VPortByVPortId;
      v13 = v7[4];
      if ( *(__int64 **)(v13 + 8) != v7 + 4 || (v14 = (__int64 *)v7[5], (_QWORD *)*v14 != v11) )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      --*(_DWORD *)(v9 + 864);
      v15 = *(_QWORD *)(v9 + 88);
      if ( *(_DWORD *)(v9 + 124) )
        --*(_DWORD *)(v15 + 656);
      else
        --*(_DWORD *)(v15 + 652);
      v16 = (_QWORD *)(v12 + 872);
      v17 = *(_QWORD *)(v12 + 872);
      if ( *(_QWORD *)(v17 + 8) != v12 + 872 )
        __fastfail(3u);
      *v11 = v17;
      v7[5] = (__int64)v16;
      *(_QWORD *)(v17 + 8) = v11;
      *v16 = v11;
      ++*(_DWORD *)(v12 + 864);
      result = *(_QWORD *)(v12 + 88);
      if ( *(_DWORD *)(v12 + 124) )
        ++*(_DWORD *)(result + 656);
      else
        ++*(_DWORD *)(result + 652);
      v7[22] = v12;
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
  return result;
}
