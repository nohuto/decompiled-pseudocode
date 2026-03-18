/*
 * XREFs of ExpPartitionDestroy @ 0x1407C56B0
 * Callers:
 *     ExpPartitionInitialize @ 0x140647350 (ExpPartitionInitialize.c)
 *     PspTeardownPartition @ 0x14077EC60 (PspTeardownPartition.c)
 * Callees:
 *     KeFlushQueuedDpcs @ 0x140004DD0 (KeFlushQueuedDpcs.c)
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     KeCancelTimer2 @ 0x1400873D0 (KeCancelTimer2.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ZwWaitForSingleObject @ 0x1401A7540 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExpWorkQueueDestroy @ 0x1407C5894 (ExpWorkQueueDestroy.c)
 */

void __fastcall ExpPartitionDestroy(PVOID P)
{
  unsigned __int16 i; // si
  __int64 v3; // rdi
  void *v4; // rcx
  unsigned __int16 v5; // si
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rdx
  _DWORD *v9; // rdi

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
  v4 = (void *)*((_QWORD *)P + 1);
  if ( v4 )
  {
    v5 = 0;
    if ( KeNumberNodes )
    {
      do
      {
        if ( *(_QWORD *)(*((_QWORD *)P + 1) + 8LL * v5) )
        {
          v6 = 0LL;
          v7 = 0LL;
          if ( (_UNKNOWN *)KeNodeBlock[v5] != (_UNKNOWN *)((char *)&KiNodeInit + 384 * v5) )
            v6 = KeNodeBlock[v5];
          do
          {
            v8 = *(_QWORD *)(*((_QWORD *)P + 1) + 8LL * *(unsigned __int16 *)(v6 + 146));
            v9 = *(_DWORD **)(v8 + v7);
            if ( ((unsigned __int8)v9 & 1) == 0 && v9 )
            {
              if ( v9[1] )
                KeBugCheckEx(0x18Eu, 2uLL, *(_QWORD *)P, *(_QWORD *)(v8 + v7), 0LL);
              ExpWorkQueueDestroy(*(_QWORD *)(v8 + v7));
              ExFreePoolWithTag(v9, 0);
            }
            v7 += 8LL;
          }
          while ( v7 < 64 );
          ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)P + 1) + 8LL * v5), 0);
        }
        ++v5;
      }
      while ( v5 < (unsigned __int16)KeNumberNodes );
      v4 = (void *)*((_QWORD *)P + 1);
    }
    ExFreePoolWithTag(v4, 0);
  }
  ExFreePoolWithTag(P, 0);
}
