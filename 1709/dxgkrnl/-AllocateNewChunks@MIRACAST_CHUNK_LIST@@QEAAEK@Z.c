/*
 * XREFs of ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C002E948
 * Callers:
 *     DxgNotifyDpcCB @ 0x1C000DAE0 (DxgNotifyDpcCB.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0030D64 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MIRACAST_CHUNK_LIST::AllocateNewChunks(MIRACAST_CHUNK_LIST *this, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v6; // edi
  SIZE_T v7; // rbp
  MIRACAST_CHUNK_LIST *PoolWithTag; // rax
  MIRACAST_CHUNK_LIST **v9; // rcx

  v2 = *((_DWORD *)this + 5);
  if ( v2 + 44 < v2 )
    return 0;
  v6 = 0;
  if ( a2 )
  {
    v7 = v2 + 44;
    while ( 1 )
    {
      PoolWithTag = (MIRACAST_CHUNK_LIST *)ExAllocatePoolWithTag((POOL_TYPE)512, v7, 0x4B677844u);
      if ( !PoolWithTag )
        break;
      v9 = (MIRACAST_CHUNK_LIST **)*((_QWORD *)this + 1);
      if ( *v9 != this )
        __fastfail(3u);
      *(_QWORD *)PoolWithTag = this;
      ++v6;
      *((_QWORD *)PoolWithTag + 1) = v9;
      *v9 = PoolWithTag;
      *((_QWORD *)this + 1) = PoolWithTag;
      ++*((_DWORD *)this + 4);
      if ( v6 >= a2 )
        return 1;
    }
    return 0;
  }
  return 1;
}
