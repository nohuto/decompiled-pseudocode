/*
 * XREFs of NdisMFreeNetBufferSGList @ 0x1C0015D10
 * Callers:
 *     <none>
 * Callees:
 *     PplpLazyInitializeLookasideList @ 0x1C0015C74 (PplpLazyInitializeLookasideList.c)
 *     PplGenericFreeFunction @ 0x1C0015E40 (PplGenericFreeFunction.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ?RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z @ 0x1C004A9EC (-RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z.c)
 */

void __stdcall NdisMFreeNetBufferSGList(
        NDIS_HANDLE NdisMiniportDmaHandle,
        PSCATTER_GATHER_LIST pSGL,
        PNET_BUFFER NetBuffer)
{
  PNET_BUFFER v3; // rbx
  unsigned __int16 Reserved; // ax
  _SLIST_ENTRY *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  FREE_FUNCTION_EX *v10; // rax
  struct _MDL *v11; // rsi
  char *v12; // rdi
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = NetBuffer;
  if ( (NetBuffer->Reserved & 4) != 0 )
    LOBYTE(NetBuffer) = 1;
  else
    NetBuffer = 0LL;
  (*(void (__fastcall **)(_QWORD, PSCATTER_GATHER_LIST, PNET_BUFFER))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3)
                                                                                + 8LL)
                                                                    + 96LL))(
    *((_QWORD *)NdisMiniportDmaHandle + 3),
    pSGL,
    NetBuffer);
  Reserved = v3->Reserved;
  if ( (Reserved & 1) != 0 )
  {
    v6 = (_SLIST_ENTRY *)v3->NdisReserved[0];
    v3->NdisReserved[0] = 0LL;
    v3->Reserved = Reserved & 0xFFFE;
    v7 = *((_QWORD *)NdisMiniportDmaHandle + 8);
    v8 = KeGetPcr()->Prcb.Number + 1;
    if ( (unsigned int)v8 >= *(_DWORD *)v7 )
      v8 = (unsigned int)(*(_DWORD *)v7 - 1);
    v9 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 8 * v8);
    if ( !*(_BYTE *)(v9 + 112) )
      PplpLazyInitializeLookasideList(v7, *(_QWORD *)(*(_QWORD *)(v7 + 32) + 8 * v8));
    ++*(_DWORD *)(v9 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v9) < *(_WORD *)(v9 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v9, v6);
    }
    else
    {
      ++*(_DWORD *)(v9 + 32);
      v10 = *(FREE_FUNCTION_EX **)(v9 + 56);
      if ( v10 == PplGenericFreeFunction )
        PplGenericFreeFunction(v6, (PLOOKASIDE_LIST_EX)v9);
      else
        ((void (__fastcall *)(_SLIST_ENTRY *, __int64))v10)(v6, v9);
    }
  }
  else if ( (Reserved & 2) != 0 )
  {
    v11 = (struct _MDL *)v3->NdisReserved[0];
    v12 = (char *)v11->StartVa + v11->ByteOffset;
    if ( (Reserved & 4) == 0 )
      RtlCopyBufferToMdl(&v12[48 * v3->CurrentMdlOffset], v3->CurrentMdl, v3->CurrentMdlOffset, v3->DataLength, &v13);
    v3->Reserved &= ~2u;
    v3->NdisReserved[0] = 0LL;
    IoFreeMdl(v11);
    ExFreePoolWithTag(v12, 0);
  }
  v3->Reserved &= ~4u;
}
