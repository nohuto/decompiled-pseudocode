/*
 * XREFs of ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854
 * Callers:
 *     ndisInterruptDpc @ 0x1C00041C0 (ndisInterruptDpc.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0006B60 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00075D0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00084A0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisIfReferenceMiniport @ 0x1C0009344 (ndisIfReferenceMiniport.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C00093E0 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0009870 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C0009D78 (ndisDereferenceMiniportForNsi.c)
 *     ndisQueueOidRequest @ 0x1C000A240 (ndisQueueOidRequest.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000B070 (ndisFOidRequestCompleteInternal.c)
 *     ndisOidRequestComplete @ 0x1C000B560 (ndisOidRequestComplete.c)
 *     ndisMOidRequest @ 0x1C000C330 (ndisMOidRequest.c)
 *     NdisDereferenceWithTag @ 0x1C000C850 (NdisDereferenceWithTag.c)
 *     ndisCreateHandler @ 0x1C000C8D8 (ndisCreateHandler.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C000E960 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisMTimerDpcX @ 0x1C000F9B0 (ndisMTimerDpcX.c)
 *     ndisQueuedCheckForHang @ 0x1C000FBD0 (ndisQueuedCheckForHang.c)
 *     ndisMWakeUpDpcX @ 0x1C00102D0 (ndisMWakeUpDpcX.c)
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 *     ndisReferenceProtocol @ 0x1C0019DB4 (ndisReferenceProtocol.c)
 *     ndisQueueRequestWorkItem @ 0x1C001AEE0 (ndisQueueRequestWorkItem.c)
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     ndisDoOidRequests @ 0x1C001E190 (ndisDoOidRequests.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001EB44 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReferenceRefEx @ 0x1C001EE0C (ndisReferenceRefEx.c)
 *     ndisMTimerObjectDpc @ 0x1C00247F0 (ndisMTimerObjectDpc.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C0024AB0 (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 * Callees:
 *     ndisReleaseStackTrace @ 0x1C00115F8 (ndisReleaseStackTrace.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     ndisCaptureStackTrace @ 0x1C006C5A4 (ndisCaptureStackTrace.c)
 */

void __fastcall ndisReferenceWithTagStackTrace(struct _NDIS_REFCOUNT_WITH_STACK *a1, char a2)
{
  int *v2; // rsi
  int v4; // ecx
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // edi
  struct _NDIS_REFCOUNT_WITH_STACK *Next; // r9
  int *v10; // r11
  __int64 v11; // r8
  int *v12; // r10
  int v13; // edx
  int v14; // ecx
  _NDIS_REFCOUNT_STACK_BLOCK *PoolWithTag; // rax
  _NDIS_REFCOUNT_STACK_BLOCK *v16; // rsi

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
    v7 = v4 ^ (v4 ^ ((v4 & 0xFFFFFFFE) + 2)) & 0xFFFE;
  }
  else
  {
    if ( (v4 & 0xFFFE0000) == 0x7FFE0000 )
    {
      v6 = v4 | 0x10000;
      goto LABEL_4;
    }
    v7 = v4 & 0x1FFFF | ((v4 & 0xFFFE0000) + 0x20000);
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
        v10[v11] = v13 & 0x3FFFFFF | ((v13 & 0xFC000000) + 0x4000000);
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
