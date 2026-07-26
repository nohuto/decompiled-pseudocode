/*
 * XREFs of ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C0023888
 * Callers:
 *     ndisInterruptDpc @ 0x1C000A480 (ndisInterruptDpc.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C0023A14 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

void __fastcall ndisQueueDpcWorkItem(struct _KDPC *a1, void *a2, void *a3, void *a4, char a5)
{
  __int64 v5; // rdi
  unsigned int Number; // r14d
  KIRQL v11; // al
  struct _NDIS_REFCOUNT_BLOCK *v12; // rcx
  KIRQL v13; // r15
  __int64 v14; // rbx
  char *v15; // rdi
  __int64 *v16; // rax
  __int64 v17; // rax
  _QWORD WnodeEventItem[6]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *((_QWORD *)a2 + 12);
  Number = KeGetPcr()->Prcb.Number;
  if ( (*(_DWORD *)(v5 + 48) & 0x800000) != 0 )
  {
    v17 = *(_QWORD *)(v5 + 40) + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v17 + 288);
  }
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 4464));
  v12 = *(struct _NDIS_REFCOUNT_BLOCK **)(v5 + 4920);
  v13 = v11;
  if ( v12 )
    NdisReferenceWithTag(v12, 0x4Du);
  ++*(_DWORD *)(v5 + 4472);
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_qD(13LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, v5, *(unsigned int *)(v5 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 4464), v13);
  v14 = *((_QWORD *)a2 + 27)
      + 80LL * (Number + ndisMaxNumberOfProcessors * (*((_BYTE *)a2 + 193) != 0 ? (unsigned int)a3 : 0));
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 72));
  if ( (*(_DWORD *)(v14 + 68) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)a2 + 26);
    ndisDereferenceMiniport(v5, 0x4Du);
  }
  else
  {
    *(_QWORD *)(v14 + 32) = a1;
    *(_QWORD *)(v14 + 40) = a2;
    *(_QWORD *)(v14 + 48) = a3;
    *(_QWORD *)(v14 + 56) = a4;
    *(_DWORD *)(v14 + 64) = Number;
    *(_DWORD *)(v14 + 68) = 1;
    if ( a5 )
    {
      if ( HIBYTE(word_1C0099FDC) )
      {
        memset((char *)WnodeEventItem + 2, 0, 0x2EuLL);
        HIDWORD(WnodeEventItem[5]) = 0x20000;
        LOWORD(WnodeEventItem[0]) = 48;
        WnodeEventItem[1] = qword_1C0099FD0;
        *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
        BYTE4(WnodeEventItem[0]) = 24;
        IoWMIWriteEvent(WnodeEventItem);
      }
      *(_DWORD *)(v14 + 68) |= 2u;
      v15 = (char *)qword_1C0097F40 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v15 + 2);
      v16 = (__int64 *)*((_QWORD *)v15 + 1);
      if ( (char *)*v16 != v15 )
        __fastfail(3u);
      *(_QWORD *)v14 = v15;
      *(_QWORD *)(v14 + 8) = v16;
      *v16 = v14;
      *((_QWORD *)v15 + 1) = v14;
      ++*((_DWORD *)v15 + 6);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v15 + 2);
      KeReleaseSemaphore((PRKSEMAPHORE)v15 + 1, 0, 1, 0);
      ndisQueuePeriodicReceivesTimer();
    }
    else
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v14, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    }
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v14 + 72));
}
