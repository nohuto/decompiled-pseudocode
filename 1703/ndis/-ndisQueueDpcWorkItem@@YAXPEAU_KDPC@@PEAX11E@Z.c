/*
 * XREFs of ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C0024AB0
 * Callers:
 *     ndisInterruptDpc @ 0x1C00041C0 (ndisInterruptDpc.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001EF4C (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001EFE0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisQueueDpcWorkItem(struct _KDPC *a1, void *a2, void *a3, void *a4, char a5)
{
  __int64 v5; // rdi
  unsigned int Number; // r12d
  KIRQL v10; // al
  __int64 v11; // rbx
  _WORD *v12; // rdx
  __int64 v13; // r11
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // r10
  unsigned __int8 v16; // r9
  _BYTE *v17; // rcx
  __int64 v18; // rbx
  char *v19; // rdi
  __int64 *v20; // rax
  __int64 v21; // rcx
  LARGE_INTEGER v22; // rax
  __int64 v23; // rax
  unsigned __int8 v24; // cl
  _QWORD WnodeEventItem[13]; // [rsp+20h] [rbp-68h] BYREF
  KIRQL NewIrql; // [rsp+98h] [rbp+10h]

  v5 = *((_QWORD *)a2 + 12);
  Number = KeGetPcr()->Prcb.Number;
  if ( (*(_DWORD *)(v5 + 48) & 0x800000) != 0 )
  {
    v23 = *(_QWORD *)(v5 + 40) + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v23 + 288);
  }
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 4464));
  v11 = *(_QWORD *)(v5 + 4920);
  NewIrql = v10;
  if ( v11 )
  {
    if ( *(_BYTE *)(v11 + 1) )
    {
      if ( *(_BYTE *)(v11 + 1) == 1 )
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v11 + 4936), 1u);
    }
    else
    {
      v12 = 0LL;
      if ( _bittestandset((signed __int32 *)(v11 + 24), 0xDu) )
      {
        v13 = *(_QWORD *)(v11 + 8);
        v14 = -1;
        if ( v13 && (v15 = *(_BYTE *)(v11 + 3), v16 = 0, v15) )
        {
          do
          {
            v17 = (_BYTE *)(v13 + 2LL * v16);
            if ( *v17 == 77 )
            {
              if ( v17[1] != 0xFF )
              {
                ++v17[1];
                goto LABEL_16;
              }
            }
            else if ( !v17[1] )
            {
              v12 = (_WORD *)(v13 + 2LL * v16);
            }
            ++v16;
          }
          while ( v16 < v15 );
          if ( !v12 )
            goto LABEL_30;
          *v12 = 333;
        }
        else
        {
LABEL_30:
          if ( !*(_BYTE *)(v11 + 1) )
          {
            v24 = *(_BYTE *)(v11 + 3);
            if ( v24 == 0xFF )
            {
              ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v11);
              *(_BYTE *)(v11 + 1) = 2;
            }
            else
            {
              if ( (unsigned int)v24 + 2 <= 0xFF )
                v14 = v24 + 2;
              ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v11, v14);
            }
          }
          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v11, 0x4Du);
        }
      }
    }
  }
LABEL_16:
  ++*(_DWORD *)(v5 + 4472);
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_qD(13LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, v5, *(unsigned int *)(v5 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 4464), NewIrql);
  v18 = *((_QWORD *)a2 + 27)
      + 80LL * (Number + (*((_BYTE *)a2 + 193) != 0 ? (unsigned int)a3 : 0) * ndisMaxNumberOfProcessors);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v18 + 72));
  if ( (*(_DWORD *)(v18 + 68) & 1) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)a2 + 26, 0xFFFFFFFF);
    ndisDereferenceMiniport(v5, 0x4Du);
  }
  else
  {
    *(_QWORD *)(v18 + 32) = a1;
    *(_QWORD *)(v18 + 40) = a2;
    *(_QWORD *)(v18 + 48) = a3;
    *(_QWORD *)(v18 + 56) = a4;
    *(_DWORD *)(v18 + 64) = Number;
    *(_DWORD *)(v18 + 68) = 1;
    if ( a5 )
    {
      if ( HIBYTE(word_1C0093FDC) )
      {
        memset((char *)WnodeEventItem + 2, 0, 0x2EuLL);
        HIDWORD(WnodeEventItem[5]) = 0x20000;
        LOWORD(WnodeEventItem[0]) = 48;
        WnodeEventItem[1] = qword_1C0093FD0;
        *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
        BYTE4(WnodeEventItem[0]) = 24;
        IoWMIWriteEvent(WnodeEventItem);
      }
      *(_DWORD *)(v18 + 68) |= 2u;
      v19 = (char *)WPP_MAIN_CB.Dpc.DeferredRoutine + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v19 + 2);
      v20 = (__int64 *)*((_QWORD *)v19 + 1);
      if ( (char *)*v20 != v19 )
        __fastfail(3u);
      *(_QWORD *)v18 = v19;
      *(_QWORD *)(v18 + 8) = v20;
      *v20 = v18;
      *((_QWORD *)v19 + 1) = v18;
      ++*((_DWORD *)v19 + 6);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v19 + 2);
      KeReleaseSemaphore((PRKSEMAPHORE)v19 + 1, 0, 1, 0);
      v21 = KeGetPcr()->Prcb.Number;
      if ( !_InterlockedExchange((volatile __int32 *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 4 * v21), 1) )
      {
        v22 = *(LARGE_INTEGER *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
        if ( !*(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
          v22.QuadPart = -1LL;
        LODWORD(v21) = KeGetPcr()->Prcb.Number;
        KeSetTimer(
          (PKTIMER)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * v21],
          v22,
          (PKDPC)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)(unsigned int)v21 + 8]);
      }
    }
    else
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v18, CriticalWorkQueue);
    }
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v18 + 72));
}
