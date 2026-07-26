/*
 * XREFs of XRemoveBindingFromLists @ 0x1C0013930
 * Callers:
 *     EthDeleteFilterOpenAdapter @ 0x1C0013278 (EthDeleteFilterOpenAdapter.c)
 *     nullDeleteFilterOpenAdapter @ 0x1C0065320 (nullDeleteFilterOpenAdapter.c)
 *     ndisMOpenAdapter @ 0x1C01048C0 (ndisMOpenAdapter.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0005220 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C00052A0 (NdisAcquireRWLockWrite.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C001AFA4 (ndisUpdateCheckForLoopbackFlag.c)
 */

void __fastcall XRemoveBindingFromLists(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 *i; // rcx
  __int64 v7; // rax
  __int64 *j; // rcx
  __int64 v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // r11d
  unsigned int v13; // r9d
  __int128 *v14; // r10
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  NdisAcquireRWLockWrite((PNDIS_RW_LOCK_EX)a1[36], &LockState, 0);
  if ( a1[41] == a2 )
  {
    v18 = a1[37];
    a1[41] = 0LL;
    ndisUpdateCheckForLoopbackFlag(v18);
  }
  v4 = *a1;
  v5 = a1;
  while ( v4 )
  {
    if ( v4 == a2 )
    {
      *v5 = *(_QWORD *)(a2 + 424);
      break;
    }
    v5 = (_QWORD *)(v4 + 424);
    v4 = *(_QWORD *)(v4 + 424);
  }
  for ( i = a1 + 1; ; i = (__int64 *)(v7 + 424) )
  {
    v7 = *i;
    if ( !*i )
      break;
    if ( v7 == a2 )
    {
      *i = *(_QWORD *)(a2 + 424);
      --*((_DWORD *)a1 + 80);
      break;
    }
  }
  for ( j = a1 + 2; ; j = (__int64 *)(v9 + 424) )
  {
    v9 = *j;
    if ( !*j )
      break;
    if ( v9 == a2 )
    {
      *j = *(_QWORD *)(a2 + 424);
      break;
    }
  }
  *(_QWORD *)(a2 + 424) = 0LL;
  --*((_DWORD *)a1 + 79);
  v10 = 0;
  v11 = *((_DWORD *)a1 + 6);
  if ( v11 )
  {
    do
    {
      if ( a1[2 * v10 + 5] == a2 )
      {
        v12 = v10 + 1;
        do
        {
          v13 = v10;
          if ( v12 < v11 )
          {
            v14 = (__int128 *)&a1[2 * v12 + 4];
            do
            {
              v15 = *v14++;
              v16 = 2LL * v13++;
              *(_OWORD *)&a1[v16 + 4] = v15;
            }
            while ( v13 + 1 < v11 );
          }
          v17 = 2LL * v13;
          LOWORD(a1[v17 + 4]) = 0;
          a1[v17 + 5] = 0LL;
          v11 = *((_DWORD *)a1 + 6) - 1;
          *((_DWORD *)a1 + 6) = v11;
        }
        while ( a1[2 * v10 + 5] == a2 );
      }
      ++v10;
    }
    while ( v10 < v11 );
  }
  NdisReleaseRWLock((PNDIS_RW_LOCK_EX)a1[36], &LockState);
}
