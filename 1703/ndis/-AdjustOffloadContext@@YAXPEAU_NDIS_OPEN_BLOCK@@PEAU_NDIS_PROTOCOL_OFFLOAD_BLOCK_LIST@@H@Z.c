/*
 * XREFs of ?AdjustOffloadContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST@@H@Z @ 0x1C00666C4
 * Callers:
 *     NdisInitiateOffload @ 0x1C00669F0 (NdisInitiateOffload.c)
 *     NdisInvalidateOffload @ 0x1C0066A60 (NdisInvalidateOffload.c)
 *     NdisQueryOffloadState @ 0x1C0066DE0 (NdisQueryOffloadState.c)
 *     NdisTerminateOffload @ 0x1C0066E20 (NdisTerminateOffload.c)
 *     NdisUpdateOffload @ 0x1C0066E60 (NdisUpdateOffload.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

void __fastcall AdjustOffloadContext(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *a2, int a3)
{
  __int64 v4; // r9
  _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *NextBlock; // rcx
  _NDIS_OFFLOAD_HANDLE *OffloadHandle; // rax
  _NET_BUFFER_LIST *i; // rax
  _QWORD v8[8]; // [rsp+0h] [rbp-58h]

  if ( a2 )
  {
    a2->SourceHandle = a1;
    v4 = 0LL;
    while ( 1 )
    {
      if ( !a2 )
      {
        if ( (_DWORD)v4 )
        {
          v4 = (unsigned int)(v4 - 1);
          a2 = (struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *)v8[(unsigned int)v4];
        }
        if ( !a2 )
          break;
      }
      NextBlock = a2->NextBlock;
      if ( NextBlock )
      {
        v8[v4] = NextBlock;
        v4 = (unsigned int)(v4 + 1);
      }
      if ( a3 )
      {
        a2->Status = a3;
      }
      else
      {
        OffloadHandle = a2->OffloadHandle;
        if ( OffloadHandle )
        {
          if ( !OffloadHandle->NdisReserved[0] )
            OffloadHandle->NdisReserved[0] = a1;
          a2->NdisReserved[2] = &a2->OffloadHandle->MiniportOffloadContext;
        }
        else
        {
          a2->NdisReserved[2] = 0LL;
        }
        for ( i = a2->NetBufferListChain; i; i = (_NET_BUFFER_LIST *)i->Link.Alignment )
          i->SourceHandle = a1;
      }
      a2 = a2->DependentBlockList;
    }
  }
}
