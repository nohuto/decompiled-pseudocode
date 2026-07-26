/*
 * XREFs of ndisMWakeUpDpcX @ 0x1C0008990
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     ndisSetWakeUpTimer @ 0x1C002476C (ndisSetWakeUpTimer.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisTraceDpcEnd @ 0x1C00503A4 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050488 (ndisTraceDpcStart.c)
 */

void __fastcall ndisMWakeUpDpcX(
        PVOID SystemSpecific1,
        unsigned int *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  char v5; // r15
  char v6; // di
  char v7; // r13
  char v8; // r14
  KIRQL v9; // r12
  struct _NDIS_REFCOUNT_BLOCK *v10; // rcx
  unsigned int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 v15; // al
  WORK_QUEUE_TYPE v16; // edx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 Clock; // [rsp+58h] [rbp+10h]

  v5 = 0;
  Clock = 0LL;
  v6 = 1;
  if ( HIBYTE(dword_1C009AF18) )
  {
    v7 = 1;
    ndisTraceDpcStart(FunctionContext, 4LL);
    Clock = WmiGetClock(0LL, 0LL, v17, v18);
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
    goto LABEL_19;
  }
  *((_QWORD *)FunctionContext + 65) = 0LL;
  FunctionContext[464] = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  v8 = 1;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)FunctionContext + 558);
  if ( !*((_BYTE *)FunctionContext + 4476) )
  {
    v10 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)FunctionContext + 615);
    if ( v10 )
      NdisReferenceWithTag(v10);
    v11 = FunctionContext[1118];
    FunctionContext[1118] = v11 + 1;
    if ( v11 != -1 )
      goto LABEL_9;
    FunctionContext[1118] = -1;
  }
  v8 = 0;
LABEL_9:
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qD(12LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, FunctionContext, FunctionContext[1118]);
  KeReleaseSpinLock((PKSPIN_LOCK)FunctionContext + 558, v9);
  if ( v8 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)FunctionContext + 492, 1, 0) )
    {
      LOBYTE(v12) = 83;
      ndisDereferenceMiniport(FunctionContext, v12);
    }
    else
    {
      v15 = *((_BYTE *)FunctionContext + 32);
      if ( v15 > 6u || v15 == 6 && *((_BYTE *)FunctionContext + 33) >= 0x50u )
        v16 = CustomPriorityWorkQueue|NormalWorkQueue;
      else
        v16 = CustomPriorityWorkQueue|RealTimeWorkQueue|0x8;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(FunctionContext + 484), v16);
    }
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
LABEL_19:
  if ( v6 )
    KeSetEvent((PRKEVENT)(FunctionContext + 478), 0, 0);
  if ( v5 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
    *((_QWORD *)FunctionContext + 65) = KeGetCurrentThread();
    FunctionContext[464] = 656316;
    if ( (FunctionContext[30] & 0x80000000) == 0 && (FunctionContext[31] & 0x20080000) == 0 )
      ndisSetWakeUpTimer(FunctionContext);
    *((_QWORD *)FunctionContext + 65) = 0LL;
    FunctionContext[464] = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  }
  if ( v7 )
  {
    v19 = WmiGetClock(0LL, 0LL, v13, v14);
    ndisTraceDpcEnd(FunctionContext, 4LL, v19 - Clock);
  }
}
