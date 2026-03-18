/*
 * XREFs of MiMappedPageWriter @ 0x140148710
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     KeWaitForGate @ 0x1400E3F18 (KeWaitForGate.c)
 *     MiGatherMappedPages @ 0x1400EEBD4 (MiGatherMappedPages.c)
 *     MiFreeModWriterEntry @ 0x1400EFDA4 (MiFreeModWriterEntry.c)
 *     MiAllocateModWriterEntry @ 0x14011F3F0 (MiAllocateModWriterEntry.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiDeleteMappedMdls @ 0x140218CF0 (MiDeleteMappedMdls.c)
 */

__int64 __fastcall MiMappedPageWriter(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  KPRIORITY v3; // eax
  PVOID *v4; // rcx
  int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ebp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  int v11; // r8d
  _QWORD *ModWriterEntry; // rdi
  unsigned __int32 v13; // eax
  _SINGLE_LIST_ENTRY *v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  PVOID Object[18]; // [rsp+40h] [rbp-418h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+D0h] [rbp-388h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = KeSetPriorityThread(CurrentThread, 18);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  v4 = Object;
  v5 = v3;
  v6 = a1 + 4256;
  v7 = 16LL;
  do
  {
    *v4 = (PVOID)v6;
    v6 += 24LL;
    ++v4;
    --v7;
  }
  while ( v7 );
  Object[16] = (PVOID)(a1 + 104);
  Object[17] = (PVOID)(a1 + 776);
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)3;
LABEL_4:
  v8 = -1;
LABEL_5:
  if ( v8 == -1
    || (v9 = *(_QWORD *)(a1 + 6336), v10 = *(_QWORD *)(a1 + 6448), v9 <= v10)
    || v9 - v10 < 0x10 && !*(_DWORD *)(a1 + 772) )
  {
    v8 = KeWaitForMultipleObjects(0x12u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(a1 + 108);
      if ( !v11 && v8 < 0x10 )
      {
        v6 = 5LL * v8;
        if ( *(_QWORD *)(a1 + 40LL * v8 + 3344) == 0xFFFFFFFFFLL )
          goto LABEL_4;
      }
      if ( *(_QWORD *)(a1 + 6336) == *(_QWORD *)(a1 + 6448) )
        break;
      if ( (unsigned __int64)*(unsigned int *)(a1 + 608) >= *(_QWORD *)(a1 + 600) )
        ModWriterEntry = 0LL;
      else
        ModWriterEntry = MiAllocateModWriterEntry(a1, 16LL, 1);
      if ( ModWriterEntry )
      {
        memset(ModWriterEntry, 0, 0x108uLL);
        *ModWriterEntry = 97LL;
        ModWriterEntry[24] = a1;
      }
      else
      {
        --CurrentThread->SpecialApcDisable;
        v17 = a1 + 616;
        if ( *(_QWORD *)v17 == v17 )
        {
          *(_BYTE *)(a1 + 656) = 1;
        }
        else
        {
          ModWriterEntry = *(_QWORD **)v17;
          if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17
            || (v18 = *ModWriterEntry, *(_QWORD **)(*ModWriterEntry + 8LL) != ModWriterEntry) )
          {
            __fastfail(3u);
          }
          *(_QWORD *)v17 = v18;
          *(_QWORD *)(v18 + 8) = v17;
        }
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      if ( ModWriterEntry )
      {
        v13 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 608));
        if ( v13 > *(_DWORD *)(a1 + 612) )
          *(_DWORD *)(a1 + 612) = v13;
        ModWriterEntry[25] = 0LL;
        if ( !(unsigned int)MiGatherMappedPages(a1, v8, (__int64)ModWriterEntry) )
        {
          _InterlockedAdd((volatile signed __int32 *)(a1 + 608), 0xFFFFFFFF);
          if ( (ModWriterEntry[5] & 1) != 0 )
          {
            --CurrentThread->SpecialApcDisable;
            v19 = *(_QWORD **)(a1 + 624);
            if ( *v19 != a1 + 616 )
              __fastfail(3u);
            ModWriterEntry[1] = v19;
            *ModWriterEntry = a1 + 616;
            *v19 = ModWriterEntry;
            *(_QWORD *)(a1 + 624) = ModWriterEntry;
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          }
          else
          {
            MiFreeModWriterEntry(ModWriterEntry, 1u);
          }
        }
        goto LABEL_5;
      }
      KeWaitForGate(a1 + 632, 0x13u);
    }
    if ( !v11 )
      goto LABEL_4;
    if ( !*(_DWORD *)(a1 + 608) )
      break;
    do
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    while ( *(_DWORD *)(a1 + 608) );
  }
  MiDeleteMappedMdls(a1, v6);
  return KeSetActualBasePriorityThread((__int64)CurrentThread, v5, v14, v15);
}
