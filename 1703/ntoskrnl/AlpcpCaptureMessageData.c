/*
 * XREFs of AlpcpCaptureMessageData @ 0x14043D038
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x14042F9B0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCreateReserve @ 0x14043CDF4 (AlpcpCreateReserve.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140472A18 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x140475E8C (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     AlpcpAvailableBufferSize @ 0x14041D174 (AlpcpAvailableBufferSize.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14047A170 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpChargePagedPoolQuota @ 0x14047C5A0 (AlpcpChargePagedPoolQuota.c)
 */

__int64 __fastcall AlpcpCaptureMessageData(__int64 a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v6; // rax
  size_t v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  size_t v10; // r14
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // r12
  void *v15; // rcx
  unsigned __int64 v16; // r13
  PVOID PoolWithTag; // rax
  __int64 v18; // rcx
  int v19; // r13d
  __int64 v20; // rcx

  v6 = AlpcpAvailableBufferSize(a1);
  v10 = v6;
  if ( v7 <= v6 )
  {
    if ( v9 )
      memmove(v8 + 35, a3, v7);
    v11 = *(void **)(a1 + 224);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0x42456C41u);
      v12 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 224) = 0LL;
      if ( v12 )
        AlpcpReleasePagedPoolQuota(v12, *(_QWORD *)(a1 + 232));
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    return 0LL;
  }
  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  v14 = v8[29];
  if ( a2 <= v14 + v6 )
  {
LABEL_20:
    if ( a3 )
    {
      memmove((void *)(a1 + 280), a3, v10);
      memmove(*(void **)(a1 + 224), &a3[v10], a2 - v10);
    }
    return 0LL;
  }
  v15 = (void *)v8[28];
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0x42456C41u);
    *(_QWORD *)(a1 + 232) = 0LL;
  }
  v16 = a2 - v10;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2 - v10, 0x42456C41u);
  v18 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 224) = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_QWORD *)(a1 + 232) = v16;
    if ( v18 )
    {
      v19 = AlpcpChargePagedPoolQuota(v18, v16 - v14);
      if ( v19 < 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 224), 0x42456C41u);
        v20 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 224) = 0LL;
        *(_QWORD *)(a1 + 232) = 0LL;
        AlpcpReleasePagedPoolQuota(v20, v14);
        return (unsigned int)v19;
      }
    }
    goto LABEL_20;
  }
  if ( v18 )
    AlpcpReleasePagedPoolQuota(v18, v14);
  return 3221225626LL;
}
