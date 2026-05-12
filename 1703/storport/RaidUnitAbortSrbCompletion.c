/*
 * XREFs of RaidUnitAbortSrbCompletion @ 0x1C003C6D0
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00054E4 (RaUnitReleaseRemoveLock.c)
 *     RaidDriverGetName @ 0x1C0018C0C (RaidDriverGetName.c)
 *     RaidAdapterRequestComplete @ 0x1C002CF98 (RaidAdapterRequestComplete.c)
 *     StorEtwMiniportBugAbortBrokenEvent @ 0x1C00411A8 (StorEtwMiniportBugAbortBrokenEvent.c)
 */

__int64 __fastcall RaidUnitAbortSrbCompletion(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  __int64 v4; // rbp
  ULONG_PTR *v5; // rsi
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v7; // rdi
  void *v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-10h]

  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 184) - 32LL) + 64LL);
  if ( *(_BYTE *)(a3 + 2) == 40 )
    v5 = *(ULONG_PTR **)(a3 + 64);
  else
    v5 = *(ULONG_PTR **)(a3 + 24);
  BugCheckParameter4 = *v5;
  if ( *(_BYTE *)(BugCheckParameter4 + 2) == 40 )
    v7 = *(_QWORD *)(BugCheckParameter4 + 96);
  else
    v7 = *(_QWORD *)(BugCheckParameter4 + 48);
  *(_BYTE *)(v7 + 17) &= ~4u;
  if ( *(int *)(a2 + 48) < 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 776), 3, 1) != 4 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 776), 2, 1) == 4 )
  {
LABEL_9:
    RaidAdapterRequestComplete(*(_QWORD *)(v4 + 24), v7, 1);
    goto LABEL_10;
  }
  v9 = *(_QWORD *)(v4 + 24);
  v11 = 0LL;
  BugCheckParameter2 = 0LL;
  RaidDriverGetName(*(_QWORD *)(v9 + 16), (__int64)&v11);
  if ( MiniportBugActionPolicy == 1 )
  {
    StorEtwMiniportBugAbortBrokenEvent(v7, &v11);
  }
  else if ( MiniportBugActionPolicy == 2 )
  {
    KeBugCheckEx(0xF0u, 2uLL, BugCheckParameter2, a3, BugCheckParameter4);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 776), 3, 2);
LABEL_10:
  if ( *(_BYTE *)(a3 + 2) == 40 )
    v8 = *(void **)(a3 + 64);
  else
    v8 = *(void **)(a3 + 24);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x72536152u);
  ExFreePoolWithTag((PVOID)a3, 0x72536152u);
  RaUnitReleaseRemoveLock((struct _KEVENT *)v4);
  return 0LL;
}
