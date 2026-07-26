/*
 * XREFs of ndisMCopyFromPacketToBuffer @ 0x1C00555DC
 * Callers:
 *     ndisMAllocSGList @ 0x1C004D698 (ndisMAllocSGList.c)
 *     ndisMAllocSGListS @ 0x1C004DA7C (ndisMAllocSGListS.c)
 *     ndisMIsLoopbackPacket @ 0x1C00567B0 (ndisMIsLoopbackPacket.c)
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 *     ?NdisQueryPacket@@YAXPEAU_NDIS_PACKET@@PEAI1PEAPEAU_MDL@@1@Z @ 0x1C004D224 (-NdisQueryPacket@@YAXPEAU_NDIS_PACKET@@PEAI1PEAPEAU_MDL@@1@Z.c)
 */

void __fastcall ndisMCopyFromPacketToBuffer(
        struct _NDIS_PACKET *a1,
        unsigned int *a2,
        unsigned int a3,
        void *a4,
        unsigned int *a5)
{
  unsigned int *v5; // rbx
  unsigned int v7; // r12d
  PMDL v8; // rsi
  char *v9; // r14
  unsigned int ByteCount; // ebp
  unsigned int v11; // edi
  PMDL MemoryDescriptorList; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+10h] BYREF
  void *v14; // [rsp+98h] [rbp+20h]

  v14 = a4;
  v13 = (unsigned int)a2;
  v5 = a5;
  v7 = 0;
  *a5 = 0;
  if ( !a3 )
    return;
  NdisQueryPacket(a1, a2, &v13, &MemoryDescriptorList, 0LL);
  if ( !v13 )
    return;
  v8 = MemoryDescriptorList;
  v9 = (char *)((MemoryDescriptorList->MdlFlags & 5) != 0
              ? MemoryDescriptorList->MappedSystemVa
              : MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag | 0x10));
  ByteCount = v8->ByteCount;
  if ( !v9 )
    return;
  if ( !a3 )
    goto LABEL_20;
  do
  {
    if ( ByteCount )
    {
      v11 = a3 - v7;
      if ( ByteCount <= a3 - v7 )
        v11 = ByteCount;
      memmove(v14, v9, v11);
      v14 = (char *)v14 + v11;
      v9 += v11;
      v7 += v11;
      ByteCount -= v11;
      continue;
    }
    v8 = v8->Next;
    if ( !v8 )
      break;
    v9 = (char *)((v8->MdlFlags & 5) != 0
                ? v8->MappedSystemVa
                : MmMapLockedPagesSpecifyCache(v8, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag | 0x10));
    if ( !v9 )
      break;
    ByteCount = v8->ByteCount;
  }
  while ( v7 < a3 );
  v5 = a5;
LABEL_20:
  *v5 = v7;
}
