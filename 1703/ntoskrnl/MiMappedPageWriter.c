/*
 * XREFs of MiMappedPageWriter @ 0x14015DC00
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeModWriterEntry @ 0x140014FCC (MiFreeModWriterEntry.c)
 *     KeWaitForGate @ 0x140017A68 (KeWaitForGate.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     MiGatherMappedPages @ 0x1400AFB14 (MiGatherMappedPages.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiAllocateModWriterEntry @ 0x14010ED60 (MiAllocateModWriterEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiDeleteMappedMdls @ 0x140211454 (MiDeleteMappedMdls.c)
 */

__int64 __fastcall MiMappedPageWriter(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  KPRIORITY v3; // eax
  PVOID *v4; // rdx
  __int64 v5; // r8
  int v6; // r14d
  __int64 v7; // r9
  void *v8; // rcx
  unsigned int v9; // ebp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  int v12; // r8d
  __int64 *ModWriterEntry; // rdi
  unsigned __int32 v14; // eax
  _SINGLE_LIST_ENTRY *v15; // r8
  __int64 v16; // r9
  __int64 **v18; // rax
  __int64 v19; // rcx
  __int64 **v20; // rcx
  PVOID Object[18]; // [rsp+40h] [rbp-418h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+D0h] [rbp-388h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = KeSetPriorityThread(CurrentThread, 18);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  v4 = Object;
  v5 = 0LL;
  v6 = v3;
  v7 = 16LL;
  do
  {
    v8 = (void *)(v5 + a1 + 4128);
    v5 += 24LL;
    *v4++ = v8;
    --v7;
  }
  while ( v7 );
  Object[16] = (PVOID)(a1 + 136);
  Object[17] = (PVOID)(a1 + 824);
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)3;
LABEL_4:
  v9 = -1;
LABEL_5:
  if ( v9 == -1
    || (v10 = *(_QWORD *)(a1 + 6144), v11 = *(_QWORD *)(a1 + 6256), v10 <= v11)
    || v10 - v11 < 0x10 && !*(_DWORD *)(a1 + 820) )
  {
    v9 = KeWaitForMultipleObjects(0x12u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(a1 + 140);
      if ( !v12 && v9 < 0x10 )
      {
        v4 = (PVOID *)(5LL * v9);
        if ( *(_QWORD *)(a1 + 40LL * v9 + 3216) == 0xFFFFFFFFFLL )
          goto LABEL_4;
      }
      if ( *(_QWORD *)(a1 + 6144) == *(_QWORD *)(a1 + 6256) )
        break;
      if ( (unsigned __int64)*(unsigned int *)(a1 + 656) >= *(_QWORD *)(a1 + 648) )
        ModWriterEntry = 0LL;
      else
        ModWriterEntry = (__int64 *)MiAllocateModWriterEntry(a1, 16LL, 1);
      if ( ModWriterEntry )
      {
        memset(ModWriterEntry, 0, 0x108uLL);
        *ModWriterEntry = 97LL;
        ModWriterEntry[24] = a1;
      }
      else
      {
        --CurrentThread->SpecialApcDisable;
        v18 = (__int64 **)(a1 + 664);
        if ( *v18 == (__int64 *)v18 )
        {
          *(_BYTE *)(a1 + 704) = 1;
        }
        else
        {
          ModWriterEntry = *v18;
          v19 = **v18;
          if ( (__int64 **)(*v18)[1] != v18 || *(__int64 **)(v19 + 8) != ModWriterEntry )
            __fastfail(3u);
          *v18 = (__int64 *)v19;
          *(_QWORD *)(v19 + 8) = v18;
        }
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      if ( ModWriterEntry )
      {
        v14 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 656));
        if ( v14 > *(_DWORD *)(a1 + 660) )
          *(_DWORD *)(a1 + 660) = v14;
        ModWriterEntry[25] = 0LL;
        if ( !(unsigned int)MiGatherMappedPages(a1, v9, (__int64)ModWriterEntry) )
        {
          _InterlockedAdd((volatile signed __int32 *)(a1 + 656), 0xFFFFFFFF);
          if ( (ModWriterEntry[5] & 1) != 0 )
          {
            --CurrentThread->SpecialApcDisable;
            v20 = *(__int64 ***)(a1 + 672);
            if ( *v20 != (__int64 *)(a1 + 664) )
              __fastfail(3u);
            ModWriterEntry[1] = (__int64)v20;
            *ModWriterEntry = a1 + 664;
            *v20 = ModWriterEntry;
            *(_QWORD *)(a1 + 672) = ModWriterEntry;
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          }
          else
          {
            MiFreeModWriterEntry(ModWriterEntry, 1u);
          }
        }
        goto LABEL_5;
      }
      KeWaitForGate(a1 + 680, 0x13u);
    }
    if ( !v12 )
      goto LABEL_4;
    if ( !*(_DWORD *)(a1 + 656) )
      break;
    do
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    while ( *(_DWORD *)(a1 + 656) );
  }
  MiDeleteMappedMdls(a1, v4);
  return KeSetActualBasePriorityThread((__int64)CurrentThread, v6, v15, v16);
}
