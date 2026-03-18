/*
 * XREFs of KiTryUnwaitThreadWithPriority @ 0x140062020
 * Callers:
 *     KiWakePriQueueWaiter @ 0x140021A0C (KiWakePriQueueWaiter.c)
 *     ExpQueueWorkItem @ 0x140061500 (ExpQueueWorkItem.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x1400621E0 (KiSignalThread.c)
 *     KiSetPriorityThread @ 0x14008C460 (KiSetPriorityThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010F97C (KiAbQueueAutoBoostDpc.c)
 */

__int64 __fastcall KiTryUnwaitThreadWithPriority(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // si
  unsigned __int8 v9; // al
  __int64 v10; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v12; // edx
  char v13; // al
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // edx
  struct _SINGLE_LIST_ENTRY *v18; // r8
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r9
  __int64 v20; // rcx
  int v21; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v22; // [rsp+68h] [rbp+20h]

  v22 = a4;
  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v21 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v21);
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( *(_BYTE *)(v4 + 388) == 5 )
  {
    v9 = v22;
    v10 = (unsigned __int8)*(_DWORD *)(v4 + 540);
    if ( (_DWORD)v10 != v22 )
    {
      v17 = *(_DWORD *)(v4 + 540) & 0x100;
      if ( !v17 )
      {
        v20 = *(_QWORD *)(v4 + 232);
        _InterlockedDecrement((volatile signed __int32 *)(v20 + 4 * v10 + 536));
        _InterlockedIncrement((volatile signed __int32 *)(v20 + 4LL * (int)v22 + 536));
        v9 = v22;
      }
      *(_DWORD *)(v4 + 540) = v17 | v9;
    }
    v5 = KiSignalThread(a1, v4, a3, a2);
    if ( v5 )
    {
      *(_BYTE *)(v4 + 645) = 0;
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = v22;
      if ( (char)v22 < *(char *)(v4 + 563) )
      {
        if ( *(_BYTE *)(v4 + 1423) )
        {
          v18 = (struct _SINGLE_LIST_ENTRY *)(v4 + 1384);
          if ( *(_QWORD *)(v4 + 1384) == 1LL )
          {
            p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
            if ( CurrentPrcb != (struct _KPRCB *)-25712LL )
            {
              v18->Next = p_AbSelfIoBoostsList->Next;
              p_AbSelfIoBoostsList->Next = v18;
              _InterlockedIncrement16((volatile signed __int16 *)(v4 + 1420));
              KiAbQueueAutoBoostDpc(CurrentPrcb);
              v12 = v22;
            }
          }
        }
      }
      v13 = *(_BYTE *)(v4 + 564);
      *(_BYTE *)(v4 + 563) = v12;
      if ( v13 )
      {
        if ( (v13 & 0xF) != 0 )
        {
          v12 = v22;
          *(_DWORD *)(v4 + 1424) = MEMORY[0xFFFFF78000000320];
        }
        *(_BYTE *)(v4 + 564) = 0;
      }
      if ( v12 != *(char *)(v4 + 195) )
      {
        v15 = *(_QWORD *)(v4 + 72) + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v4 + 651);
        if ( (*(_DWORD *)(v4 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v4 + 120), 5u);
        v16 = v22;
        *(_QWORD *)(v4 + 32) = v15;
        KiSetPriorityThread(v4, 0LL, v16);
      }
    }
  }
  *(_QWORD *)(v4 + 64) = 0LL;
  result = v5;
  ++*(_BYTE *)(a2 + 17);
  return result;
}
