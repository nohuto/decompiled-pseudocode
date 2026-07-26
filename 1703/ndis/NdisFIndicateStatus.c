/*
 * XREFs of NdisFIndicateStatus @ 0x1C0020AA0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     NdisIsStatusIndicationCloneable @ 0x1C0059AA0 (NdisIsStatusIndicationCloneable.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005A894 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ndisReferenceRefNoCheck @ 0x1C006CA88 (ndisReferenceRefNoCheck.c)
 */

void __stdcall NdisFIndicateStatus(NDIS_HANDLE NdisFilterHandle, PNDIS_STATUS_INDICATION StatusIndication)
{
  char v2; // al
  KIRQL v5; // al
  char *v6; // rsi
  KIRQL v7; // bp
  _OWORD *PoolWithTag; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v12[7]; // [rsp+48h] [rbp-50h] BYREF

  v2 = *((_BYTE *)NdisFilterHandle + 296);
  v12[1] = NdisFilterHandle;
  v12[3] = StatusIndication;
  if ( v2
    || KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)ndisFIndicateStatusWrapper, v12, 0x4CCCuLL, 0, 0LL) < 0 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
    v6 = (char *)NdisFilterHandle + 256;
    *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
    v7 = v5;
    *((_DWORD *)NdisFilterHandle + 40) = 2100440;
    while ( *(_QWORD *)v6 )
      v6 = (char *)(*(_QWORD *)v6 + 80LL);
    if ( v5 < 2u )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      *(_QWORD *)v6 = StatusIndication;
      StatusIndication->NdisReserved[1] = &Event;
      StatusIndication->NdisReserved[0] = 0LL;
      goto LABEL_12;
    }
    if ( (unsigned __int8)NdisIsStatusIndicationCloneable((unsigned int)StatusIndication->StatusCode) )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, StatusIndication->StatusBufferSize + 112LL, 0x2020444Eu);
      *(_QWORD *)v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = *(_OWORD *)&StatusIndication->Header.Type;
        PoolWithTag[1] = *(_OWORD *)&StatusIndication->PortNumber;
        PoolWithTag[2] = *(_OWORD *)&StatusIndication->DestinationHandle;
        PoolWithTag[3] = *(_OWORD *)&StatusIndication->StatusBuffer;
        PoolWithTag[4] = *(_OWORD *)&StatusIndication->Guid.Data2;
        PoolWithTag[5] = *(_OWORD *)StatusIndication->NdisReserved;
        PoolWithTag[6] = *(_OWORD *)&StatusIndication->NdisReserved[2];
        *(_QWORD *)(*(_QWORD *)v6 + 48LL) = *(_QWORD *)v6 + 112LL;
        memmove(*(void **)(*(_QWORD *)v6 + 48LL), StatusIndication->StatusBuffer, StatusIndication->StatusBufferSize);
        v9 = *(_QWORD *)v6;
        LOBYTE(v10) = 1;
        *(_QWORD *)(v9 + 80) = 0LL;
        *(_QWORD *)(v9 + 88) = 0LL;
        ndisReferenceRefNoCheck((char *)NdisFilterHandle + 320, v10);
LABEL_12:
        *((_BYTE *)NdisFilterHandle + 296) = 1;
        ndisQueueStackExpansionFallbackWorkItem(NdisFilterHandle);
        *((_QWORD *)NdisFilterHandle + 19) = 0LL;
        *((_DWORD *)NdisFilterHandle + 40) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v7);
        if ( v7 < 2u )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        return;
      }
      if ( (unsigned __int8)byte_1C009261F >= 2u )
        WPP_SF_qD(
          47LL,
          &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids,
          NdisFilterHandle,
          (unsigned int)StatusIndication->StatusCode);
      ++*((_DWORD *)NdisFilterHandle + 77);
    }
    else
    {
      if ( (unsigned __int8)byte_1C009261F >= 2u )
        WPP_SF_qD(
          48LL,
          &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids,
          NdisFilterHandle,
          (unsigned int)StatusIndication->StatusCode);
      ++*((_DWORD *)NdisFilterHandle + 78);
    }
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    *((_DWORD *)NdisFilterHandle + 40) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v7);
  }
}
