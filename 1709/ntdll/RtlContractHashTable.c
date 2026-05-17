/*
 * XREFs of RtlContractHashTable @ 0x1800853F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlpGetChainHead @ 0x180072B84 (RtlpGetChainHead.c)
 */

char __fastcall RtlContractHashTable(__int64 a1)
{
  int v1; // edx
  int v4; // eax
  int v5; // eax
  _QWORD *v6; // r9
  _QWORD *ChainHead; // r10
  _QWORD *i; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  __int64 v12; // rdx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  _QWORD *v17; // rsi
  __int64 v18; // rbx

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 128 || *(_DWORD *)(a1 + 28) )
    return 0;
  v4 = *(_DWORD *)(a1 + 12);
  if ( v4 )
  {
    v5 = v4 - 1;
  }
  else
  {
    *(_DWORD *)(a1 + 16) >>= 1;
    v5 = *(_DWORD *)(a1 + 16);
  }
  *(_DWORD *)(a1 + 12) = v5;
  RtlpGetChainHead(a1, v1 - 1);
  ChainHead = (_QWORD *)RtlpGetChainHead(a1, *(_DWORD *)(a1 + 12));
  --*(_DWORD *)(a1 + 8);
  if ( (_QWORD *)*v6 != v6 && (_QWORD *)*ChainHead != ChainHead )
    --*(_DWORD *)(a1 + 24);
  for ( i = ChainHead; ; *i = v9 )
  {
    v9 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
      break;
    if ( (_QWORD *)v9[1] != v6 || (v10 = *v9, *(_QWORD **)(*v9 + 8LL) != v9) )
      __fastfail(3u);
    *v6 = v10;
    *(_QWORD *)(v10 + 8) = v6;
    if ( (_QWORD *)*i != ChainHead )
    {
      do
      {
        v11 = (_QWORD *)*i;
        if ( *(_QWORD *)(*i + 16LL) >= v9[2] )
          break;
        i = (_QWORD *)*i;
      }
      while ( (_QWORD *)*v11 != ChainHead );
    }
    v12 = *i;
    if ( *(_QWORD **)(*i + 8LL) != i )
      __fastfail(3u);
    *v9 = v12;
    v9[1] = i;
    *(_QWORD *)(v12 + 8) = v9;
  }
  v13 = *(_DWORD *)(a1 + 8) + 128;
  _BitScanReverse(&v14, v13);
  v15 = 1 << v14;
  v16 = v14 - 7;
  if ( v15 == v13 )
  {
    v17 = *(_QWORD **)(a1 + 32);
    v18 = v16;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v17[v16]);
    v17[v18] = 0LL;
    if ( *(_DWORD *)(a1 + 8) == 128 )
    {
      *(_QWORD *)(a1 + 32) = *v17;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v17);
    }
  }
  return 1;
}
