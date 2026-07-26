/*
 * XREFs of NdisMFreeNetBufferSGList @ 0x1C0007030
 * Callers:
 *     <none>
 * Callees:
 *     PplpLazyInitializeLookasideList @ 0x1C0025194 (PplpLazyInitializeLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ?RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z @ 0x1C004B9C8 (-RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z.c)
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
  struct _MDL *v10; // rsi
  char *v11; // rdi
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = NetBuffer;
  LOBYTE(NetBuffer) = (NetBuffer->Reserved & 4) != 0;
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
    if ( ExQueryDepthSList((PSLIST_HEADER)v9) >= *(_WORD *)(v9 + 16) )
    {
      ++*(_DWORD *)(v9 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(v9 + 56))(v6, v9);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v9, v6);
    }
  }
  else if ( (Reserved & 2) != 0 )
  {
    v10 = (struct _MDL *)v3->NdisReserved[0];
    v11 = (char *)v10->StartVa + v10->ByteOffset;
    if ( (Reserved & 4) == 0 )
    {
      RtlCopyBufferToMdl(&v11[48 * v3->CurrentMdlOffset], v3->CurrentMdl, v3->CurrentMdlOffset, v3->DataLength, &v12);
      Reserved = v3->Reserved;
    }
    v3->Reserved = Reserved & 0xFFFD;
    v3->NdisReserved[0] = 0LL;
    IoFreeMdl(v10);
    ExFreePoolWithTag(v11, 0);
  }
  v3->Reserved &= ~4u;
}
