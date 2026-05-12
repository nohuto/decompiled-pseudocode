/*
 * XREFs of RaidCheckPerProcessorCompletions @ 0x1C001D490
 * Callers:
 *     RaidStartIoPacket @ 0x1C00073D0 (RaidStartIoPacket.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C002CADC (RaidAdapterPoFxIdleComponentFromMiniport.c)
 */

void __fastcall RaidCheckPerProcessorCompletions(__int64 a1, unsigned __int16 *a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // r8
  union _SLIST_HEADER *v5; // rcx
  PSLIST_ENTRY v6; // rsi
  PSLIST_ENTRY v7; // rbx

  if ( (*(_BYTE *)(a1 + 4740) & 1) != 0 && (unsigned int)*a2 < HIDWORD(WPP_MAIN_CB.Reserved) )
  {
    v3 = *((unsigned __int8 *)a2 + 2);
    if ( (unsigned int)v3 < *((_DWORD *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink + *a2) )
    {
      v4 = (v3 + ((unsigned __int64)*a2 << 6)) << 7;
      v5 = (union _SLIST_HEADER *)(v4 + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 64LL);
      _InterlockedExchange((volatile __int32 *)(v4 + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 80), 1);
      v6 = ExpInterlockedFlushSList(v5);
      while ( v6 )
      {
        v7 = v6 - 2;
        v6 = v6->Next;
        if ( (BYTE1(v7[1].Next) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(*((_QWORD *)&v7[13].Next + 1), *((unsigned int *)&v7[46].Next + 3));
          BYTE1(v7[1].Next) &= ~1u;
        }
        ((void (__fastcall *)(PSLIST_ENTRY))v7[41].Next)(v7);
      }
      _InterlockedExchange(
        (volatile __int32 *)(((*((unsigned __int8 *)a2 + 2) + ((unsigned __int64)*a2 << 6)) << 7)
                           + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1)
                           + 80),
        0);
    }
  }
}
