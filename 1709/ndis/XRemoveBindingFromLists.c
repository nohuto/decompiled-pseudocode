/*
 * XREFs of XRemoveBindingFromLists @ 0x1C0002104
 * Callers:
 *     EthDeleteFilterOpenAdapter @ 0x1C0001BE0 (EthDeleteFilterOpenAdapter.c)
 *     nullDeleteFilterOpenAdapter @ 0x1C00647D8 (nullDeleteFilterOpenAdapter.c)
 *     ndisMOpenAdapter @ 0x1C01033B8 (ndisMOpenAdapter.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C000F620 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C000F6A0 (NdisAcquireRWLockWrite.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C000F750 (ndisUpdateCheckForLoopbackFlag.c)
 */

void __fastcall XRemoveBindingFromLists(__int64 a1, __int64 a2)
{
  __int64 *v4; // rcx
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  unsigned int v7; // ecx
  unsigned int v8; // r10d
  unsigned int v9; // r9d
  unsigned int v10; // r8d
  __int128 *v11; // r11
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  NdisAcquireRWLockWrite(*(PNDIS_RW_LOCK_EX *)(a1 + 288), &LockState, 0);
  if ( *(_QWORD *)(a1 + 328) == a2 )
  {
    v15 = *(_QWORD *)(a1 + 296);
    *(_QWORD *)(a1 + 328) = 0LL;
    ndisUpdateCheckForLoopbackFlag(v15);
  }
  v4 = (__int64 *)a1;
  if ( *(_QWORD *)a1 )
  {
    while ( 1 )
    {
      v16 = *v4;
      if ( *v4 == a2 )
        break;
      v4 = (__int64 *)(v16 + 424);
      if ( !*(_QWORD *)(v16 + 424) )
        goto LABEL_4;
    }
    *v4 = *(_QWORD *)(a2 + 424);
  }
LABEL_4:
  for ( i = (_QWORD *)(a1 + 8); *i; i = (_QWORD *)(*i + 424LL) )
  {
    if ( *i == a2 )
    {
      *i = *(_QWORD *)(a2 + 424);
      --*(_DWORD *)(a1 + 320);
      break;
    }
  }
  for ( j = (_QWORD *)(a1 + 16); *j; j = (_QWORD *)(*j + 424LL) )
  {
    if ( *j == a2 )
    {
      *j = *(_QWORD *)(a2 + 424);
      break;
    }
  }
  *(_QWORD *)(a2 + 424) = 0LL;
  v7 = 0;
  --*(_DWORD *)(a1 + 316);
  if ( *(_DWORD *)(a1 + 24) )
  {
    do
    {
      if ( *(_QWORD *)(a1 + 16 * (v7 + 1LL) + 24) == a2 )
      {
        v8 = v7 + 1;
        do
        {
          v9 = *(_DWORD *)(a1 + 24);
          v10 = v7;
          if ( v8 < v9 )
          {
            v11 = (__int128 *)(16LL * v8 + a1 + 32);
            do
            {
              v12 = *v11++;
              v13 = 2LL * v10++;
              *(_OWORD *)(a1 + 8 * v13 + 32) = v12;
            }
            while ( v10 + 1 < v9 );
          }
          v14 = 2LL * v10;
          *(_WORD *)(a1 + 8 * v14 + 32) = 0;
          *(_QWORD *)(a1 + 8 * v14 + 40) = 0LL;
          --*(_DWORD *)(a1 + 24);
        }
        while ( *(_QWORD *)(a1 + 16 * (v7 + 1LL) + 24) == a2 );
      }
      ++v7;
    }
    while ( v7 < *(_DWORD *)(a1 + 24) );
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(a1 + 288), &LockState);
}
