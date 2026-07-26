/*
 * XREFs of NdisFreeNetBuffer @ 0x1C00105E0
 * Callers:
 *     NdisFreeCloneNetBufferList @ 0x1C0006260 (NdisFreeCloneNetBufferList.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C0024530 (NdisFreeFragmentNetBufferList.c)
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000E638 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisFreeNetBuffer(PNET_BUFFER NetBuffer)
{
  char *NdisPoolHandle; // rbp
  _MDL *MdlChain; // rcx
  unsigned __int64 v4; // rax
  char *v5; // rbx
  _SLIST_HEADER *v6; // rsi
  _SLIST_HEADER *v7; // rcx

  NdisPoolHandle = (char *)NetBuffer->NdisPoolHandle;
  if ( (*((_DWORD *)NdisPoolHandle + 22) & 1) != 0 )
  {
    MdlChain = NetBuffer->MdlChain;
    if ( (MdlChain->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(MdlChain->MappedSystemVa, MdlChain);
  }
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v4 = (unsigned __int64)LODWORD(NetBuffer[-1].SharedMemoryInfo) << 8;
    v5 = &NdisPoolHandle[v4 + 384];
    if ( !v5[216] )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&NdisPoolHandle[v4 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(NdisPoolHandle + 128));
    if ( LODWORD(NetBuffer[-1].SharedMemoryInfo) == KeGetPcr()->Prcb.Number )
      v6 = (_SLIST_HEADER *)*((_QWORD *)v5 + 24);
    else
      v6 = (_SLIST_HEADER *)*((_QWORD *)v5 + 25);
    ++*((_DWORD *)v5 + 7);
    if ( ExQueryDepthSList(v6) < *((_WORD *)v5 + 8) )
    {
      v7 = v6;
LABEL_11:
      ExpInterlockedPushEntrySList(v7, (PSLIST_ENTRY)NetBuffer);
      return;
    }
    ++*((_DWORD *)v5 + 8);
  }
  ++*((_DWORD *)NdisPoolHandle + 39);
  if ( ExQueryDepthSList((PSLIST_HEADER)NdisPoolHandle + 8) < *((_WORD *)NdisPoolHandle + 72) )
  {
    v7 = (_SLIST_HEADER *)(NdisPoolHandle + 128);
    goto LABEL_11;
  }
  ++*((_DWORD *)NdisPoolHandle + 40);
  (*((void (__fastcall **)(PNET_BUFFER, char *))NdisPoolHandle + 23))(NetBuffer, NdisPoolHandle + 128);
}
