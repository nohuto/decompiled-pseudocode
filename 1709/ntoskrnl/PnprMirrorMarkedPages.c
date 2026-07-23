/*
 * XREFs of PnprMirrorMarkedPages @ 0x14042CA74
 * Callers:
 *     PnprSwap @ 0x1402004A8 (PnprSwap.c)
 *     PnprQuiesceProcessorDpc @ 0x14042CDC0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     RtlFindFirstRunClear @ 0x14000C420 (RtlFindFirstRunClear.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140064600 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 *     RtlFindNextForwardRunClear @ 0x1400C1920 (RtlFindNextForwardRunClear.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnprMirrorMarkedPages()
{
  __int64 v0; // rbp
  unsigned int v1; // r14d
  __int64 (__fastcall *v2)(_QWORD, _QWORD, unsigned __int64); // r13
  bool v3; // r12
  __int64 v4; // rcx
  __int64 v5; // rax
  _RTL_BITMAP *v6; // rdi
  ULONG i; // eax
  int v8; // eax
  __int64 v9; // rcx
  ULONG v10; // esi
  ULONG v11; // esi
  ULONG v12; // ebx
  int v13; // eax
  int v14; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  ULONG StartingIndex; // [rsp+70h] [rbp+8h] BYREF

  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  v1 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(PnprContext + 136) + 24 * v0) )
  {
    v2 = *(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(PnprContext + 20928);
    v3 = (_DWORD)v0 == *(_DWORD *)(PnprContext + 180);
    do
    {
      v4 = PnprContext;
      v5 = PnprContext + 152;
      v6 = *(_RTL_BITMAP **)(PnprContext + 152);
      while ( 2 )
      {
        if ( v6 != (_RTL_BITMAP *)v5 )
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 168), &LockHandle);
          for ( i = RtlFindFirstRunClear(v6 + 2, &StartingIndex);
                ;
                i = RtlFindNextForwardRunClear(v6 + 2, v10, &StartingIndex) )
          {
            v11 = StartingIndex;
            v12 = i;
            if ( i )
            {
              if ( i >= 0x140 )
                v12 = 320;
              RtlSetBits(v6 + 2, StartingIndex, v12);
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            if ( !v12 )
              break;
            v8 = v2(
                   *(_QWORD *)(PnprContext + 20880),
                   (*(_QWORD *)&v6[1].SizeOfBitMap + v11) << 12,
                   (unsigned __int64)v12 << 12);
            v9 = PnprContext;
            v1 = v8;
            if ( v8 < 0 )
            {
              v13 = *(_DWORD *)(PnprContext + 20984);
              if ( !v13 )
                v13 = 3551;
              *(_DWORD *)(PnprContext + 20984) = v13;
              v14 = *(_DWORD *)(v9 + 20988);
              if ( !v14 )
                v14 = 8;
              *(_DWORD *)(v9 + 20988) = v14;
              goto LABEL_24;
            }
            v10 = v12 + v11;
            StartingIndex = v10;
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(PnprContext + 168), &LockHandle);
          }
          if ( *(_DWORD *)(PnprContext + 200) != 3 )
          {
            v4 = PnprContext;
            v6 = *(_RTL_BITMAP **)&v6->SizeOfBitMap;
            v5 = PnprContext + 152;
            continue;
          }
          v3 = 1;
        }
        break;
      }
    }
    while ( !v3 );
  }
LABEL_24:
  if ( (_DWORD)v0 != *(_DWORD *)(PnprContext + 180) && *(int *)(PnprContext + 200) < 3 )
  {
    do
      _mm_pause();
    while ( *(int *)(PnprContext + 200) < 3 );
  }
  return v1;
}
