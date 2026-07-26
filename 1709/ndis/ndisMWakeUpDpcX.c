/*
 * XREFs of ndisMWakeUpDpcX @ 0x1C00096F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetWakeUpTimer @ 0x1C0002968 (ndisSetWakeUpTimer.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisTraceDpcEnd @ 0x1C004FA5C (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004FB40 (ndisTraceDpcStart.c)
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
  unsigned __int8 v12; // al
  WORK_QUEUE_TYPE v13; // edx
  __int64 v14; // rax
  __int64 Clock; // [rsp+58h] [rbp+10h]

  v5 = 0;
  Clock = 0LL;
  v6 = 1;
  if ( HIBYTE(dword_1C0099FD8) )
  {
    v7 = 1;
    ndisTraceDpcStart(FunctionContext, 4LL, SystemSpecific2, SystemSpecific3);
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
    if ( FunctionContext[1118]++ != -1 )
      goto LABEL_9;
    FunctionContext[1118] = -1;
  }
  v8 = 0;
LABEL_9:
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_qD(12LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, FunctionContext, FunctionContext[1118]);
  KeReleaseSpinLock((PKSPIN_LOCK)FunctionContext + 558, v9);
  if ( v8 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)FunctionContext + 492, 1, 0) )
    {
      ndisDereferenceMiniport((__int64)FunctionContext, 0x53u);
    }
    else
    {
      v12 = *((_BYTE *)FunctionContext + 32);
      if ( v12 > 6u || v12 == 6 && *((_BYTE *)FunctionContext + 33) >= 0x50u )
        v13 = CustomPriorityWorkQueue|NormalWorkQueue;
      else
        v13 = CustomPriorityWorkQueue|RealTimeWorkQueue|0x8;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(FunctionContext + 484), v13);
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
      ndisSetWakeUpTimer((__int64)FunctionContext);
    *((_QWORD *)FunctionContext + 65) = 0LL;
    FunctionContext[464] = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  }
  if ( v7 )
  {
    v14 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(FunctionContext, 4LL, v14 - Clock);
  }
}
