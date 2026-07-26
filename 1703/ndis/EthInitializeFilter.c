/*
 * XREFs of EthInitializeFilter @ 0x1C00E0ACC
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 */

char __fastcall EthInitializeFilter(unsigned int a1, __int64 a2, __int64 a3)
{
  char v4; // di
  __int64 v7; // rbx
  PVOID PoolWithTag; // rax
  PVOID v9; // rax
  PVOID v10; // rax
  PVOID v11; // rax
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx

  v4 = 0;
  if ( !is_mul_ok(6u, a1) )
    goto LABEL_8;
  v7 = *(_QWORD *)(a3 + 288);
  memset((void *)a3, 0, 0x198uLL);
  *(_DWORD *)(a3 + 336) = *(_DWORD *)a2;
  *(_WORD *)(a3 + 340) = *(_WORD *)(a2 + 4);
  *(_DWORD *)(a3 + 344) = a1;
  *(_QWORD *)(a3 + 288) = v7;
  if ( !a1 )
    return 1;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 6 * a1, 0x6166444Eu);
  *(_QWORD *)(a3 + 376) = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_8;
  v9 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(6 * *(_DWORD *)(a3 + 344)), 0x6166444Eu);
  *(_QWORD *)(a3 + 392) = v9;
  if ( v9 )
  {
    v10 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(6 * *(_DWORD *)(a3 + 344)), 0x6166444Eu);
    *(_QWORD *)(a3 + 352) = v10;
    if ( v10 )
    {
      v11 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(6 * *(_DWORD *)(a3 + 344)), 0x6166444Eu);
      *(_QWORD *)(a3 + 360) = v11;
      if ( v11 )
        return 1;
    }
  }
LABEL_8:
  v12 = *(void **)(a3 + 376);
  *(_DWORD *)(a3 + 344) = 0;
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *(_QWORD *)(a3 + 376) = 0LL;
  }
  v13 = *(void **)(a3 + 352);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *(_QWORD *)(a3 + 352) = 0LL;
  }
  v14 = *(void **)(a3 + 392);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *(_QWORD *)(a3 + 392) = 0LL;
  }
  v15 = *(void **)(a3 + 360);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *(_QWORD *)(a3 + 360) = 0LL;
  }
  return v4;
}
