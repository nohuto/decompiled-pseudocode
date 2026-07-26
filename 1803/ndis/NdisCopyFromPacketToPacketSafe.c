/*
 * XREFs of NdisCopyFromPacketToPacketSafe @ 0x1C0051400
 * Callers:
 *     ndisMTransferData @ 0x1C0057CA0 (ndisMTransferData.c)
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 */

void __stdcall NdisCopyFromPacketToPacketSafe(
        PNDIS_PACKET Destination,
        UINT DestinationOffset,
        UINT BytesToCopy,
        PNDIS_PACKET Source,
        UINT SourceOffset,
        PUINT BytesCopied,
        MM_PAGE_PRIORITY Priority)
{
  UINT v9; // ebx
  _MDL *Head; // rdi
  char *v11; // r12
  _MDL *v12; // rsi
  UINT ByteCount; // r14d
  char *v14; // r15
  UINT v15; // ebp
  UINT v17; // eax
  UINT v18; // ecx
  UINT v19; // eax
  UINT v20; // ecx
  __int64 v21; // rbx
  unsigned int v22; // [rsp+30h] [rbp-48h]
  UINT v23; // [rsp+88h] [rbp+10h]

  v23 = DestinationOffset;
  v22 = 0;
  v9 = DestinationOffset;
  *BytesCopied = 0;
  if ( BytesToCopy )
  {
    Head = Destination->Private.Head;
    if ( Head )
    {
      v11 = (char *)((Head->MdlFlags & 5) != 0
                   ? Head->MappedSystemVa
                   : MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, Priority | ndisMdlMappingNxFlag));
      if ( v11 )
      {
        v12 = Source->Private.Head;
        ByteCount = Head->ByteCount;
        if ( v12 )
        {
          v14 = (char *)((v12->MdlFlags & 5) != 0
                       ? v12->MappedSystemVa
                       : MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, Priority | ndisMdlMappingNxFlag));
          if ( v14 )
          {
            v15 = v12->ByteCount;
            if ( BytesToCopy )
            {
              v17 = BytesToCopy;
              v18 = 0;
              while ( ByteCount )
              {
                if ( !v15 )
                {
                  v12 = v12->Next;
                  if ( !v12 )
                    goto LABEL_44;
                  v14 = (char *)((v12->MdlFlags & 5) != 0
                               ? v12->MappedSystemVa
                               : MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, Priority | ndisMdlMappingNxFlag));
                  if ( !v14 )
                    goto LABEL_44;
                  v15 = v12->ByteCount;
                  goto LABEL_41;
                }
                if ( !v9 )
                  goto LABEL_32;
                if ( v9 <= ByteCount )
                {
                  ByteCount -= v9;
                  v11 += v9;
                  v23 = 0;
LABEL_32:
                  if ( SourceOffset )
                  {
                    if ( SourceOffset > v15 )
                    {
                      SourceOffset -= v15;
                      v15 = 0;
LABEL_42:
                      v17 = BytesToCopy;
                      goto LABEL_43;
                    }
                    v15 -= SourceOffset;
                    v14 += SourceOffset;
                    SourceOffset = 0;
                  }
                  v19 = v15;
                  v20 = BytesToCopy - v22;
                  if ( v15 > ByteCount )
                    v19 = ByteCount;
                  if ( v20 >= v19 )
                    v20 = v19;
                  v21 = v20;
                  memmove(v11, v14, v20);
                  v22 += v21;
                  v11 += v21;
                  v14 += v21;
                  v15 -= v21;
                  ByteCount -= v21;
LABEL_41:
                  v18 = v22;
                  goto LABEL_42;
                }
                v23 = v9 - ByteCount;
                ByteCount = 0;
LABEL_43:
                v9 = v23;
                if ( v18 >= v17 )
                  goto LABEL_44;
              }
              Head = Head->Next;
              if ( !Head )
                goto LABEL_44;
              v11 = (char *)((Head->MdlFlags & 5) != 0
                           ? Head->MappedSystemVa
                           : MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, Priority | ndisMdlMappingNxFlag));
              if ( !v11 )
                goto LABEL_44;
              ByteCount = Head->ByteCount;
              goto LABEL_41;
            }
LABEL_44:
            *BytesCopied = v22;
          }
        }
      }
    }
  }
}
