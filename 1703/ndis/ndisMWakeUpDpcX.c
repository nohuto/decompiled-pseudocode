/*
 * XREFs of ndisMWakeUpDpcX @ 0x1C00102D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001EF4C (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001EFE0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ndisSetWakeUpTimer @ 0x1C0022E88 (ndisSetWakeUpTimer.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisTraceDpcEnd @ 0x1C0050E8C (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050F70 (ndisTraceDpcStart.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisMWakeUpDpcX(
        PVOID SystemSpecific1,
        unsigned int *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  char v5; // r12
  char v6; // si
  char v7; // r13
  char v8; // r15
  KIRQL v9; // di
  __int64 v10; // rdi
  _WORD *v11; // rdx
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // r11
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // r10
  unsigned __int8 v17; // r9
  _BYTE *v18; // rcx
  unsigned __int8 v19; // cl
  __int64 v20; // rax
  __int64 Clock; // [rsp+20h] [rbp-38h]
  KIRQL NewIrql; // [rsp+68h] [rbp+10h]

  v5 = 0;
  Clock = 0LL;
  v6 = 1;
  if ( HIBYTE(dword_1C0093FD8) )
  {
    v7 = 1;
    ndisTraceDpcStart(FunctionContext, 4LL);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v7 = 0;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  *((_QWORD *)FunctionContext + 65) = KeGetCurrentThread();
  FunctionContext[464] = 656250;
  if ( (FunctionContext[30] & 0x80000000) != 0 || (FunctionContext[31] & 0x20080000) != 0 )
  {
    *((_QWORD *)FunctionContext + 65) = 0LL;
    FunctionContext[464] = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
    goto LABEL_16;
  }
  *((_QWORD *)FunctionContext + 65) = 0LL;
  FunctionContext[464] = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  v8 = 1;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)FunctionContext + 558);
  NewIrql = v9;
  if ( !*((_BYTE *)FunctionContext + 4476) )
  {
    v10 = *((_QWORD *)FunctionContext + 615);
    if ( v10 )
    {
      if ( *(_BYTE *)(v10 + 1) )
      {
        if ( *(_BYTE *)(v10 + 1) == 1 )
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v10 + 5320), 1u);
      }
      else
      {
        v11 = 0LL;
        if ( _bittestandset((signed __int32 *)(v10 + 24), 0x13u) )
        {
          v14 = *(_QWORD *)(v10 + 8);
          v15 = -1;
          if ( !v14 )
            goto LABEL_53;
          v16 = *(_BYTE *)(v10 + 3);
          v17 = 0;
          if ( !v16 )
            goto LABEL_53;
          do
          {
            v18 = (_BYTE *)(v14 + 2LL * v17);
            if ( *v18 == 83 )
            {
              if ( v18[1] != 0xFF )
              {
                ++v18[1];
                goto LABEL_9;
              }
            }
            else if ( !v18[1] )
            {
              v11 = (_WORD *)(v14 + 2LL * v17);
            }
            ++v17;
          }
          while ( v17 < v16 );
          if ( v11 )
          {
            *v11 = 339;
          }
          else
          {
LABEL_53:
            if ( !*(_BYTE *)(v10 + 1) )
            {
              v19 = *(_BYTE *)(v10 + 3);
              if ( v19 == 0xFF )
              {
                ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v10);
                *(_BYTE *)(v10 + 1) = 2;
              }
              else
              {
                if ( (unsigned int)v19 + 2 <= 0xFF )
                  v15 = v19 + 2;
                ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v10, v15);
              }
            }
            NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v10);
          }
        }
      }
    }
LABEL_9:
    v12 = FunctionContext[1118]++ == -1;
    v9 = NewIrql;
    if ( !v12 )
      goto LABEL_10;
    FunctionContext[1118] = -1;
  }
  v8 = 0;
LABEL_10:
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_qD(12LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, FunctionContext, FunctionContext[1118]);
  KeReleaseSpinLock((PKSPIN_LOCK)FunctionContext + 558, v9);
  if ( v8 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)FunctionContext + 492, 1, 0) )
    {
      LOBYTE(v13) = 83;
      ndisDereferenceMiniport(FunctionContext, v13);
    }
    else
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(FunctionContext + 484), CriticalWorkQueue);
    }
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
LABEL_16:
  if ( v6 )
    KeSetEvent((PRKEVENT)(FunctionContext + 478), 0, 0);
  if ( v5 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
    *((_QWORD *)FunctionContext + 65) = KeGetCurrentThread();
    FunctionContext[464] = 656301;
    if ( (FunctionContext[30] & 0x80000000) == 0 && (FunctionContext[31] & 0x20080000) == 0 )
      ndisSetWakeUpTimer(FunctionContext);
    *((_QWORD *)FunctionContext + 65) = 0LL;
    FunctionContext[464] = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  }
  if ( v7 )
  {
    v20 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(FunctionContext, 4LL, v20 - Clock);
  }
}
