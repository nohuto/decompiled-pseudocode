/*
 * XREFs of ExpPartitionDestroy @ 0x14075E934
 * Callers:
 *     ExpPartitionInitialize @ 0x1405DDCC4 (ExpPartitionInitialize.c)
 *     PspTeardownPartition @ 0x14071B190 (PspTeardownPartition.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeFlushQueuedDpcs @ 0x1400DE0B0 (KeFlushQueuedDpcs.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     KeCancelTimer2 @ 0x1400E3990 (KeCancelTimer2.c)
 *     ZwWaitForSingleObject @ 0x14017D940 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExpWorkQueueDestroy @ 0x14075EB14 (ExpWorkQueueDestroy.c)
 */

void __fastcall ExpPartitionDestroy(PVOID P)
{
  unsigned __int16 i; // si
  __int64 v3; // rdi
  unsigned __int16 j; // si
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rdx
  _DWORD *v8; // rdi

  if ( *((_QWORD *)P + 2) )
  {
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      v3 = *(_QWORD *)(*((_QWORD *)P + 2) + 8LL * i);
      if ( v3 )
      {
        if ( *(_QWORD *)(v3 + 264) )
        {
          *(_DWORD *)(v3 + 272) = 1;
          KeSetEvent((PRKEVENT)(v3 + 16), 0, 0);
          ZwWaitForSingleObject(*(HANDLE *)(v3 + 264), 0, 0LL);
          ZwClose(*(HANDLE *)(v3 + 264));
        }
        KeCancelTimer2(v3 + 128);
        KeCancelTimer((PKTIMER)(v3 + 40));
        KeFlushQueuedDpcs();
        ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)P + 2) + 8LL * i), 0);
      }
    }
    ExFreePoolWithTag(*((PVOID *)P + 2), 0);
  }
  if ( *((_QWORD *)P + 1) )
  {
    for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
    {
      if ( *(_QWORD *)(*((_QWORD *)P + 1) + 8LL * j) )
      {
        v5 = 0LL;
        v6 = KeNodeBlock[j];
        if ( (_UNKNOWN *)v6 == (_UNKNOWN *)((char *)&KiNodeInit + 320 * j) )
          v6 = 0LL;
        do
        {
          v7 = *(_QWORD *)(*((_QWORD *)P + 1) + 8LL * *(unsigned __int16 *)(v6 + 146));
          v8 = *(_DWORD **)(v7 + v5);
          if ( ((unsigned __int8)v8 & 1) == 0 && v8 )
          {
            if ( v8[1] )
              KeBugCheckEx(0x18Eu, 2uLL, *(_QWORD *)P, *(_QWORD *)(v7 + v5), 0LL);
            ExpWorkQueueDestroy(*(_QWORD *)(v7 + v5));
            ExFreePoolWithTag(v8, 0);
          }
          v5 += 8LL;
        }
        while ( v5 < 64 );
        ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)P + 1) + 8LL * j), 0);
      }
    }
    ExFreePoolWithTag(*((PVOID *)P + 1), 0);
  }
  ExFreePoolWithTag(P, 0);
}
