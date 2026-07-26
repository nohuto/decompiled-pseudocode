/*
 * XREFs of ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84
 * Callers:
 *     NdisDereferenceWithTag @ 0x1C0006C70 (NdisDereferenceWithTag.c)
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 *     ndisIfSetInterfaceState @ 0x1C0008250 (ndisIfSetInterfaceState.c)
 *     ndisCreateHandler @ 0x1C0008A80 (ndisCreateHandler.c)
 *     ndisCleanupUserOpenContext @ 0x1C0009040 (ndisCleanupUserOpenContext.c)
 *     ndisIfDereferenceMiniport @ 0x1C00091B0 (ndisIfDereferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C000985C (ndisDereferenceMiniportForNsi.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0009C2C (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisMTimerDpcX @ 0x1C0009FC0 (ndisMTimerDpcX.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000A160 (ndisFOidRequestCompleteInternal.c)
 *     ndisInterruptDpc @ 0x1C000A480 (ndisInterruptDpc.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000A970 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisQueueOidRequest @ 0x1C000B550 (ndisQueueOidRequest.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000BC90 (ndisReferenceTopMiniportByNameForNsi.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     ndisOidRequestComplete @ 0x1C000C470 (ndisOidRequestComplete.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000D6B0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000E3F0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0018B70 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisQueuedCheckForHang @ 0x1C00198D0 (ndisQueuedCheckForHang.c)
 *     ndisDoOidRequests @ 0x1C001A290 (ndisDoOidRequests.c)
 *     ndisMTimerObjectDpc @ 0x1C0023190 (ndisMTimerObjectDpc.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 *     ndisCaptureStackTrace @ 0x1C006DB18 (ndisCaptureStackTrace.c)
 *     ndisReleaseStackTrace @ 0x1C006DCFC (ndisReleaseStackTrace.c)
 */

void __fastcall ndisReferenceWithTagStackTrace(struct _NDIS_REFCOUNT_WITH_STACK *a1, char a2)
{
  int *v2; // rsi
  int v4; // ecx
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // edi
  struct _NDIS_REFCOUNT_WITH_STACK *Next; // r9
  int *v10; // r10
  __int64 v11; // rdx
  int *v12; // r11
  int v13; // ecx
  int v14; // r8d
  _NDIS_REFCOUNT_STACK_BLOCK *PoolWithTag; // rax
  _NDIS_REFCOUNT_STACK_BLOCK *v16; // r14

  v2 = 0LL;
  v4 = *((_DWORD *)a1 + 14);
  if ( a2 )
  {
    if ( (v4 & 0xFFFE) == 0x7FFE )
    {
      v6 = v4 | 1;
LABEL_4:
      *((_DWORD *)a1 + 14) = v6;
      return;
    }
    v7 = v4 ^ (v4 ^ (v4 + 2)) & 0xFFFE;
  }
  else
  {
    if ( (v4 & 0xFFFE0000) == 0x7FFE0000 )
    {
      v6 = v4 | 0x10000;
      goto LABEL_4;
    }
    v7 = v4 + 0x20000;
  }
  *((_DWORD *)a1 + 14) = v7;
  v8 = ndisCaptureStackTrace();
  Next = a1;
  while ( 2 )
  {
    v10 = (int *)((char *)Next->Block.Dereferences + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFE8uLL));
    v11 = 0LL;
    v12 = v10;
    do
    {
      v13 = *v12;
      v14 = *v12 & 0x3FFFFFF;
      if ( v14 == v8 && (v13 & 0xFC000000) < 0xFC000000 )
      {
        v10[v11] = v14 | (v13 + 0x4000000) & 0xFC000000;
LABEL_23:
        ndisReleaseStackTrace(v8);
        return;
      }
      if ( !v2 && !v14 )
        v2 = &v10[v11];
      v11 = (unsigned int)(v11 + 1);
      ++v12;
    }
    while ( (unsigned int)v11 < 6 );
    Next = (struct _NDIS_REFCOUNT_WITH_STACK *)Next->Block.Next;
    if ( Next )
      continue;
    break;
  }
  if ( !v2 )
  {
    PoolWithTag = (_NDIS_REFCOUNT_STACK_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7872444Eu);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( a2 )
        *((_DWORD *)a1 + 14) |= 1u;
      else
        *((_DWORD *)a1 + 14) |= 0x10000u;
      goto LABEL_23;
    }
    memset(PoolWithTag, 0, sizeof(_NDIS_REFCOUNT_STACK_BLOCK));
    v16->Next = a1->Block.Next;
    a1->Block.Next = v16;
    v2 = (int *)((char *)v16->Dereferences + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFE8uLL));
  }
  *v2 = v8 & 0x3FFFFFF | 0x4000000;
}
