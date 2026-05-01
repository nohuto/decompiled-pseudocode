/*
 * XREFs of HamIpcChannelObjectMakeZombie @ 0x180004AA0
 * Callers:
 *     HamCompleteExtendedExecution @ 0x180004500 (HamCompleteExtendedExecution.c)
 *     RmpClientReleaseResourceSet @ 0x1800047C8 (RmpClientReleaseResourceSet.c)
 *     RmpClientUnregisterActivityHostCallbacks @ 0x180004868 (RmpClientUnregisterActivityHostCallbacks.c)
 * Callees:
 *     HampIpcChannelObjectComparePayloadForTree @ 0x180005570 (HampIpcChannelObjectComparePayloadForTree.c)
 */

__int64 __fastcall HamIpcChannelObjectMakeZombie(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  int v7; // edi
  int v8; // eax
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 **v12; // rcx
  __int64 *v13; // rbx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rcx

  RtlAcquireSRWLockExclusive(a1 + 1, a2, a3);
  *((_DWORD *)a1 + 4) = GetCurrentThreadId();
  v5 = a1[4];
  v6 = a1[3];
  if ( (v5 & 1) != 0 && v6 )
    v6 ^= (unsigned __int64)(a1 + 3);
  v7 = v5 & 1;
  if ( v6 )
  {
    do
    {
      v8 = HampIpcChannelObjectComparePayloadForTree(a2, v6);
      if ( v8 >= 0 )
      {
        if ( v8 <= 0 )
          break;
        v9 = *(_QWORD *)(v6 + 8);
      }
      else
      {
        v9 = *(_QWORD *)v6;
      }
      if ( v7 && v9 )
        v6 ^= v9;
      else
        v6 = v9;
    }
    while ( v6 );
    if ( v6 )
    {
      RtlRbRemoveNode(a1 + 3, v6);
      v12 = (__int64 **)a1[6];
      v13 = (__int64 *)(v6 + 24);
      if ( *v12 != a1 + 5 )
        __fastfail(3u);
      v13[1] = (__int64)v12;
      *v13 = (__int64)(a1 + 5);
      *v12 = v13;
      a1[6] = (__int64)v13;
      v14 = *a1;
      RtlAcquireSRWLockExclusive(*a1 + 32, v10, v11);
      *(_DWORD *)(v14 + 64) |= 2u;
      v15 = *(_DWORD *)(v14 + 64);
      if ( (v15 & 1) == 0 )
      {
        v16 = *(_QWORD *)(v14 + 56);
        *(_DWORD *)(v14 + 64) = v15 | 1;
        TpPostWork(v16);
      }
      RtlReleaseSRWLockExclusive(v14 + 32);
    }
  }
  *((_DWORD *)a1 + 4) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 1);
}
