/*
 * XREFs of ?MiracastProcessPendingDPCChunks@@YAEPEAX@Z @ 0x1C002EAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddChunkListToTail@MIRACAST_CHUNK_LIST@@QEAAXPEAV1@@Z @ 0x1C002E8C0 (-AddChunkListToTail@MIRACAST_CHUNK_LIST@@QEAAXPEAV1@@Z.c)
 */

unsigned __int8 __fastcall MiracastProcessPendingDPCChunks(_WORD *a1)
{
  int v1; // r11d
  _WORD *v2; // r10
  __int64 v3; // rcx
  unsigned __int8 result; // al
  __int64 v5; // r10
  struct MIRACAST_CHUNK_LIST **v6; // r10
  struct MIRACAST_CHUNK_LIST *v7; // rdx
  struct MIRACAST_CHUNK_LIST *v8; // rdx

  v1 = 0;
  v2 = a1;
  a1[8] = 0;
  *((_BYTE *)a1 + 18) = 0;
  *((_DWORD *)a1 + 5) = 0;
  v3 = *(_QWORD *)a1;
  if ( *(_BYTE *)(v3 + 3113) )
  {
    *((_BYTE *)v2 + 17) = 1;
    return 0;
  }
  else
  {
    if ( *(_BYTE *)(v3 + 3112) )
    {
      MIRACAST_CHUNK_LIST::AddChunkListToTail(
        *(MIRACAST_CHUNK_LIST **)(v3 + 3120),
        *(struct MIRACAST_CHUNK_LIST **)(v3 + 3136));
      MIRACAST_CHUNK_LIST::AddChunkListToTail(
        *(MIRACAST_CHUNK_LIST **)(*(_QWORD *)v5 + 3120LL),
        *(struct MIRACAST_CHUNK_LIST **)(*(_QWORD *)v5 + 3128LL));
      MIRACAST_CHUNK_LIST::AddChunkListToTail(*((MIRACAST_CHUNK_LIST **)*v6 + 390), v6[1]);
      *(_BYTE *)(*(_QWORD *)v2 + 3112LL) = v1;
      *((_BYTE *)v2 + 16) = 1;
    }
    v7 = *(struct MIRACAST_CHUNK_LIST **)(*(_QWORD *)v2 + 3128LL);
    if ( *((_DWORD *)v7 + 4) != v1 )
    {
      MIRACAST_CHUNK_LIST::AddChunkListToTail(*((MIRACAST_CHUNK_LIST **)v2 + 1), v7);
      *((_BYTE *)v2 + 18) = 1;
    }
    v8 = *(struct MIRACAST_CHUNK_LIST **)(*(_QWORD *)v2 + 3136LL);
    if ( *((_DWORD *)v8 + 4) != v1 )
      MIRACAST_CHUNK_LIST::AddChunkListToTail(*(MIRACAST_CHUNK_LIST **)(*(_QWORD *)v2 + 3120LL), v8);
    result = 1;
    *((_DWORD *)v2 + 5) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 3120LL) + 16LL);
  }
  return result;
}
